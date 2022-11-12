#include <iostream>

using namespace std;

int main() {

	int arr[5][5];
	int i = 0;
	int j = 0;

	while (i < 5) {
		j = 0;

		while (j < 5) {
			arr[i][j] = i * j;
			cout << arr[i][j] << " ";
			j++;
		}
		cout << endl;
		i++;
	}
}
