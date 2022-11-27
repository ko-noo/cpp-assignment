#pragma once
#include<iostream>
#include<random>

extern int player_hp_num;
extern int mon_hp_num;
extern int player_att;
extern int mon_att;
int r;
using namespace std;

void random() {
	std::random_device randomnum;
	std::mt19937 mt(randomnum());
	std::uniform_int_distribution<int> range(1, 3);

	r = range(randomnum);
}
void Buff() {
	random();

	switch (r)
	{
	case 1: // 공격력 증가
		cout << "공격력 증가!" << endl;
		random();
		player_att = player_att + r;
		cout << "att of player is " << player_att << endl;
		break;

	case 2: // 체력 회복
		cout << "체력 회복!" << endl;
		random();
		cout << r << "만큼 체력 회복!" << endl;
		player_hp_num = player_hp_num + r;
		if (player_hp_num > 10) {
			player_hp_num = 10;
		}
		break;

	case 3: // 체력 감소
		cout << "체력 감소!" << endl;
		random();
		cout << r << "만큼 체력 감소!" << endl;
		player_hp_num = player_hp_num - r;
		break;

	default:
		cout << "난수 오류 발생" << endl;
		break;
	}
}
