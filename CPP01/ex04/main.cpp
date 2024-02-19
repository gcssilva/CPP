#include <fstream>
#include <iostream>
#include <string>

int	replaceString(std::string file, std::string s1, std::string s2)
{
	int	i = 0;
	size_t	pos;
	std::string	line;
	std::string	temp;
	std::fstream	inFile;
	std::fstream	outFile;

	inFile.open(file.c_str(), std::ios::in);
	if (!inFile) {
		std::cout << "Unable to open " << file << std::endl;
		return 1;
	}
	outFile.open(file + ".replace", std::ios::out);
	if (!outFile) {
		std::cout << "Unable to open " << file << ".replace" << std::endl;
		return 1;
	}
	while (getline(inFile, line)) {
		while (i < line.size()) {
			pos = line.find(s1, i);
			if (pos == std::string::npos)
				break ;
			temp = line.substr(pos + s1.size());
			line.erase(pos);
			line += (s2 + temp);
			i = pos + s1.size();
		}
		i = 0;
		outFile << line;
		if (!inFile.eof())
			outFile << std::endl;
	}
	inFile.close();
	outFile.close();
	return 0;
}

int	main(int argc, char** argv)
{
	if (argc != 4) {
		std::cout << "Wrong arguments" << std::endl;
		return 1;
	}
	return replaceString(argv[1], argv[2], argv[3]);
}
