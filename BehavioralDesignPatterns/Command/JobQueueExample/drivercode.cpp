#include "bits/stdc++.h"
#include "jobqueue.h"
#include "command.h"
#include "emailservice.h"
#include "inventryservice.h"
#include "paymentservice.h"
#include "paymentcommand.h"
#include "inventrycommand.h"
#include "emailcommand.h"

using namespace std;

int main(){
    InventryService inventry;
    PaymentService payment;
    EmailService email;

    JobQueue job;
    job.addTask(new PaymentCommand(&payment));
    job.addTask(new EmailCommand(&email));
    job.addTask(new InventryCommand(&inventry));
    job.processJobs();

    return 0;
}