#include <iostream>
using namespace std;



int main()
{
	int number = 0;
	while (number != 11)
	{
		//int number;
		cout << "Please enter a number 1-10 and I will convert it into a Roman numeral:\n";
		cin >> number;



		switch (number)
		{
		case 1: cout << "I\n";
			break;
		case 2: cout << "II\n";
			break;
		case 3: cout << "III\n";
			break;
		case 4: cout << "IV\n";
			break;
		case 5: cout << "V\n";
			break;
		case 6: cout << "VI\n";
			break;
		case 7: cout << "VII\n";
			break;
		case 8: cout << "VIII\n";
			break;
		case 9: cout << "IX\n";
			break;
		case 10: cout << "X\n";
			break;
		default: cout << "no such number";

		}

	}
	system("pause");
}



