#include "StartUpState.h"

void StartUpState::OnEnter(GameManager* manager)
{
	StartUpStateComment();
}

void StartUpState::OnUpdate(GameManager* manager, float deltaTime)
{
	StartUpStateKeyInputComment();
	(void)_getch();
	manager->ChangeState(std::make_unique<TitleState>());
}

void StartUpState::OnExit(GameManager* manager)
{
	StartUpStateEndComment();
}

const std::string StartUpState::GetName() const
{
	return "StartUpState";
}