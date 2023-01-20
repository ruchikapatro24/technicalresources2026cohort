#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t>0){
        int n;
        cin >> n;
        int d=2;
        int c=0;
        while (d<=n-1){
            if (n%d==0){
                cout << "not prime" << endl;
                c=1;
                break;
            }
            d=d+1;
         }
         if (c==0){
            cout << "prime" << endl;
         }
         t=t-1;
    }
}
