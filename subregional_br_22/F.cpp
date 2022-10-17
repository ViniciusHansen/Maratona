#include <bits/stdc++.h>

using namespace std;


int main(){
    int c,n,i,j,count=0,pos;
    cin >> n >> c;
    string s;
    map<string,int> ms;

    for(i=0;i<n;i++){
        cin >> s;
        for(j=0;j<s.size();j++){
            if(s[j] == '*'){
                pos = j;
            }
        }
        for(char c='a';c<='z';c++){
            s[pos]=c;
            ms[s]++;
        }
    }

    //ou seja, o set mais comum
    int maior = INT_MIN;
    string max_key;
    for(auto [k,v] : ms){
        if(v>maior){
            maior =v;
            max_key = k;
        }
    }
    cout << max_key << " " << ms[max_key] <<endl;
    return 0;
}
