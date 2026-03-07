#include <string>
#include <vector>

using namespace std;

// 1 2 3 5 6 7 8 9 10 13  

int GCD(int a, int b){
    if(b == 0)
    {
        return a; 

    }else {
        return GCD(b,a%b) ;

    }

}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    if(denom2 % denom1 == 0 && denom2 > denom1)
    {
        numer1 *= denom2 / denom1 ;
        
        answer.push_back(numer1 + numer2) ;
        answer.push_back(denom2) ;        
        
    }else if(denom1 % denom2 == 0 && denom1 > denom2)
    {
        numer2 *= denom1 / denom2 ;
            
        answer.push_back(numer1 + numer2) ;
        answer.push_back(denom1) ;        
        
    }else {
        answer.push_back(numer1 *denom2 + numer2 *denom1) ;
        answer.push_back(denom1 * denom2) ;  
        
    }
    
    int i = GCD(answer[0], answer[1]);

    if(i != 1)
    {
        answer[0] /= i ;
        answer[1] /= i ;

    }
    
    return answer;
}