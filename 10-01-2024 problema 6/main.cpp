#include <iostream>
#include <fstream>
using namespace std;
int n,p,Rp,Ri,pp,pi;
int main()
{
    fstream fin("nr.in");
    ofstream fout("nr.out");
    fin>>n;
    while(n!=0)
    {
        Rp=Ri=0;
        pp=pi=1;
        while(n!=0)
        {
            if((n%10)%2==0)
            {
                Rp+=pp*(n%10);
                pp*=10;
                n/=10;
            }
            else
            {
                Ri+=pi*(n%10);
                pi*=10;
                n/=10;
            }
        }
        if(Rp>Ri)
            fout<<Rp<<" ";
        else
            fout<<Ri<<" ";
        fin>>n;
    }
    fin.close();
    fout.close();
    return 0;
}
