#include"Write.h"
#include"File.h"

int s = 0;

void Write(string List[3][15], string IFTo, bool To, int i)
{
	while (To == true)
	{
		cout << "\n���܂łɁH\n";
		cout << "�h���������܂łɁh�Łi���Ԃ��K�v�ȏꍇ��24���ԕ\�L�Łh�`�́��������܂łɁh�Łj\n\n";
		cin >> List[0][i];

		cout << "\n��邱�Ƃ́H\n\n";
		cin >> List[1][i];

		cout << "\n�I��������H\n";
		cout << "�h�͂��h���h�������h��\n\n";
		cin >> List[2][i];

		i++;

		cout << "�������݂��I���ɂ��܂����H\n";
		cout << "�h�I���h�ŏI���A����������Ȃ�K���ȕ��������ĉ�����\n";
		cin >> IFTo;
		if (IFTo == "�I��")
		{
			To = false;
			i--;
		}
		FileWrite(List, i);
		PassI(i);
	}
}

void PassI(int i)
{
	s = i;
}

void Edit(string List[3][15])
{
	int e = 0;
	cout << "�ҏW�������ԍ��́H�i���p�p���ł��肢���܂��B�j\n";
	cin >> e;

	cout << "\n���܂łɁH\n";
	cout << "�h���������܂łɁh�Łi���Ԃ��K�v�ȏꍇ��24���ԕ\�L�Łh�`�́��������܂łɁh�Łj\n\n";
	cin >> List[0][e - 1];

	cout << "\n��邱�Ƃ́H\n\n";
	cin >> List[1][e - 1];

	cout << "\n�I��������H\n";
	cout << "�h�͂��h���h�������h��\n\n";
	cin >> List[2][e - 1];

	FileEdit(List, e, s);
}