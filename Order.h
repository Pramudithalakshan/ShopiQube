#ifndef ORDER_H
#define ORDER_H

#include <string>
class Order
{
private:
    std::string orderId;
    std::string custoemrName;
    std::string phoneNo;
    int qty;
    int status;
public:
    Order(std::string OrderId,std::string customerName,std::string phoneNo,int qty,int status){
        this->orderId=orderId;
        this->custoemrName=custoemrName;
        this->phoneNo=phoneNo;
        this->qty=qty;
        this->status=status;
    }
    std::string getOrderId(){
        return orderId;
    }
    std::string getCustomerName(){
        return custoemrName;
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