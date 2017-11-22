#include "MExpreMM.h"
#include <string.h>
#include <iostream>
using namespace std;
MExpreMM::MExpreMM(string x):input(x)
{
}
int MExpreMM::opCount(string x, string a)
{
    int countop =0;
    for(int i=0;i<x.length();i++){
        if(x.substr(i,1)==a){
            countop++;
        }
    }
return countop;
}
string MExpreMM::tempOp()
{   string x = input;
    string temp;
    x=x.substr(x.find_first_of('=')+1,x.find_first_of(';')-x.find_first_of('=')-1);
    size_t start = x.find_first_of('(');
    if(start==string::npos){
        start = x.find_first_of("*/");
        if(start==string::npos){
            start = x.find_first_of("+-");
            if(start==string::npos){

            }
            else{

            }
        }
        else{

        }
    }
    else{
       // int brCount = opCount(x,"(");
        int brCount =0;
        int endBrPos=0;
        for(int i=start+1;i<x.length();i++){
            if(x.substr(i,1)=="("){
                brCount++;
            }
            else if((x.substr(i,1)==")") && (brCount!=0)){
                brCount--;
            }
            else if((x.substr(i,1)==")") && (brCount==0)){
                endBrPos=i;
                break;
            }
        }
        temp = x.substr(start+1,endBrPos-start-1);
    }
    return x;
}
string MExpreMM::varName()
{
    string x = input;
    x=x.substr(0,x.find_first_of('=')-1);
    for(int i=0;i<x.length();i++){
        if(x.substr(i,1)==" ")x.erase(i,1);
    }
    return x;
}

istream& operator >>(istream& os,MExpreMM& a)
{

}
ostream& operator << (ostream &os, MExpreMM& a)
{

}
