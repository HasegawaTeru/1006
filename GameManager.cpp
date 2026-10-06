#include "GameManager.h"
#include "GameState.h"
#include <utility>

GameManager::GameManager(std::unique_ptr<GameState> initialState)
	: currentState(std::move(initialState))
	, isRunning(true)
	, gameTime(0.0f)
{
	if (currentState)
	{
		currentState->OnEnter(this);
	}
}

void GameManager::ChangeState(std::unique_ptr<GameState> newState)
{
	if (currentState)
	{
		currentState->OnExit(this);
	}

	currentState = std::move(newState);

	if (currentState)
	{
		currentState->OnEnter(this);
	}
}

void GameManager::Update(float deltaTime)
{
	if (!isRunning) return;

	gameTime += deltaTime;

	if (currentState)
	{
		currentState->OnUpdate(this, deltaTime);
	}
}