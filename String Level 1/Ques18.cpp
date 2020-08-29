#include <bits/stdc++.h>

using namespace std;


int main(){


    
    map<char , int > m ; 


     string s ; 
     cin >> s ;

     for(int i = 0 ;i<s.size();i++){

      if(m.find(s[i]) == m.end()){
          m[s[i]] = 1 ;
      }
      else{
          m[s[i]] += 1 ;
      }
      


     }

     for(auto it = m.begin() ; it != m.end() ; it++){

         cout << it->first << " " <<it->second << endl ; 

     }
    
    
    return 0 ; 

}