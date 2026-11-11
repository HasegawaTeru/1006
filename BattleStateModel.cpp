#include "BattleStateModel.h"

//　プレイヤーのHPをリセットする関数
void PlayerHpReset(Player& player)
{
	player.health = 30;
}

//　敵をランダムに選択する関数
int RandomEnemySelection()
{
	return (rand() % 4) + 1;
}