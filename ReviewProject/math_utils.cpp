/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "math_utils.h"

double pow(int base,int exponent){
    int total=1;
    for(int i =0; i< exponent;i++){
        total*=base;
    }
    return total;
}
double area(double length, double width){
    return length* width;
}
double area(double length){
    return length*length;
}
double area(Rectangle rect){
    return rect.length* rect.width;
}
void print_name(){
    std::cout << "Name is being printed in a function" << std::endl;
}
