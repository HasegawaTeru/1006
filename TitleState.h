#pragma once
#include <iostream>
#include "GameState.h"

class TitleState : public GameState
{
public:
	void OnEnter(GameManager* manager)
	{
		std::cout << "タイトル画面" << std::endl;
	}
	void OnUpdate(GameManager* manager, float deltaTime)
	{
		std::cout << "タイトル画面更新" << std::endl;
	}
	void OnExit(GameManager* manager)
	{
		std::cout << "タイトル画面終了" << std::endl;
	}
	const std::string GetName() const { return "Title"; }
};