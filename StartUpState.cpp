#include "StartUpState.h"
#include "TitleState.h"

void StartUpState::OnEnter(GameManager* manager)
{
	std::cout << "スタートアップ画面" << std::endl;
}

void StartUpState::OnUpdate(GameManager* manager, float deltaTime)
{
	manager->ChangeState(std::make_unique<TitleState>());
}

void StartUpState::OnExit(GameManager* manager)
{
	std::cout << "スタートアップ画面を終了" << std::endl;
}

const std::string StartUpState::GetName() const
{
	return "StartUpState";
}