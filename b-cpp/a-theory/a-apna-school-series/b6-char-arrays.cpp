// Array of Characters
// charr arr[n+1] ; // notice the n+1
// last character is the null character to denote array end

#include <iostream>
#include <climits>
#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(char arr[], int size){
    bool flag = true;
    for (int i=0; i< int(size/2); i++){
        if (arr[i] != arr[size - i - 1]){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){

    // basic 
    char arr[100] = "apple"; // always keep n+1
    int i= 0;
    while (arr[i] != '\0'){
        cout << arr[i] << endl;
        i++;
    }

    // check palindrome
    int n;
    cin >> n;

    char name[n+1];
    cin >> name;
    cout << is_palindrome(name, n) << endl;


    return 0;
}