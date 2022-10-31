#include<iostream>
using namespace std;

int factorial(int num){
    int factorial = 1;
    if(num<0){
        cout<<"Sorry can't find the factorial of negative number"<<endl;
    }
    else if(num==0 || num==1){
        cout<<factorial;
    }
    else{
        for(int i=2; i<=num; i++){
            factorial = factorial * i;
        }
            cout<<factorial<<endl;
    }
    return factorial;
}

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    factorial(num);

    return 0;
}