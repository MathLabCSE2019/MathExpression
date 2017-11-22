#include <iostream>
#include "MExpreMM.h"
using namespace std;

struct vars{
    string name;
    int type;
    double value;
};

int main()
{
string input;
getline(cin,input);
MExpreMM in (input);
cout<<in.tempOp();

return 0;
}
