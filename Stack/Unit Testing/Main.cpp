#include <chrono>
#include "../checkBracketsMatch.h"

int main() {

	std::string text;
	getline(std::cin, text);

	// Get starting timepoint
	auto start = std::chrono::high_resolution_clock::now();

	using namespace checkBracketsMatch;

	Balanced balanced;
	std::string outputResultsInString = balanced.outputResults(text);
	std::cout << outputResultsInString;

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
