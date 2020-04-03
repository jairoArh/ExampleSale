/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jairoarmando
 *
 * Created on 1 de abril de 2020, 4:44 p. m.
 */

#include <iostream>
#include <cstdlib>
#include <vector>
#include "Sale.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    /*Sale skirt("Falda Escocesa",250000,2);
    cout<<"Se vende "<<skirt.getId()<<" El costo es "<<skirt.getCost()<<" Se vendio "<<skirt.getAmount()<<" Unidades"<<endl;
    
    Sale* pant = new Sale("Pantalon",220000,1);  
    cout<<"Se vende "<<pant->getId()<<" El costo es "<<pant->getCost()<<" Se vendio "<<pant->getAmount()<<" Unidades"<<endl;
    
    Sale* shert = new Sale();
    
    cout<<"Objeto "<<shert->getCost()<<endl;
    
    delete(pant);
    delete(shert);*/
    
    vector<int> numbers;
    
    numbers.push_back(34);
    numbers.push_back(79);
    numbers.push_back(18);
    numbers.push_back(72);
    numbers.push_back(96);
    
    for ( int value : numbers ){
        cout<<value<<"\t";
    } 
    cout<<endl;
    for( int i = 0 ; i < numbers.size() ; i++ ){
     cout<<numbers[i]<<"\t";   
    }
    
    
    cout<<endl<<"********End*********"<<endl;
    
    

    return EXIT_SUCCESS;
}

