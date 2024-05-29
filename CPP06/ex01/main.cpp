#include "Serializer.hpp"
#include "Data.hpp"

int	main()
{
	Data* data = new Data;
	uintptr_t	serialized;
	Data*	deserialized;
	data->c = 'a';
	data->i = 42;
	data->s = "helo world";
	serialized = Serializer::serialize(data);
	deserialized = Serializer::deserialize(serialized);
	std::cout << "Data char = " << deserialized->c << "\nData int = " << deserialized->i << "\nData str = " << deserialized->s << std::endl;
	delete data;
	return 0;
}