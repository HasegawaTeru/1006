#pragma once
#include "Player.h"
#include "Enemy.h"
#include "GameState.h"

//　現在の

//　プレイヤーのHPを表示する関数
void PlayerHealthUpdateComment(Player& player)
{
	std::cout << player.name << "HP：" << player.health << std::endl << std::endl;
}

// 敵のHPを表示する関数
void EnemyHealthUpdateComment(Enemy& enemy)
{
	std::cout << enemy.data.name << "HP：" << enemy.data.HP << std::endl << std::endl;
}

//　敵に与えたダメージを表示する関数
void EnemyDamageUpdateComment(Enemy& enemy, int damage)
{
	std::cout << enemy.data.name << "に" << damage << "ダメージ与えた！" << std::endl << std::endl;
}

//　プレイヤーに与えたダメージを表示する関数
void PlayerDamageUpdateComment(Player& player, int damage)
{
	std::cout << player.name << "に" << damage << "ダメージ受けた！" << std::endl << std::endl;
}

//　プレイヤーが守りの姿勢をとったことを表示する関数
void PlayerDefenceComment()
{
	std::cout << "守りの姿勢をとった！" << std::endl << std::endl;
}

//　プレイヤーが勝利したことを表示する関数
void PlayerWinComment()
{
	std::cout << "勝利！" << std::endl;
}

//　プレイヤーが敗北したことを表示する関数
void PlayerLoseComment()
{
	std::cout << "敗北..." << std::endl;
}