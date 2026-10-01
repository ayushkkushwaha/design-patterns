#pragma once
#include "command.h"
#include "emailservice.h"

class EmailCommand : public Command
{
    EmailService *email;

public:
    EmailCommand(EmailService* email) : email(email){}

    void run() override{
        email->sendMail();
    }
};