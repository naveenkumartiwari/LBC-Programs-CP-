#include <bits/stdc++.h>

using namespace std;


int main(){


    cout << "Enter the string  " << endl ; 
    string s; 
    cin >> s ; 
    int count = 0 ; 
    int t = s.size()- 1;
    while(t--){
        if(isupper(s[t])){
          count++ ; 
        }
    }
    
    cout << count << endl ; 
  
    
    return 0 ; 

}