#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int i,n;
    while(cin >> n)
    {
        if(n<0) {
            n = n* (-1);
            cout <<"-1 ";
        }
        
        int exponent = 0;
        while(n%2 == 0)
        {
            n/=2;
            exponent++;
        }
        if(exponent == 1) cout <<"2 ";
        else if(exponent > 1) cout<<"2"<<"^"<<exponent<<" ";
        for(i=3;i<=sqrt(n);i+=2)
        {
            if(n%i == 0)
            {
                exponent = 0;
                while(n%i == 0)
                {
                    n/=i;
                    exponent++;
                }
                if(exponent == 1) cout <<i<<" ";
                else if(exponent > 1) cout<<i<<"^"<<exponent<<" ";
                
            }
        }
        if(n>2) cout<<n;
        cout <<endl;
    }
    return 0;
}
