    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>
    #include <stack>   
    #include <queue>

    using namespace std;

    int N, M, V;

    vector<int> ans1 ;
    vector<int> ans2 ;
    vector<bool> visited1;
    vector<bool> visited2 ;
    vector<vector<int> > v  ;

    stack<int> st ;
    queue<int> q ;

    void DFS(int start) {
        visited1[start] = 1;
        st.push(start) ;
        ans1.push_back(start) ;

        for(int i = 0; i < v[start].size(); i++)
        {
            int next = v[start][i] ;

            if(!visited1[next])
            {
                DFS(next) ;

            }

        }

    }

    void BFS(int start) {
        visited2[start] = 1;
        q.push(start) ;

        while (q.size())
        {
            int next = q.front() ;
            ans2.push_back(next) ;
            q.pop() ;

            for(int i = 0; i < v[next].size(); i++)
            {
                int cur = v[next][i] ;

                if(!visited2[cur])
                {
                    q.push(cur) ; 
                    visited2[cur] = 1;

                }
            }
        }
        
        

    }

    int main() {
        ios::sync_with_stdio(0) ;
        cin.tie(0); cout.tie(0) ;
        
        cin >> N >> M >> V ;

        v.resize(N+1) ;
        visited1.resize(N+1) ;
        visited2.resize(N+2) ;

        for(int i = 0; i < M; i++)
        {
            int a,b ;
            cin >> a >> b ;

            v[a].push_back(b) ; 
            v[b].push_back(a) ;

        }


        for(int i = 1; i < N+1; i++)
        {
            sort(v[i].begin(), v[i].end()) ;

        }

        DFS(V) ;
        BFS(V) ;


        for(int i = 0; i < ans1.size(); i++) 
        {
            cout << ans1[i] << " " ;

        }

        cout << '\n' ;
       
        for(int i = 0; i < ans2.size(); i++) 
        {
            cout << ans2[i] << " " ;

        }

        return 0;
    }

