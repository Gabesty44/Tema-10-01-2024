#include <iostream>
#include <fstream>
using namespace std;
int a,i,b,d1,d2,maxi=0,k,j,l;
int main()
{
    fstream fin("divizori.in");
    ofstream fout("divizori.out");
    fin>>a>>b;
    for(i=a;i<=b;i++)
    {
        k=0;
        for(d1=1;d1<=i;d1++)
            if(i%d1==0)
                k++;
        if(k>maxi)
            maxi=k;
    }
    for(j=a;j<=b;j++)
    {
        l=0;
        for(d2=1;d2<=j;d2++)
        {
            if(j%d2==0)
                l++;
        }
        if(l==maxi)
            fout<<j<<" ";
    }
    fin.close();
    fout.close();
    return 0;
}
