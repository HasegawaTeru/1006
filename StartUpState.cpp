#include "StartUpState.h"
#include "TitleState.h"

void StartUpState::OnEnter(GameManager* manager)
{
	std::cout << "<<<スタートアップ画面>>>" << std::endl;
}

void StartUpState::OnUpdate(GameManager* manager, float deltaTime)
{
	std::cout << "Press any key to continue..." << std::endl;
	(void)_getch();
	manager->ChangeState(std::make_unique<TitleState>());
}

void StartUpState::OnExit(GameManager* manager)
{
	std::cout << "スタートアップ画面を終了" << std::endl << std::endl;
}

const std::string StartUpState::GetName() const
{
	return "StartUpState";
}