#include <iostream>
#include "commonLib.h"
using namespace std;

int raiseToPower(int base, int exponent){
	int result = 1;
	for(int i = 0; i < exponent; i = i + 1){
		result = result * base;
	}
	return result;
}

int main(){
	int threeExpFour = raiseToPower(3, 4);
	printOnNewLine(threeExpFour);
	return 0;
}

void printOnNewLine(int x){
	cout << "3^4 is " << x << endl;
}