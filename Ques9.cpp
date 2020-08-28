#include <bits/stdc++.h>

using namespace std;


int main(){


    string s ; 
    cin >> s ; 
    int f = 0 ;
    string::iterator it1 = s.begin() , it2 = s.end() -1  ; 
    
    while(it1 < it2){
      
      if(*it1 == *it2){
          it1++ ;
          it2-- ; 


      }
      else{
        f = 1 ;
        break ;
      }
     
    }
     
     if(f==0){
       cout << "palindrome" << endl ; 

     }
     else{
       cout << "it is not a palindrome" << endl ; 
     }
    
    return 0 ; 

}