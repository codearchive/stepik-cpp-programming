#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

using namespace std;

struct String {
	String(const char *str = "")
		: size(strlen(str))
		, str(strcpy(new char[this->size + 1], str))
	{}

	String(size_t n, char c)
		:size(n)
		, str((char *)memset(new char[n + 1], c, n))
	{}

	~String() {
		delete[] str;
	}

	size_t size;
	char *str;

	void append(String &other) {
		int n = this->size + other.size;
		char * temp = new char[n + 1];
		strcpy(temp, this->str);
		char * begginOfTemp = &temp[0];
		char * firstLetter = &other.str[0];
		while (*temp == this->str[0]) temp++;
		while (*other.str == *firstLetter)
		{
			*temp = *other.str;
			temp++;
			other.str++;
		}
		temp[n] = '\0';
		delete[] this->str;
		this->str = begginOfTemp;
		this->size = strlen(this->str);
	}
};

int main()
{
	String str_1(3, 'a');
	cout << "1st string: " << str_1.str << endl;
	cout << "Size of 1st string: " << str_1.size << endl;
	
	String str_2(2, 'b');
	cout << "2nd string: " << str_2.str << endl;
	cout << "Size of 2nd string: " << str_2.size << endl;

	str_1.append(str_2);
	cout << "Size of result string: " << str_1.size << endl;
	cout << "Result string: " << str_1.str << endl;

	return 0;
}