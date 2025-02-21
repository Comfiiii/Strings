#include "String.hpp"
#include <iostream>
using namespace std;

int main()
{
	String text2("Hello World");
	String text1(text2);
	String text3("");
	String readAndWriteTest;
	String appendedWord = " How Are You?";
	bool isLowercaseTest = islower;
	bool isUppercaseTest = isupper;

	char character = 'o';
	char replacementCharacter = 'u';

	text1 = text2;

	cout << "Test text = ";
	cout << text1 << "\n";
	cout << "Appended text =";
	appendedWord.WriteToConsole();
	cout << "Character = " << character << ".\nReplacement Character = " << replacementCharacter << ".\n";

	cout << "----------------------------------\n";
	cout << "Text's Length:\n";
	cout << "Text length is " << text1.Length() << " characters\n";

	if (text1.Length() == 11)
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Passed\n";
	}
	else
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Failed\n";
	}

	text1 = text2;

	cout << "----------------------------------\n";
	cout << "Appended Text:\n";
	text1.Append(appendedWord);
	cout << text1 << "\n";


	if (text1 == "Hello World How Are You?")
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Passed\n";
	}

	else
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Failed\n";
	}


	text1 = text2;

	std::cout << "----------------------------------\n";
	std::cout << "Text in Lowercase:\n";
	text1.ToLower();
	cout << text1 << "\n";

	bool isText1Lower = true;

	for (int i = 0; i < text1.Length(); i++)
	{
		if (isalpha(text1[i]) && !islower(text1[i]))
		{
			std::cout << "----------------------------------\n";
			std::cout << "^ Failed\n";
			isText1Lower = false;
			break;
		}

	}

	if (isText1Lower == true)
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Passed\n";
	}

	text1 = text2;

	std::cout << "----------------------------------\n";
	std::cout << "Text in Uppercase:\n";
	text1.ToUpper();
	cout << text1 << "\n";

	bool isText1Upper = true;

	for (int i = 0; i < text1.Length(); i++)
	{
		if (isalpha(text1[i]) && !isupper(text1[i]))
		{
			std::cout << "----------------------------------\n";
			std::cout << "^ Failed\n";
			isText1Lower = false;
			break;
		}

	}

	if (isText1Lower == true)
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Passed\n";
	}

	text1 = text2;

	int numberFound = text1.FindCharacter(character);

	std::cout << "----------------------------------\n";
	std::cout << "Find Character:\n";
	std::cout << "First character '" << character << "' is found at the index of " << numberFound << "\n";

	if (numberFound == 4)
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Passed\n";
	}

	else
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Failed\n";
	}
	text1 = text2;

	int numberOfReplaced = text1.Replace(character, replacementCharacter);
	std::cout << "----------------------------------\n";
	std::cout << "Number of replaced characters:\n";
	std::cout << numberOfReplaced << "\n";
	cout << text1 << "\n";

	if (numberOfReplaced == 2)
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Passed\n";
	}

	else
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Failed\n";
	}

	text1 = text3;

	cout << "----------------------------------\n";
	cout << "Read From Console and then Write To Console:\n";

	cin >> text1;
	cout << text1; cout << "\n";

	text1 = text2;

	String test1 = "Hello!";
	String test2 = "Hello!";

	cout << "----------------------------------\n";
	cout << "Equality Operator:\n";
	cout << "Is " << test1 << " the same as " << test2 << ":\n";
	if (test1 == test2)
	{
		std::cout << "True!\n";
	}
	else
	{
		std::cout << "False!\n";
	}
	if (test1 == test2)
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Passed\n";
	}

	else
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Failed\n";
	}

	text1 = text2;
	
	String test3 = "ad";
	String test4 = "b";

	cout << "----------------------------------\n";
	cout << "LessThan Operator:\n";
	cout << "Does " << test3 << " come before " << test4 << ":\n";
	cout << test3 << test4 << "\n";
	

	if (test3 < test4)
	{
		std::cout << "True!\n";
	}
	else
	{
		std::cout << "False!\n";
	}

	if (test3 < test4)
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Passed\n";
	}

	else
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Failed\n";
	}

	text1 = text2;

	return 0;

}
