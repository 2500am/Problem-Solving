#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    for(int i = 1 ; i < words.size(); i++)
    {
        string curr_word = words[i] ;

        char curr_last_element = words[i].front() ;
        char past_last_element = words[i-1].back() ;

        int turn = i/n + 1;     
        int person_num = i%n + 1;  // 오류있음
    
        if(curr_last_element != past_last_element)
        {
            return {person_num,turn} ; 
        }
        
        for(int j = 0; j < i ; j++) // 기준부 수정 ?
        {
            string word_cheaking = words[j] ; 

            if(word_cheaking == curr_word)
            {
                // 끝말 검사는 for(i) 로 가능한데, for(j) 에서 중복 체크 해줘야함 
                // 0부터 i 까지 단어 비교하면 가능할듯??
                return {person_num,turn} ;

            }
            
        }
        
    }

    

    return {0,0};
}
