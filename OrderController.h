#ifndef ORDERCONTROLLER_H
#define ORDERCONTROLLER_H

#include "Order.h"
#include <string>
#include <vector>
class OrderController
{
private:
    std::vector<Order> ordervector;

public:
    OrderController(/* args */);
    ~OrderController();
    std::string generateOrderId()
    {
        if (ordervector.empty())
        {
            return "OR0001";
        }
        std::string lastId = ordervector.back().getOrderId();

        int newNumber = std::stoi(lastId.substr(3)) + 1;

        if (newNumber < 10)
            return "OR000" + newNumber;
        if (newNumber < 100)
            return "OR00" + newNumber;
        if (newNumber < 1000)
            return "OR0" + newNumber;
        return "OR" + newNumber;
    }
    bool checkCustomerDetails(const std::string phoneNo) {
        for (auto & i : ordervector) {
            if (i.getphoneNo()==phoneNo) {
               return  true;
            }
        }
        return false;
    }

#include <cctype>

    bool validatePhoneNo(const std::string& phoneNo) {
        if (phoneNo.length() != 10)
            return false;
        if (phoneNo[0] != '0')
            return false;
        for (char c : phoneNo) {
            if (!std::isdigit(c))
                return false;
        }
        return true;
    }


    std::string getCustomerName(const std::string& phoneNo) {
        for (auto & i : ordervector) {
           if (i.getphoneNo()==phoneNo) {
               return i.getCustomerName();
           }
        }
        return nullptr;
    }
    bool validateNumber(const std::string& number) {
        if (number.empty())
            return false;

        for (char c : number) {
            if (std::isdigit(c))
                return false;
        }
        return true;
    }


    bool placeOrder(Order order) {
        ordervector.push_back(order);
        return true;
    }

};

OrderController::OrderController(/* args */)
{
}

OrderController::~OrderController()
{
}
#endif