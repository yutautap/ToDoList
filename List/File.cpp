#include"File.h"

//�t�@�C���̏�����
void FileInitialize()
{
	fstream file;//�t�@�C���錾

	file.open("ToDoList.txt", ios::out);//�t�@�C���I�[�v����������

	//�G���[����
	if (!file.is_open())
	{
		cout << "�t�@�C���𐧍�ł��܂���B";
		return;//FileInitialize()�𔲂���
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			file << endl;
		}
	}

	file.close();//�t�@�C�������
}


//�t�@�C���̏�������
void FileWrite(string List[3][15], int i)
{
	fstream file;//�t�@�C���錾

	file.open("ToDoList.txt", ios::out);//�t�@�C���I�[�v����������

	//�G���[����
	if (!file.is_open())
	{
		cout << "�t�@�C���𐧍�ł��܂���B";
		return;//FileWrite()�𔲂���
	}

	//�������ݏ���
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

	file.close();//�t�@�C�������
}

//�t�@�C���̕ҏW
void FileEdit(string List[3][15], int e, int s)
{

	fstream file;//�t�@�C���錾

	file.open("ToDoList.txt", ios::out);//�t�@�C���I�[�v����������

	//�G���[����
	if (!file.is_open())
	{
		cout << "�t�@�C���𐧍�ł��܂���B";
		return;//FileWrite()�𔲂���
	}

	//�������ݏ���
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

	file.close();//�t�@�C�������
}

//�t�@�C���̉{��
void FileReading()
{
	fstream file;//�t�@�C���錾

	file.open("ToDoList.txt", ios::in);//�t�@�C���I�[�v�����[�h�F�F�ǂݍ���

	//�G���[����
	if (!file.is_open())
	{
		cout << "�t�@�C���𐧍�ł��܂���I�I";
		return;//fileWrite()�𔲂���
	}

	//�t�@�C������ǂݍ���----------

	string str;//�������ǂݍ��ޕϐ�

	//1�sget�i������jgetline(file, str)
	while (getline(file, str))
	{
		cout << str << endl;
	}

	file.close();//�t�@�C�������i�ŏ��ɏ����j
}