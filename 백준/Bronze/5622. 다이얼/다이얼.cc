    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>

    using namespace std;

    int main() {
        ios::sync_with_stdio(0) ;
        cin.tie(0); cout.tie(0) ;

        string s ;
        cin >> s;

        int sum = 0;

        for (int i = 0; i < s.size(); i++)
        {
            int cur = (s[i] - 'A') ;

            if(s[i] == 'S')cur-- ;
            else if(s[i]== 'Z') cur -= 2;      
            else if(s[i] == 'Y') cur--;
            else if(s[i] == 'V') cur--;
            sum += cur/3 +3 ;

        }

        cout << sum ; 



        return 0;
    }
