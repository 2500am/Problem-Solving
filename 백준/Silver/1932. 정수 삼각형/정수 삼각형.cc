#include <string>
#include <vector>
#include <iostream> 

using namespace std;

int main(void) {
    
    int N ;
    cin >> N ;

    vector<vector<int>> triangle(N, vector<int>(N,0)) ; 

    int k = 0;

    for(int i = 0; i <N; i++)
    {
        for(int j = 0; j <= k; j++)
        {
            cin >> triangle[i][j] ;

        }
        k++;

    }

    vector<vector<int> > v = triangle ; 

    for (int i = triangle.size()-1 ; i > 0; i--)
    {
        for (int j = 0; j < triangle[i].size(); j++)
        {
            if(j == 0)  
            {
                if(v[i-1][j] + triangle[i][j] > triangle[i-1][j])    
                {
                    triangle[i-1][j] = triangle[i][j] + v[i-1][j] ;

                }

            }else if(j == triangle[i].size() -1)
            {
                if(v[i-1][j-1] + triangle[i][j] > triangle[i-1][j-1])
                {
                    triangle[i-1][j-1] = triangle[i][j] + v[i-1][j-1] ;

                }
                
            }else {
                if(v[i-1][j-1] + triangle[i][j] > triangle[i-1][j-1])
                {
                    triangle[i-1][j-1] = triangle[i][j] + v[i-1][j-1] ;

                }
                
                if(v[i-1][j] + triangle[i][j] > triangle[i-1][j])
                {
                    triangle[i-1][j] = triangle[i][j] + v[i-1][j] ; 

                }

            }

        }
        
    }
    
    cout << triangle[0][0] ;
    return 0 ;
}

/* 
1 .무조건 큰 수로 내려가는 게 답이 아니다 
2. DP 
3. bottom up vs top down ?
4. 최댓값 되도록 이동

*/




