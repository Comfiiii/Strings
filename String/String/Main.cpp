#include "String.hpp"



int main()
{

	String text1("Hello World");
	String text2(text1);
	
	text1.ToUpper();
	text1.WriteToConsole();

	text1.ToLower();
	text1.WriteToConsole();

	text1.Length();
	text1.WriteToConsole();


	return 0;
}