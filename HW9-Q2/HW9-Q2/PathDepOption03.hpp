//
//  PathDepOption03.hpp
//  HW9-Q2
//
//  Created by Yiwen Zhuang on 4/16/21.
//

#ifndef PathDepOption03_hpp
#define PathDepOption03_hpp

#include <stdio.h>

#include "BSModel01.hpp"

class PathDepOption
{
public:
    double T, Price, PricingError, delta, gamma;
    int m;
    virtual double Payoff(SamplePath& S) = 0;
    double PriceByMC(BSModel Model, long N, double epsilon);
};
class ArthmAsianCall : public PathDepOption
{
public:
    double K;
    ArthmAsianCall(double T_, double K_, int m_) { T = T_; K = K_; m = m_; }
    double Payoff(SamplePath& S);
};

#endif /* PathDepOption03_hpp */
