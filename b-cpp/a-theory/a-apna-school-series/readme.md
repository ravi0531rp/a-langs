## CPP : Basics to DSA Advanced

1) Basic Hello World
```

#include <iostream>
using namespace std;

int32_t main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w", stdout);
    #endif

    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
    return 0;

} 

```

2. Data Types & Type Modifiers
* Data Types
    1) Chars -> 1byte ; Done using ASCII code
    2) Integer -> 4 bytes
    3) Float -> 4bytes ; Double -> 8 bytes
    4) Boolean -> 1 byte (True/False)
* Type Modifiers
    1) Signed ; eg for int -> 4 bytes
    2) Unsigned ; eg for int -> 4 bytes
    3) Long ; eg for int -> 8 bytes
    4) Short ; eg for int -> 2 bytes  ; For less range


```
#include <iostream>  
// #include is a preprocessor directive
// iostream is a header file for i/o

using namespace std;

int main(){

    int a = 12;
    cout << "Size of int is "<< sizeof(a)<<endl;
    // can use std::cout << . if line 21 not used..

    float b = 12.22;
    cout << "Size of float is "<< sizeof(b)<<endl;

    long long int c = 123;
    cout << "Size of Long Long is "<<sizeof(c)<<endl;

    return 0; // exit the func
}

```

3. Input Output Stream
```
#include <iostream>  

using namespace std;

int main(){

    int amount1;
    cin>> amount1;

    int amount2;
    cin>>amount2;

    short int sum;
    sum = amount1 + amount2;

    cout<<"Sum is "<<sum;

    return 0; // exit the func
}

```

4. If Else
* Condition needs to satisfy for moving ahead
* Else is used for otherwise cases.
```
#include <iostream>

using namespace std;

int main(){

    int savings;
    cin>> savings;

    if (savings >= 1000){
        cout << "More than 1k"<< endl;
        if (savings >= 100000){
            cout << "More than 100k"<< endl;
        }
        else{
            cout << "Less than 100k"<< endl;
        }
    }
    else if (savings >= 500 ){
        cout << "More than 500 but less than 1000" << endl;
    }
    else{
        cout<<"Broke..."<<endl;
    }
    return 0;
}

```

5. Loops
* For loop ; Need to provide the length for which we have to iterate
* While loop ; Need to put a terminating condition
```
#include <iostream>  

using namespace std;

int main(){

    int amount1;
    cin>> amount1;

    int amount2;
    cin>>amount2;


    // for loops
    int sum = 0;
    for(int i = 0; i<= amount1*amount2; i++){
        sum += i;
    }

    cout<<"Sum is "<<sum<<endl;

    // while loops
    int counter = 0;
    while (counter <= sum){
        ++counter; // increment and then assign
        cout<<counter<<" ";
        
    }

    cout<<"============================"<<endl;
    // break & continue
    counter = 0;
    while (counter <= sum){
        ++counter; // increment and then assign
        
        if (counter%11 ==0){
            continue;
        }
        if (counter == 23){
            break;
        }
        cout<<counter<<" ";
        
    }

    counter = 0;
    bool is_prime = true;
    // check if prime (non optimized)
    for (int i=2; i< sum; i++){
        if (sum%i == 0){
            is_prime = false;
            break;
        }
        else{
            continue;
        }
    }
    if (is_prime){
        cout<<"\n" << sum << " is prime"<< endl;
    }
    else{
        cout<<"\n" << sum << " is composite"<< endl;
    }
    

    return 0; // exit the func
}

```

6. Switch
* Switch is to avoid if conditions if we have a set of outcomes to compare
* can set a default condition
* need to break out
```
#include <iostream>  

using namespace std;

int main(){

    char button;
    cin>>button;

    switch (button){
        case 'a':
            cout<< "Hello"<<endl;
            break;
        case 'b':
            cout<< "Hola"<<endl;
            break;
        case 'c':
            cout<< "Namaste"<<endl;
            break;
        case 'd':
            cout<< "Salut"<<endl;
            break;
        default:
            cout<<"Language Undetected"<<endl;
            break;
    }
    

    return 0; // exit the func
}

```

7. Operators
* Assignment Operators
    1) = , += , -=
    2) *= , /= 

* Artithmetic Operators 
    1) Unary (+ , -, *, %, /) 
    2) Binary (Incremetor, Decrementor) ; a++ or --a or a++ or a--

* Relational Operators
    1) ==
    2) !=
    3) \> , >= , < , <=

* Logical Operators
    1) && - AND
    2) || - OR
    3) !  - NOT

* Bitwise Operators
    1) & - And
    2) | - OR
    3) ^ - Xor
    4) ~ - One's Complement
    5) << Left Shift 4 << 1 (0100) : 1000
    6) \>> Right Shift
    Note : a << n gives a * exp(2,n) and a>> n gives a/exp(2,n)

* Miscellaneous
    1) sizeof()
    2) Condition?a:b     ; (Ternary Operator) gives a if true else b
    3) cast
    4) Comma     ; a = (2,3,4) gives a as 4
    5) & Returns the address of a variable 
    6) \* Pointer to the object or the variable ; int a ; int *b = &a
```
#include <iostream>
using namespace std;

int main(){

    int i = 1;
    int j = 2;
    int k;

    k = i + j + i++ + j++ + ++i + ++j;
    cout<< i << " "<<j<<" "<<k<<endl;
    return 0;
}

```

8. Functions
* They are used to Have independent functionality within the code
* Difference based on Return Types and Inputs

```

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

```