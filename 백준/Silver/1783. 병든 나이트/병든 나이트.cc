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

    int cnt = 1 ;
    int N, M ;

    cin >> N >> M ;

    if(N >= 3)    // 4 이상 ㄱㄴ 
    {
        if(M >=7)
        {
            cout << M-2 ;

        }else if(M >= 4)
        {
            cout << 4 ;

        }else {
            cout << M ;

        }

    }else if(N == 2)
    {
        if(M >= 7 )
        {
            cout << 4;

        }else if(M >= 5)
        {
            cout << 3 ;

        }else if(M >= 3) {
            cout << 2 ;
            
        }else {
            cout << 1 ;

        }

    }else {
        cout << 1;

    }


    return 0 ;
}



/*

*/