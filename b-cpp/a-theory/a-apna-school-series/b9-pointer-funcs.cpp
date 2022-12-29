// Variable name of the array points to the first address of the array
#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

void swap(int *a, int *b){ // call by reference
    int temp = *a;
    *a = *b;
    *b  = temp;

}

int main(){

    int a = 2;
    int b = 3;

    int *aptr = &a;
    int *bptr = &b;

    swap(aptr,bptr);
    cout << a << " " << b << endl;
}