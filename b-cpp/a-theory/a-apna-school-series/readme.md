# CPP : Basics to DSA Advanced

<h3> <b> 1)  Basic Hello World </b> </h3>

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

<h3> <b> 2. Data Types & Type Modifiers </b> </h3>

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

<h3> <b> 3. Input Output Stream </b> </h3>

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

<h3> <b> 4. If Else </b> </h3>

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

<h3> <b> 5. Loops </b> </h3>

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

<h3> <b> 6. Switch </b> </h3>

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

<h3> <b> 7. Operators </b> </h3>

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

<h3> <b> 8. Functions </b> </h3>

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

<h3> <b> 9. Arrays Basics </b> </h3>

* List of elements of <b>same</b> datatype.
* Need to define size first
```
#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;


int main(){
    int array[4] ;
    int array2[5] = {1,2,3,4,5};
    int array3[5] = {1,2}; // even though we have less elements, its fine


    int length ;
    cin >> length;
    int array4[length];
    for (int i=0; i<length ; i++){
        cin >> array4[i] ;
    }

    for (int i=0; i<length ; i++){
        cout << array4[i] << "\t" ;
    }

    cout << endl;

    // find max of the array

    int maximum = INT_MIN;

    for (int i=0; i<length; i++){
        maximum = max(maximum, array4[i]);
    }

    cout << maximum << endl;

    return 0;
}

```

<h3> <b> 10. Array Searches </b> </h3>

* Linear Search -> O(N)
* Binary Search -> O(log(N)) ; works for sorted arrays only
```
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
```

<h3> <b> 11. Array Sorting </b> </h3>

* <b> selection_sort </b> -> Take the minimum and swap with first repeatedly; and move ahead & repeat n times
* <b> bubble_sort </b> -> swap if elem on right is less than left throughout the array ; repeat n times
* <b> insertion_sort </b> -> Insert an element from an Unsorted Array to its correct position in sorted array

```
#include<iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;
```

```
// Take the minimum and swap with first repeatedly; and move ahead & repeat
void selection_sort(int arr[], int length){
    for (int i= 0; i< length - 1; i++){
        for (int j= i + 1; j< length; j++){
            if (arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        
    }
    for (int i=0; i< length; i++){
        cout << arr[i] << " ";
    }

    cout <<  endl;
}
```

```
// swap if elem on right is less than left throughout the array ; repeat n times
void bubble_sort(int arr[], int length){
    for (int i=0; i< length-1; i++){
        for (int j= 1; j< length - i; j++){
            if (arr[i+j+1] < arr[i+j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i=0; i< length; i++){
        cout << arr[i] << " ";
    }
    cout <<  endl;
}
```

```
void bubble_sort2(int arr[], int length){
    int counter = 0;
    while (counter < length){
        for (int i = 0; i < length - 1; i++){
            if (arr[i] > arr[i+1]){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
        counter += 1;
    }

    for (int i=0; i< length; i++){
        cout << arr[i] << " ";
    }
    cout <<  endl;
}
```

```
// Insert an element from an Unsorted Array to its correct position in sorted array
void insertion_sort(int arr[], int length){
    for (int i=1; i<length ; i++){
        int current = arr[i];
        int tmp = i-1;
        while (tmp >= 0 && arr[tmp] > current){
            arr[tmp + 1] = arr[tmp];
            tmp--;
        }
        arr[tmp + 1] = current;
    }

    for (int i=0; i< length; i++){
        cout << arr[i] << " ";
    }
    cout <<  endl;
}
```

```
int main(){

    int length ;
    cin >> length;

    int arr[length];

    for(int i=0; i< length; i++){
        cin >> arr[i];
    }

    selection_sort(arr, length);
    bubble_sort(arr, length);
    bubble_sort2(arr, length);
    insertion_sort(arr, length);
    return 0;

}
```


