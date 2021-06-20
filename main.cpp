#include <iostream>

using namespace std;
void imog(int x, int y, int &rez)
{
    int nr1,nr2,p=1;
    nr1=nr2=0;
    while(x!=0)
    {
        if(x%2!=0)
        {
            nr1=(x%10)*p+nr1;
            p=p*10;
        }
        x=x/10;
    }
    while(y!=0)
    {
        if(y%2!=0)
            nr2=nr2*10+y%10;
        y=y/10;
    }
    if(nr1==nr2 && nr1!=0)
        rez=1;
    else
        rez=0;
}
int main()
{
    int z;
    imog(523,84536,z);
    cout<<z;
    return 0;
}
