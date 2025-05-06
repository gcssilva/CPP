#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cerr << "Error: could not open file" << std::endl;
		return;
	}
	if (!std::string(argv[1]).find(".csv\0")) {
		std::cerr << "Error: could not open file" << std::endl;
		return;
	}
	try
	{
		std::ifstream file(argv[1]);
		if (!file.is_open()) {
			std::cerr << "Error: could not open file" << std::endl;
			return;
		}
		BitcoinExchange btc_exc;
		std::string line;
		std::getline(file, line);
		btc_exc.checkHead(line);
		while (std::getline(file, line)) {
			btc_exc.processLine(line);
		}
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
