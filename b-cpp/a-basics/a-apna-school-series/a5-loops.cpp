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