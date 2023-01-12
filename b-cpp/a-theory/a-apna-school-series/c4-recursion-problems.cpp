// Function calls itself to make the problem smaller
// Uses Stacks
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <climits>

using namespace std;

bool check_sorted(int arr[], int n){
    if (n==1){
        return true;
    }
    return (arr[0] < arr[1]) && check_sorted(arr+1, n-1);
}

int first_occurence(int arr[] , int n , int i, int key){
    if (i == n){
        return -1;
    }
    if (arr[i] == key){
        return i;
    }
    return first_occurence(arr, n, i+1, key);
}

int last_occurence(int arr[], int n, int i, int key){
    if (i == n){
        return -1;
    }
    int rest_array = last_occurence(arr,n,i+1,key);
    if (rest_array != -1){
        return rest_array;
    }
    if (arr[i] == key){
        return i;
    }
    return -1;
}



int main(){
    int arr[5] = {1,2,3,4,5};
    cout << check_sorted(arr, 5) << endl;
    int arr2[8] = {3,6,4,2,6,9,2,7};
    cout << first_occurence(arr2, 8, 0 , 2) << endl ;
    cout << first_occurence(arr2, 8, 0 , -33) << endl;

    cout << last_occurence(arr2, 8, 0 , 2) << endl ;
    cout << last_occurence(arr2, 8, 0 , -33) << endl;

}