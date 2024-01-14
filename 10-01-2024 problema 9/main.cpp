#include <iostream>
#include <fstream>
using namespace std;
int n,i,d,s;
int main()
{
    fstream fin("perfect.in");
    ofstream fout("perfect.out");
    fin>>n;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(d=1;d<=i;d++)
            if(i%d==0)
                s+=d;
        if(s-i==i)
            fout<<i<<" ";
    }
    fin.close();
    fout.close();
    return 0;
}
