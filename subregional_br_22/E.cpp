#include <bits/stdc++.h>

using namespace std;

typedef struct{
    int x,y;
} Tupla;


int main(){
    map<int,int> buffer;
    int N, aux, flechas=0;
    vector<Tupla> t;
    cin >> N;
    for(int i=0;i<N;i++){
        Tupla temp;
        cin >> aux;
        temp.x=i;
        temp.y=aux;
        t.push_back(temp);
    }
    for(int i=0;i<N;i++)
        buffer.insert_or_assign(t[i].y, 0);


    //primiera flecha
    flechas++;
    buffer.insert_or_assign(t[0].y -1, 1);

    for(int i=1;i<N;i++){
        if(buffer[t[i].y]){
            buffer[t[i].y]--;
            buffer[t[i].y-1]++;
            if(i==N-1)
                break;
            continue;
        }
        if(t[i-1].y == t[i].y + 1){
            buffer[t[i].y-1]++;
            if(i==N-1)
                break;
            continue; //nao_dispara
        }
        flechas++;
        buffer[t[i].y-1]++;
    }
    cout << flechas << endl;
    return 0;
}
