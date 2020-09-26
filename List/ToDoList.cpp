#include<iostream>//標準入出力
#include<fstream>//ファイルの入出力
#include<string>//文字列を取り扱う
#include<sstream>//文字列の入出力

#include"File.h"
#include"Write.h"

using namespace std;//標準的なio

int i = 0;
bool Loop = true;
bool To = true;
string List[3][15];
string IF;
string IFSe;
string IFTo;

int main()
{
	while(Loop == true)
	{
		cout << "項目は15つまでです。\n\n";
		cout << "リストを初期化するなら”初期化”\n";
		cout << "リストに書き込むなら”書く”\n";
		cout << "リストに読み込むなら”読む”\n";
		cout << "リストに編集するなら”編集”\n";
		cout << "と打ち込んでください。何もしない場合はEnterキーを押してください。\n\n";
		cin >> IFSe;

		if (IFSe == "初期化")
		{
			FileInitialize();
		}

		if (IFSe == "書く")
		{
			//リストに書き込み
			Write(List, IFTo, To, i);
		}

		if (IFSe == "読む")
		{
			//リストの読み込み
			FileReading();
		}

		if (IFSe == "編集")
		{
			Edit(List);
		}

		cout << "終了しますか？\n";
		cout << "”終了”で終わり、継続するなら適当な文字を入れて下さい\n";
		cin >> IF;
		if (IF == "終了")
		{
			Loop = false;
		}
	}//終了
}