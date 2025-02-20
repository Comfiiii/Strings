#include "String.hpp"

//initializes the default String constructor
String::String() 
{
    length = 1;
    text[0] = '\0';
}

//initializes the _str constructor using String as a default
String::String(const char* _str)
{
    length = strlen(_str);
    strcpy(text, _str);
}

//initializes the _other constructor using String as a default
String::String(const String& _other)
{
    length = _other.Length();
    strcpy(text, _other.text);
}

//initializes the String deconstructor
String::~String()
{
    
}

//returns the length of a string as an int
size_t String::Length() const
{
    return length;
}

//adds a string to the end of another string
String& String::Append(const String& _str) 
{

    if (length + _str.Length() <= 256)
    {
		strcat(text, _str.text);
    }
    this->length = length + _str.length;
    
    return *this;
}

//sets all characters to lowercase
String& String::ToLower()
{
    for (int i = 0; i < length; i++)
    {
        text[i] = tolower(text[i]);
    }
    return *this;
}

//sets all characters to uppercase
String& String::ToUpper()
{
	for (int i = 0; i < length; i++)
	{
        text[i] = toupper(text[i]);
	}
	return *this;
}

//finds a character and returns its location as an int
int String::FindCharacter(const char _chr)
{
    for (size_t i = 0; i < length; i++)
    {
       if (text[i] == _chr)
       {
           return (int)i;
       }
       
    }
    return -1;
}

//replaces all occurrences of a character with a replacement character and returns how many is replaces
int String::Replace(const char _find, const char _replace)
{
    int count = 0;
	for (size_t i = 0; i < length; i++)
	{
        if (text[i] == _find)
        {
            text[i] = _replace;
            ++count;
        }
	}
    return(int)count;
}

//reads an input from the console and stores the result in a string
String& String::ReadFromConsole()
{
    std::cin >> text;
    return *this;
}

//writes a string to the console window
String& String::WriteToConsole()
{
    std::cout << text << "\n";
    return *this;
}

//subscript operator
//returns the character located at the position assigned to 'n'
char& String::operator[](size_t _index) 
{
	for (size_t n = 0; n < length; n++)
	{
        if (n == _index)
		{
            return(text[n]);
		}
	}
    return text[length];
        
}

//lesser than operator
//returns true if the left string comes before the right one alphabetically
bool String::operator<(const String& _other) const
{

    return std::strcmp(text, _other.text) < 0;

    /*std::size_t shortestlength = std::min(length, _other.length);
   

        for (std::size_t i = 0; i < shortestlength; ++i)
        {
            char leftC = text[i];
            char rightC = _other.text[i];
            if (leftC < rightC)
            {
                return true;
            }
			if (leftC > rightC)
			{
				return false;
			}
        }

        if (length < _other.length)
        {
            return true;
        }
        return false;*/
}

//assignment operator
//replaces the character in the left string with the characters in the right one
String& String::operator=(const String& _other)
{
	/*if (this == &_other)
	{
		return *this;
	}*/

    std::strncpy(text, _other.text, _other.length + 1);
    length = _other.length;

    return *this;
}

//equality operator
//returns true if the strings are identical
bool String::operator==(const String& _other) const
{
    if (length != _other.length)
    {
        return false;
    }

    for (std::size_t i = 0; i < length; ++i)
    {
        if (text[i] != _other.text[i])
        {
            return false;
        }
    }
    return true;
}

std::ostream& operator<<(std::ostream& left, const String& right)
{
    if (right.Length() > 0)
    {
        left << right.text;
    }
    return left;
}

std::istream& operator>>(std::istream& left, String& right)
{
	std::cin >> right;
	return left;
}