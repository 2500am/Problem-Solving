#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(0) ;
    cin.tie(0) ; cout.tie(0) ;

    int N ;
    cin >> N ;

    int A = 0; int B = 0 ;
    int a,b ;

    for (int i = 0; i < N; i++)
    {
        cin >> a >> b ;
        if(a > b) 
        {
            A++ ;

        }else if(b > a)
        {
            B++ ;

        }

    }


    cout << A << " " << B ;
    





    return 0 ;
}