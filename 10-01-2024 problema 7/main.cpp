#include <iostream>
#include <fstream>
using namespace std;
int a,b,i,i1,ogl;
int main()
{
    fstream fin("pal.in");
    ofstream fout("pal.out");
    fin>>a>>b;
    for(i=a;i<=b;i++)
    {
        i1=i;
        ogl=0;
        while(i1!=0)
        {
            ogl=ogl*10+i1%10;
            i1/=10;
        }
        if(i==ogl)
            fout<<i<<" ";
    }
    fin.close();
    fout.close();
    return 0;
}
