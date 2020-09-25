#include"File.h"

//ファイルの初期化
void FileInitialize()
{
	fstream file;//ファイル宣言

	file.open("ToDoList.txt", ios::out);//ファイルオープン書き込み

	//エラー処理
	if (!file.is_open())
	{
		cout << "ファイルを制作できません。";
		return;//FileInitialize()を抜ける
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			file << endl;
		}
	}

	file.close();//ファイルを閉じる
}


//ファイルの書き込み
void FileWrite(string List[3][15], int i)
{
	fstream file;//ファイル宣言

	file.open("ToDoList.txt", ios::out);//ファイルオープン書き込み

	//エラー処理
	if (!file.is_open())
	{
		cout << "ファイルを制作できません。";
		return;//FileWrite()を抜ける
	}

	//書き込み処理
	for (int j = 0; j <= i; j++)
	{
		file << endl;
		j++;
		file << j << endl;
		j--;
		file << List[0][j] << endl;
		file << List[1][j] << endl;
		file << List[2][j] << endl;
		file << "----------------------" << endl;
	}

	file.close();//ファイルを閉じる
}

//ファイルの編集
void FileEdit(string List[3][15], int e, int s)
{

	fstream file;//ファイル宣言

	file.open("ToDoList.txt", ios::out);//ファイルオープン書き込み

	//エラー処理
	if (!file.is_open())
	{
		cout << "ファイルを制作できません。";
		return;//FileWrite()を抜ける
	}

	//書き込み処理
	for (int j = 0; j <= s; j++)
	{
		if (j != e - 1)
		{
			file << endl;
			j++;
			file << j << endl;
			j--;
			file << List[0][j] << endl;
			file << List[1][j] << endl;
			file << List[2][j] << endl;
			file << "----------------------" << endl;
		}
		else
		{
			file << endl;
			file << e << endl;
			file << List[0][e - 1] << endl;
			file << List[1][e - 1] << endl;
			file << List[2][e - 1] << endl;
			file << "----------------------" << endl;
		}
		
	}

	file.close();//ファイルを閉じる
}

//ファイルの閲覧
void FileReading()
{
	fstream file;//ファイル宣言

	file.open("ToDoList.txt", ios::in);//ファイルオープンモード：：読み込み

	//エラー処理
	if (!file.is_open())
	{
		cout << "ファイルを制作できません！！";
		return;//fileWrite()を抜ける
	}

	//ファイルから読み込み----------

	string str;//文字列を読み込む変数

	//1行get（文字列）getline(file, str)
	while (getline(file, str))
	{
		cout << str << endl;
	}

	file.close();//ファイルを閉じる（最初に書く）
}