#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
void show()
{

	cout << "\033[31m" << "\t\t NUMBER GUESSING GAME \t\t" << "\033[0m" << endl; //RED
	cout << "\033[33m" << "\t    DEVELOPED BY KHALED AHMED HAMED" << "\033[0m" << endl << endl << endl;//YELLOW
}
int main()
{
	srand(time(0));
	int range = 100;
	int guess = 0;
	bool flag = false;
	int again = 1;
	while (again)
	{
		flag = false;
		show();
		cout << "Enter the range of guessing you want \n";
		cin >> range;
		system("cls");
		int num = 1 + rand() % range;
		while (!flag)
		{
			show();
			cout << "The range of guessing is from 1 to " << range << endl;
			cout << "Enter your guess \n";
			cin >> guess;
			if (guess > num)
				cout << "Your guessed number " << guess << " is higher than right number \n";
			else if (guess < num)
				cout << "Your guessed number " << guess << " is lower than right number \n";
			else
			{
				cout << "Your guessed number " << guess << " is correct \n";
				flag = true;
			}
			Sleep(2500);
			system("cls");
		}
		show();
		cout << "If you want to play again please enter 1 otherwise enter 0 \n";
		cin >> again;
		system("cls");
	}

	return 0;
}
