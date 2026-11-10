#pragma once
#include "BattleController.h"
#include "Enemy.h"
#include "EnemyData.h"
#include "Player.h"

class Character
{
	Player& player;
	Enemy& enemy;
	BattleController& battleController;

public:

	void PlayerTakeDamage(int damage)
	{
		player.health -= damage;
		if (player.health < 0)
		{
			player.health = 0;
		}
	}

	void EnemyTakeDamage(int damage)
	{
		enemy.data.HP -= damage;
		if (enemy.data.HP < 0)
		{
			enemy.data.HP = 0;
		}
	}

	int GetPlayerHealth() const{
		return player.health;
	}

	int GetEnemyHealth() const{
		return enemy.data.HP;
	}

	int GetPlayerAttack() const{
		return 10;
	}

	int GetEnemyAttack() const{
		return enemy.data.ATK;
	}
};