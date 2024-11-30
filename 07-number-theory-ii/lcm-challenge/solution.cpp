#include <iostream>
#include <bits/stdc++.h>

long long lcm(long long  a ,long long b){
    
    return (a*b)/std::__gcd(a,b);
}

int main()
{

    long long n;
    std::cin>>n;
    long long ans =n;
    long long a=n-1,b=n-2,c=n-3;
    ans = std::max(ans , lcm ( lcm(a,b),c ) );
    ans = std::max(ans , lcm ( lcm(n,a),c ) );
    ans = std::max(ans , lcm ( lcm(n,a),b ) );
    std::cout << ans << std::endl;

    return 0;
}