// **********************************************
//제 목 : 원수중 음수는 0 양수는 255로 출력
//날 짜 : 2025 년 12 월 1 일
//작성자 : 2201052 최재민
// **********************************************

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> mat = { {-5, 2, 35},{-20, 5, 100}, {-75, 5, -25}};
    vector<vector<int>> result = {{0, 0, 0},{0, 0, 0},{0, 0, 0}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] < 0)
                result[i][j] = 0;
            else
                result[i][j] = 255;
        }
    }
    cout << "수정행렬\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
