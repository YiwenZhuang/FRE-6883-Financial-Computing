//
//  GmtrAsianCall.hpp
//  HW9-Q3
//
//  Created by Yiwen Zhuang on 4/16/21.
//

#ifndef GmtrAsianCall_hpp
#define GmtrAsianCall_hpp

#include <stdio.h>
#include "PathDepOption04.hpp"

class GmtrAsianCall : public PathDepOption
{
public:
    double K;
    GmtrAsianCall(double T_, double K_, int m_)
    {
        T = T_; K = K_; m = m_;
    }
    double Payoff(SamplePath& S);
    double PriceByBSFormula(BSModel Model);
    double DeltaByBSFormula(BSModel Model);
};

#endif /* GmtrAsianCall_hpp */
