#include <iostream>
#include "Player.h"
#include "EnemyFactory.h"

int main()
{
	Player player1("Hero", 100, 1);
	std::cout << "Player Name: " << player1.name << std::endl;
	std::cout << "Player Health: " << player1.health << std::endl;
	std::cout << "Player Level: " << player1.level << std::endl;

	Enemy* enemy1 = EnemyFactory::CreateEnemy(1);
}