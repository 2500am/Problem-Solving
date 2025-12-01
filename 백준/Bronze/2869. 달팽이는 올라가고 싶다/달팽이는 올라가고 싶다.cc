	#define _CRT_SECURE_NO_WARNINGS
	#include<iostream>
	#include<algorithm>
	#include<vector>
	#include<string> 
	#include<cmath>
	
	using namespace std;
	
	int main() { 			
		cin.tie(NULL);
		cout.tie(NULL);
		ios::sync_with_stdio(false);
		
		int A, B, V, count ;
		cin >> A >> B >> V ;
		
		count = (V-B-1) / (A-B) + 1 ;
		
			
		cout << count ;
		
	return 0;																	
	} 	
	   
	//	novelbrihgt
