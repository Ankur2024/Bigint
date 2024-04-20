#include <bits/stdc++.h>
#include "BigInt.h"
using namespace std;

BigInt::BigInt(const BigInt & a){
    digits = a.digits;
}

BigInt::BigInt(const string & s){
    digits = "";
    int start = 0;
    bool isNegative = false; 
    if (s[0] == '-') {
        isNegative = true;
        start = 1; 
        if (s.size() == 1)
            throw("ERROR: Invalid BigInt format");
    }
    int n = s.size();
    for (int i = n - 1; i >= start; i--){
        if(!isdigit(s[i]))
            throw("ERROR: Invalid character in BigInt");
        digits.push_back(s[i] - '0');
    }
    if (digits.empty())
        throw("ERROR: Invalid BigInt format");
    if (isNegative)
        digits.push_back('-');
}

BigInt::BigInt(unsigned long long nr){
    do{
        digits.push_back(nr % 10);
        nr /= 10;
    } while (nr);
}

BigInt::BigInt(BigInt & a){
    digits = a.digits;
}