#include "BattleState.h"

void BattleState::OnEnter(GameManager* manager)
{
	BattleStateComment();
}

void BattleState::OnUpdate(GameManager* manager, float deltaTime)
{
	//　プレイヤーの設定
	Player& player = manager->GetPlayer();
	//　HPを毎回リセット
	manager->GetPlayer().health = player.PLAYER_HP_MAX;

	//　敵をランダムで抽選
	int random = RandomEnemySelection();
	//　敵を作成
	std::unique_ptr<Enemy> enemy(EnemyFactory::CreateEnemy(random));

	//　プレイヤーか敵がHP０になるまでループを続ける
	while (player.health > 0 && enemy->data.HP > 0)
	{
		//　プレイヤーと敵の名前、体力を文字列で表示
		PlayerHealthUpdateComment(player);
		EnemyHealthUpdateComment(*enemy);

		//　選択肢を文字列で表示
		PlayerNextActionComment();

		//　キー入力判定
		int key = _getch();
		//　敵からのダメージは攻撃力を参照
		int enemyDamage = enemy->data.ATK;

		//　１キーを押したときの処理
		if (key == '1')
		{
			//敵のHPをプレイヤーの攻撃力分減らす
			player.EnemyHpDecrease(*enemy, player.attack);

			//　敵に与えたダメージを文字列で表示
			EnemyDamageUpdateComment(*enemy, player.attack);
		}
		//　２キーが押されたら
		else if (key == '2')
		{
			//　文字列を表示
			PlayerDefenceComment();
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
		PlayerDamageUpdateComment(player, enemyDamage);

		//　敵のHPが０になったら勝利の文字列を表示
		if (enemy->data.HP <= 0)
		{
			PlayerWinComment();
			player.gold += enemy->data.GOLD;
			int levelupCount = player.AddExp(enemy->data.EXP);
			PlayerGetGoldComment(enemy->data.GOLD);
			PlayerGetExpComment(enemy->data.EXP);
			PlayerGoldComment(player);
			PlayerExpComment(player);
		}
		//　プレイヤーのHPが０になったら敗北の文字列を表示
		else if(player.health <= 0)
		{
			PlayerLoseComment();
		}
	}

	while (true)
	{
		//　選択肢の文字列を表示
		PlayerNextActionAfterBattleComment();

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
	BattleStateEndComment();
}

const std::string BattleState::GetName() const
{
	return "BattleState";
}