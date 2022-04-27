// Jeremiah Byrd 
// CIS 1202 101
// April 26, 2022
#include<iostream>
#include<iomanip>
#include<template>
using namespace std;

//Prototypes 

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

}