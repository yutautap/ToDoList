#pragma once
#include<iostream>//標準入出力
#include<fstream>//ファイルの入出力
#include<string>//文字列を取り扱う
#include<sstream>//文字列の入出力

using namespace std;//標準的なio

//関数宣言（プロトタイプ宣言）
void Write(string List[3][15], string IFTo, bool To, int i);
void PassI(int i);
void Edit(string List[3][15]);