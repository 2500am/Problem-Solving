    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>
    #include <deque>
    #include <queue>

    using namespace std;

    int main() {
        ios::sync_with_stdio(0) ;
        cin.tie(0); cout.tie(0) ;

        queue<int> dq ;

        int N; cin >> N; 
        for (int i = 0; i < N; i++)
        {
            string a; int x ; cin >> a ;

            if(a == "push") 
            {
                cin >> x ;  
                dq.push(x) ;

            }else if (a == "pop")
            {
                if(dq.empty())
                {
                    cout << -1 << '\n' ;    
                }else {
                    cout << dq.front()  << '\n' ;
                    dq.pop() ;

                }
            }else if (a == "size")
            {
                cout << dq.size() << '\n';

            }else if (a == "empty")
            {
                if(dq.empty()) cout << 1 << '\n' ;
                else {
                    cout << 0 << '\n' ;
                
                }

            }else if (a == "front")
            {
                if(dq.empty()) cout << -1 << '\n' ;
                else {
                    cout << dq.front() << '\n' ;
                
                }

            }else if (a == "back")
            {
                if(dq.empty())
                {
                    cout << -1 << '\n' ;

                }else {
                    cout << dq.back() << '\n';

                }

            }

        }
        
        return 0;
    }
