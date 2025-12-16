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
        else if (newNumber < 100)
            return "OR00" + newNumber;
        else if (newNumber < 1000)
            return "OR0" + newNumber;
        else
            return "OR" + newNumber;
    }
};

OrderController::OrderController(/* args */)
{
}

OrderController::~OrderController()
{
}
#endif