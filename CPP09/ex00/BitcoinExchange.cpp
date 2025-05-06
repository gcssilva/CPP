#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	createDataBase();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& be) {
	*this = be;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& be) {
	this->db = be.db;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::createDataBase() {
	std::ifstream db_file("data.csv");
	if (!db_file.is_open())
		throw std::runtime_error("Error: could not open file data.csv");
	std::string line;
	while (std::getline(db_file, line)) {
		if (line == "" || line == "date,exchange_rate")
			continue;
		std::istringstream iss(line);
		std::string date, ex_value;
		if (!(std::getline(iss, date, ',') && std::getline(iss, ex_value)))
			throw std::runtime_error("Error: invalid data file");
		float numeric_value;
		std::stringstream ss(ex_value);
		if (!(ss >> numeric_value))
			throw std::runtime_error("Error: couldn't convert exchange rate to float");
		db.insert(std::pair<std::string, float>(date, numeric_value));
	}
}

float BitcoinExchange::getValue(std::string date) {
	std::map<std::string, float>::iterator it = db.lower_bound(date);
	
	if ((it == db.end() || it->first != date) && it != db.begin())
		--it;
	return it->second;
}

void BitcoinExchange::checkHead(std::string line) {
	if (line != "date | value")
		throw std::runtime_error("Error: bad header");
}

void BitcoinExchange::processLine(std::string line) {
	std::string date;
	float value;
	char separator;
	
	std::istringstream iss(line);
	iss >> date >> separator >> value;
	if (value < 0)
		std::cerr << "Error: nor a positive number\n";
	else if (value > 1000)
		std::cerr << "Error: too large a number\n";
	else if (!checkDate(date))
		std::cerr << "Error: bad input => " << date << "\n";
	else
		std::cout << date << " => " << value << " = " << (value * getValue(date));
}

int BitcoinExchange::checkDate(std::string date) {
	int yy, mm, dd;
	char separator;

	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return 0;
	std::istringstream iss(date);
	iss >> yy >> separator >> mm >> separator >> dd;
	if (yy < 0 || mm < 0 || mm > 12 || dd < 1 || dd > 31)
		return 0;
	else if ((mm == 2 || mm == 4 || mm == 6 || mm == 7 || mm == 8 || mm == 9 || mm == 11) && dd > 30)
		return 0;
	else if (yy % 4 == 0 && mm == 2 && dd > 29)
		return 0;
	else if (yy % 4 != 0 && mm == 2 && dd > 28)
		return 0;
	return 1;
}
