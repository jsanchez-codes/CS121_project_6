#include <fstream>
#include <iostream>
#include <sstream>

int main(){
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream converter;
	std::stringstream num1;
	std::stringstream num2;
	int counter;
	std::string sCounter;
	std::string text;

	inFile.open("data.csv");
	while (getline(inFile, currentLine)){

		ss.clear();
		ss.str("");
		converter.clear();
		converter.str("")
		
		ss.str(currentLine);

		getline(num1, sCounter, ',');
		getline(num2, sCounter, ',');

		getline(num1, text);
		getline(num2, text);

		converter << sNum1 << " " << sNum2;

		converter >> num1 >> num2;

		add num1 and num2

		for (){

		} // end for

	return 0;

} // end main



