#include "TitleStateView.h"

//　タイトル画面と表示、次の行動を選択するための文字列を表示する関数
void TitleStateComment()
{
	std::cout << "<<<タイトル画面>>>" << std::endl << std::endl;
	std::cout << "１：ゲームスタート　　　２：ゲーム終了" << std::endl << std::endl;
}

//　タイトル画面が終了したことを表示する関数
void TitleStateEndComment()
{
	std::cout << "<<<タイトル画面終了>>>" << std::endl << std::endl;
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