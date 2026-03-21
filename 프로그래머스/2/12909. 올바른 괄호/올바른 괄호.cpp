#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = 1;
    int cnt = 0;
    
    if(s.size() % 2 != 0) return 0 ;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(' ) 
        {
            cnt++;
            
        } else
        {
            cnt--;
            
        }
        
        if(cnt < 0) return 0 ;
        
        
    }

    return cnt == 0;
}