#include <bits/stdc++.h>

using namespace std;


int main(){
    int i,n,k,l,a,b,sum=0,maior_index,z;
    cin >> n;
    vector<pair<int,int>> baralho;
    vector<pair<int,int>> hand;
    pair<int,int> c;
    for(i=0;i<n;i++){
        cin >> a;
        c.first = a;
        baralho.push_back(c);
    }
    for(i=0;i<n;i++){
        cin >> b;
        baralho[i].second = b;
    }
    cin >> k >> l;
    //pegar K cartas, sempre do maior lado
    for(i=0;i<k;i++){
        if(baralho.front().first + baralho.front().second > baralho.back().first + baralho.back().second){
            hand.push_back(baralho.front());
            baralho.erase(baralho.begin());
        }
        else{
            hand.push_back(baralho.back());
            baralho.pop_back();
        }
    }
    //"flipar" L cartas
    for(i=0;i<l;i++){
        int maior_back = INT_MIN;
        z=0;
        for(auto [f,t] : hand){
            if(t>maior_back){
                maior_back=t;
                maior_index=z;
            }
            z++;
        }
        sum += maior_back;
        hand[maior_index].second=0;
    }

    for(auto [f,t] : hand)
        sum+=f;

    cout << sum << endl;

    return 0;
}
