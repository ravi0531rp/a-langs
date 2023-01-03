#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;


int main(){

    int a = 2;
    int *aptr = &a;

    int **b = &aptr;
    cout << b << " " << *b << " " << **b << endl; // 0x7ff7aff1b2c0 0x7ff7aff1b2cc 2 as output
    **b = 12;
    cout << a ; // 12
}