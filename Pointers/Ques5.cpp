#include "bits/stdc++.h"
#include <climits>

using namespace std;

int main(){
    
    static int arr[]  = {0 , 1 , 2 , 3 , 4} ;
    int *p ;     
    for(int i = 0 , p = &arr[0] ; i <=4  ; i++){
        cout <<  p[i] << endl  ;
    }
      
    return  0 ;  
    

}