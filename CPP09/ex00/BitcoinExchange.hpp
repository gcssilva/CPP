#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <iostream>
# include <fstream>
# include <sstream>

class BitcoinExchange
{
private:

	std::map<std::string, float> db;

public:

	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& be);
	BitcoinExchange& operator=(const BitcoinExchange& be);
	~BitcoinExchange();

	void createDataBase();
	float getValue(std::string date);
	void checkHead(std::string line);
	void processLine(std::string line);
	int checkDate(std::string date);

};

#endif