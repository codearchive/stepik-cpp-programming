#include <iostream>

char *resize(const char *str, unsigned size)
{
	char* new_str = new char[2 * size];
	new_str[2 * size] = '\0';
	for (size_t i = 0; i < size; ++i)
	{
		*(new_str + i) = *(str + i);
	}
	return new_str;
}


char *getline()
{
	size_t size_current = 100000;
	char * array = new char[size_current];
	char c = '\0';
	array[size_current] = c;
	size_t counter = 0;
	while (std::cin.get(c))
	{
		if (c == '\n' || c == '\0')
		{
			return array;
		}
		else
		{
			if (counter == size_current)
			{
				resize(array, size_current);
				size_current *= 2;
			}
			array[counter] = c;
		}
		++counter;
	}
	array[counter] = '\n';
	return array;
}