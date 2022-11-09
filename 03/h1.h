#pragma once
#include <iostream>

class TV {
private:
	int channel;
	int volume;
public:
	int setcha(int x) {
		if (x >= 1 && x <= 999) {
			channel = x;
			return channel;
		}
		else std::cout << "채널 입력오류" << std::endl << std::endl;
		return -1;
	}

	int setvol(int x) {
		if ( x >= 0 && x<= 100 ) {
			volume = x;
			return volume;
		}
		else std::cout << "볼륨 입력오류" << std::endl << std::endl;
		return -1;
	}
};
