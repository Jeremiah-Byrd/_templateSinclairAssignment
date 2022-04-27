// Jeremiah Byrd 
// CIS 1202 101
// April 26, 2022
#include<iostream>
#include<iomanip>
#include<tgmath.h>

using namespace std;

//Prototypes 
template<class T>
T half(T);

int main() {
	//Variables 
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	//Testing the template class
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

}

template<class T>
T half(T variable) {

	//Checking if the variable is a integer
	if (variable == (int)variable) {
		return round(variable / 2);
	}
	else
	{
		return variable / 2;
	}
}