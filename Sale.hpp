/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sale.hpp
 * Author: jairoarmando
 *
 * Created on 1 de abril de 2020, 4:45 p. m.
 */

#ifndef SALE_HPP
#define SALE_HPP

#include <string>

class Sale {
public:
    Sale();
    Sale(std::string, double, short int);
    void setId( std::string );
    void setCost( double );
    void setAmount( short int );
    std::string getId();
    double getCost();
    short int getAmount();
    double liquidationSale();
    virtual ~Sale();
private:
    std::string id;
    double cost;
    short int amount;
    
    double calculateDiscount();

};

#endif /* SALE_HPP */

