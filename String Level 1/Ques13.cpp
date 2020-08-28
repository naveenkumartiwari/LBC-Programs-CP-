#include <bits/stdc++.h>

using namespace std;


int main(){


    string s1, s2; 
      cout << "Enter the strings : " ;
     cin >> s1  >> s2 ; 

     if(s1 > s2){
         cout << s2 << "\n" << s2  <<  endl ;
     }
    else if(s1 < s2){
        cout << s1 << "\n" << s2  <<  endl ;
    }
    else{
        cout << "both are equal" << endl ;  
    }
    
    return 0 ; 

}