#include<iostream>
#include<math.h>
using namespace std;
int main(){
int r,n;
cout<<"enter n";
cin>>n;
while(n>0)
{
    r=n%10;
    n=n/10;
    cout<<r;
}
return 0;
}
