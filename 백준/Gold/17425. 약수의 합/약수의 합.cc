#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    int T ;
    cin >> T ;

    vector<long long> psum (1000001) ;

    for (int i = 1; i < 1000001; i++)
    {
        for (int j = i; j < 1000001; j+=i)
        {
            psum[j] += i ;

        }   

        psum[i] += psum[i-1] ;  

    }

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N ;

        cout << psum[N] << '\n' ; 

    }
    
    


}