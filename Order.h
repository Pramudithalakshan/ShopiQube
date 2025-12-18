#ifndef ORDER_H
#define ORDER_H

#include <string>
class Order
{
private:
    std::string orderId;
    std::string phoneNo;
    std::string customerName;
    int qty;
    int status;
public:
    Order(std::string OrderId,std::string phoneNo,std::string customerName,int qty,int status){
        this->orderId=orderId;
        this->customerName=customerName;
        this->phoneNo=phoneNo;
        this->qty=qty;
        this->status=status;
    }
    Order(){}
    std::string getOrderId(){
        return orderId;
    }
    std::string getCustomerName(){
        return customerName;
    }
    std::string getphoneNo(){
        return phoneNo;
    }
    int getQty(){
        return qty;
    }
    int getStatus(){
        return status;
    }
};

#endif