unsigned strlength(const char *str)
{
	const char * s = &str[0];
	unsigned int i = 0;
	while (*s != '\0')
	{
		++i;
		s = &str[i];
	}
	return i;
}