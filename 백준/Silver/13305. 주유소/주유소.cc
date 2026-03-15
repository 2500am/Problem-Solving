    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>

    using namespace std;

    int main() {
        ios::sync_with_stdio(0) ;
        cin.tie(0); cout.tie(0) ;
        
        int N, dist, val;
        int final_value = 0 ;
        
        vector<int> arr_dist;
        vector<int> arr_val;

        cin >> N ;
        int fin_point = N-1 ;
        
        for(int i = 0; i < N-1; i++)
        {
            cin >> dist ;
            arr_dist.push_back(dist) ;

        }

        for(int i = 0; i < N; i++)
        {
            cin >> val ;
            arr_val.push_back(val) ;

        }

        auto it = min_element(arr_val.begin(), arr_val.end());
        int min_idx = distance(arr_val.begin(), it);

        if(min_idx == 0)
        {
            int sum = 0;

            for(int i = 0; i < N-1; i++)
            {
                sum += arr_dist[i] ;

            }

            cout << sum * arr_val[0] ;
            return 0;

        }


        while(1)
        {
            if(min_idx == 0)
            {
                final_value += arr_dist[0] * arr_val[0] ;
                break;

            }

            int sum_dist = 0 ;

            for(int i = min_idx; i < fin_point; i++)
            {
                sum_dist+= arr_dist[i] ;    

            }

            final_value += sum_dist * arr_val[min_idx] ;
            fin_point = min_idx ;
            
            
            auto it = min_element(arr_val.begin(), arr_val.begin() + fin_point);
            min_idx = distance(arr_val.begin(), it);

        }
        


        cout << final_value ;


        return 0;
    }