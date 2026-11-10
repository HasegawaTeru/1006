#pragma once
#include "Player.h"
#include "Enemy.h"
#include "GameState.h"

//------------------------------------------------------------------------------------------------------
//Å@BattleState

void BattleStateComment();
void BattleStateEndComment();
void PlayerHealthUpdateComment(Player& player);
void EnemyHealthUpdateComment(Enemy& enemy);
void EnemyDamageUpdateComment(Enemy& enemy, int damage);
void PlayerDamageUpdateComment(Player& player, int damage);
void PlayerDefenceComment();
void PlayerWinComment();
void PlayerLoseComment();
void PlayerGetGoldComment(int gold);
void PlayerGetExpComment(int exp);
void PlayerGoldComment(Player& player);
void PlayerExpComment(Player& player);
void PlayerNextActionComment();
void PlayerNextActionAfterBattleComment();

//-----------------------------------------------------------------------------------------------------