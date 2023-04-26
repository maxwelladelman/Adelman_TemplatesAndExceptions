#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

//Maxwell Adelman
//4/25/2023
//CIS 1202.501

int main() {



	double a = 7.0;
	float b = 5.0f;
	int c = 3;
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;


}



template <class T>
T half(T num) {
	T quotient = (double)(num / 2.0);
	//check if integer, if so apply rounding if 0.5 or over
	if (is_integral<T>::value && quotient >= 0.5) {
		return static_cast<T>(quotient) + 1;

	}

	return static_cast<T>(quotient);
}