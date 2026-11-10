#pragma once
#include <iostream>
#include <conio.h>
#include "GameState.h"
#include "GameManager.h"
#include "TitleState.h"
#include "View.h"

class StartUpState : public GameState
{
public:
	void OnEnter(GameManager* manager);
	void OnUpdate(GameManager* manager, float deltaTime);
	void OnExit(GameManager* manager);
	const std::string GetName() const;
};