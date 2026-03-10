#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    int num1 = 0; 
    int num2 = 0;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        if(num_list[i] % 2 == 0) num1++ ;
        else num2++;
        
    }
    
    answer.push_back(num1);
    answer.push_back(num2);
    
    return answer;
}