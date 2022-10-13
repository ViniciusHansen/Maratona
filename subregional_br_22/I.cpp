#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;



int main(){

    ios_base::sync_with_stdio(0);
    int a; 
    for (int i = 0; i < 8; i++)
    {
        cin >> a;
        if (a == 9)
        {
            cout << 'F' << endl;
            return 1;
        }
        
    }
    cout << 'S' << endl;

    return 0;
}