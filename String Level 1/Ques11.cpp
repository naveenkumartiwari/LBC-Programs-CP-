#include <bits/stdc++.h>

using namespace std;


int main(){


    
    string s , r ; 
    cin >> s ; 

     
    r = s.substr(2) ; 
    r +=  s.substr(0,2) ; 
    r += "ay" ; 
    cout << r ; 
    return 0 ; 

}