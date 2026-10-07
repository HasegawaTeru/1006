#include "TitleState.h"
#include "InGameState.h"

void TitleState::OnEnter(GameManager* manager)
{
	std::cout << "<<<タイトル画面>>>" << std::endl << std::endl;
	std::cout << "１：ゲームスタート　　　２：ゲーム終了" << std::endl << std::endl;
}

void TitleState::OnUpdate(GameManager* manager, float deltaTime)
{
	int key = _getch();
	if (key == '1')
	{
		std::cout << "ゲームスタート" << std::endl;
		manager->ChangeState(std::make_unique<InGameState>());
	}
	else if (key == '2')
	{
		std::cout << "ゲーム終了" << std::endl;
		exit(0);
	}
}

void TitleState::OnExit(GameManager* manager)
{
	std::cout << "タイトル画面を終了" << std::endl << std::endl;
}

const std::string TitleState::GetName() const
{
	return "TitleState";
}