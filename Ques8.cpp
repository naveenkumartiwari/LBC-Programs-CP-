#include <bits/stdc++.h>

using namespace std;


int main(){


    string str; 
      cout << "Enter the string : " ;
    getline(cin , str) ; 
    for (int i = 0; i < str.size(); i++)
    {
        
            if (islower(str[i]))
                str[i] = toupper(str[i]);
            else
                str[i] = tolower(str[i]);
    }

    cout << str << endl ;  
    
    return 0 ; 

}