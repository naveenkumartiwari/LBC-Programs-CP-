#include <bits/stdc++.h>

using namespace std;


int main(){


    cout << "Enter the string  " << endl ; 
    string line; 
    int count = 0 ; 
    getline(cin, line);

    for(int i = 0; i < line.length(); ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
              count++;
        }
    }

    cout << count << endl ; 
    
  
    
    return 0 ; 

}