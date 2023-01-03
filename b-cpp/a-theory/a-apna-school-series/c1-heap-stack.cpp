// In stacks, LIFO is followed. We needn't dealloacte or alloacte memory
// Limited memory. If badly handled, it can lead to stack overflow (eg,bad recursion)
// In heap, we get almost all of virtual memory. We need to allocate and deallocate.
#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;


int main(){

    int a = 10; // stored in stack
    int *p = new int(); // allocate memory in heap
    *p = 10; // points to a position in heap where the value is of a

    delete(p) ; // deallocate memory

    p = new int[4]; // see we were able to reuse it without declaring
    delete[]p;

    p = NULL; // stops pointing to anything anywhere in the heap
    return 0;
}