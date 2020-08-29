#include <bits/stdc++.h>

using namespace std;


bool ispallendrome(string s ){
     
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
       return 1 ; 

     }
     else{
       return 0 ;
     }
}


int main(){


   string s ; 
   getline(cin , s ); 
   istringstream strm(s) ;
   vector<string> v(istream_iterator<string>{strm},
                    istream_iterator<string>() );
    
   for(auto i : v){

     if(ispallendrome(i)){
         cout << i << endl ;
     }
     


   }


}