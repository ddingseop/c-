#include <iostream>
#include <map>
using namespace std;

void word_count(map<string, int>& mymap, string str);
string most_frequent(map<string, int> mymap, int& freq);

int main()
{
    int n;
    cin >> n;

    map<string, int> mymap;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        word_count(mymap, str);
    }

    int freq = 0;
    cout << most_frequent(mymap, freq) << endl;
    cout << freq << endl;
}

void word_count(map<string, int>& mymap, string str) {
    mymap[str]++; //해당 문자열이 존재하는지 확인하고 존재하면 빈도+1, 존재X - 새로운 항목 맵에 추가
}

string most_frequent(map<string, int> mymap, int& freq) {
    string most_frequent_word;
    freq = 0;

    //pair.first = 맵의 키(key)
    //pair.second = 해당 키의 값(value)
    for (const auto& pair : mymap) {
        if (pair.second > freq) { //현재 반복중인 항목의 빈도가 현재까지 찾은 가장 높은 빈도보다 큰지
            most_frequent_word = pair.first;  //현재의  빈도가 더 높다면 현재키를 최대에 저장
            freq = pair.second; //빈도를 freq에 업데이트 
        }
    }

    return most_frequent_word;
}