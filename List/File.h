#pragma once
#include<iostream>//�W�����o��
#include<fstream>//�t�@�C���̓��o��
#include<string>//���������舵��
#include<sstream>//������̓��o��

using namespace std;//�W���I��io

//�֐��錾�i�v���g�^�C�v�錾�j
void FileInitialize();
void FileWrite(string List[3][15], int i);
void FileEdit(string List[3][15], int e, int s);
void FileReading();