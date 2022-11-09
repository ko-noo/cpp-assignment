#include <iostream>
#include "h1.h"
using namespace std;

TV myTV;

int main() {
	int invol, incha;
	int out1, out2;

	cout << "볼륨을 입력하세요." << endl;
	cin >> invol;
	out1 = myTV.setvol(invol);

	cout << "채널을 입력하세요." << endl;
	cin >> incha;
	out2 = myTV.setcha(incha);

	if (out1 != -1) {
		cout << "볼륨: " << out1 << endl;
	}
	else cout << "볼륨: 오류" << endl;

	if (out2 != -1) {
		cout << "채널: " << out2 << endl;
	}
	else cout << "채널: 오류" << endl;
}
