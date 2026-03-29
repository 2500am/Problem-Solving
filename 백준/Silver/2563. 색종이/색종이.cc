    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>

    using namespace std;

    int main() {
        ios::sync_with_stdio(0) ;
        cin.tie(0); cout.tie(0) ;

        int N ; cin >> N ;
        int cnt = 0 ;

        vector<vector<bool> > v(101, vector<bool>(101)) ; 

        for (int i = 0; i < N; i++)
        {
            int a,b ; cin >> a >> b ;

            for (int j = a; j < a+10; j++)
            {
                for (int k = b; k < b+10 ; k++)
                {
                    if(!v[j][k])
                    {
                        v[j][k] = 1 ;
                        cnt++;

                    }else {
                        continue;

                    }

                }
                
            }

        }
        
        cout << cnt ; 
    
        return 0;
    }
