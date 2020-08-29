#include <bits/stdc++.h>


using namespace std;


int main(){

    string str; 


     getline(cin , str) ; 
    
     istringstream buf(str);
    istream_iterator<string> beg(buf), end;

    vector<string> tokens(beg, end) ; 

    
    for(auto i : tokens){
          i[0] =  toupper(i[0]) ; 

        cout << i << " " ; 
    }


    
    
    return 0 ; 

}