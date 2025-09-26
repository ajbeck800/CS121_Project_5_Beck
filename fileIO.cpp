#include <fstream>
#include <iostream>
#include <sstream>

int main(){
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream converter;
	int numA, numB, sum;
	std::string sNumA, sNumB;
	std::string word;
	
	inFile.open("data.csv");
	while (getline(inFile, currentLine)){
		converter.clear();
		converter.str(currentLine);
				
		getline(converter, sNumA, ',');
		getline(converter, sNumB, ',');
		getline(converter, word);
		
		converter.clear();
		converter.str("");
		converter << sNumA << " " << sNumB;
                converter >> numA >> numB;
		
		sum = numA + numB;

		for (int i = 0; i < sum; i++){
			std::cout << word << " ";
		} // end for
		std::cout << std::endl;
  } // end while
  inFile.close();
} // end main
