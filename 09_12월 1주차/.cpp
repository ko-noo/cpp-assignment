#include <iostream>

using namespace std;

int main() {
	cout << "숫자 개수: ";
	int n;
	cin >> n;

	int* vec = new int[n];
	cout << "숫자 입력" << endl;

	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	int temp;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (vec[j] > vec[j + 1]) {
				temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
			}
		}
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << vec[i] << ' ';
	}
	delete[] vec;
	
}
