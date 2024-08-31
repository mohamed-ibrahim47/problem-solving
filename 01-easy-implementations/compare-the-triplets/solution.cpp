#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[3],b[3];
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    int score1=0,score2=0;
    if(a[0] > b[0])
        score1++;
    if(a[1] > b[1])
        score1++;
    if(a[2] > b[2])
        score1++;
    if(b[0] > a[0])
        score2++;
    if(b[1] > a[1])
        score2++;
    if(b[2] > a[2])
        score2++;
    cout<<score1<<" "<<score2<<endl;
    return 0;
}
