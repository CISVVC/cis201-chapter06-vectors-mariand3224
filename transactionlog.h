/*
File: transactionlog.h 
Description: log
Author: Marianna Delrio
Email: mariand3224@student.vvc.edu
Date of creation: 
*/



#ifndef TRANSACTION_LOG
#define TRANSACTION_LOG
#include<vector>
#include "transaction.h" 


class Transactionlog

{ 
    private:

    const int MAXDAY = 30;
    const double RATE = .005; 

    std::vector<Transaction> m_transactions;
    std::vector<double> daily_balances;
    double m_balance;
    double m_min_balance; 
    double m_average_balance; 

 public:
    void read();
    void compute(); 
    double  min_daily_balance(const std::vector<double> &v);
    double average_daily_balance();
    void print();
    Transactionlog(); 




};
 
#endif 
