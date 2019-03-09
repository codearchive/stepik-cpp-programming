char *resize(const char *str, unsigned size, unsigned new_size)
{
	char* m = new char[new_size];
	for (int i = 0; i < (size < new_size ? size : new_size); ++i)
	{
		m[i] = str[i];
	}
	delete[] str;
	return m;
}