#include <bits/stdc++.h>

using namespace std;


int main(){


    cout << "Enter the string: " << endl ; 
    string s ,i,l; 
    
   getline(cin, s) ; 

   int pos = s.find(" ") ; 
    i = s.substr(0,pos);
    l = s.substr(pos+1) ; 
    if(i == "mr"){
       cout << "male" ; 
    }
    else if(i=="miss"){
        cout << "female" ;
    }
    else if (i == "mrs"){
        cout << "married female" ;
    }
    else if (l == "kumari"){
        cout << "female" ; 

    }
    else{
        cout << "No idea !" ; 
    }

   
   
    return 0 ; 

}