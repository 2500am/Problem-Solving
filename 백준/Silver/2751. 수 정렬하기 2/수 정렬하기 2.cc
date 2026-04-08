    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>
    #include<cmath>
    #include <set>
    #include <unordered_set>

    using namespace std;

    int main() {
        ios::sync_with_stdio(0) ;
        cin.tie(0); cout.tie(0) ;

        set<int> v ;

        int N ; cin >> N ;

        for (int i = 0; i < N; i++)
        {
            int a ; cin >> a ;
            v.insert(a) ;

        }
        
        for (int i : v)
        {
            cout << i << '\n' ; 
        }
        

    
        

        return 0;
    }


