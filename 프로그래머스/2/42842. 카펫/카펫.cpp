#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> nums;
    vector<int> answer ;
    
    int sum = brown + yellow ; 
    
    for(int i = 1 ; i <= sum; i++)
    {
        if(sum % i == 0)
        {
            int w = sum / i ;
            
            if( (i-2) * (w-2) == yellow)
            {
                answer.push_back(w) ;
                answer.push_back(i) ;
                break ;
                
            }
        
        }
        
    }

    
    
    
    return answer;
}