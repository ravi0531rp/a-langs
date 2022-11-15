#include <iostream>
#include <math.h>
using namespace std;

int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

bool is_prime(int num){
    for (int i; i< sqrt(num); i++ ){
        if (num%i == 0){
            return false;
        }
    }
    return true;
}

void fib(int n){
    int t1 = 0;
    int t2 = 1;
    int next_term ;

    for (int i = 1; i<=n; i++){
        cout<<t1<<" ";
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
        
    }

}

int factorial(int n){

    if (n <0){
        return 0;
    }
    if (n == 0){
        return 1;
    }
    int fact = 1;
    int count = 1;
    while (true){
        if (count == n + 1){
            break;
        }
        fact = fact * count;
        count += 1;
        
    }
    return fact;
}

int main(){
int a= 2;
int b = 3;
int suma = add(2,3);

cout<<suma<<endl;

cout<<is_prime(suma)<<endl;

fib(suma);



cout<<"\n"<<factorial(suma)<<endl;

}

