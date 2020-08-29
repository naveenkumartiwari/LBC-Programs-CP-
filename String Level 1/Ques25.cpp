#include <bits/stdc++.h>

using namespace std;


int main(){


    multimap<int , string> m ; 

    string name ; 
    int marks ; 
    
    for(int i = 0 ; i < 5 ; i++){
     
     cout << "enter the student name " << endl ; 
    cin >> name ; 
    cout << "enter the marks of the student " << endl ; 
    cin >> marks ; 
    m.insert(make_pair(marks, name )) ; 

    }

    for(auto it = m.rbegin(); it != m.rend();it++){
     
     cout << it->first << it->second << endl ; 

    }

    

    

  
    
    return 0 ; 

}