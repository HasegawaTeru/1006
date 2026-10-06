#include "MainMenuState.h"
#include "InGameState.h"

void MainMenuState::OnEnter(GameManager* manager)
{
	std::cout << "<<<メインメニュー画面>>>" << std::endl;
}

void MainMenuState::OnUpdate(GameManager* manager, float deltaTime)
{
	std::cout << "Press any key to start the game..." << std::endl;
	(void)_getch();
	manager->ChangeState(std::make_unique<InGameState>());
}

void MainMenuState::OnExit(GameManager* manager)
{
	std::cout << "メインメニュー画面を終了" << std::endl;
}

const std::string MainMenuState::GetName() const
{
	return "MainMenuState";
}