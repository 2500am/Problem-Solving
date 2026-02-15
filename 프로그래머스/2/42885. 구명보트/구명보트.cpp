#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int ans = 0; 
    int sum = 0 ;
    
    sort(people.begin(), people.end()) ;
    
    int light = 0 ;
    int heavy = people.size() -1 ;

    while(light <= heavy)
    {
        if(people[light] + people[heavy] <= limit)
        {
            ans++;
            light++;
            heavy--;

        }else {
            heavy-- ;
            ans++;

        }

    }
    
    
    return ans;
}