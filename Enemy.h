#pragma once
#include "EnemyData.h"

class Enemy
{
public:
	
	EnemyData data;

	Enemy(const EnemyData& enemyData) : data(enemyData) {}
};