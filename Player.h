#pragma once
#include <iostream>
#include <string>
#include "Enemy.h"

class Player
{
public:
	const int PLAYER_HP_MAX = 30;

	std::string name;
	int health;
	int attack;
	int level;
	int gold;
	int exp;

	Player(std::string playerName, int playerHealth, int playerLevel, int playerAttack);

	int AddExp(int amount);

	int nextlevelup() const;

	void EnemyHpDecrease(Enemy& enemy, int playerAttack);

	void TakeDamage(int damage);
};