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
    mymap[str]++; //�ش� ���ڿ��� �����ϴ��� Ȯ���ϰ� �����ϸ� ��+1, ����X - ���ο� �׸� �ʿ� �߰�
}

string most_frequent(map<string, int> mymap, int& freq) {
    string most_frequent_word;
    freq = 0;

    //pair.first = ���� Ű(key)
    //pair.second = �ش� Ű�� ��(value)
    for (const auto& pair : mymap) {
        if (pair.second > freq) { //���� �ݺ����� �׸��� �󵵰� ������� ã�� ���� ���� �󵵺��� ū��
            most_frequent_word = pair.first;  //������  �󵵰� �� ���ٸ� ����Ű�� �ִ뿡 ����
            freq = pair.second; //�󵵸� freq�� ������Ʈ 
        }
    }

    return most_frequent_word;
}