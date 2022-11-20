#include <iostream>
#include "Coordinate.h"
#include "Inverse.h"

using namespace std;

int main() {
	
	int a, b;

	cout << "함수-역함수 간 거리 계산기" << endl;
	cout << "좌표를 입력하시오.: ";
	cin >> a >> b;

	pt.x = a;
	pt.y = b;

	//포인터 안쓰고 출력
	int distance_2;
	distance_2 = (pt.x - pt.y)* (pt.x - pt.y) + (pt.y - pt.x)* (pt.y - pt.x);
	cout << "거리의 제곱값은 " << distance_2 << endl;

	//포인터 쓰고 출력
	swap(pt.x, pt.y);
	distance_2 = (pt.x - a)* (pt.x - a) + (pt.y - b)* (pt.y - b);
	cout << "거리의 제곱값은 " << distance_2 << endl;
	
	// cin 0, 0 형태로 받는 법이 궁금...
}
