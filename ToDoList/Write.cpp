#include"Write.h"
#include"File.h"

int s = 0;

void Write(string List[3][15], string IFTo, bool To, int i)
{
	while (To == true)
	{
		cout << "\nいつまでに？\n";
		cout << "”○月○日までに”で（時間が必要な場合は24時間表記で”〜の○時○分までに”で）\n\n";
		cin >> List[0][i];

		cout << "\nやることは？\n\n";
		cin >> List[1][i];

		cout << "\n終わったか？\n";
		cout << "”はい”か”いいえ”で\n\n";
		cin >> List[2][i];

		i++;

		cout << "書き込みを終わりにしますか？\n";
		cout << "”終了”で終わり、書き続けるなら適当な文字を入れて下さい\n";
		cin >> IFTo;
		if (IFTo == "終了")
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
	cout << "編集したい番号は？（半角英数でお願いします。）\n";
	cin >> e;

	cout << "\nいつまでに？\n";
	cout << "”○月○日までに”で（時間が必要な場合は24時間表記で”〜の○時○分までに”で）\n\n";
	cin >> List[0][e - 1];

	cout << "\nやることは？\n\n";
	cin >> List[1][e - 1];

	cout << "\n終わったか？\n";
	cout << "”はい”か”いいえ”で\n\n";
	cin >> List[2][e - 1];

	FileEdit(List, e, s);
}