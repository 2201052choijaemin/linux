// **********************************************
//제 목 : 원소의 최대값과 위치출력
//날 짜 : 2025 년 12 월 1 일
//작성자 : 2201052 최재민
// **********************************************

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> A = {{-5, 2, 35}, {-20, 5, 100},{-75, 5, -25}};
    int maxVal = A[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (A[i][j] > maxVal) {
                maxVal = A[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    cout << "최대값은 " << maxVal << endl;
    cout << "위치는 " << maxRow + 1 << "행 " << maxCol + 1 << "열";
}
