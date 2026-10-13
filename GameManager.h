#pragma once
#include <memory>
#include "Player.h"

class GameState;

class GameManager
{
	std::unique_ptr<GameState> currentState;
	bool isRunning;
	float gameTime;

	Player player;

public:
	GameManager(std::unique_ptr<GameState> initialState);
	void ChangeState(std::unique_ptr<GameState> newState);
	void Update(float deltaTime);

	Player& GetPlayer();
};