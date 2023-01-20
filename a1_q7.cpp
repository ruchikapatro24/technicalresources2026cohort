#include <iostream>
#include <cmath> // can use <math.h> as well
using namespace std;
int main()
{
    int n;
    cin >> n;
    int counter=1;
    int ans=0;
    while(n!=0){
        int r=n%10;
        n=n/10;
        ans=ans+counter*pow(10,r-1); 
        counter++;
    }
    cout << ans << endl;
    return 0;
}
