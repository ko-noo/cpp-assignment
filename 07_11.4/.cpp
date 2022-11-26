#include <iostream>
#include "Buff.h"
#include "Fight.h"
#include "hp.h"

using namespace std;

int player_hp_num;
int mon_hp_num;
int player_att;
int mon_att;
void setting() {
	player_hp_num = 10;
	mon_hp_num = 10;
	player_att = 1;
}

int main() {
setting:
	setting();

	int difficulty;
	cout << "<난이도 선택>" << endl;
	cout << "easy: 1, normal: 2, hard: 3, impossible: 5" << endl;
	cout << "숫자는 몬스터의 공격력을 의미 & 난이도 설정 번호" << endl;
	cout << "난이도 입력 : ";
	cin >> difficulty;
	cout << endl;

	if (difficulty == 1 || difficulty == 2 || difficulty == 3 || difficulty == 5) {
		mon_att = difficulty;
	}
	else {
		cout << "난이도 입력 오류. 게임 종료.";
		goto END;
	}

	int input;

	while (true) {
		showhp();
		cout << endl;
		cout << "ATTACK : 1, BUFF : 2" << endl;
		cout << "ATTACK or BUFF? ";
		cin >> input;
		cout << endl;

		if (input == attack) {
			Fight();
		}
		else if (input == buff) {
			player_hp_num = player_hp_num - mon_att; // 몬스터의 공격
			Buff();
		}
		if (player_hp_num <= 0) {
			cout << "플레이어 사망" << endl;
			cout << "score: 0" << endl;
			break;
		}
		else if (mon_hp_num <= 0) {
			int score;
			score = player_hp_num;
			cout << "몬스터 사망" << endl;
			cout << "score: " << score << endl;
			break;
		}
	}
	cout << endl;
	cout << "게임 종료: 0, 한번 더하기: 1" << endl;
	cin >> input;
	if (input == 1) {
		goto setting;
	}
END:
	return(0);
}
