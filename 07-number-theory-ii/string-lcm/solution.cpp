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
        std::string a,b;
        std::cin >> a>>b;
        int siz1=a.size(), siz2= b.size();
        int lcm_num = lcm(siz1,siz2);
        std::string tempa=a,tempb=b;
        
        while(tempa.size() < lcm_num)
            tempa+=a;
        while(tempb.size() < lcm_num)
            tempb+=b;
        if(tempa==tempb)
            std::cout << tempa << std::endl;
        else
            std::cout << -1 << std::endl;
    }

    return 0;
}