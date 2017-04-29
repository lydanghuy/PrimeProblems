#include <iostream>
#include <vector>
#include <algorithm>
#include<set>
using namespace std;
int SumDigits(int num);
bool IsHappyNum(int num, set<int> &st ) {

    while (num > 1 && st.find(num) == st.end()) {

        st.insert(num);
        num = SumDigits(num);

    }

    if (num == 1) return true;

    return false;

}
int SumDigits(int num) {

    int sum = 0;
    while (num) {

        int digit = num % 10;
        num = num / 10;
        sum += digit * digit;
    }

    return sum;
}
int main()
{
    int n;
      cin >> n;
      int k,m;
        while(n--)
        {
            cin >> k >> m;
            if (m==1||m==1000||m==10000)
            {
                cout << k << " " << m <<" "<<"NO"<<endl;
                  continue; 
            }
            
            int i,count=0;
            int b = m;
            for(i=2;i<=b/2;i++) //check whether a prime is not
            {
                if(b%i==0)
                {
                    count++;
                    break;
                }
            }
            
              if (count!=0) //not a prime
              {
                cout << k << " " << m <<" "<<"NO"<<endl;
                  continue;
              }
              else if (count == 0) // just prime
              {
                    set<int> st;
                    bool res = IsHappyNum(m, st);
                    if (res)
                    cout << k << " " << m <<" "<<"YES"<<endl;
                    else
                    cout << k << " " << m <<" "<<"NO"<<endl;
              }
        }  
        
    
    return 0;
}
