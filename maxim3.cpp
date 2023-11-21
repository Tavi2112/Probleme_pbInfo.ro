#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("maxim3.in");
ofstream fout ("maxim3.out");
int main()
{
    int a,b,c;
    fin>>a>>b>>c;
    if(a<c && b<c)
        fout<<c;
    else
        if(b<a && c<<a)
            fout<<a;
        else
            fout<<b;
    return 0;
}
