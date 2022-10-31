#include<iostream>
using namespace std;

int factorial(int num){
    int factorial = 1;
    for(int i=1; i<=num; i++){
        factorial *= i;
    }
    return factorial;
}

int nCr(int n, int r){
    int n_factorial = factorial(n);
    int r_factorial = factorial(r);
    int n_r_factorial = factorial(n-r);

    int ans = (n_factorial)/((n_r_factorial) * (r_factorial));
    return ans;
}

int main(){
    int n, r;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<"Enter the value of r: "<<endl;
    cin>>r;

    cout<<nCr(n, r);

    return 0;
}