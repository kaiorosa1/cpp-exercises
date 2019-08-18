/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kaio Rosa
 *
 * Created on 15 de Agosto de 2019, 22:20
 */


#include <iostream>

/*
 * 
 */
int main(int argc, char** argv) {
    
    // REVIEW BASIC CONCEPTS
    // how to print stuff out c++ style
    std::cout << "This is only a test" << std::endl;
    // how to get input from the user
    int nTimes;
    std:: cout << "How many times you said?" << std::endl;
    std::cin >> nTimes; // to get input from the user use the cin obj from the std (namespace?)
    for(int i =0;i< nTimes;i++){
        std::cout<< i+1 << " ";
    }
    //
    return 0;
}

