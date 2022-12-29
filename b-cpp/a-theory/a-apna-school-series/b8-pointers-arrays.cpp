// Variable name of the array points to the first address of the array
#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(){

    int arr[] = {10,20,30};
    cout << arr << endl; // 0x7ff7b220c11c or address to the first index of the array
    cout << *arr << endl; // 10 or the zeroth element
    int *ptr = &arr[0]; // As expected, its the same 0x7ff7b220c11c
    cout << ptr << " " << &arr[0]<<endl; // Writing arr or &arr[0] refers to the same address

    for (int i=0; i< 3; i++){
        cout << *(arr+i) << endl; // prints 10 20 30
    }
}