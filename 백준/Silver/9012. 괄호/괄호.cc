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

            int K ;
            cin >> K ;
    
            for (int i = 0; i < K; i++)
            {
                string s ;
                int cnt = 0 ;
                bool fail = 0 ;

                cin >> s ;
                
                for (int j = 0; j < s.size(); j++)
                {
                    if(s[j] == '(') cnt++;
                    else cnt--;

                    if(cnt < 0 ) fail = 1 ;
                }
                
                if(cnt == 0 && !fail) cout << "YES" << '\n' ;
                else cout << "NO" << '\n' ;

            }
            
    
            return 0;
        }

        // cout << "로그 : " << var << '\n' ; \






        