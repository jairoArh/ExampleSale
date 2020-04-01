/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sale.cpp
 * Author: jairoarmando
 * 
 * Created on 1 de abril de 2020, 4:45 p. m.
 */

#include "Sale.hpp"

Sale::Sale() {
}

Sale::Sale(std::string id, double cost, short int amount) {
    this->setId( id );
    Sale::setCost( cost );
    this->amount = amount;
}

void Sale::setId( std::string id ){
    Sale::id = id;
}

void Sale::setCost( double cost ){
    Sale::cost = cost;
}

std::string Sale::getId(){
    return Sale::id;
}

double Sale::getCost(){
    return Sale::cost;
}

short int Sale::getAmount(){
    return Sale::amount;
}

Sale::~Sale() {
}

