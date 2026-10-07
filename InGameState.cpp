#include "InGameState.h"
#include "BattleState.h"

void InGameState::OnEnter(GameManager* manager)
{
	std::cout << "ゲーム画面" << std::endl;
}

void InGameState::OnUpdate(GameManager* manager, float deltaTime)
{
	// ゲームのロジックをここに実装
	(void)_getch();
	manager->ChangeState(std::make_unique<BattleState>());
}

void InGameState::OnExit(GameManager* manager)
{
	std::cout << "ゲーム画面を終了" << std::endl;
}

const std::string InGameState::GetName() const
{
	return "InGameState";
}