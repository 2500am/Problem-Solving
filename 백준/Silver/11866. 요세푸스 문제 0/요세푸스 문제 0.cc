#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>   
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0) ;
    cin.tie(0); cout.tie(0) ;

    int N,K ;
    cin >> N >> K ;

    queue<int> q ; 
    vector<int> v ;

    int cnt = 0 ;
    
    for (int i = 1; i <= N; i++)
    {
        q.push(i) ;
    }
    
    while (q.size())
    {
        cnt++ ;

        if(cnt % K == 0)
        {
            v.push_back(q.front());
            q.pop() ;

        }else{
            int temp = q.front() ;
            q.push(temp) ;
            q.pop() ;

        }

    }
    
    cout << '<' ;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] ;
        if(i != v.size()-1)
        {
            cout << ", " ; ;

        }

    }
    

    cout << '>' ;


    return 0;

    }

        // cout << "로그 : " << var << '\n' ; \

    