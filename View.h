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

