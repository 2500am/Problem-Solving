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

            int N;
            cin >> N ;

            queue<int>  q ;
            vector<int> v ; 

            for (int i = 1; i <= N ; i++)
            {
                q.push(i) ;

            }

            while (q.size()>1)
            {
                q.pop() ; 
                
                if(!q.empty())
                {
                    int temp = q.front() ;
                    q.push(temp) ; 
                    q.pop() ; 

                }

            }

            cout << q.front() ; 


            
            
    
            return 0;
        }

        // cout << "로그 : " << var << '\n' ; \

