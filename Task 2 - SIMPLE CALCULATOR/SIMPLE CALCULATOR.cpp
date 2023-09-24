#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
void show()
{

	cout << "\033[31m" << "\t\t SIMPLE CALCULATOR \t\t" << "\033[0m" << endl; //RED
	cout << "\033[33m" << "\t    DEVELOPED BY KHALED AHMED HAMED" << "\033[0m" << endl << endl << endl;//YELLOW
}
int main()
{
	int num1 = 0, num2 = 0, result = 0;
	char oper = 0;
	int again = 1;
	while (again)
	{
		show();
		cout << "The available operations are adiition , subtracion , multiplication and divison \n\n";
		num1 = num2 = result = oper = 0;
		cout << "Please enter the first input: \n";
		cin >> num1;
		cout << "Please enter the second input: \n";
		cin >> num2;
		cout << "Choose an arithmetic operation: \n";
		cin >> oper;
		switch (oper)
		{
		case '+':
			result = num1 + num2;
			cout << "Result : " << num1 << " " << oper << " " << num2 << " = " << result << "\n";
			break;
		case '-':
			result = num1 - num2;
			cout << "Result : " << num1 << " " << oper << " " << num2 << " = " << result << "\n";
			break;
		case '*':
			result = num1 * num2;
			cout << "Result : " << num1 << " " << oper << " " << num2 << " = " << result << "\n";
			break;
		case '/':
			if (num2 == 0)
			{
				cout << "Eroor !! , division by zero \n";
			}
			else
			{
				result = num1 / num2;
				cout << "Result : " << num1 << " " << oper << " " << num2 << " = " << result << "\n";
			}
			break;

		defult:
			cout << "Eroor !! , Invalid Operation \n";
		}
		cout << "If you want to play perform another operation please enter 1 otherwise enter 0 \n";
		cin >> again;
		system("cls");
	}
	return 0;
}
