#include <iostream>
using namespace std;
int main(){
    int n, original,sum = 0;
    cin>>n;
    original = n;
    while(n!=0){
        int digit = n%10;
        sum += digit*digit*digit;
        n = n/10;
    }
    if(sum == original){
        cout<< "Armstrong";
    } else {
        cout<< "Not Armstrong";
    }
    return 0;
}