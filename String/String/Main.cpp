#include "String.hpp"



int main()
{
	String text2("Hello World");
	String text1(text2);
	String readAndWriteTest;
	String appendedWord = " How Are You?";
	bool isLowercaseTest = islower;
	bool isUppercaseTest = isupper;
	
	char character = 'o';
	char replacementCharacter = 'u';

	text1 = text2;

	std::cout << "Test text = ";
	text1.WriteToConsole();
	std::cout << "Character = " << character << ". And Replacement Character = " << replacementCharacter << ".\n";

	std::cout << "----------------------------------\n";
	std::cout << "Text's Length:\n";
	std::cout << "Text length is " << text1.Length() << " characters\n";

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

	std::cout << "----------------------------------\n";
	std::cout << "Appended Text:\n";
	text1.Append(appendedWord);
	text1.WriteToConsole();


	if (text1  == "Hello World How Are You?")
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
	text1.WriteToConsole();

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
	text1.WriteToConsole();

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

	std::cout << "----------------------------------\n";
	std::cout << "Find Character:\n";
	std::cout << "First character '" << character << "' is located number " << text1.FindCharacter(character) << " in the word\n";

	bool foundCharacter = true;

	for (size_t i = 0; i < text1.Length(); i++)
	{
		if (!character==(text1[i]))
		{
			std::cout << "----------------------------------\n";
			std::cout << "^ Failed\n";
			foundCharacter = false;
			break;
		}

	}

	if (foundCharacter = true)
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Passed\n";
	}

	text1 = text2;

	std::cout << "----------------------------------\n";
	std::cout << "Replace Character:\n";
	text1.Replace(character, replacementCharacter);
	text1.WriteToConsole();

	bool replacedCharacter = true;

	for (size_t i = 0; i < text1.Length(); i++)
	{
		if (!replacementCharacter == (text1[i]))
		{
			std::cout << "----------------------------------\n";
			std::cout << "^ Failed\n";
			replacedCharacter = false;
			break;
		}

	}

	if (replacedCharacter = true)
	{
		std::cout << "----------------------------------\n";
		std::cout << "^ Passed\n";
	}
	text1 = text2;
 
	std::cout << "----------------------------------\n";
	std::cout << "Read From Console and then Write To Console:\n";
	readAndWriteTest.ReadFromConsole();
	readAndWriteTest.WriteToConsole();
	 
	if ()
	{
	}

	text1 = text2;

	std::cout << "----------------------------------\n";
	std::cout << "Equality Operator:\n";
	

	return 0;
}