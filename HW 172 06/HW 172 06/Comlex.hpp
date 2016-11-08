//
//  Comlex.hpp
//  HW 172 06
//
//  Created by Eric Klicker on 11/7/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#ifndef Comlex_hpp
#define Comlex_hpp
#include <string>
#include <stdio.h>

class Complex
{
private:

double a;
double b;


public:
    
Complex(double a,double b);
Complex(double a);
Complex();

double getRealPart();
double getImaginaryPart();
double add;
double subtract;
double multiply;
double abs;
std::string toString (double a, double b);
};


#endif /* Comlex_hpp */
