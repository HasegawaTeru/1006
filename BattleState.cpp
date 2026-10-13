#include <memory>
#include "BattleState.h"
#include "TitleState.h"
#include "InGameState.h"
#include "Player.h"
#include "Enemy.h"
#include "EnemyFactory.h"

void BattleState::OnEnter(GameManager* manager)
{
	std::cout << "<<<バトル画面>>>" << std::endl << std::endl;
}

void BattleState::OnUpdate(GameManager* manager, float deltaTime)
{
	//　プレイヤーの設定
	Player& player = manager->GetPlayer();
	//　HPを毎回リセット
	manager->GetPlayer().health = 30;

	//　敵をランダムで抽選
	int random = (rand() % 4) + 1;
	//　敵を作成
	std::unique_ptr<Enemy> enemy(EnemyFactory::CreateEnemy(random));

	//　プレイヤーか敵がHP０になるまでループを続ける
	while (player.health > 0 && enemy->data.HP > 0)
	{
		//　プレイヤーと敵の名前、体力を文字列で表示
		std::cout << player.name << "HP：" << player.health << std::endl << std::endl;
		std::cout << enemy->data.name << "HP： " << enemy->data.HP << std::endl << std::endl;

		//　選択肢を文字列で表示
		std::cout << "１キー：攻撃　　　２：ガード" << std::endl << std::endl;

		//　キー入力判定
		int key = _getch();
		//　敵からのダメージは攻撃力を参照
		int enemyDamage = enemy->data.ATK;

		//　１キーを押したときの処理
		if (key == '1')
		{
			//　プレイヤーのダメージは１０
			int playerDamage = 10;
			//　プレイヤーの攻撃力分敵のHPを減らす
			enemy->data.HP -= playerDamage;

			//　迪夫HPが０より小さくなったら０にする
			if (enemy->data.HP < 0)
			{
				enemy->data.HP = 0;
			}

			//　敵に与えたダメージを文字列で表示
			std::cout << enemy->data.name << "に" << playerDamage << "ダメージ与えた！" << std::endl << std::endl;
		}
		//　２キーが押されたら
		else if (key == '2')
		{
			//　文字列を表示
			std::cout << "守りの姿勢をとった！" << std::endl << std::endl;
			//　敵からのダメージを半分にする
			enemyDamage /= 2;
		}
		else
		{
			continue;
		}

		//　プレイヤーのHPを敵の攻撃力分減らす
		player.health -= enemyDamage;

		//　プレイヤーのHPが０より小さくなったら０にする
		if (player.health < 0)
		{
			player.health = 0;
		}

		//　文字列の表示
		std::cout << enemy->data.name << "の攻撃！" << enemyDamage << "ダメージ受けた" << std::endl << std::endl;

		//　敵のHPが０になったら勝利の文字列を表示
		if (enemy->data.HP == 0)
		{
			std::cout << "勝利！" << std::endl;
			player.gold += enemy->data.GOLD;
			std::cout << "ゴールド獲得！" << std::endl;
			std::cout << "所持金：" << player.gold << "ゴールド" << std::endl << std::endl;
		}
		//　プレイヤーのHPが０になったら敗北の文字列を表示
		else if(player.health == 0)
		{
			std::cout << "敗北..." << std::endl << std::endl;
		}
	}

	while (true)
	{
		//　選択肢の文字列を表示
		std::cout << "１キー：マップに戻る　　　２キー：タイトルに戻る" << std::endl << std::endl;

		//　キー入力判定
		int key = _getch();

		//　１キーを押したら
		if (key == '1')
		{
			//　マップ画面に戻る
			manager->ChangeState(std::make_unique<InGameState>());
			return;
		}
		//　２キーを押したら
		else if (key == '2')
		{
			//　タイトル画面に戻る
			manager->ChangeState(std::make_unique<TitleState>());
			return;
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