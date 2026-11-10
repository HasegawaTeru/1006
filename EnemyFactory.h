#pragma once
#include "EnemyData.h"
#include "Enemy.h"

class Enemy;

class EnemyFactory
{
	static const EnemyData EnemyTable[];
	static const int EnemyTableSize;

public:

	static Enemy* CreateEnemy(int ID);
};