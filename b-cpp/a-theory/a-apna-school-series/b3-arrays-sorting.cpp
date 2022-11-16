#include<iostream>
#include <climits>
#include <bits/stdc++.h>

using namespace std;


void selection_sort(int arr[], int length){
    for (int i= 0; i< length - 1; i++){
        for (int j= i + 1; j< length; j++){
            if (arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        
    }
    for (int i=0; i< length; i++){
        cout << arr[i] << endl;
    }
}

void bubble_sort(int arr[], int length){
    for (int i=0; i< length-1; i++){
        for (int j= 1; j< length - i; j++){
            if (arr[i+j+1] < arr[i+j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i=0; i< length; i++){
        cout << arr[i] << endl;
    }
}

int main(){

    int length ;
    cin >> length;

    int arr[length];

    for(int i=0; i< length; i++){
        cin >> arr[i];
    }

    selection_sort(arr, length);
    bubble_sort(arr, length);
    return 0;

}