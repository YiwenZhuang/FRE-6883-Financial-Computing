//
//  BSModel01.hpp
//  HW9-Q3
//
//  Created by Yiwen Zhuang on 4/16/21.
//

#ifndef BSModel01_hpp
#define BSModel01_hpp

#include <stdio.h>
#include <vector>
#include <cstdlib>
#include <ctime>        // for srand()
#pragma once

using namespace std;

typedef  vector<double> SamplePath;
class BSModel
{
public:
    double S0, r, sigma;
    BSModel(double S0_, double r_, double sigma_)
    {
        S0 = S0_; r = r_; sigma = sigma_;
        srand(time(NULL));
    }
    void GenerateSamplePath(double T, int m, SamplePath& S);
};
#endif /* BSModel01_hpp */
