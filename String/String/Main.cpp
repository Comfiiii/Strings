#include "String.hpp"
#include <iostream>
#include <iosfwd>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
	String text2("Hello World");
	String text1(text2);
	String text3("");
	String readAndWriteTest;
	String appendedWord = " How Are You?";
	char subscriptText[] = "Welcome";
	String subscriptTest = subscriptText;
	ofstream file("textfile.txt", ios::out | ios::app);
	time_t timestamp = time(NULL);
	bool isLowercaseTest = islower;
	bool isUppercaseTest = isupper;
	char character = 'o';
	char replacementCharacter = 'u';
	char _output[50];
	struct tm datetime = *localtime(&timestamp);
	int total_successes = 0;
	float percentage = 0.0;

	file << "----------------------------------\n";
	file << "Date: ";
	strftime(_output, 50, "%B %e, %Y", &datetime);
	file << _output << "\n";
	file << "Time: ";
	strftime(_output, 50, "%I:%M:%S %p", &datetime);
	file << _output << "\n";

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
		cout << "----------------------------------\n" << "Length Test Passed.\n";
		file << "----------------------------------\n" << "Length Test Passed.\n";
		total_successes++;
	}

	else
	{
		cout << "----------------------------------\n" << "Length Text Failed.\n";
		file << "----------------------------------\n" << "Length Text Failed.\n";
	}

	text1 = text2;

	cout << "----------------------------------\n";
	cout << "Appended Text:\n";
	text1.Append(appendedWord);
	cout << text1 << "\n";


	if (text1 == "Hello World How Are You?")
	{
		cout << "----------------------------------\n" << "Append Test Passed.\n";
		file << "----------------------------------\n" << "Append Test Passed.\n";
		total_successes++;
	}

	else
	{
		cout << "----------------------------------\n" << "Append Test Failed.\n";
		file << "----------------------------------\n" << "Append Test Failed.\n";
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
			cout << "----------------------------------\n" << "ToLower Test Failed.\n";
			file << "----------------------------------\n" << "ToLower Test Failed.\n";
			isText1Lower = false;
			break;
		}

	}

	if (isText1Lower == true)
	{
		cout << "----------------------------------\n" << "ToLower Test Passed.\n";
		file << "----------------------------------\n" << "ToLower Test Passed.\n";
		total_successes++;
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
			cout << "----------------------------------\n" << "ToUpper Test Failed.\n";
			file << "----------------------------------\n" << "ToUpper Test Failed.\n";
			isText1Upper = false;
			break;
		}

	}

	if (isText1Upper == true)
	{
		cout << "----------------------------------\n" << "ToUpper Test Passed.\n";
		file << "----------------------------------\n" << "ToUpper Test Passed.\n";
		total_successes++;
	}

	text1 = text2;

	int numberFound = text1.FindCharacter(character);

	std::cout << "----------------------------------\n";
	std::cout << "Find Character:\n";
	std::cout << "First character '" << character << "' is found at the index of " << numberFound << "\n";

	if (numberFound == 4)
	{
		cout << "----------------------------------\n" << "FindCharacter Test Passed.\n";
		file << "----------------------------------\n" << "FindCharacter Test Passed.\n";
		total_successes++;
	}

	else
	{
		cout << "----------------------------------\n" << "FindCharacter Test Failed.\n";
		file << "----------------------------------\n" << "FindCharacter Test Failed.\n";
	}

	text1 = text2;

	int numberOfReplaced = text1.Replace(character, replacementCharacter);
	std::cout << "----------------------------------\n";
	std::cout << "Number of replaced characters:\n";
	std::cout << numberOfReplaced << "\n";
	cout << text1 << "\n";

	if (numberOfReplaced == 2)
	{
		cout << "----------------------------------\n" << "Replace Test Passed.\n";
		file << "----------------------------------\n" << "Replace Test Passed.\n";
		total_successes++;
	}

	else
	{
		cout << "----------------------------------\n" << "Replace Test Failed.\n";
		file << "----------------------------------\n" << "Replace Test Failed.\n";
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
		std::cout << "True\n";
	}
	else
	{
		std::cout << "False\n";
	}

	if (test1 == test2)
	{
		cout << "----------------------------------\n" << "Equality Operator Test Passed.\n";
		file << "----------------------------------\n" << "Equality Operator Test Passed.\n";
		total_successes++;
	}

	else
	{
		cout << "----------------------------------\n" << "Equality Operator Test Failed.\n";
		file << "----------------------------------\n" << "Equality Operator Test Failed.\n";
	}

	text1 = text2;

	String test3 = "a";
	String test4 = "b";

	cout << "----------------------------------\n";
	cout << "LessThan Operator:\n";
	cout << "Does " << test3 << " come before " << test4 << " alphabetically:\n";
	
	if (test3 < test4)
	{
		std::cout << "True\n";
	}

	else
	{
		std::cout << "False\n";
	}

	if (test3 < test4)
	{
		cout << "----------------------------------\n" << "LessThan Operator Test Passed.\n";
		file << "----------------------------------\n" << "LessThan Operator Test Passed.\n";
		total_successes++;
	}

	else
	{
		cout << "----------------------------------\n" << "LessThan Operator Test Failed.\n";
		file << "----------------------------------\n" << "LessThan Operator Test Failed.\n";
	}

	text1 = text2;
	
	String test5("Hello");
	String test6("Goodbye");

	cout << "----------------------------------\n";
	cout << "Assignment Operator:\n";
	cout << "First Word: " << test5 << "\n";
	cout << "Second Word: " << test6 << "\n";
	cout << "Running Command...\n";
	test6 = test5;
	cout << "Now First and Second word should both be the same.\n";
	cout << "First Word: " << test5 << "\n";
	cout << "Second Word: " << test6 << "\n";

	if (test6 == test5)
	{
		cout << "----------------------------------\n" << "Assignment Operator Test Passed.\n";
		file << "----------------------------------\n" << "Assignment Operator Test Passed.\n";
		total_successes++;

	}

	else
	{
		cout << "----------------------------------\n" << "Assignment Operator Test Failed.\n";
		file << "----------------------------------\n" << "Assignment Operator Test Failed.\n";
	}

	text1 = text2;

	cout << "----------------------------------\n";
	cout << "Subscript Operator:\n";
	cout << "What is character at position n?\n";
	
	bool subScriptTest = true;
	int n = 1;



	for (int i = 0; i < subscriptTest.Length(); i++)
	{
		if (subscriptText[i] != subscriptTest[i])
		{
			file << "----------------------------------\n" << "Subscript Test Failed.\n" << "----------------------------------\n";
			subScriptTest = false;
			cout << "ERROR";
			cout << "----------------------------------\n" << "Subscript Test Failed.\n" << "----------------------------------\n";
			break;
		}

	}


	if (subScriptTest == true)

	{
		file << "----------------------------------\n" << "Subscript Test Passed.\n" << "----------------------------------\n";
		cout << subscriptText[n] << "\n";
		cout << "----------------------------------\n" << "Subscript Test Passed.\n" << "----------------------------------\n";
		total_successes++;
	}

	text1 = text2;

	percentage = total_successes; 
	percentage /= 10;
	percentage *= 100;

	file << "Success Rate: ";
	file << percentage;
	file << "%";
	file << "\n";
	
	
	return 0;
}
