#include <bits/stdc++.h>

using namespace std;


int main(){


    string str; 


     getline(cin , str) ; 
    
     istringstream buf(str);
    istream_iterator<string> beg(buf), end;

    vector<string> tokens(beg, end) ; 

    
    for(auto i : tokens){
          if(i.size() > 5){
              cout << i << endl ; 
          }
    }
  
    
    return 0 ; 

}