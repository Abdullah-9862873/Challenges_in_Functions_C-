/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

Row and Col are just Binomial Coefficients like first one (1)
     is basically 0C0.. Then second row is (1C0 1C1) and so on
*/



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
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    for(int i=0; i<num; i++){
        for(int j=0; j<=i; j++){
            cout<<nCr(i, j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}