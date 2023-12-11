#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> matrix_t;

void read_matrix(matrix_t& pmat);
void add(matrix_t a, matrix_t b, matrix_t& c);

int main()
{
    int n, m;
    cin >> n >> m;
    matrix_t a(n, vector<int>(m)); //행렬 정의
    matrix_t b(n, vector<int>(m)); //행렬 정의 
    matrix_t c(n, vector<int>(m)); //행렬 정의

    //첫번째 a행렬 입력받기
    for (int i = 0; i < a.size(); i++)
        for (int j = 0; j < a[0].size(); j++)
            cin >> a[i][j];

    read_matrix(b); //두번째 b행렬 함수로 입력받기
    add(a, b, c); //세번째 c행렬에 첫+두 더한결과 저장

    for (int i = 0; i < c.size(); i++) {
        for (int j = 0; j < c[0].size(); j++) {
            cout << c[i][j];
            if (j < m - 1) cout << " ";
        }
        cout << "\n";
    }
    //c행렬 출력
}

void read_matrix(matrix_t& pmat) {
    for (int i = 0; i < pmat.size(); i++)
        for (int j = 0; j < pmat[0].size(); j++)
            cin >> pmat[i][j]; //행렬 입력받기
}

void add(matrix_t a, matrix_t b, matrix_t& c) {
    for (int i = 0; i < a.size(); i++)
        for (int j = 0; j < a[0].size(); j++)
            c[i][j] = a[i][j] + b[i][j];  //행렬 더하기
}