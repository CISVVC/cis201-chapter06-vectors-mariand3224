/*
File: transactionlog.cpp 
Description: log
Author: Marianna Delrio
Email: mariand3224@student.vvc.edu
Date of creation: 
*/


#include "transaction.h"
#include "transactionlog.h"
#include<iostream>
#include<string>
#include<vector> 


    Transactionlog::Transactionlog()
{} 

    void Transactionlog::read()
{
    Transaction r;
    bool more = true;
    while(more)
    {
        r.read();
    m_transactions.push_back(r);
    char answer;
    std::cout << "More transactions? (Y/N) " <<std::endl;
    std::cin >> answer;
    if( answer == 'N' || answer == 'n')
    more = false; 
}

compute();

}

void Transactionlog::compute()
{
    double balance = 0.0;
    for(int i = 0; i < m_transactions.size(); i++)
{

    balance += m_transactions[i].get_amount();
    daily_balances.push_back(balance);

} 
}






void Transactionlog::print() 
{
    for(int i = 0; i < m_transactions.size(); i++)
{
    m_transactions[i].print();
    std::cout << "Balance:" << daily_balances[i] << std::endl;
}
    std::cout << "Average daily interest charges: " << average_daily_balance() << std::endl;
    std::cout << "Minimum daily interest charges:" << min_daily_balance(daily_balances);



}


double Transactionlog::average_daily_balance()
{
    double sum = 0.0;
    for(int i = 0; i < MAXDAY; i++)
    {
        sum += m_transactions[i].get_amount();
    }
    return (sum / MAXDAY)*RATE;

}


double Transactionlog::min_daily_balance(const std::vector<double> &v)

{
    double min_balance = v[0];
    for(int i = 0; i < m_transactions.size(); i++)
    {
        if(v[i] < min_balance)
    min_balance = v[i];
    }
    return min_balance * RATE; 
}


