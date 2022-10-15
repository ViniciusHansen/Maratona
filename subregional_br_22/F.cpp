#include <bits/stdc++.h>

using namespace std;

set<char> setpy(string s){
    set<char> st;
    for(int i=0;i<s.size();i++)
        st.insert(s[i]);
    return st;
}

bool compativel(string s, set<char> st){
    int count=0;
    for(int i=0;i<s.size();i++)
        if(st.find(s[i]) != st.end()){    //elemento presente
            count++;
        }
    return (count == s.size());
}

int main(){
    int c=0,n,i,j;
    cin >> n >> c;
    string s;
    map<set<char>,int> ms;
    vector<string> vs;

    for(i=0;i<n;i++){
        cin >> s;
        vs.push_back(s);
        if(ms[setpy(s)])
            ms[setpy(s)]++;
        else
            ms[setpy(s)]=1;
    }

    //acha a maior key
    //ou seja, o set mais comum
    int maior = INT_MIN;
    set<char> max_key;
    for(auto [k,v] : ms){
        if(v>maior){
            maior =v;
            max_key = k;
        }
    }

    for(i=0;i<n;i++){
        if(compativel(vs[i],max_key)){
            c++;
        }
    }

    cout << c <<endl;
    return 0;
}
