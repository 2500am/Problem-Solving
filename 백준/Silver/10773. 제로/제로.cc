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

            int sum = 0 ;
            stack<int> q ;

            for (int i = 0; i < K; i++)
            {
                int n ;
                cin >> n ;

                if(!n)
                {
                    q.pop();

                }else {
                    q.push(n) ;

                }

            }

            while (q.size())
            {
                sum += q.top();
                q.pop() ; 

            }
            
            cout << sum ;

            return 0;
        }

        // cout << "로그 : " << var << '\n' ; \






        