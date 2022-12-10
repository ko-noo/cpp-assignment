#pragma once
#include <iostream>

using namespace std;

class Circle {
private:
	int r;
	float S;
public:
	Circle(int r) {
		this->r = r; // 멤버와 인수가 동일할 때
		S = 3.14 * r * r;
		cout << "생성자 출현!" << "\n";
	}
	
	~Circle() {
		cout << "소멸자 출현!" << "\n";
	}

	void showArea() {
		
		cout << "원의 넓이: " << S << endl;
	}
};
