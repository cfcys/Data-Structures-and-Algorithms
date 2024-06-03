#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solution_1(const vector<char>& a) {
    int record[26] = {0};  // 这里可以学一下，如何写一个全为0的指定大小的数组
    for(int i = 0;i < a.size();i++){
        record[a[i] - 'a'] ++;
    }
    char result;  // 记录结果
    int max_count = 0;  // 记录出现result最多的次数
    for(int i = 0;i < 26;i++){
        if (record[i] > max_count){
            max_count = record[i];
            result = i + 'a';      // 使用ASCII码来做运算
        }
    }
    cout << "出现最多的字母是："  << result << ",出现的次数:" << max_count << endl;
}

int main(){
    vector<char> chars = {'a', 'b', 'a', 'c', 'a', 'b', 'a', 'a'};
    solution_1(chars);

    return 0;
}