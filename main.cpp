#include <iostream>
#include <cstdio>
#include "Order.h"
#include "OrderController.h"
using namespace std;
class Main
{
    OrderController ordercontroller;
    public:
    bool getMainMenuOption(int option)
    {
        switch (option)
        {
        case 1:
            placeOrder();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            cout << "Ente valid number";
            return false;
        }
        return true;
    }
    void placeOrder()
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "|                   Place Order                     |" << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        std:string newOrderId = ordercontroller.generateOrderId();
        cout << newOrderId << endl;
    }
};

int main()
    {
        Main main;
        while (true)
        {
            cout << "-----------------------------------------------------" << endl;
            cout << "|                     ShopiQube                     |" << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << endl;
            cout << endl;
            printf("%s\n%s\n%s\n%s\n%s\n%s\n\n", "[1] place Order", "[2] Search Order", "[3] Search Customer", "[4] Search Best Customer", "[5] Update Customer", "[6] Exit");
            cout << "Enter option to continue-";
            int option;
            cin >> option;
            if (!main.getMainMenuOption(option))
            {
                continue;
            }
            return 0;
        }
    }