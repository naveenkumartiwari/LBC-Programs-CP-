#include <bits/stdc++.h>

using namespace std;


int main(){


    
    string line ; 
    int i = 0 , t = 5 ; 
    vector<string> v ;
    while(t--){
        cin >> line; 
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
              v.push_back(line);
        }
    }
    for(auto i : v){
        cout << i << endl ;
    }

}