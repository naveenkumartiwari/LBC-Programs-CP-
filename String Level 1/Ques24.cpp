#include <bits/stdc++.h>


using namespace std;


int main(){

    map<string , string> m ; 


     string country, wonder , query ; 

     for(int i = 0 ;i<7;i++){

     cout << "enter the country name " << endl ; 
     cin >> country ; 
     cout << "enter the name of the wonder " << endl ;
      cin >> wonder ; 
       m[country] = wonder  ; 


     }

     cout << "enter the country name you want to know the associated wonder " << endl ; 
     
     cin >> query ;

     if(m.find(query) == m.end()){
         cout << "No such country stored " << endl ; 
     }
     else{
         cout << m[query] << endl ;
     }

    
     


    
    
    return 0 ; 

}