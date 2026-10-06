#include "EnemyFactory.h"
#include "Enemy.h"

const EnemyData EnemyFactory::EnemyTable[] = 
{
	{1, "Goblin", 30, 5, 2, 3, 10, 5, 10},
	{2, "Orc", 50, 10, 5, 2, 20, 10, 15},
	{3, "Troll", 80, 15, 10, 1, 30, 20, 20},
	{4, "Dragon", 200, 25, 15, 4, 100, 50, 25 }
};

const int EnemyFactory::EnemyTableSize = sizeof(EnemyTable) / sizeof(EnemyData);

Enemy* EnemyFactory::CreateEnemy(int ID)
{
	for (int i = 0; i < EnemyTableSize; ++i)
	{
		if (EnemyTable[i].ID == ID)
		{
			return new Enemy(EnemyTable[i]);
		}
	}
	return nullptr;
}