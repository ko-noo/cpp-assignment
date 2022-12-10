#include <iostream>
#include "h1.h"
using namespace std;

int main() {
	int input;

	cout << "반지름: ";
	cin >> input;
	Circle C1(input);
	
	C1.showArea();

}
