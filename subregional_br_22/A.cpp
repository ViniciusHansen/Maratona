#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;



int main(){

    int count = 0;
    int N; cin >> N;
    N += 2;
    char s[N];
    s[0] = '0';
    s[N-1] = '0';
    for (int i = 1; i < N; i++)
       cin >> s[i];
    
    for(int i = 1; i < N; i++){
        char atual = s[i];
        char next = s[i+1];
        char ant = s[i-1];
        if (ant != 'a' && next != 'a' && atual == 'a')
            continue;
        else if (atual == 'a')
            count++;
        
           
        
        
        
        
    }
    cout << count << endl;



    return 0;
}