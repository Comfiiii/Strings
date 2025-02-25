#include "String.hpp"
#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <string>

String::String() 
{
    length = 0;
    text = new char[1]{'\0'};
}

String::String(const char* _str)
{
    length = strlen(_str);
    text = new char[length + 1];
    strcpy(text, _str);
}

String::String(const String& _other)
{
    length = _other.Length();
	text = new char[length + 1];
    strcpy(text, _other.text);
}

String::~String()
{
    delete[] text;
}

size_t String::Length() const
{
    return length;
}

String& String::Append(const String& _str) 
{
    if (_str.Length() == 0)
    {
        return *this;
    }

    int newLength = length + _str.length;
    char* newText = new char[newLength + 1];

    strcpy(newText, text);
    strcat(newText, _str.text);

    delete[] text;
    text = newText;
    length = newLength;

    return *this;
}

String& String::ToLower()
{
    for (int i = 0; i < length; i++)
    {
        text[i] = tolower(text[i]);
    }
    return *this;
}

String& String::ToUpper()
{
	for (int i = 0; i < length; i++)
	{
        text[i] = toupper(text[i]);
	}
	return *this;
}

int String::FindCharacter(const char _chr) const
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

String& String::ReadFromConsole()
{
    std::string placeholder;
    std::getline (std::cin, placeholder);
    Append(placeholder.c_str());

    return *this;
}

String& String::WriteToConsole()
{
    std::cout << text << "\n";
    return *this;
}

const String& String::WriteToConsole() const
{
	std::cout << text << "\n";
	return *this;
}


char& String::operator[](size_t _index) 
{
    if (_index > Length())
    {
        return text[length];
    }
    return text[_index];
}

const char& String::operator[](size_t _index) const
{
	if (_index > Length())
	{
		return text[length];
	}
	return text[_index];
}


bool String::operator<(const String& _other) const
{

    /*return std::strcmp(text, _other.text) < 0;*/

    std::size_t shortestlength = std::min(length, _other.length);
   

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
        return false;
}

String& String::operator=(const String& _other)
{
	if (this == &_other)
	{
		return *this;
	}
    delete[] text;
    text = new char[_other.length + 1];
    std::strncpy(text, _other.text, _other.length + 1);
    length = _other.length;

    return *this;
}


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
	std::string placeholder;
	std::getline(left, placeholder);
	right.Append(placeholder.c_str());

	return left;
}