#include <iostream>
#include <cstdio>
#include "Order.h"
#include "OrderController.h"
using namespace std;
class Main
{
    OrderController ordercontroller;
    public:
    void mainMenu() {
        {
            cout << "-----------------------------------------------------" << endl;
            cout << "|                     ShopiQube                     |" << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << endl;
            cout << endl;
            printf("%s\n%s\n%s\n%s\n%s\n%s\n\n", "[1] place Order", "[2] Search Order", "[3] Search Customer", "[4] Search Best Customer", "[5] Update Customer", "[6] Exit");
            cout << "Enter option to continue - ";
            int option;
            cin >> option;
            if (Main main; !main.getMainMenuOption(option))
            {
                mainMenu();
            }

        }
    }

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
        std:
        const string newOrderId = ordercontroller.generateOrderId();
        A1:
        cout << newOrderId << endl;
        cout << "Enter phone number - ";
        std::string phoneNo;
        cin  >>phoneNo;
        cout << endl;
        if (ordercontroller.validatePhoneNo(phoneNo)) {
            if (ordercontroller.checkCustomerDetails(phoneNo)) {
                std::string customerName = ordercontroller.getCustomerName(phoneNo);
                cout << "Customer name - "+customerName << endl;
                cout << endl;
                int qty;
                qty1:
                cout << "Enter Order Quantity - ";
                cin  >> qty;
                if (ordercontroller.validateNumber(std::to_string(qty))) {
                  cout << "Enter valid quantity";
                    goto qty1;
                }
                //Need to calculate order price according to unit price
                cout << "Total price of the order - "<< qty*500;
             }
            std::string customerName;
            cout << "Enter customer name - ";
            cin  >>customerName;
            cout << endl;
            int qty;
            qty2:
            cout << "Enter Order Quantity - ";
            cin  >> qty;
            if (ordercontroller.validateNumber(std::to_string(qty))) {
                cout << "Enter valid quantity" <<endl;
                goto qty2;
            }
            //Need to calculate order price according to unit price
            cout << "Total price of the order - "<< qty*500 << endl;

            //Place order
            //Order *order = new Order();
            if (const Order order(newOrderId,phoneNo,customerName,qty,0); ordercontroller.placeOrder(order)) {
               cout << "Order place successfully" << endl;
            }

            while (true) {
                cout << "Do you want to place another order (y/n)? - ";
                char decision;
                cin >> decision;

                if (decision == 'y' || decision == 'Y') {
                    placeOrder();
                    return;
                }
                else {
                    if (decision == 'n' || decision == 'N') {
                        mainMenu();
                        return;
                    }
                    std::cout << "Invalid input. Please enter y or n.\n";
                }
            }

        }else {
            cout << "Enter valid phone number";
            goto A1;
        }
    }
};

int main()
    {
    Main main;
    main.mainMenu();
    return 0;
    }