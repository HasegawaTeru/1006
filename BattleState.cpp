#include "BattleState.h"
#include "TitleState.h"
#include "InGameState.h"

void BattleState::OnEnter(GameManager* manager)
{
	std::cout << "<<<バトル画面>>>" << std::endl;
}

void BattleState::OnUpdate(GameManager* manager, float deltaTime)
{
	std::cout << "１キー：マップに戻る　　　２：タイトルに戻る" << std::endl << std::endl;
	int key = _getch();
	if (key == '1')
	{
		manager->ChangeState(std::make_unique<InGameState>());
	}
	else if (key == '2')
	{
		manager->ChangeState(std::make_unique<TitleState>());
	}
}

void BattleState::OnExit(GameManager* manager)
{
	std::cout << "バトル画面を終了" << std::endl << std::endl;
}

const std::string BattleState::GetName() const
{
	return "BattleState";
}