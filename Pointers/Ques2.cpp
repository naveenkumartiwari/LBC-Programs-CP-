#include "bits/stdc++.h"
#include <climits>

using namespace std;

int main(){
    
    static int b[]  =  {10 , 20 ,  30 , 40 , 50 }  ;  
    int i , *k ; 
    k =  &b[4] - 4 ;  
    
    for(int j  = 0  ;  j <=  4  ; j++ ){
        cout <<  *k << endl ;  
        k++  ;  
    }
    
    return  0 ;  
    

}