#include "bits/stdc++.h"
#include <climits>

using namespace std;

int main(){
    
    int arr[]  =  {0 , 1 , 2 , 3 , 4 } ;  
    int *ptr  ;  
    for(ptr = &arr[0]  ;  ptr <= &arr[4] ; ptr++){
        cout << *ptr <<endl  ;  
        
    }
      
    return  0 ;  
    

}