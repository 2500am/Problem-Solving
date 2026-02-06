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

    int N ;
    cin >> N ;

    int total = 0 ;

    vector<int> pos ;
    vector<int> neg ;
    vector<int> one ;
    vector<int> zero ; 

    for(int i = 0; i < N; i ++)
    {
        int n ;
        cin >> n ;
        
        if(n > 1) pos.push_back(n) ;
        if(n == 1) one.push_back(n) ;
        if(n == 0) zero.push_back(n) ;
        if(n < 0) neg.push_back(n) ; 

    }

    sort(pos.begin(), pos.end(), greater<int>()) ;
    sort(neg.begin(), neg.end()) ; 

    if(pos.size() % 2 == 0)
    {
        for(int i = 1; i < pos.size(); i +=2)
        {
            int a = pos[i-1] ;
            int b = pos[i] ;

            total += a*b ;

        }

    }else { // 홀수 
        for(int i = 1; i < pos.size() -1 ; i +=2 )
        {
            int a = pos[i-1] ;
            int b = pos[i] ;

            total += a*b ;

        }
        total += pos[pos.size()-1] ; 

    }

    if(neg.size() % 2 == 0)
    {
         for(int i = 1; i < neg.size(); i +=2)
        {
            int a = neg[i-1] ;
            int b = neg[i] ;

            total += a*b ;

        }

    }else if(neg.size() % 2 != 0)
    {
        if(zero.size() > 0)
        {
            for(int i = 1; i < neg.size(); i +=2)
            {
                int a = neg[i-1] ;
                int b = neg[i] ;

                total += a*b ;

            }

        }else {
            for(int i = 1; i < neg.size() - 1; i +=2)
            {
                int a = neg[i-1] ;
                int b = neg[i] ;

                total += a*b ;

            }
                
            total += neg[neg.size() -1] ;

        }

    }

    total += one.size() ; 

    cout << total ; 

    return 0 ;
}