#include <iostream> 
#include <cstring>
#include <algorithm>
using namespace std;
string s;
int main(){
	cin>>s;
	sort(s.begin(),s.end());
	cout<<s;
	return 0;
} 
