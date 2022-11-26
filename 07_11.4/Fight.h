#pragma once
enum choose
{
	attack = 1,
	buff
};

extern int player_hp_num;
extern int mon_hp_num;
extern int player_att;
extern int mon_att;

void Fight() {
	player_hp_num = player_hp_num - mon_att;
	mon_hp_num = mon_hp_num - player_att;
}
