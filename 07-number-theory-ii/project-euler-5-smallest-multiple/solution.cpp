
#include <iostream>
#include <bits/stdc++.h>

int lcm(int a ,int b){
    
    return (a*b)/std::__gcd(a,b);
}

int main()
{
    int t;
    std::cin >> t;
    while(t--){
        int n,ans=1;
        std::cin >> n;
        for(int i=1;i<=n;i++){
            ans=lcm(ans,i);
            
        }
        std::cout << ans << std::endl;
    }

    return 0;
}