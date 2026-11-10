#pragma once
#include <iostream>
#include <memory>
#include <conio.h>
#include "GameState.h"
#include "GameManager.h"
#include "TitleState.h"
#include "InGameState.h"
#include "Player.h"
#include "Enemy.h"
#include "EnemyFactory.h"
#include "View.h"

class BattleState : public GameState
{
	void OnEnter(GameManager* manager);
	void OnUpdate(GameManager* manager, float deltaTime);
	void OnExit(GameManager* manager);
	const std::string GetName() const;
};