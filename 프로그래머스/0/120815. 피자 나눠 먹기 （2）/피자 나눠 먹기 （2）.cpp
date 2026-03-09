#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    
    if(n == 1 ) return 1 ; 
    
    int i = 6 ;
    
    while(1)
    {
        if(i % n == 0)
        {
            return i / 6 ;
            
        }else {
            i += 6 ; 
            
        }
        
    }
    
}