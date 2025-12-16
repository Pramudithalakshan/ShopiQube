#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
class Customer
{
private:
    std::string orderId;
    std::string custoemrName;
    std::string phoneNo;
    int qty;
    int status;
public:
    Customer(string OrderId,string customerName,string phoneNo,int qty,int status){
        this->orderId=orderId;
        this->custoemrName=custoemrName;
        this->phoneNo=phoneNo;
        this->qty=qty;
        this->status=status;
    }
    string getOrderId(){
        return orderId;
    }
    string getCustomerName(){
        return custoemrName;
    }
    string getphoneNo(){
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