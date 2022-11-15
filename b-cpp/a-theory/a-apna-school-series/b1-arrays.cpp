#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;


int main(){
    int array[4] ;
    int array2[5] = {1,2,3,4,5};
    int array3[5] = {1,2}; // even though we have less elements, its fine


    int length ;
    cin >> length;
    int array4[length];
    for (int i=0; i<length ; i++){
        cin >> array4[i] ;
    }

    for (int i=0; i<length ; i++){
        cout << array4[i] << "\t" ;
    }

    cout << endl;

    // find max of the array

    int maximum = INT_MIN;

    for (int i=0; i<length; i++){
        maximum = max(maximum, array4[i]);
    }

    cout << maximum << endl;

    return 0;
}