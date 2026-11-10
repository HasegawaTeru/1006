#include "InGameStateView.h"

//　ゲーム画面と表示する関数
void InGameStateComment()
{
	std::cout << "<<<ゲーム画面>>>" << std::endl << std::endl;
}

//　ゲーム画面が終了したことを表示する関数
void InGameStateEndComment()
{
	std::cout << "<<<ゲーム画面終了>>>" << std::endl << std::endl;
}

//　マップを探索中の文字列を表示する関数
void InGameStateExploringComment()
{
	std::cout << "マップを探索中..." << std::endl << std::endl;
}

//　アイテムゲットの文字列を表示する関数
void InGameStateItemGetComment()
{
	std::cout << "アイテムゲット！" << std::endl << std::endl;
}

//　敵と遭遇したことを表示する関数
void InGameStateEnemyEncounterComment()
{
	std::cout << "敵と遭遇した！" << std::endl << std::endl;
}