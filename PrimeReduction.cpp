#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if (n == 2)
            return true;
        
        if (n % 2 == 0)
            return false;
        for (int i = 3; i <= sqrt(n); i += 2)
            if (n % i == 0)
                return false;
        
        return true;
}

int main(){
        int n,i;
       while(cin >> n)
       {
            int count = 0;
            if (n==4) break;
          
            if(isPrime(n)) cout << n <<" 1"<<endl;
            else if(!isPrime(n)){
                AGAIN:
                int expo = 0;
                int ans = 0;
                if(n%2 == 0)
                {
                while(n%2 == 0)
                {
                    n/=2;
                    expo++;
                }
                ans = 2 * expo;
                }
                for(i=3;i<=sqrt(n);i+=2)
                {
                if(n%i == 0)
                {
                    expo = 0;
                    while(n%i == 0)
                    {
                        n/=i;
                        expo++;
                    }
                    ans += i* expo;
                }
                
                }
            if(n>2) ans += n;
          
            count++;
            if(isPrime(ans)) {
                cout << ans<<" "<< count+1 <<endl;
            }
            else if(!isPrime(ans)){
                n = ans;
                goto AGAIN;
            }
       }
    }
   return 0;
}
