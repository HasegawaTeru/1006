#pragma once
#include "Player.h"
#include "Enemy.h"
#include "GameState.h"

//　プレイヤーのHPを表示する関数
void PlayerHealthUpdate(Player& player)
{
	std::cout << player.name << "HP：" << player.health << std::endl << std::endl;
}

// 敵のHPを表示する関数
void EnemyHealthUpdate(Enemy& enemy)
{
	std::cout << enemy.data.name << "HP：" << enemy.data.HP << std::endl << std::endl;
}

//　敵に与えたダメージを表示する関数
void EnemyDamageUpdate(Enemy& enemy, int damage)
{
	std::cout << enemy.data.name << "に" << damage << "ダメージ与えた！" << std::endl << std::endl;
}

//　プレイヤーに与えたダメージを表示する関数
void PlayerDamageUpdate(Player& player, int damage)
{
	std::cout << player.name << "に" << damage << "ダメージ受けた！" << std::endl << std::endl;
}