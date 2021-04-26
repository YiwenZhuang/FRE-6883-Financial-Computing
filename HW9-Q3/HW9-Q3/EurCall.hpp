//
//  EurCall.hpp
//  HW9-Q3
//
//  Created by Yiwen Zhuang on 4/16/21.
//

#ifndef EurCall_hpp
#define EurCall_hpp

#include <stdio.h>

class EurCall
{
public:
    double T, K;
    EurCall(double T_, double K_) { T = T_; K = K_; }
    double d_plus(double S0, double sigma, double r);
    double d_minus(double S0, double sigma, double r);
    double PriceByBSFormula(double S0, double sigma, double r);
    double VegaByBSFormula(double S0, double sigma, double r);
    double DeltaByBSFormula(double S0, double sigma, double r);
    double N(double x);
};

#endif /* EurCall_hpp */
