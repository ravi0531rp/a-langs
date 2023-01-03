// Character Arrays vs Strings
/*
1) Need to know size beforehand                1) No need
2) Larger size required for operations         2) No need
3) No Terminating Extra Character              4) Terminating Special Character
*/

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    string basic_string = "Ravi Prakash";
    cout << basic_string << endl;

    string str1(5,'a'); // aaaaa
    cout << str1 << endl;

    string instr;
    getline(cin, instr); // helps to get the full text without getting confused over spaces
    cout << instr << endl;

    basic_string.append(str1);
    cout << basic_string << endl; // Ravi Prakashaaaaa   ; may use + to add

    basic_string.clear(); // cleans up the whole string
    cout << basic_string << endl;

    cout << instr.compare(str1) << endl; // we gave aaaaa as i/p and it gave 0 as o/p

    cout << basic_string.empty() << endl; //  1

    string newstring = "nincompoop";
    cout << newstring.size() << " " << newstring.length() << endl; // 10 10
    newstring.erase(2,3); // start,length
    cout << newstring << endl; // nimpoop

    cout << newstring.find("im") << endl; // 1

    newstring.insert(2, "nco");
    cout << newstring << endl; // nincompoop

    cout << newstring.substr(6,4) << endl; // poop

    string s1 = "108";
    int integer = stoi(s1);
    cout << integer + 3 << endl; // 111

    cout << to_string(integer) + "sbdskd" << endl; // 108sbdskd

    sort(newstring.begin(), newstring.end());
    cout << newstring << endl; // cimnnooopp


    string str = "abcdewxyz";
    for (int i=0; i < str.size() ; i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i]-= 32 ; // ascii difference
        }
    }
    cout << str << endl; // ABCDEWXYZ


    string numb =  "324998761";
    sort(numb.begin() , numb.end() , greater<int>());
    cout << numb; // 998764321
}