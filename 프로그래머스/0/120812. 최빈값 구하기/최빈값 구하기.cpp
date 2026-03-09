#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int solution(vector<int> array) {
    /*
        1. 정수 N 이 몇 개 ?
        2. 빈도수가 중복 ?
        
    */
    
    if(array.size() == 1)
    {
        return array[0] ; 
    }
    
    vector<int> cnt(1000,0) ;

    int max = 0 ;
    int idx = 0;
    bool is_dup = 0 ;
    
    for(int i = 0; i < array.size(); i++)
    {
        cnt[array[i]] ++ ;
        
    }
    
    for(int i = 0; i < 1000; i++)
    {
        if(cnt[i] > max)
        {
            is_dup = 0 ;
            max = cnt[i] ; // max = 2
            idx = i ; // idx = 1 ; 
            
        }else if(cnt[i] == max)
        {
            is_dup = 1 ;
            
        }
        
    }
    
    
    if(is_dup) return -1 ;
    else return idx;
    
    
    
    
    
}