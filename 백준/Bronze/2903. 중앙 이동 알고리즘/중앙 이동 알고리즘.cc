    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>
    #include<cmath>

    using namespace std;

    int main() {
        ios::sync_with_stdio(0) ;
        cin.tie(0); cout.tie(0) ;

        int N ; cin >> N ;
        long long res = 2 ;

        if(N==0) 
        {
            cout << res*res ;
            return 0 ;

        }else {
            for (int i = 0; i < N; i++)
            {
                res += pow(2,i) ;
            }

        }
        
        cout << res * res ;


        return 0;
    }


