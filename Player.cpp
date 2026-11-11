#include "Player.h"

Player::Player(std::string playerName, int playerHealth, int playerLevel, int playerAttack)
{
	name = playerName;
	health = playerHealth;
	attack = playerAttack;
	level = playerLevel;
	gold = 0;
	exp = 0;
}

int Player::AddExp(int amount)
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

int Player::nextlevelup() const
{
	return level * 20;
}

void Player::EnemyHpDecrease(Enemy& enemy, int playerAttack)
{
	int damage = playerAttack;

    enemy.data.HP -= damage;

    if (enemy.data.HP < 0)
    {
        enemy.data.HP = 0;
    }
}

void Player::TakeDamage(int damage)
{
	health -= damage;

    if (health < 0)
    {
        health = 0;
	}
}