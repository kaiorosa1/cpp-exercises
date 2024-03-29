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
#include "math_utils.h"

// custom namespace
namespace test {
    // templatetize a function
    template <typename T>
    void swap(T &a, T &b){
        T temp =a;
        a = b;
        b= temp;   
    }
}


int main(int argc, char** argv) {
    
    // REVIEW BASIC CONCEPTS
    // how to print stuff out c++ style
    std::cout << "This is only a test" << std::endl;
    // how to get input from the user
//    int nTimes;
//    std:: cout << "How many times you said?" << std::endl;
//    std::cin >> nTimes; // to get input from the user use the cin obj from the std (namespace?)
//    for(int i =0;i< nTimes;i++){
//        std::cout<< i+1 << " ";
//    }
//    std::cout<< std::endl;
    // custom functions 
//    print_name();
    // function overloading example
    Rectangle rect;
    rect.length = 10;
    rect.width = 10;
    
    // all this function should return the same value
    std::cout << area(rect.length,rect.width) << std::endl;
    std::cout << area(rect.length) << std::endl;
    std::cout << area(rect) << std::endl;
    
    // default parameters
    std::cout << pow(4,3) << std::endl;
    std::cout<< pow(4) << std::endl;
    
    // swap the values 
    std::string first_name = "Kaio";
    std::string last_name = "Rosa";
    
    std::cout << "Names:"<< std::endl;
    std::cout << first_name << " "<< last_name<< std::endl; 
    // swapping the names
    test::swap(first_name,last_name);
    std::cout << "Names Swapped!"<< std::endl;
    std::cout << first_name << " "<< last_name<< std::endl;
    
    int numbers[] = {2,3};
    std::cout << "Numbers:"<< std::endl;
    std::cout << numbers[0] << " "<< numbers[1]<< std::endl;
    // swapping numbers
    test::swap(numbers[0],numbers[1]);
    std::cout << "Numbers Swapped!"<< std::endl;
     std::cout << numbers[0] << " "<< numbers[1]<< std::endl;
     
     
    return 0;
}

