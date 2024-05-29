#include "Serializer.hpp"
#include "Data.hpp"

int	main()
{
	Data* data = new Data;
	Data*	deserialized;
	data->c = 'a';
	data->i = 42;
	data->s = "helo world";
	deserialized = Serializer::deserialize(Serializer::serialize(data));
	std::cout << "Data char = " << deserialized->c << "\nData int = " << deserialized->i << "\nData str = " << deserialized->s << std::endl;
	delete data;
	return 0;
}