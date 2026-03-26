    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>

    using namespace std;

    int main() {
        ios::sync_with_stdio(0) ;
        cin.tie(0); cout.tie(0) ;

        int N, res = 0 ;
        cin >> N ;


        vector<int> dist_v ;
        vector<int> cost_v ;

        for (int i = 0; i < N-1; i++)
        {
            int dist ;
            cin >> dist ;
            dist_v.push_back(dist) ;

        }

        for (int i = 0; i < N; i++)
        {
            int cost ;
            cin >> cost ;
            cost_v.push_back(cost) ; 
            
        }


        int fin_point ;


        while(cost_v.size()) 
        {
            int idx = min_element(cost_v.begin(), cost_v.end()-1) - cost_v.begin() ;
            // cout << "idx 값 : " << idx << '\n' ; 
            int dist_sum = 0 ;

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