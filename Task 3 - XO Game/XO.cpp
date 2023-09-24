#include <iostream>
#include <iostream>
using namespace std;
int checkwin();
void grid();
char XO[] = { '0','1','2','3','4','5','6','7','8','9' };
int main()
{
		char sign = 'X';
		int choice,enter_again, player = 1;
		/*
		cout << "\t\t TIC TAC TOE GAME \t\t" << endl;
		cout << "\t     Player 1 (X) , Player 2 (O)" << endl << endl << endl;
		*/
		while (1)
		{
		system("cls");
		while (checkwin() == -1)
		{
			grid();
			if (player % 2 != 0)
			{
				player = 1;
				sign = 'X';
			}
			else
			{
				player = 2;
				sign = 'O';

			}
			cout << "Player " << player << " , enter a number:  ";
			cin >> choice;
			cin.ignore();
			if (choice == 1 && XO[1] == '1')

				XO[1] = sign;
			else if (choice == 2 && XO[2] == '2')

				XO[2] = sign;
			else if (choice == 3 && XO[3] == '3')

				XO[3] = sign;
			else if (choice == 4 && XO[4] == '4')

				XO[4] = sign;
			else if (choice == 5 && XO[5] == '5')

				XO[5] = sign;
			else if (choice == 6 && XO[6] == '6')

				XO[6] = sign;
			else if (choice == 7 && XO[7] == '7')

				XO[7] = sign;
			else if (choice == 8 && XO[8] == '8')

				XO[8] = sign;
			else if (choice == 9 && XO[9] == '9')

				XO[9] = sign;
			else
			{

				cout << "Invalid move !!" << endl;
				cout << "Please re - enter a valid index (press any key to continue) :" << endl;
				player--;
				cin.ignore();
				cin.get();
			}
			player++;
			system("cls");
		}
		grid();
		if (checkwin() == 1)
			cout << "Player " << player - 1 << " Wins !!" << endl;
		else
			cout << "Draw !! " << endl;

		for (int i = 0; i < 10; i++)
			XO[i] = char(48 + i);
		player = 1;
		cout << "If you want to play again , Please enter '1', If not enter any other key :" << endl;
		cin >> enter_again;
		if (enter_again != 1)
			break;
	    }
	return 0;
}
void grid()
{
	system("cls");
	//	system("cls");
	cout << "\033[31m" << "\t\t TIC TAC TOE GAME \t\t" << "\033[0m" << endl; //RED
	cout << "\033[33m" << "\t     Player 1 (X) , Player 2 (O)" << "\033[0m" << endl;//YELLOW
	cout << "\033[31m" << "\t   DEVELOPED BY KHALED AHMED HAMED" << "\033[0m" << endl << endl << endl;//YELLOW

	cout << "     |     |     " << endl;
	cout << "  " << XO[1] << "  " << "|  " << XO[2] << "  " << "|  " << XO[3] << "  " << endl;
	cout << "_____|_____|_____" << endl;



	cout << "     |     |     " << endl;
	cout << "  " << XO[4] << "  " << "|  " << XO[5] << "  " << "|  " << XO[6] << "  " << endl;
	cout << "_____|_____|_____" << endl;


	cout << "     |     |     " << endl;
	cout << "  " << XO[7] << "  " << "|  " << XO[8] << "  " << "|  " << XO[9] << "  " << endl;
	cout << "     |     |     " << endl;
}
int checkwin()
{
	if (XO[1] == XO[2] && XO[2] == XO[3])
		return 1;
	else if (XO[4] == XO[5] && XO[5] == XO[6])
		return 1;
	else if (XO[7] == XO[8] && XO[8] == XO[9])
		return 1;
	else if (XO[1] == XO[4] && XO[4] == XO[7])
		return 1;
	else if (XO[2] == XO[5] && XO[5] == XO[8])
		return 1;
	else if (XO[3] == XO[6] && XO[6] == XO[9])
		return 1;
	else if (XO[1] == XO[5] && XO[5] == XO[9])
		return 1;
	else if (XO[3] == XO[5] && XO[5] == XO[7])
		return 1;
	else if (XO[1] != '1' && XO[2] != '2' && XO[3] != '3'
		&& XO[4] != '4' && XO[5] != '5' && XO[6] != '6'
		&& XO[7] != '7' && XO[8] != '8' && XO[9] != '9')
		return 0;
	else
		return -1;
}
