#include "String.hpp"


String::String()
{
    text = new char[1]
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
    pch = (char*) memchr (text, 'o', strlen(text));
    if (pch != NULL) 
    {
        std::cout << ("'o' found at position %d.\n", pch - text + 1);
        return pch - text + 1;
    }
    else
    {
        return -1;
    return 0;
    }
}

//int String::Replace(const char _find, const char _replace)
//{
//
//}
//
//String& String::ReadFromConsole()
//{
//
//}
//
//String& String::WriteToConsole()
//{
//
//}
//
//char& String::operator[](size_t _index)
//{
//    
//}
//
////bool String::operator<()
////{
////
////}
//
//String& String::operator=(const String& _str)
//{
//
//}
//
//bool String::operator==(const String& _other)
//{
//
//}
