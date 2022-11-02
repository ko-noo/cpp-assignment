#include<iostream>
#include "class.h"

using namespace std;

player player1; //플레이어 소환
monster mon1;

void fight() {

	player1.hp = player1.hp - mon1.setatt(10);	//setatt라는 함수에서 return값을 att로 하니까 이를 통해 att값을 야무지게 이용할 수 있다.
	mon1.hp = mon1.hp - player1.setatt(50);		
}

void Showfight() {
	cout << "플레이어의 체력은:" << player1.hp << endl;
	cout << "몬스터의 체력은:" << mon1.hp << endl;
}

int main() {
	player1.hp = 100;
	mon1.hp = 200;

	fight(); //첫 번째 싸움
	fight(); //두 번째 싸움
	fight(); //세 번째 싸움

	Showfight(); // 싸움 결과.
}
