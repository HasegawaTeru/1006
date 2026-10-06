#include <iostream>
#include "Player.h"
#include "EnemyFactory.h"
#include "GameManager.h"
#include "TitleState.h"

GameManager manager;

int main()
{
	while (1)
	{
		manager.Update(0.0f);
	}
}