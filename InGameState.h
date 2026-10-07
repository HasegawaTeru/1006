#pragma once
#include <iostream>
#include <conio.h>
#include "GameState.h"
#include "GameManager.h"

class InGameState : public GameState
{
public:
	void OnEnter(GameManager* manager);
	void OnUpdate(GameManager* manager, float deltaTime);
	void OnExit(GameManager* manager);
	const std::string GetName() const;
};