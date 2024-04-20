#include <bits/stdc++.h>
#include "BigInt.h"
using namespace std;

istream &operator>>(istream &in, BigInt &a) {
    string s;
    in >> s;
    int start = 0;
    bool isNegative = false;
    if (s[0] == '-') {
        isNegative = true;
        start = 1;
        if (s.size() == 1)
            throw("INVALID NUMBER");
    }
    int n = s.size();
    a.digits.clear(); 
    if (a.digits.empty()) 
        throw("INVALID NUMBER");

    for (int i = n - 1; i >= start; i--) {
        if (!isdigit(s[i]))
            throw("INVALID NUMBER");
        a.digits.push_back(s[i] - '0');
    }
    if(isNegative)
        a.digits.push_back('-');
    return in;
}

ostream &operator<<(ostream &out, const BigInt &a) {
    bool isNegative = false;
    if (!a.digits.empty() && a.digits.back() == '-') 
        isNegative = true;
    if (isNegative) 
        out << "-";
    for (int i = a.digits.size() - 1; i >= 0; --i) {
        if (a.digits[i] != '-') 
            out << (char)(a.digits[i] + '0');
    }
    return out;
}


