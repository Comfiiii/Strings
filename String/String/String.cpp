#include "String.hpp"


String::String()
{
    
}

String::String(const char* _str)
{

}

String::String(const String& _other)
{

}

String::~String()
{

}

size_t String::Length() const
{
    return Length();
}

String& String::Append(const String& _str)
{

    if (length + _str.Length() <= 256)
    {
		strcat(text, _str.text);
    }
    
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

int String::FindCharacter(const char _chr)
{
    for (size_t i = 0; i < length; i++)
    {
       if (text[i] == _chr)
       {
           return (int)i;
       }
       return -1;
    }
}

int String::Replace(const char _find, const char _replace)
{
	for (size_t i = 0; i < length; i++)
	{
        if (text[i] == _find)
        {
            text[i] = _replace;
            return(int)i;
        }
        return 0;
	}
}

//String& String::ReadFromConsole()
//{
//    std::cin >> text;
//}
//
//String& String::WriteToConsole()
//{
//    std::cout << text;
//}

//char& String::operator[](size_t _index)
//{
//    
//}
//
bool String::operator<(const String& _other) const
{
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
//String& String::operator=(const String& _other) const
//{
//
//}

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
    return 0;
}
