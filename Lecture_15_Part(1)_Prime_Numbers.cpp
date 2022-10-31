#include<iostream>
using namespace std;

bool IsPrime(int num){
    for(int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a, b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;

    for(int i=a; i<=b; i++){
        if(IsPrime(i)){
            cout<<i<<endl;
        }
    }

    return 0;
}