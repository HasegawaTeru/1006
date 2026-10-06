#pragma once
#include <iostream>
#include "GameState.h"
#include "GameManager.h"

class StartUpState : public GameState
{
	void OnEnter(GameManager* manager);
	void OnUpdate(GameManager* manager, float deltaTime);
	void OnExit(GameManager* manager);
	const std::string GetName() const;
};