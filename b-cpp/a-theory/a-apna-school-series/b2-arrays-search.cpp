#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int linear_search(int arr[], int length, int key){
    for (int i=0; i<length; i++){
        if (arr[i] == key){
            return i;
        }
        else{
            continue;
        }   
    }
    return -1;
}

int binary_search(int arr[], int length, int key){
    int start=0;
    int end = length;

    while (start <= end){
        int mid = (start + end)/2;
        if (arr[mid] == key){
            return mid;
        }
        else{
            if (arr[mid] > key){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
    
    }
    return -1;
}

int recursive_binary_search(int arr[], int length, int key){
    
}

int main(){
    int length;
    cin >> length;

    int arr[length];

    for (int i=0; i< length; i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;

    // int index ;
    // index = linear_search(arr, length, key);

    // if (index == -1){
    //     cout << "Couldn't find Shit"<<endl;

    // }
    // else{
    //     cout << "Found "<< key << " at " << index << " index" <<endl;
    // }



    int index ;
    index = binary_search(arr, length, key);

    if (index == -1){
        cout << "Couldn't find Shit"<<endl;

    }
    else{
        cout << "Found "<< key << " at " << index << " index" <<endl;
    }


    

}