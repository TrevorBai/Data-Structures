#include "stdafx.h"
#include "CppUnitTest.h"
#include "../HelloWorld/checkBracketsMatch.h"
#include <fstream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace checkBracketsMatch;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod51)
		{
			// TODO: Your test code here
			std::ifstream inputFileStream;
			// if the file doesn't exist, it will read empty string and pass in empty string
			inputFileStream.open("Tests Repository 2/51");
			Balanced balanced;
			std::string rawString;

			if (inputFileStream.is_open())
			{
				std::getline(inputFileStream, rawString);
			}
			inputFileStream.close();

			std::string outputResultsInString = balanced.outputResults(rawString);
			Assert::AreEqual("174", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod52)
		{
			// TODO: Your test code here
			std::ifstream inputFileStream;
			// if the file doesn't exist, it will read empty string and pass in empty string
			inputFileStream.open("Tests Repository 2/52");
			Balanced balanced;
			std::string rawString;

			if (inputFileStream.is_open())
			{
				std::getline(inputFileStream, rawString);
			}
			inputFileStream.close();

			std::string outputResultsInString = balanced.outputResults(rawString);
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod53)
		{
			// TODO: Your test code here
			std::ifstream inputFileStream;
			// if the file doesn't exist, it will read empty string and pass in empty string
			inputFileStream.open("Tests Repository 2/53");
			Balanced balanced;
			std::string rawString;

			if (inputFileStream.is_open())
			{
				std::getline(inputFileStream, rawString);
			}
			inputFileStream.close();

			std::string outputResultsInString = balanced.outputResults(rawString);
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod54)
		{
			// TODO: Your test code here
			std::ifstream inputFileStream;
			// if the file doesn't exist, it will read empty string and pass in empty string
			inputFileStream.open("Tests Repository 2/54");
			Balanced balanced;
			std::string rawString;

			if (inputFileStream.is_open())
			{
				std::getline(inputFileStream, rawString);
			}
			inputFileStream.close();

			std::string outputResultsInString = balanced.outputResults(rawString);
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

	};
}