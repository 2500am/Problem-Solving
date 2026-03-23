        #include <iostream>
        #include <string>
        #include <vector>
        #include <algorithm>
        #include <stack>   
        #include <queue>

        using namespace std;

        int main() {
            ios::sync_with_stdio(0) ;
            cin.tie(0); cout.tie(0) ;

            int a,b,c,d,e,f ;
            int x,y ;

            cin >> a >> b  >> c >> d >> e >> f ;

            int temp1 = a*e - b*d ;

            x = (c*e - b*f) / temp1 ;
            y = (a*f - c*d) / temp1 ;

            cout << x << " " << y ;


            return 0;
        }

        // cout << "로그 : " << var << '\n' ; 