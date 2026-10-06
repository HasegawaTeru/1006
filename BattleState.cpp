#include "BattleState.h"

void BattleState::OnEnter(GameManager* manager)
{
	std::cout << "バトル画面" << std::endl;
}

void BattleState::OnUpdate(GameManager* manager, float deltaTime)
{
	// バトルのロジックをここに実装
}

void BattleState::OnExit(GameManager* manager)
{
	std::cout << "バトル画面を終了" << std::endl;
}

const std::string BattleState::GetName() const
{
	return "BattleState";
}