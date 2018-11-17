/*
File: transaction.h 
Description: Header file 
Author: Marianna Delrio
Email: Mariand3224@student.vvc.edu
Date of creation:
*/

#ifndef TRANSACTION
#define TRANSACTION
#include<iostream> 
#include<string>

class Transaction
{
 public:
    Transaction();
    void read();
    int get_day();
    void print() const ;
    double get_amount();
    
private:
    int day;
    double amount;
    std::string description;
};

#endif



