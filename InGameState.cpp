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
	int nextState = rand() % 3;
	if (nextState == 0)
	{
		std::cout << "マップを探索中..." << std::endl << std::endl;
	}
	else if (nextState == 1)
	{
		std::cout << "アイテムゲット！" << std::endl << std::endl;
	}
	else
	{
		std::cout << "敵と目と目が合った" << std::endl << std::endl;
		manager->ChangeState(std::make_unique<BattleState>());
	}
}

void InGameState::OnExit(GameManager* manager)
{
	std::cout << "ゲーム画面を終了" << std::endl;
}

const std::string InGameState::GetName() const
{
	return "InGameState";
}