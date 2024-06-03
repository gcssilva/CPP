#include "Array.hpp"

typedef struct test_s
{
	int			i;
	char		c;
	std::string	s;
}	test_t;

test_t	new_test_arr(int i, char c, std::string s)
{
	test_t	temp;

	temp.i = i;
	temp.c = c;
	temp.s = s;

	return temp;
}

int	main()
{
	std::cout << "Int array:" << std::endl;
	Array<int>	int_arr;
	std::cout << "Array len = " << int_arr.get_len() << std::endl;
	// std::cout << int_arr[0] << std::endl;

	std::cout << std::endl;

	std::cout << "String array:" << std::endl;
	Array<std::string>	str_arr(3);
	str_arr[0] = "01";
	str_arr[1] = "02";
	str_arr[2] = "03";
	std::cout << "Array len = " << str_arr.get_len() << std::endl;
	std::cout << str_arr[0] << std::endl;
	std::cout << str_arr[1] << std::endl;
	std::cout << str_arr[2] << std::endl;

	std::cout << std::endl;

	std::cout << "Test struct array:" << std::endl;
	Array<test_t>	test_arr(3);
	test_arr[0] = new_test_arr(1, 'a', "primeiro");
	test_arr[1] = new_test_arr(2, 'b', "segundo");
	test_arr[2] = new_test_arr(3, 'c', "terceiro");
	std::cout << "Array len = " << test_arr.get_len() << std::endl;
	std::cout << test_arr[0].i << ", " << test_arr[0].c << ", " << test_arr[0].s << std::endl;
	std::cout << test_arr[1].i << ", " << test_arr[1].c << ", " << test_arr[1].s << std::endl;
	std::cout << test_arr[2].i << ", " << test_arr[2].c << ", " << test_arr[2].s << std::endl;

	std::cout << std::endl;

	std::cout << "Copy tests:" << std::endl;
	Array<int>	int_cpy = int_arr;
	std::cout << "Int copy len = " << int_cpy.get_len() << std::endl;
	// std::cout << int_cpy[0] << std::endl;
	Array<std::string>	str_cpy = str_arr;
	std::cout << "Str copy len = " << str_cpy.get_len() << std::endl;
	std::cout << str_cpy[0] << std::endl;
	std::cout << str_cpy[1] << std::endl;
	std::cout << str_cpy[2] << std::endl;
	Array<test_t>	test_cpy = test_arr;
	std::cout << "Test copy len = " << test_cpy.get_len() << std::endl;
	std::cout << test_cpy[0].i << ", " << test_cpy[0].c << ", " << test_cpy[0].s << std::endl;
	std::cout << test_cpy[1].i << ", " << test_cpy[1].c << ", " << test_cpy[1].s << std::endl;
	std::cout << test_cpy[2].i << ", " << test_cpy[2].c << ", " << test_cpy[2].s << std::endl;

	return 0;
}
