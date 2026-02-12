#include <fstream>
#include <iostream>
#include <sstream>

int main(){
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream converter;
	std::string sNum1;
	std::string sNum2;
	int sum;
	int num1;
	int num2;
	std::string text;

	inFile.open("data.csv");
	while (getline(inFile, currentLine)){
		
                converter.clear();

		converter.str(currentLine);

		getline(converter, sNum1, ',');
		getline(converter, sNum2, ',');

		getline(converter, text);

		converter.clear();
		converter.str(sNum1);
		converter >> num1;

		converter.clear();
		converter.str(sNum2);
		converter >> num2;

		sum = num1 + num2;

		for (int i = 0; i < sum; i++){
			std::cout << text;
		} // end for
		std::cout << std::endl; 

                converter.clear();
                converter.str("");

	} // end while
	
	inFile.close();

} // end main


