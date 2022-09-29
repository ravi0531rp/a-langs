#include <iostream>
// Artithmetic Operators 1) Unary (+ , -, *, %, /) 2) Binary (Incremetor, Decrementor)
// Pre incrementor ++a ; Post incrementor a++
using namespace std;

int main(){

    int i = 1;
    int j = 2;
    int k;

    k = i + j + i++ + j++ + ++i + ++j;
    cout<< i << " "<<j<<" "<<k<<endl;
    return 0;
}