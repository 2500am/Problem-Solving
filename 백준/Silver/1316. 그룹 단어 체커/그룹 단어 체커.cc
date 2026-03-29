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

     

        for (int i = 0; i < N; i++)
        {
            string s ; cin >> s ; 
            bool found = 0 ;

            for (int j = 0; j < s.size(); j++)
            {
                char c = s[j] ;
                auto it = find(s.begin()+j+1, s.end(), c) ;

                if(it != s.end())
                {
                    if(it - s.begin() > j+1)
                    {
                        found = 1;
                        break;
                    }

                }
               
            }

            if (!found)
            {
                cnt++;
            }
            

        }
        
        cout << cnt ;

        return 0;
    }
