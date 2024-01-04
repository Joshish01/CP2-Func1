#include <iostream>
using namespace std;

int main()
{
	int firstNum, secondNum, condition;
	char countinueCondiion = 'y';
	
	do
	{
		do
		{
			cout << "1. Addition\n";
			cout << "2, Subtraction\n";
			cout << "3. Multiplication\n";
			cout << "4. Division\n";
			cout << "Enter a Choice:\n";
			cin >> condition;

			system("cls");
			switch (condition)
			{
			case 1:
				cout << "Enter a First Number";
				cin >> firstNum;
				cout << "Enter a Second Number",
					cin >> secondNum;
				cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum;
				break;
			case 2:
				cout << "Enter a First Number";
				cin >> firstNum;
				cout << "Enter a Second Number",
					cin >> secondNum;
				cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum;
				break;
			case 3:
				cout << "Enter a First Number";
				cin >> firstNum;
				cout << "Enter a Second Number",
					cin >> secondNum;
				cout << firstNum << " * " << secondNum << " = " << firstNum * secondNum;
				break;
			case 4:
				cout << "Enter a First Number";
				cin >> firstNum;
				cout << "Enter a Second Number",
					cin >> secondNum;
				cout << firstNum << " / " << secondNum << " = " << firstNum / secondNum;
			default:
				cout << "Input incorrect\n\n";
				break;
			}
		} while (choice < 0 || choice > 5);

		std::cout << "Do you want to Contninue [y/n]:";
		std::cin >> continueChoice;

		std::system("cls");
	} while (continueChoice == 'y');
  }
}


