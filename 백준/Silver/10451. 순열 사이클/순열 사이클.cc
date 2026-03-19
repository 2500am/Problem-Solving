    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>
    #include <stack>   
    #include <queue>

    using namespace std;

    vector<vector<int> > v ;
    vector<bool> visited ;
    
    int cnt = 0 ;

    void DFS(int start) {
        stack<int> st ;
        visited[start] = 1 ;
        st.push(start) ;

        while (st.size())
        {
            int next = v[start][0] ;
            st.pop() ;

            if(!visited[next])
            {
                DFS(next) ;
            }else {
                break;

            }

        }

    }
    

    int main() {
        ios::sync_with_stdio(0) ;
        cin.tie(0); cout.tie(0) ;
        
        int T,N ;
        cin >> T ;

        for (int i = 0; i < T; i++)
        {
            int N;
            cin >> N ;

            cnt = 0 ;

            v.clear() ; 
            v.resize(N+1) ;
            visited.clear() ;
            visited.resize(N+1) ;

            for(int j = 1; j <= N; j++)
            {
                int a ;
                cin >> a;

                v[a].push_back(j) ;

            }

            for(int j = 1; j <= N; j++)
            {
                if(!visited[j])
                {
                    DFS(j) ;
                    cnt++;
                    // cout << "로그 : " << cnt << '\n' ; 
                    

                }

            }

            cout << cnt << '\n' ;

        }
        
        return 0;
    }

