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

        while(cost_v.size()) 
        {
            long long idx = min_element(cost_v.begin(), cost_v.end()) - cost_v.begin() ;
            // cout << "idx 값 : " << idx << '\n' ; 
            long long dist_sum = 0 ;


            // cout << "cost_v 상태 : " ;
            // for (int i = 0; i < cost_v.size(); i++)
            // {
                
            //     cout << cost_v[i] << " " ;   
            // }
            

            for (int i = idx; i < dist_v.size(); i++)
            {
                dist_sum += dist_v[i] ;
                // cout << "dist_sum 값 : " << dist_sum  << '\n' ; 
            }
            
            res += dist_sum * cost_v[idx] ;
            // cout << "res 값 : " << res << '\n'; 


            cost_v.erase(cost_v.begin() + idx, cost_v.end()) ;
            dist_v.erase(dist_v.begin() + idx, dist_v.end()) ;
            
        }

        cout << res ;
        






        return 0;
    }