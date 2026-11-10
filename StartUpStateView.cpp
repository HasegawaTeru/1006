#include "StartUpStateView.h"

//　スタートアップ画面と表示する関数
void StartUpStateComment()
{
	std::cout << "<<<スタートアップ画面>>>" << std::endl << std::endl;
}

//　スタートアップ画面が終了したことを表示する関数
void StartUpStateEndComment()
{
	std::cout << "<<<スタートアップ画面終了>>>" << std::endl << std::endl;
}

//　何かキー入力をしてくださいと表示する関数
void StartUpStateKeyInputComment()
{
	std::cout << "Press any key to continue..." << std::endl << std::endl;
}