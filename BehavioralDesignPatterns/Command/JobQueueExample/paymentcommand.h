#pragma once
#include "command.h"
#include "paymentservice.h"

using namespace std;

class PaymentCommand : public Command{

    PaymentService* payment;
public:
    PaymentCommand(PaymentService* payment) : payment(payment){}
    void run() override{
        payment->processPayment();
    }
};