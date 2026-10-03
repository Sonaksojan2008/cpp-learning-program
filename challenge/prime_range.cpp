#include <iostream>
using namespace std;
int main(){
    int start,end;
    cin>>start>>end;
    for(int i=start;i<=end;i++){
        bool prime = true;
        if(i <= 1){
            prime = false;
        } else {
            for(int j=2; j*j<=i; j++){
                if(i%j == 0){
                    prime = false;
                    break;
                }
            }
        }
        if(prime){
            cout<< i << " ";
        }
    }
    return 0;
}