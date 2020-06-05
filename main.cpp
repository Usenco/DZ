#include "event.h"
#include "Birthday.h"
#include "Custom.h"
#include "Date.h"
#include "Meeting.h"
#include "Time_.h"
#include <vector>
#include <algorithm>


int main()
{
	setlocale(0, "rus");
	vector<Event*> e;
	int menu = 0;
	Date d;
	Time_ t;
	string s1, s2;
	int i;

	do {
		system("cls");
		cout << "-------------------------------" << endl;
		cout << "\tÌÅÍÞ!!!" << endl;
		cout << "1 - Âûâåñòè âñå (îò áëèæàéøåãî)" << endl;
		cout << "2 - Âûâåñòè âñå äíè Ðîæäåíèÿ" << endl;
		cout << "3 - Âûâåñòè âñå âñòðå÷è" << endl;
		cout << "4 - Âûâåñòè âñå îñòàëüíûå ñîáûòèÿ\n" << endl;
		cout << "5 - Äîáàâèòü ñîáûòèå\n\n" << endl;
		cout << "0 - âûéòè" << endl;
		cout << "-------------------------------" << endl;

		cin >> menu;

		switch (menu)
		{
		default:
			break;
		case 1: sort(e.begin(), e.end());
			for (int i = 0; i < e.size(); i++)
			{
				e[i]->show();
			}
			system("pause");  break;
		case 2:
			for (int i = 0; i < e.size(); i++)
			{
				if(e[i]->type=="Birthday")
					e[i]->show();
			}
			system("pause");  break;
		case 3:
			for (int i = 0; i < e.size(); i++)
			{
				if (e[i]->type == "Meeting")
					e[i]->show();
			}
			system("pause");  break;
		case 4:
			for (int i = 0; i < e.size(); i++)
			{
				if (e[i]->type == "Custom")
					e[i]->show();
			}
			system("pause");  break;
		case 5: cout << "Âûáåðèòå ñîáûòèå: \n1-Äåíü Ðîæäåíèå\n2-Âñòðå÷à\n3-Äðóãîå" << endl;
			cin >> menu;
			if (menu == 1)
			{
				cout << "Ââåäèòå äàòó: " << endl; cin >> d;
				cout << "Ââåäèòå èìÿ: " << endl; cin >> s1;
				cout << "Ââåäèòå ìåñòî: " << endl; cin >> s2;
				cout << "Ââåäèòå âîçðàñò: " << endl; cin >> i;

				e.push_back(new Birthday(d, i, s1, s2));
			}
			else if (menu == 2)
			{
				cout << "Ââåäèòå äàòó: " << endl; cin >> d;
				cout << "Ââåäèòå âðåìÿ: " << endl; cin >> t;
				cout << "Ââåäèòå èìÿ: " << endl; cin >> s1;
				cout << "Ââåäèòå ìåñòî: " << endl; cin >> s2;

				e.push_back(new Meeting(d, t, s2, s1));
			}
			else if (menu == 3)
			{
				cout << "Ââåäèòå äàòó: " << endl; cin >> d;
				cout << "Ââåäèòå âðåìÿ: " << endl; cin >> t;
				cout << "Ââåäèòå êîììåíòàðèé: " << endl; cin >> s1;

				e.push_back(new Custom(s1, d, t));
			}
			system("pause");  break;
		}


	} while (menu != 0);

	return 0;
}
