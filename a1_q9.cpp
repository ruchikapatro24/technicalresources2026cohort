#include <iostream>
using namespace std;
int main(){
    int num1,num2,gcd;
    cin >> num1 >> num2;
    // swapping num2 and num1 (we want num1 to be greater always)
    if(num2>num1){
        int temp=num2;
        num2=num1;
        num1=temp;
    }
    for(int i=1; i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    cout << gcd << endl;
    int max=num1;
    while(1){
    if(max%num1==0 && max%num2==0){
        cout << max;
        break;
    }
    max++;
    }

}
