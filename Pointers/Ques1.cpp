#include "bits/stdc++.h"
#include <climits>

using namespace std;

int main(){
    
    int n[25]  ;  
    n[0] =  100 ; 
    n[24] =  200 ;  
    cout << *n  <<  " " <<  *(n+24) + *(n+0) <<  endl ;  
    
    return  0 ;  
    

}