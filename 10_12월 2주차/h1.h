#pragma once
#include <iostream>

using namespace std;

class Circle {
private:
	int r;

public:
	Circle(int r) {
		this->r = r; // 멤버와 인수가 동일할 때
		cout << "생성자 출현!";
	}
	
	~Circle() {
		cout << "소멸자 출현!";
	}

	void showArea() {
		cout << "원의 넓이: " << (r*r*3.14) << endl;
	}
};
