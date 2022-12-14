#include<iostream>
#include <climits>
#include <bits/stdc++.h>

using namespace std;

// Take the minimum and swap with first repeatedly; and move ahead & repeat
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
        cout << arr[i] << " ";
    }

    cout <<  endl;
}

// swap if elem on right is less than left throughout the array ; repeat n times
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
        cout << arr[i] << " ";
    }
    cout <<  endl;
}

void bubble_sort2(int arr[], int length){
    int counter = 0;
    while (counter < length){
        for (int i = 0; i < length - 1; i++){
            if (arr[i] > arr[i+1]){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
        counter += 1;
    }

    for (int i=0; i< length; i++){
        cout << arr[i] << " ";
    }
    cout <<  endl;
}

// Insert an element from an Unsorted Array to its correct position in sorted array
void insertion_sort(int arr[], int length){
    for (int i=1; i<length ; i++){
        int current = arr[i];
        int tmp = i-1;
        while (tmp >= 0 && arr[tmp] > current){
            arr[tmp + 1] = arr[tmp];
            tmp--;
        }
        arr[tmp + 1] = current;
    }

    for (int i=0; i< length; i++){
        cout << arr[i] << " ";
    }
    cout <<  endl;
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
    bubble_sort2(arr, length);
    insertion_sort(arr, length);
    return 0;

}