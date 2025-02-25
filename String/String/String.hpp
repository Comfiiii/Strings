#ifndef STRING_H
#define STRING_H

#include <cstddef>
#include <iostream>


class String
{
	size_t length;
	char* text;
public:

	//initializes the default String constructor
	String();

	//initializes the _str constructor using String as a default
	String(const char* _str);

	//initializes the _other constructor using String as a default
	String(const String& _other);

	//initializes the String deconstructor
	~String();

	//returns the length of a string as an int
	size_t Length() const;

	//adds a string to the end of another string
	String& Append(const String& _str);

	//sets all characters to lowercase
	String& ToLower();

	//sets all characters to uppercase
	String& ToUpper();
	
	//finds a character and returns its location as an int
	int FindCharacter(const char _chr) const;
	
	//replaces all occurrences of a character with a replacement character and returns how many is replaces
	int Replace(const char _find, const char _replace);

	//reads an input from the console and stores the result in a string
	String& ReadFromConsole();

	//writes a string to the console window
	String& WriteToConsole();
	const String& WriteToConsole() const;

	//equality operator
	//returns true if the strings are identical
	bool operator==(const String& _other) const;
	
	//subscript operator
	//returns the character located at the position assigned to 'n'
	char& operator[](size_t _index);
	const char& operator[](size_t _index) const;

	//assignment operator
	//replaces the character in the left string with the characters in the right one
	String& operator=(const String& _other);

	//lesser than operator
	//returns true if the left string comes before the right one alphabetically
	bool operator<(const String& _other) const; 

	
	friend std::ostream& operator<<(std::ostream& left, const String& right);
	friend std::istream& operator>>(std::istream& left, String& right);

private:
};
#endif
