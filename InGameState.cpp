#include "InGameState.h"

void InGameState::OnEnter(GameManager* manager)
{
	InGameStateComment();
}

void InGameState::OnUpdate(GameManager* manager, float deltaTime)
{
	// ゲームのロジックをここに実装
	(void)_getch();
	int nextState = rand() % 3;
	if (nextState == 0)
	{
		InGameStateExploringComment();
	}
	else if (nextState == 1)
	{
		InGameStateItemGetComment();
	}
	else
	{
		InGameStateEnemyEncounterComment();
		manager->ChangeState(std::make_unique<BattleState>());
	}
}

void InGameState::OnExit(GameManager* manager)
{
	InGameStateEndComment();
}

const std::string InGameState::GetName() const
{
	return "InGameState";
}