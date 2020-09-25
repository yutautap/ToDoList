#include"Write.h"
#include"File.h"

int s = 0;

void Write(string List[3][15], string IFTo, bool To, int i)
{
	while (To == true)
	{
		cout << "\nÇ¢Ç¬Ç‹Ç≈Ç…ÅH\n";
		cout << "ÅhÅõåéÅõì˙Ç‹Ç≈Ç…ÅhÇ≈Åiéûä‘Ç™ïKóvÇ»èÍçáÇÕ24éûä‘ï\ãLÇ≈ÅhÅ`ÇÃÅõéûÅõï™Ç‹Ç≈Ç…ÅhÇ≈Åj\n\n";
		cin >> List[0][i];

		cout << "\nÇ‚ÇÈÇ±Ç∆ÇÕÅH\n\n";
		cin >> List[1][i];

		cout << "\nèIÇÌÇ¡ÇΩÇ©ÅH\n";
		cout << "ÅhÇÕÇ¢ÅhÇ©ÅhÇ¢Ç¢Ç¶ÅhÇ≈\n\n";
		cin >> List[2][i];

		i++;

		cout << "èëÇ´çûÇ›ÇèIÇÌÇËÇ…ÇµÇ‹Ç∑Ç©ÅH\n";
		cout << "ÅhèIóπÅhÇ≈èIÇÌÇËÅAèëÇ´ë±ÇØÇÈÇ»ÇÁìKìñÇ»ï∂éöÇì¸ÇÍÇƒâ∫Ç≥Ç¢\n";
		cin >> IFTo;
		if (IFTo == "èIóπ")
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
	cout << "ï“èWÇµÇΩÇ¢î‘çÜÇÕÅHÅiîºäpâpêîÇ≈Ç®äËÇ¢ÇµÇ‹Ç∑ÅBÅj\n";
	cin >> e;

	cout << "\nÇ¢Ç¬Ç‹Ç≈Ç…ÅH\n";
	cout << "ÅhÅõåéÅõì˙Ç‹Ç≈Ç…ÅhÇ≈Åiéûä‘Ç™ïKóvÇ»èÍçáÇÕ24éûä‘ï\ãLÇ≈ÅhÅ`ÇÃÅõéûÅõï™Ç‹Ç≈Ç…ÅhÇ≈Åj\n\n";
	cin >> List[0][e - 1];

	cout << "\nÇ‚ÇÈÇ±Ç∆ÇÕÅH\n\n";
	cin >> List[1][e - 1];

	cout << "\nèIÇÌÇ¡ÇΩÇ©ÅH\n";
	cout << "ÅhÇÕÇ¢ÅhÇ©ÅhÇ¢Ç¢Ç¶ÅhÇ≈\n\n";
	cin >> List[2][e - 1];

	FileEdit(List, e, s);
}