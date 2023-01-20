#include <iostream>
#include <math.h>
using namespace std; 
int num(int x)
{
    int sum=0;
    while(x)
    {
        sum+=1;
        x/=10;
    }
    return sum ;
}
int rev(int y)
{
    int sum=0;
    while (y)
    {
        int p=y%10;
        sum=(sum*10)+(p);
        y/=10;
    }
    return sum;
}
int main ()
{
    int n,k,r=0;
    cin >> n >> k ;
    if (k>0)
    {
        while(k--)
        {
            int p=n%10; 
            n/=10; 
            int q=num(n); 
            r=p*(pow(10,q))+n; 
            n=r;
        }
        cout << r << endl; 
    }
    else 
    {
        int m=rev(n);
        while (k++)
        { 
            int p=m%10; 
            m/=10; 
            int q=num(m); 
            r=p*(pow(10,q))+m; 
            m=r; 
        }
        int f=rev(m);
        cout << f << endl;
    }

}
