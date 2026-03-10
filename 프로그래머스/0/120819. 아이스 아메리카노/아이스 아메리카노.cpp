#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int cnt = 0;
    
    while(1)
    {
        if(money >= 5500)
        {
            cnt++; 
            money -= 5500 ;
            
        }else break ;
    }
    
    answer.push_back(cnt) ;
    answer.push_back(money) ;
    
    
    
    return answer;
}