#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    int cnt = 1 ;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < cnt; j++)
        {
            cout << '*' ; 
        }
        
        cnt++ ; 
        cout << '\n' ; 
    }
    
    return 0;
}