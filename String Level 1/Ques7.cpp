#include <bits/stdc++.h>

using namespace std;


int main(){


    cout << "Enter the string: " << endl ; 
    string s; 
   cin >> s ;
    vector<string> v{"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"} ; 
    
    for(int i = 0 ; i < v.size();i++){
        (v[i])[0] = tolower((v[i])[0]) ; 
        if(v[i] == s){
            cout << i + 1  << endl ;  
        }
    }


    return 0 ; 

}