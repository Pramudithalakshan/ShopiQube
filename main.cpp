#include <iostream>
#include <cstdio>
#include "Customer.h"
using namespace std;

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
bool placeOrder(){
    
}
int main()
{
    while (true)
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "|                     ShopiQube                     |" << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        printf("%s\n%s\n%s\n%s\n%s\n%s\n\n", "[1] place Order", "[2] Search Order", "[3] Search Customer", "[4] Search Best Customer", "[5] Update Customer", "[6] Exit");
        cout << "Enter option to continue";
        int option;
        cin >> option;
        if (!getMainMenuOption(option))
        {
            continue;
        }
        return 0;
    }
}