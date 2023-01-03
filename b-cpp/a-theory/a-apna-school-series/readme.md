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

<h3> <b> 12. 2D Arrays </b> </h3>

* Just like normal arrays, but with rows and columns.
* We can still refer by index.. A[i][j]

```
#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;
```

```
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
```

```
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
```

<h3> <b> 13. Character Arrays </b> </h3>

* Array Of Characters
* Defined with one extra space (for '\0')
* arr[n+1]

```
#include <iostream>
#include <climits>
#include <bits/stdc++.h>

using namespace std;

```

```
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

```

```
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
```

<h3> <b> 14. Pointers basics </b> </h3>

* variables that store address of other variables
* int *ptr = &a;
* Need to learn 3 things 1) get address via & 2) dereference via & and 3) create via int *

```
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
```

<h3> <b> 15. Pointers With Arrays </b> </h3>

* Variable name of the array points to the first address of the array
* If we write printf(a) ; it will print the pointer to index 0

```
#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(){

    int arr[] = {10,20,30};
    cout << arr << endl; // 0x7ff7b220c11c or address to the first index of the array
    cout << *arr << endl; // 10 or the zeroth element
    int *ptr = &arr[0]; // As expected, its the same 0x7ff7b220c11c
    cout << ptr << " " << &arr[0]<<endl; // Writing arr or &arr[0] refers to the same address

    for (int i=0; i< 3; i++){
        cout << *(arr+i) << endl; // prints 10 20 30
    }
}

```

<h3> <b> 16. Pointers with Functions </b> </h3>

```
#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

void swap(int *a, int *b){ // call by reference
    int temp = *a;
    *a = *b;
    *b  = temp;

}
```

```
int main(){

    int a = 2;
    int b = 3;

    int *aptr = &a;
    int *bptr = &b;

    swap(aptr,bptr);
    cout << a << " " << b << endl;
}
```