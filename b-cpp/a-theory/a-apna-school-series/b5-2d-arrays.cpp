#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w", stdout);
    #endif

    // Taking the inputs and filling the matrix
    int n,m;
    cin >> m >> n;
    int arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    // Normally Printing the Matrix
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Spiral Print the Matrix
    int curr_row = 0;
    int curr_col = 0;
    int row_ctr = 0;
    int col_ctr = 0;

    int bar = min(m/2 , n/2);
    cout << bar << endl;

    while (row_ctr < bar){
        while (curr_col < n - col_ctr){
            cout << arr[curr_row][curr_col] << " ";
            curr_col++;
        }
        curr_col--;
        curr_row++;

        while (curr_row < m - row_ctr){
            cout << arr[curr_row][curr_col] << " ";
            curr_row++;
            
        }
        curr_col--;
        curr_row--;

        while (curr_col >= col_ctr){
            cout << arr[curr_row][curr_col] << " ";
            curr_col--;
            
        }
        curr_row--;
        curr_col++;

        while (curr_row > row_ctr){
            cout << arr[curr_row][curr_col] << " ";
            curr_row--;
            
        }
        curr_row++;
        curr_col++;

        row_ctr++;
        col_ctr++;
    }

}