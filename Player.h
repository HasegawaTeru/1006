#pragma once
#include <iostream>
#include <string>

class Player
{
public:
	std::string name;
	int health;
	int level;
	int gold;

	Player(std::string playerName, int playerHealth, int playerLevel)
	{
		name = playerName;
		health = playerHealth;
		level = playerLevel;
		gold = 0;
	}
};