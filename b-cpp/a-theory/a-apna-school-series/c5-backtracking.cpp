// Function calls itself to make the problem smaller
// Uses Stacks
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <climits>


using namespace std;

bool is_possible(int** arr, int x, int y, int n){
    if (x < n && y < n && arr[x][y] == 1){
        return true;
    }
    return false;
}

bool rat_in_maze(int** arr, int x, int y, int n, int** solution_array){

    if ((x == n-1) && (y == n-1) ){
            solution_array[x][y] = 1;
            return true;
        }

    if (is_possible(arr, x, y, n)){
        
        solution_array[x][y] = 1;
        if(rat_in_maze(arr, x+1, y, n, solution_array)){
            return true;
        }
        if(rat_in_maze(arr, x, y+1, n, solution_array)){
            return true;
        }
        solution_array[x][y] = 0;
        return false;
    }
    return false;
}


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    int n = 5;

    int** arr = new int*[n];
    for (int i=0; i<n; i++){
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
        }
    }

    int** solution_array = new int*[n];
    for (int i=0; i<n; i++){
        solution_array[i] = new int[n];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            solution_array[i][j] = 0;
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    bool solved = rat_in_maze(arr, 0, 0, n, solution_array);
    cout << solved << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << solution_array[i][j] << " ";
        }
        cout << endl;
    }
}