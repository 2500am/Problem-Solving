#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
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
    
    return triangle[0][0] ;
}

/* 
1 .무조건 큰 수로 내려가는 게 답이 아니다 
2. DP 
3. bottom up vs top down ?
4. 최댓값 되도록 이동


*/



