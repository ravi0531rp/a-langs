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