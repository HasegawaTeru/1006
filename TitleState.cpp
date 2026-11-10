#include "TitleState.h"

void TitleState::OnEnter(GameManager* manager)
{
	TitleStateComment();
}

void TitleState::OnUpdate(GameManager* manager, float deltaTime)
{
	int key = _getch();
	if (key == '1')
	{
		GameStartComment();
		manager->ChangeState(std::make_unique<InGameState>());
	}
	else if (key == '2')
	{
		GameEndComment();
		exit(0);
	}
}

void TitleState::OnExit(GameManager* manager)
{
	TitleStateEndComment();
}

const std::string TitleState::GetName() const
{
	return "TitleState";
}