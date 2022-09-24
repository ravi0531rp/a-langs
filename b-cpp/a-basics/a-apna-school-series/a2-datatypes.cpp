/*
                    Data Types
1) Chars -> 1byte ; Done using ASCII code
2) Integer -> 4 bytes
3) Float -> 4bytes ; Double -> 8 bytes
4) Boolean -> 1 byte (True/False)


                    Type Modifiers
1) Signed ; eg for int -> 4 bytes
2) Unsigned ; eg for int -> 4 bytes
3) Long ; eg for int -> 8 bytes
4) Short ; eg for int -> 2 bytes  ; For less range

*/

#include <iostream>

using namespace std;

int main(){

    int a = 12;
    cout << "Size of int is "<< sizeof(a)<<endl;

    float b = 12.22;
    cout << "Size of float is "<< sizeof(b)<<endl;

    long long int c = 123;
    cout << "Size of Long Long is "<<sizeof(c)<<endl;

    return 0;
}