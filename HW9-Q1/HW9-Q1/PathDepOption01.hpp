//
//  PathDepOption01.hpp
//  HW9-Q1
//
//  Created by Yiwen Zhuang on 4/10/21.
//

#ifndef PathDepOption01_hpp
#define PathDepOption01_hpp

#include <stdio.h>
#pragma once

#include "BSModel01.hpp"
class PathDepOption {
public:
    double T;
    int m;
    double PriceByMC(BSModel Model, long N);
    virtual double Payoff(SamplePath& S)=0;
};

class ArthmAsianCall: public PathDepOption {
public:
    double K;
    ArthmAsianCall(double T_, double K_, int m_) {T=T_; K=K_; m=m_;}
    double Payoff(SamplePath& S);
};

/* Derive a class to compute the prices of European call.*/
class EurCall: public PathDepOption {
public:
    double K;
    EurCall(double T_, double K_) {T = T_; K = K_; m =1;}
    double Payoff(SamplePath& S);
};

/* Derive a class to compute the prices of European put.*/
class EurPut: public PathDepOption {
public:
    double K;
    EurPut(double T_, double K_) {T = T_; K = K_; m = 1;}
    double Payoff(SamplePath& S);
};

#endif /* PathDepOption01_hpp */
