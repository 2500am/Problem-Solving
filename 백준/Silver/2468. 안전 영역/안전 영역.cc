        #include <iostream>
        #include <string>
        #include <vector>
        #include <algorithm>
        #include <stack>   
        #include <queue>

        using namespace std;

        int N ;
        int lim = 1 ;
        int cnt = 0 ;
        int m = -1; 

        vector<vector<int> > v ;
        vector<vector<bool> > visited ;

        vector<int> dy = {1, 0, -1, 0} ;
        vector<int> dx = {0, 1, 0, -1} ;
        
        queue<pair<int, int> > q ;

        void BFS(int sy,int sx, int lim) {
            visited[sy][sx] = 1 ;
            q.push({sy,sx}) ;
             
            while (q.size())
            {
                int ny = q.front().first ;
                int nx = q.front().second ;
                q.pop() ;

                for(int i = 0; i < 4; i++)
                {
                    int my = ny + dy[i] ;
                    int mx = nx + dx[i] ;

                    if(my >= 0 && mx >= 0 && my < N && mx < N )
                    {
                        if(!visited[my][mx] && v[my][mx] > lim) 
                        {
                            visited[my][mx] = 1 ;
                            q.push({my,mx});    
                            
                        }

                    }

                }

            }

        }

        int main() {
            ios::sync_with_stdio(0) ;
            cin.tie(0); cout.tie(0) ;
            
            cin >> N ;

            v.resize(N, vector<int>(N,0)) ; 
            visited.resize(N, vector<bool>(N,0)) ; 

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    cin >> v[i][j] ;

                }
                
            }

            for(int i = 0; i <= 100; i++)
            {   
                visited.assign(N, vector<bool>(N,0)) ; 
                cnt = 0;

                for(int j = 0; j < N; j++)
                {
                    for(int k = 0; k < N; k++)
                    {
                        if(!visited[j][k] && v[j][k] > i)
                        {
                            cnt++;
                            BFS(j,k,i) ;

                        }

                    }

                }


                if(cnt > m) m = cnt ;
                
            }        



            cout << m ;
            
            return 0;
        }


        // cout << "로그 : " << var << '\n' ; 
        // 영역별로 구해내는 방법