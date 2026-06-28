#include <iostream>
void show_menu()
{
    std::cout << "*******MENU*******" << '\n';
    std::cout << "1.check balance " << '\n';
    std::cout << "2.deposit " << '\n';
    std::cout << "3.withdraw" << '\n';
    std::cout << "4.to exit " << '\n';
}
void show_balance(double balance)
{
    std::cout << "your balance is :" << balance << '$' << '\n';
}
double deposit()
{
    double amount;
    std::cout << "Enter amount to deposit:\n";
    std::cin >> amount;
    if (amount < 0)
    {
        std::cout << "enter valid amount \n";
        return 0;
    }
    else
    {
        return amount;
    }
}
double withdraw(double balance)
{
    double withdraw_amount;
    std::cout << "amount to withdraw :\n ";
    std::cin >> withdraw_amount;
    if (withdraw_amount > balance)
    {
        std::cout << "insufficent funds\n";
        return 0;
    }
    else
    {
        return withdraw_amount;
    }
}

int main()
{
    show_menu();
    int option;
    double balance = 0;
    do
    {
        std::cout << "Enter option : ";
        std::cin >> option;
        switch (option)
        {
        case 1:
            show_balance(balance);
            break;
        case 2:

            balance += deposit();
            std::cout << "balance is  " << balance << '\n';
            break;
        case 3:

            balance -= withdraw(balance);
            std::cout << "remaining balance after withdraw : " << balance << '\n';
            break;
        }
    } while (option != 4);
    std::cout << "Thanks for visiting " << '\n';
    return 0;
}