#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

//Maxwell Adelman
//4/25/2023
//CIS 1202.501
//Exceptions assignment 15a
char character(char start, int offset);
int main() {

	char temp;
	try {
		temp = character('a', 1);
		cout << temp << endl;
	}
	catch (exception e) {
		cout << e.what() << endl;
	}
	

	try {
		temp = character('Z', -1);
		cout << temp << endl;
	}
	catch (exception e) {
		cout << e.what() << endl;
	}

	try {
		temp = character('Z', 3);
		cout << temp << endl;
	}
	catch (exception e) {
		cout << e.what() << endl;
	}





	return 0;





 }



char character(char start, int offset) {
	//check if start is a letter
	if (!isalpha(start)) {
		throw invalid_argument("Invalid Character Exception");

	}
	//check if offset is inherently out of bounds
	if (offset > 26) {
		throw invalid_argument("Invalid Range Exception");
	}
	
	//add offset
	char temp;
	temp = start + offset;


	if (islower(start)) {

		
		if (!isalpha(temp) || isupper(temp)) {
			throw invalid_argument("Invalid Range Exception");
		}
		else {
			return temp;
		}

	}
	if (isupper(start)) {


		if (!isalpha(temp)) {
			throw invalid_argument("Invalid Range Exception");
		}
		else {
			return temp;
		}

	}

}