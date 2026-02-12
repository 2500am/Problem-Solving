#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <ranges>

using namespace std ;

int main (void){
    ios::sync_with_stdio(0) ;
    cin.tie(0); cout.tie(0) ;

    string S, T ;
    cin >> S >> T ;

    int i = T.size() - 1 ;

    for( ; i >= S.size(); i-- )
    {
        if(T[i] == 'A')
        { 
            T.pop_back() ;
            

        }else {
            T.pop_back() ;
            reverse(T.begin(), T.end()) ;

        }
    }

    if(S == T) cout << 1;
    else cout << 0 ;



    return 0 ;
}



/*
알파벳 다르면 뒤집고, 다른 부분까지 가다가 그 부분에서 무언가 하기 ? 

*/