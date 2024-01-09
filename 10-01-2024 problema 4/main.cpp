#include <iostream>
#include <fstream>
using namespace std;
int n,s=0,ogl=0;
int main()
{
    fstream fin("ogl.in");
    ofstream fout("ogl.out");
    fin>>n;
    while(n!=0)
    {
        s+=(n%10);
        n/=10;
    }
    while(s!=0)
    {
        ogl=ogl*10+s%10;
        s/=10;
    }
    fout<<ogl;
    return 0;
}
