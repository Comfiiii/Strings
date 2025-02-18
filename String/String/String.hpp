#ifndef STRING_H
#define STRING_H

#include <cstring>
#include <cctype>
#include <iostream>
#include <cstdio>


class String
{
public:

	String();
	size_t length;
	char text[256];
	char * pch;

	String(const char* _str);

	String(const String& _other);

	~String();


	size_t Length() const;
	String& Append(const String& _str);

	String& ToLower();
	String& ToUpper();
	
	int FindCharacter(const char _chr);
	
	int Replace(const char _find, const char _replace);

	String& ReadFromConsole();
	String& WriteToConsole();

	bool operator==(const String& _other);
	
	char& operator[](size_t _index);
	const char& operator[](size_t _index) const;
	
	String& operator=(const String& _str);
	bool operator<(const String& _str);

private:
};
#endif
