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


    string N ;
    cin >> N ;

    int sum = 0 ;
    long long N1 = 0;

    sort(N.begin(), N.end(), [](int a, int b) { return a > b; } 
) ;

    for(int i = 0; i < N.size(); i++)
    {
        sum += N[i] ;
        N1 = N1 + (N[i] - 0) *10 ; 

    }

    if(sum % 3 == 0 && N1 >= 30 && N[N.size()-1] == '0')
    {
        cout << N ;

    }else {
        cout << -1 ;
    }



    
    

    return 0 ;
}



/*

*/