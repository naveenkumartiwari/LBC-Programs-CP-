#include <bits/stdc++.h>

using namespace std;


int main(){


    
    string s1, s2  ; 
    int  f = 0 ; 
    cout << "enter the first string " << endl ;
    cin >>  s1 ; 

    cout << "enter the second string " << endl ; 
    cin >> s2 ; 
    if(s1.size() != s2.size()){

      f = 1 ;   
    
    }
    else{
        
        for(int i = 0 ; i < s1.size() ; i++) {
           
           if(s1[i] != s2[i]){
             f = 1 ; 
             break ; 
           }
        }
    }
    
    if(f==1){
      cout << "strings are not equal" << endl ; 
    }
    else{
        cout << "strings are  equal" << endl ;
    }
    return 0 ; 

}