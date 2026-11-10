#include "View.h"

//------------------------------------------------------------------------------------------------------
//　StartUpState

//　スタートアップ画面と表示する関数
void StartUpStateComment()
{
	std::cout << "<<<スタートアップ画面>>>" << std::endl << std::endl;
}

//　スタートアップ画面が終了したことを表示する関数
void StartUpStateEndComment()
{
	std::cout << "<<<スタートアップ終了>>>" << std::endl << std::endl;
}

//　何かキー入力をしてくださいと表示する関数
void StartUpStateKeyInputComment()
{
	std::cout << "Press any key to continue..." << std::endl << std::endl;
}

//------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------
//　TitleState

//　タイトル画面と表示、次の行動を選択するための文字列を表示する関数
void TitleStateComment()
{
	std::cout << "<<<タイトル画面>>>" << std::endl << std::endl;
	std::cout << "１：ゲームスタート　　　２：ゲーム終了" << std::endl << std::endl;
}

//　タイトル画面が終了したことを表示する関数
void TitleStateEndComment()
{
	std::cout << "<<<タイトル終了>>>" << std::endl << std::endl;
}

//　ゲームスタートの文字列を表示する関数
void GameStartComment()
{
	std::cout << "ゲームスタート" << std::endl << std::endl;
}

//　ゲーム終了の文字列を表示する関数
void GameEndComment()
{
	std::cout << "ゲーム終了" << std::endl << std::endl;
}

//------------------------------------------------------------------------------------------------------




//------------------------------------------------------------------------------------------------------
//　BattleState

//　バトル画面と表示する関数
void BattleStateComment()
{
	std::cout << "<<<バトル画面>>>" << std::endl << std::endl;
}

//　バトル画面が終了したことを表示する関数
void BattleStateEndComment()
{
	std::cout << "<<<バトル終了>>>" << std::endl << std::endl;
}

//　プレイヤーのHPを表示する関数
void PlayerHealthUpdateComment(Player& player)
{
	std::cout << player.name << "HP：" << player.health << std::endl << std::endl;
}

// 敵のHPを表示する関数
void EnemyHealthUpdateComment(Enemy& enemy)
{
	std::cout << enemy.data.name << "HP：" << enemy.data.HP << std::endl << std::endl;
}

//　敵に与えたダメージを表示する関数
void EnemyDamageUpdateComment(Enemy& enemy, int damage)
{
	std::cout << enemy.data.name << "に" << damage << "ダメージ与えた！" << std::endl << std::endl;
}

//　プレイヤーに与えたダメージを表示する関数
void PlayerDamageUpdateComment(Player& player, int damage)
{
	std::cout << player.name << "に" << damage << "ダメージ受けた！" << std::endl << std::endl;
}

//　プレイヤーが守りの姿勢をとったことを表示する関数
void PlayerDefenceComment()
{
	std::cout << "守りの姿勢をとった！" << std::endl << std::endl;
}

//　プレイヤーが勝利したことを表示する関数
void PlayerWinComment()
{
	std::cout << "勝利！" << std::endl << std::endl;
}

//　プレイヤーが敗北したことを表示する関数
void PlayerLoseComment()
{
	std::cout << "敗北..." << std::endl << std::endl;
}

//　プレイヤーがゴールドを獲得したことを表示する関数
void PlayerGetGoldComment(int gold)
{
	std::cout << gold << "ゴールド獲得！" << std::endl;
}

//　プレイヤーが経験値を獲得したことを表示する関数
void PlayerGetExpComment(int exp)
{
	std::cout << exp << "経験値獲得！" << std::endl << std::endl;
}

//　プレイヤーの所持金を表示する関数
void PlayerGoldComment(Player& player)
{
	std::cout << "所持金：" << player.gold << "ゴールド" << std::endl;
}

//　プレイヤーの経験値とレベルアップまでの経験値を表示する関数
void PlayerExpComment(Player& player)
{
	std::cout << "経験値：" << player.exp << " / " << player.nextlevelup() << std::endl << std::endl;
}

//　次の行動を選択するための文字列を表示する関数
void PlayerNextActionComment()
{
	std::cout << "次の行動を選択してください" << std::endl;
	std::cout << "１キー：攻撃　　　２キー：防御" << std::endl << std::endl;
}

//　戦闘終了後の行動を選択するための文字列を表示する関数
void PlayerNextActionAfterBattleComment()
{
	std::cout << "次の行動を選択してください" << std::endl;
	std::cout << "１キー：マップに戻る　　　２キー：タイトルに戻る" << std::endl << std::endl;
}

//-----------------------------------------------------------------------------------------------------