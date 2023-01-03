// Function calls itself to make the problem smaller
// Uses Stacks
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <climits>

using namespace std;

int sum_n(int n){
    if (n == 1){
        return 1;
    }
    else{
        return n + sum_n(n-1);
    }
}

int factorial(int n){
    if (n == 1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int fibo(int n){
    if ((n == 1) || n == 2){
        return 1;
    }
    
    return fibo(n-2) + fibo(n-1);
}

int main(){
    int n = 6;
    cout << sum_n(n) << endl;
    cout << factorial(n) << endl;
    cout << fibo(n) << endl;
}