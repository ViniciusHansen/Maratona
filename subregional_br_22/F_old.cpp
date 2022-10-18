#include <bits/stdc++.h>

using namespace std;

bool compativel(string s, set<char> st){
    int count=0;
    for(auto i : s)
        if(st.find(i) != st.end()){    //elemento presente
            count++;
        }
    return (count == s.size());
}

int main(){
    int c,n,i,j,count=0;
    cin >> n >> c;
    string s;
    map<set<char>,int> ms;
    vector<string> vs;

    for(i=0;i<n;i++){
        cin >> s;
        vs.push_back(s);
        set<char> st(begin(s),end(s));
        if(ms[st])
            ms[st]++;
        else
            ms[st]=1;
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
    /*
    vector<string> vd;
    int countv=0;
    for(auto [k,v] : ms){
        if(v == maior){
            countv++;
            vd.append
        }
    }
    if(countv>1){

    }
*/
    //conta quantas strings são compativeis com o set mais comum e cria um vetor pra elas
    vector<string> comp;
    for(auto i : vs){
        if(compativel(i,max_key)){
            count++;
            comp.push_back(i);
        }
    }

    for(i=0;i<comp.size();i++){
        if(comp[i].find(42) != string::npos && i<comp.size()-1){
            int index = comp[i].find(42);
            comp[i][index] = comp[i+1][index];
        }
    }
    cout << comp[0] << " " << count <<endl;
    return 0;
}
