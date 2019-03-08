unsigned strlenght(const char *str)
{
	unsigned int i = 0;
	while (*str) {
		++i;
		str++;
	}
	return i;
}

int strstring(const char *text, const char *pattern)
{
	const char * p = &text[0];
	const char * q = &pattern[0];
	if (*q == '\0') return 0;
	for (int i = 0; i < strlenght(text); ++i) {
		while (*p == *q) {
			++p;
			++q;
			if (*q == '\0') return i;
		}
		p = &text[i + 1];
		q = &pattern[0];
	}
	return -1;
}