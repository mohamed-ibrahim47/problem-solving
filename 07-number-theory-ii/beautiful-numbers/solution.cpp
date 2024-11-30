#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
long long a,b,n;
long long fac[1000000+5];

long long mod_fast_power(long long num , long long p){
    if(!p) return 1;
    long long a=mod_fast_power(num,p>>1);
    a=((a%mod) * (a%mod))%mod;
    if(p&1)
        a=((a%mod) * (num%mod))%mod;
    return a%mod;
     
    
}
void solve(){
    fac[0]=1;
    for(long long  i =1; i <= (1e6+5) ; i++){
        fac[i]=fac[i-1] *i;
        fac[i]%=mod;
    }
}

long long nCr(long long n , long long r ){
    if (r>n) return 0;
    if(n==r ) return 1;
    long long ret = (fac[n] % mod ) * mod_fast_power(((fac[r] %mod ) * (fac[n-r] %mod)%mod ), mod-2)%mod;
    ret%=mod;
    return ret;
}

bool check(long long nm){
    
    while(nm){
        int digit = nm % 10;
        if(digit != a && digit != b)
            return false;
        nm /= 10;
        
    }
    return true;
}
int main()
{
    solve();

    long long ans=0;
    cin >> a>>b>>n;
    for (int i = 0 ; i<=n ; i++){
        
        long long sm=(a*i) + (b * (n-i));
        if(check(sm)){
            ans+= nCr(n,i);
            ans%=mod;
            
        }
    }
    cout << ans << endl;
    
}