/*
 * Main.cpp
 *
 *  Created on: Mar 3, 2020
 *      Author: Agha
 */

#include<iostream>
#include<vector>

using std::cout;
using std::endl;

template <typename Type>
Type max(Type a, Type b) {
    return (a > b) ? a : b;
}

class Just_a_double {
public:
    double num;
};

int main() {
	// TODO Auto-generated constructor stub
	std::cout<<"Hello, world!"<<std::endl;
	std::cout<<"Greetings from Illinois!"<<std::endl;
	return 0;
}

