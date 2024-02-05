#include <iostream>

int	main(int argc, char **argv)
{
	if (argc > 1){
		for (int i=1; i < argc; ++i){
			for (int j=0; argv[i][j] != 0; ++j){
				std::cout << (char)toupper(argv[i][j]);
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
	return 0;
}