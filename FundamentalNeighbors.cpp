#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int i,n;
    
    while(cin >> n)
    {
        int expo = 0;
        int ans = 1;
        int m = n;
        if(n%2 == 0)
        {
            while(n%2 == 0)
            {
                n/=2;
                expo++;
            }
            ans = pow(expo,2);
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
           
                ans = ans * pow(expo,i);
            }
            
        }
        if(n>2) ans = ans * pow(1,n);
        cout << m <<" "<<ans<<endl;
        }
    return 0;
}
