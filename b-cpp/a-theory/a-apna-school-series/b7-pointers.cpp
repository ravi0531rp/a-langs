// Pointers -> variables that store address of other variables
// int *ptr = &a;
// Need to learn 3 things 1) get address via & 2) dereference via & and 3) create via int *

#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(){

    int a = 200;
    int *aptr = &a; // always declare the pointer of the same datatype as the object itself

    cout << aptr << endl; // lets say it is 2000 (just for understanding)

    *aptr = 300;
    cout << a << endl; // value got changed to 300 in a when we modified the value at the address pointed by the pointer

    aptr++;
    cout << aptr << endl; // increase its address by 4 (because of int) (now it becomes 2004)
    *aptr = 400;

    cout << a << endl; // this time a doesn't change as aptr isn't pointing at it anymore
}