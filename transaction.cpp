/*
File: transaction.cpp 
Description: cpp file
Author: Marianna Delrio
Email: Mariand3224@student.vvc.edu
Date of creation:
*/

#include<iostream>
#include<string>
#include<vector>
#include "transaction.h"

Transaction::Transaction()
{
    day = 0;
    amount = 0.0;
}

void Transaction::read()
{
    std::cout << "DAY: ";
    std::cin >> day;
    std::cout << "AMOUNT: "; 
    std::cin >> amount;
    std::cin.ignore();
    std::cout << "DESCRIPTION: ";
    std::getline(std::cin,description);
    
}

void Transaction::print() const
{
    std::cout << "Day: " << day << std::endl;
    std::cout << "Amount: " << amount << std::endl;
    std::cout << "Description: " << description << std::endl;

} 


int Transaction::get_day()
{
     return day;
}

double Transaction::get_amount()
{
    return amount; 
}
