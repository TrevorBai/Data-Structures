#pragma once
#include <string>
#include <sstream>
#include <stack>
#include <iostream>

namespace checkBracketsMatch
{
	struct Bracket
	{
		char type;
		int position;

		Bracket(char type, int position) :
			type(type),
			position(position)
		{}

		bool Matchc(char c) {
			if (type == '[' && c == ']')
				return true;
			if (type == '{' && c == '}')
				return true;
			if (type == '(' && c == ')')
				return true;
			return false;
		}
	};

	class Balanced
	{
	private:
		std::string text;
	public:
		std::string outputResults(std::string text)
		{
			std::ostringstream outputResults;
			bool doNotPrintOpeningBracket = true;
			std::stack <Bracket> openingBracketsStack;

			for (std::size_t position = 0; position < text.length(); ++position)
			{
				char next = text[position];

				if (next == '(' || next == '[' || next == '{') {
					// Process opening bracket, write your code here
					Bracket bracket(next, position);
					openingBracketsStack.push(bracket);
				}

				if (next == ')' || next == ']' || next == '}') {
					// Process closing bracket, write your code here
					if (!openingBracketsStack.empty())
					{
						Bracket bracket(openingBracketsStack.top().type, position);
						openingBracketsStack.pop();
						if (!bracket.Matchc(next))
						{
							// print position of closing bracket
							outputResults << position + 1;  // 0 index
							doNotPrintOpeningBracket = false;
							break;
						}
					}
					else
					{
						// Print position of the first char
						outputResults << position + 1;
						doNotPrintOpeningBracket = false;
						break;
					}
				}
			}
			// Printing answer, write your code here
			if (!openingBracketsStack.empty() && doNotPrintOpeningBracket)
			{
				// Print the position of the first opening bracket
				outputResults << openingBracketsStack.top().position + 2 - openingBracketsStack.size();  // 0 index
			}
			else if (!doNotPrintOpeningBracket)
			{
				// Neither print Success nor position of opening bracket
				// because already printed position of closing bracket
			}
			else
			{
				outputResults << "Success";
			}
			return outputResults.str();
		}
	};
}