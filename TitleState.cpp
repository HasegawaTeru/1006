#include "TitleState.h"
#include "MainMenuState.h"

void TitleState::OnEnter(GameManager* manager)
{
	std::cout << "タイトル画面" << std::endl;
}

void TitleState::OnUpdate(GameManager* manager, float deltaTime)
{
	manager->ChangeState(std::make_unique<MainMenuState>());
}

void TitleState::OnExit(GameManager* manager)
{
	std::cout << "タイトル画面を終了" << std::endl;
}

const std::string TitleState::GetName() const
{
	return "TitleState";
}