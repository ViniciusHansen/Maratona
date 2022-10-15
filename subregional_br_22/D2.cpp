#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,y,c=0,px,py;
    cin >> n;
    cin >> x >> y;

    px=pow(2,n-1);
    py=px;

    while(x != px && y != py){
        if(x < px && y < py){
            x *=2;
            y *= 2;
            c++;
        }
        else if (x< px){
            x*=2;
            y = y*2 - pow(2,n);
            c++;
        }
        else if (y < py){
            x = x*2 - pow(2,n);
            y*=2;
            c++;
        }
        else if(x>px && y>py){
            x = x*2 - pow(2,n);
            y = y*2 - pow(2,n);
            c++;
        }

    }
    cout << c << endl;
    return 0;
}
