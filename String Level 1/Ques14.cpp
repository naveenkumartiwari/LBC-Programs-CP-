#include <bits/stdc++.h>

using namespace std;


int main(){


    string s , s1 = "26 january" , s2 = "republic" ,s3 = "15 august" , s4 = "independence" ; 
    getline(cin,s) ; 
    
    s.replace(s.find(s3), s3.size(),s1);
    s.replace(s.find(s4), s4.size(),s2);
    
     cout << s; 
    
    return 0 ; 

}