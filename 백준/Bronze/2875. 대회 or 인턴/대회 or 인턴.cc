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

    int team = 0 ;
    int N,M,K ;

    cin >> N >> M >> K ;

    while(N+M > K)
    {
        if(N <= 1 || M == 0) break ;

        N -=2 ;
        M -=1 ;
        team ++ ;

        if(N+M < K)
        {
            team -- ;

        }

    }   

    cout << team ;

    return 0 ;
}



/*
    여2 남1 
    여 N , 남 M 
    K명 인턴쉽 가야함 ( 인턴쉽 창여 시 대회 X)

*/