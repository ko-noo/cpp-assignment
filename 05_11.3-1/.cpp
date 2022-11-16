#include <iostream>
#include "head.h"

using namespace std;

int main() {
	cout << "<UP&DOWN GAME>" << endl;
	cout << "기회는 5번, 숫자 범위: 1~99" << endl;

	int input;

	for (int i = 4; i >=0; i--) {
		cout << "답안 입력: ";
		cin >> input;
		cout << endl;

		if (input > ans) {
			cout << "DOWN!!" << endl << endl;
		}
		else if (input < ans) {
			cout << "UP!!" << endl << endl;
		}
		else if (input == ans) {
			cout << "정답!!!!!!!!!!!!!!!!!!!!!!" << endl;
			break;
		}
		cout << "남은 기회는 " << i << "번" << endl;
	}
	cout << "정답은 " << ans << "였습니다!";
}
