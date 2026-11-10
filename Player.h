#pragma once
#include <iostream>
#include <string>

class Player
{
public:
	std::string name;
	int health;
	int attack;
	int level;
	int gold;
	int exp;

	Player(std::string playerName, int playerHealth, int playerLevel, int playerAttack)
	{
		name = playerName;
		health = playerHealth;
		attack = playerAttack;
		level = playerLevel;
		gold = 0;
		exp = 0;
	}

	int AddExp(int amount)
	{
		exp += amount;

		int levelupCount = 0;

		while (exp > level * 20)
		{
			exp -= level * 20;
			level++;
			levelupCount++;
		}

		return levelupCount;
	}

	int nextlevelup() const
	{
		return level * 20;
	}
};