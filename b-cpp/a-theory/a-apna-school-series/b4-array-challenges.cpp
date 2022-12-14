#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

void max_till_i(int arr[], int length){
    int arr_final[length];
    int max = INT_MIN;
    for (int index=0; index < length; index++){
        int tmp = arr[index];
        if (tmp > max){
            arr_final[index] = tmp;
            max = tmp;
        }
        else{
            arr_final[index] = max;
        }
    }
    for (int i=0; i< length; i++){
        cout << arr_final[i] << " ";
    }
    cout << endl;
}


int diff(int x, int y){
    if (x > y){
        return x - y;
    }
    return y - x;
}

bool if_arithmetic(int arr[], int length){
    int dif = diff(arr[0], arr[1]);
    bool ret = true;
    for (int index = 0; index < length - 1; index ++){
        if (diff(arr[index], arr[index + 1]) != dif){
            ret = false;
            break;
        }
    }
    return ret;
}

void longest_arithmetic_subarray(int arr[], int length){
    int diff_arr[length - 1];
    for (int index = 0; index < length -1; index++){
        diff_arr[index] = diff(arr[index], arr[index + 1]) ;
    }
    for (int i=0; i< length - 1; i++){
        cout << diff_arr[i] << " ";
    }
    cout << endl;

    int max_len_global = 2;
    int max_len = 2;
    for (int index = 0; index < length -1; index++){
        if (diff_arr[index] == diff_arr[index + 1]){
            max_len += 1;
        }
        else{
            max_len_global = max(max_len,max_len_global) ;
            max_len = 2;
        }
        cout << max_len << " " << max_len_global << endl;
    }
    cout << "Length of longest_arithmetic_subarray is  "<<max_len_global<<endl;
}



int main(){
    int length ;
    cin >> length;

    int arr[length];

    for(int i=0; i< length; i++){
        cin >> arr[i];
    }
   // max_till_i(arr, length);
    longest_arithmetic_subarray(arr, length);

}
