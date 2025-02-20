#ifndef STRING_H
#define STRING_H

#include <cstring>
#include <cctype>
#include <iostream>
#include <cstdio>
#include <algorithm>

class String
{
public:

	size_t length;
	char text[256];

	String();

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

	bool operator==(const String& _other) const;
	
	char& operator[](size_t _index);
	
	String& operator=(const String& _other);
	bool operator<(const String& _other) const; 

private:
};
#endif
