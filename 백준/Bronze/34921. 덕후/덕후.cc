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

    int A, T;
    cin >> A >> T ;

    int res = 10 + 2*(25 - A + T) ; 
    
    if(res < 0)
    {
        cout << 0 ;
    }else {
        cout << res ;
    }
    

    return 0 ;
}



/*
*/