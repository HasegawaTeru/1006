#include "BattleState.h"
#include "TitleState.h"
#include "InGameState.h"

void BattleState::OnEnter(GameManager* manager)
{
	std::cout << "<<<バトル画面>>>" << std::endl << std::endl;
}

void BattleState::OnUpdate(GameManager* manager, float deltaTime)
{
	int kill = 0;
	int player_hp = 6;
	int enemy_hp = 6;
	while (kill == 0)
	{
		std::cout << "１キー：攻撃　　　２：ガード   　３：回復" << std::endl << std::endl;

		int key = _getch();
		
		if (key == '1')
		{
			std::cout << "敵に３ダメージ与えた！" << std::endl << std::endl;
			enemy_hp -= 3;

			std::cout << "敵の攻撃！　３ダメージ受けた" << std::endl << std::endl;

			player_hp -= 3;

			if (player_hp <= 0)
			{
				kill = 1;
			}
			else if (enemy_hp <= 0)
			{
				kill = 2;
			}
		}
		else if (key == '2')
		{
			std::cout << "守りの姿勢をとった！" << std::endl << std::endl;

			std::cout << "敵の攻撃！　２ダメージ受けた" << std::endl << std::endl;

			player_hp -= 2;

			if (player_hp <= 0)
			{
				kill = 2;
			}
		}
		else if (key == '3')
		{
			std::cout << "２回復した" << std::endl << std::endl;
			player_hp += 2;

			std::cout << "敵の攻撃！　３ダメージ受けた" << std::endl << std::endl;
			player_hp -= 3;
		}
	}

	if (kill == 1)
	{
		std::cout << "勝利！" << std::endl << std::endl;
		std::cout << "１キー：マップに戻る　　　２キー：タイトルに戻る" << std::endl << std::endl;

		int key = _getch();

		if (key == '1')
		{
			manager->ChangeState(std::make_unique<InGameState>());
		}
		else if (key == '2')
		{
			manager->ChangeState(std::make_unique<TitleState>());
		}
	}
	else if (kill == 2)
	{
		std::cout << "敗北..." << std::endl << std::endl;
		std::cout << "１キー：マップに戻る　　　２キー：タイトルに戻る" << std::endl << std::endl;

		int key = _getch();

		if (key == '1')
		{
			manager->ChangeState(std::make_unique<InGameState>());
		}
		else if (key == '2')
		{
			manager->ChangeState(std::make_unique<TitleState>());
		}
	}
}

void BattleState::OnExit(GameManager* manager)
{
	std::cout << "バトル画面を終了" << std::endl << std::endl;
}

const std::string BattleState::GetName() const
{
	return "BattleState";
}