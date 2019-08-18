/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   math_utils.h
 * Author: Kaio Rosa
 *
 * Created on 18 de Agosto de 2019, 14:31
 */

#ifndef MATH_UTILS_H
#define MATH_UTILS_H

struct Rectangle{
    double length;
    double width;
};
void print_name();
// function  overload 
double area(double length,double width);
double area(double length);
double area(Rectangle rect);
// default parameters
double pow(int base,int exponent=2);

#endif /* MATH_UTILS_H */

