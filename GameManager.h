#pragma once
#include <iostream>
#include <memory>
#include "GameState.h"

class GameState;
class GameManager
{
	std::unique_ptr<GameState> currentState;
	bool isRunning;
	float gameTime;

public:

	GameManager() : isRunning(true), gameTime(0.0f) {}
	void ChangeState(std::unique_ptr<GameState> newState);
	void Update(float deltaTime);
};