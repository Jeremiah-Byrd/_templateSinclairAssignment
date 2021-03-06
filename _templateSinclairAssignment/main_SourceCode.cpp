// Jeremiah Byrd 
// CIS 1202 101
// April 26, 2022
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

template<typename T>
T half(T variable) {
	//Returning a halfed variable
	return (variable / 2);
}


int half(int variable) {
	//Returning a rounded halfed variable
	return (round(variable / 2.0));
}

int main() {
	//Variables 
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	//Testing the template class
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	//End Program prompt
	cout << "\nTo end program press enter...";
	cin.ignore();
	cin.get();
}

