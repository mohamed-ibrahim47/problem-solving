#include <bitset>
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main() {
    string s1,s2;
    cin>>s1>>s2;
    int p1=count(s1.begin(),s1.end(),'+');
    int m1=count(s1.begin(),s1.end(),'-');
    int pos_1=p1-m1;
    if(s2.find('?')!= std::string::npos) {
        int p2=count(s2.begin(),s2.end(),'+');
        int m2=count(s2.begin(),s2.end(),'-');
        int q=count(s2.begin(),s2.end(),'?');
        int diff = pos_1-(p2-m2);
        int c =0;
        for(int mask=0;mask<(1<<q);mask++) {
            if(__builtin_popcount(mask) - (q -__builtin_popcount(mask))==diff) {
                c++;
            }
        }
        cout<<fixed << setprecision(12)<< (float)c/pow(2,q) <<endl;
    }else {
        int p2=count(s2.begin(),s2.end(),'+');
        int m2=count(s2.begin(),s2.end(),'-');
        if(pos_1==(p2-m2))
            cout<<"1.000000000000"<<endl;
        else
            cout<<"0.000000000000"<<endl;
    }
    return 0;
}
