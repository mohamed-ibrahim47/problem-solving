#include <iostream>
using namespace std;
int main() {
    string str;
    cin>> str;
    long long n=str.size(),ans=0;
    for (int mask =0; mask < (1 <<(n-1)) ; mask ++){

        long long curNum =0;
        long long currSum =0;
        for(int i=0; i< n; i++){
            curNum = (curNum* 10)+ (str[i]-'0');
            if (i ==n-1 || (mask & (1<<i))){
                currSum +=curNum;
                curNum = 0;
            }
        }
        ans += currSum;

    }
    cout << ans;
    return 0;
}