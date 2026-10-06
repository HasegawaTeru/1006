#pragma once
#include "EnemyData.h"

struct Enemy
{
public:
	
	EnemyData data;

	Enemy(const EnemyData& enemyData) : data(enemyData) {}
};