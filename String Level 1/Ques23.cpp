#include <bits/stdc++.h>

using namespace std;


int main(){


    
    map<int , string> m ; 


     int roll ; 
     string s ;

     for(int i = 0 ;i<5;i++){

     cout << "enter the roll no ." << endl ; 
     cin >> roll ; 
     cout << "enter the name of the student" << endl ;
      cin >> s ; 
      m[roll] = s ; 


     }

     for(auto it = m.begin() ; it != m.end() ; it++){

         cout << it->first << " " <<it->second << endl ; 

     }
    
    
    return 0 ; 

}