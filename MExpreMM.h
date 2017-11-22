#ifndef MEXPREMM_H
#define MEXPREMM_H
#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

class MExpreMM
{
    public:
        MExpreMM(string x);
        int opCount(string x, string a);
        string tempOp();
        string varName();
        friend istream& operator >> (istream& os,MExpreMM& a);
        friend ostream& operator << (ostream &os, MExpreMM& a);
    private:
        string input;
};

#endif // MEXPREMM_H
