#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    int n,x,y,c=0;
    cin >> n;
    pair<int,int> a1(0,0);
    pair<int,int> a2(0,pow(2, n));
    pair<int,int> a3(pow(2,n), pow(2,n));
    pair<int,int> a4(pow(2,n), 0);
    pair<int,int> particle(pow(2,n-1), pow(2,n-1));
    cin >> x >> y;
    pair<int,int> target(x,y);

    while(target.first != particle.first && target.second != particle.second){
        if(particle.first < target.first){
            if(particle.second < target.second){
                particle.first = (a3.first + particle.first)/2;
                particle.second = (a3.second + particle.second)/2;
            }
            else{
                particle.first = (a4.first + particle.first)/2;
                particle.second = (a4.second + particle.second)/2;
            }
            c++;
        }
        else{
            if(particle.second > target.second){
                particle.first = (a1.first + particle.first)/2;
                particle.second = (a1.second + particle.second)/2;
            }
            else{
                particle.first = (a2.first + particle.first)/2;
                particle.second = (a2.second + particle.second)/2;
            }
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
