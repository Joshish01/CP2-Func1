#include <iostream>
int Addition(), Subtraction(), Multipliction(), Division();


int Addition() 
{
 std::cout << "Please input value 1:";
                std::cin >> val1;
                std::cout << "Please input value 2:";
                std::cin >> val2;
                std::cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
                return 0;
}

int subtraction()
{
 std::cout << "Please input value 1:";
                std::cin >> val1;
                std::cout << "Please input value 2:";
                std::cin >> val2;
                std::cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
                return 0;
}

int multiplication()
{
 std::cout << "Please input value 1:";
                std::cin >> val1;
                std::cout << "Please input value 2:";
                std::cin >> val2;
                std::cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
                return 0;
}

int division()
{
 std::cout << "Please input value 1:";
                std::cin >> val1;
                std::cout << "Please input value 2:";
                std::cin >> val2;
                std::cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
                return 0;
}

int main()
{
    int val1, val2, choice,
    char continueChoice = 'y';

    do
    {
        do
        {
            std::cout
                << "--- Please Select for Math Solution to use ---\n"
                << "1. Add\n"
                << "2. Subtract\n"
                << "3. Multipliction\n"
                << "4. Division\n"
                << "\n"
                << "Enter Choice: ";
            std::cin >> choice;

            std::system("cls");

            switch (choice)
            {
            case 1:
                Addition();
                break;
            case 2:
                Subtraction();
                break;
            case 3:
                Multipliction();
                break;
            case 4:
                Division():
                break;
            default:
                std::cout << "User Input Incorrect\n\n";
                break;
            }
        } while (choice < 0 || choice > 5);

        std::cout << "Do you want to Contninue [y/n]:";
        std::cin >> continueChoice;

        std::system("cls");

    } while (continueChoice == 'y');
}


