#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sum.in");
ofstream fout("sum.out");
int main()
{
    int a, b, S;
    fin>>a>>b;
    S=a+b;
    fout<<S;
    return 0;
}
