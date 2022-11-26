#pragma once
#include <iostream>
using namespace std;

extern int player_hp_num;
extern int mon_hp_num;

void showhp() {
	cout << "[HP of player]" << endl;
	for (int i = player_hp_num; i > 0; i--) {
		cout << "0 ";
	}
	cout << endl;

	cout << "[HP of monster]" << endl;
	for (int i = mon_hp_num; i > 0; i--) {
		cout << "0 ";
	}
	cout << endl;
}
