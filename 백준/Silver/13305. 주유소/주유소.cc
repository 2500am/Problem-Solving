    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>

    using namespace std;

    int main() {
        ios::sync_with_stdio(0) ;
        cin.tie(0); cout.tie(0) ;

        long long N, res = 0 ;
        cin >> N ;

        vector<long long> dist_v ;
        vector<long long> cost_v ;

        for (int i = 0; i < N-1; i++)
        {
            long long dist ;
            cin >> dist ;
            dist_v.push_back(dist) ;

        }

        for (int i = 0; i < N; i++)
        {
            long long cost ;
            cin >> cost ;
            
            if(i == N-1) continue;
            else cost_v.push_back(cost) ;
            
        }


        int min_cost = cost_v[0] ;
        res += min_cost * dist_v[0] ;

        for (int i = 1; i < N-1; i++)
        {
            if(cost_v[i] < min_cost)
            {
                min_cost = cost_v[i] ;

            }

            res+=min_cost * dist_v[i] ;

        }
        
        cout << res;

        return 0;
    }