#include <iostream>
#include <fstream>
using namespace std;
int n,m,k,maxi=0;
int main()
{
    fstream fin("cifra.in");
    ofstream fout("cifra.out");
    fin>>n;
    m=n;
    while(n!=0)
    {
        if((n%10)>maxi)
            maxi=(n%10);
        n/=10;
    }
    while(m!=0)
    {
        if((m%10)==maxi)
            k++;
        m/=10;
    }
    fout<<maxi<<" apare de "<<k<<" ori";
    fin.close();
    fout.close();
    return 0;
}
