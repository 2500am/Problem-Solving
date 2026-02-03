#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> targets) {
    int res = 1;

    sort(targets.begin(), targets.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1] ;
    } ) ;

    int last_max = targets[0][1] ;  

    for(int i = 1; i < targets.size(); i++)
    {
        int cur_min = targets[i][0] ; 
        
        if(last_max <= cur_min)
        {
            res++ ;
            last_max = targets[i][1] ;

        }

    }

    
//  [[1,4],[3,7],[4,5],[4,8],[5,12],[10,14],[11,13]]
// 구간 바꿀 떄 더 큰 구간으로 ? 

    
    return res;
}

