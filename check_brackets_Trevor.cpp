#include <iostream>
#include <stack>
#include <string>
#include <chrono>

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

int main() {

	std::string text;
	getline(std::cin, text);
	
	// Get starting timepoint
	auto start = std::chrono::high_resolution_clock::now();

	bool doNotPrintOpeningBracket = true;
	std::stack <Bracket> openingBracketsStack;

	for (int position = 0; position < text.length(); ++position) 
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
					std::cout << position + 1;  // 0 index
					doNotPrintOpeningBracket = false;
					break;
				}
			}
			else
			{
				// Print position of the first char
				std::cout << position + 1;
				doNotPrintOpeningBracket = false;
			}
		}
	}
	// Printing answer, write your code here
	if (!openingBracketsStack.empty() && doNotPrintOpeningBracket)
	{
		// Print the position of the first opening bracket
		std::cout << openingBracketsStack.top().position + 2 - openingBracketsStack.size();  // 0 index
	}
	else if (!doNotPrintOpeningBracket)
	{
		// Neither print Success nor position of opening bracket
		// because already printed position of closing bracket
	}
	else
	{
		std::cout << "Success";
	}

	// Get ending timepoint
	auto stop = std::chrono::high_resolution_clock::now();

	// Get duration. Substart timepoints to  
	// get durarion. To cast it to proper unit 
	// use duration cast method 
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	std::cout << std::endl << "Time taken by MAIN: "
		<< duration.count() << " microseconds" << std::endl;

	std::cin.get();
	return 0;
}
