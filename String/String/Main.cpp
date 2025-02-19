#include "String.hpp"



int main()
{

	String text1("Hello World");
	String text2(text1);

	std::cout << "Text in Uppercase:\n";
	text1.ToUpper();
	text1.WriteToConsole();

	std::cout << "----------------------------------\n";
	std::cout << "Text in Lowercase:\n";
	text1.ToLower();
	text1.WriteToConsole();

	std::cout << "----------------------------------\n";
	std::cout << "Text's Length:\n";
	std::cout << "Text length is " << text1.Length() << " characters\n";

	std::cout << "----------------------------------\n";
	std::cout << "Appended Text:\n";
	std::cout << "Appended text looks like: " << text1.Append(" How Are You?");

	return 0;
}