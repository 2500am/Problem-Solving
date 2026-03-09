#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int solution(vector<int> sides) {
    int answer = 0 ;
    
    sort(sides.begin(), sides.end()) ;
    
    if(sides[sides.size()-1] >= sides[0] + sides[1]) return 2;
    else return 1 ;
        
\
}