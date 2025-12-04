// **********************************************
//제 목 : 3명 학생의 성적을 받아 최우수 학생 출력
//날 짜 : 2025 년 12 월 1 일
//작성자 : 2201052 최재민
// **********************************************
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> score = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };
    vector<double> avg(3);

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "번째 학생의 국어, 영어, 수학 성적 입력: ";
        for (int j = 0; j < 3; j++)
            cin >> score[i][j];
    }

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++)
            sum += score[i][j];
        avg[i] = sum / 3.0;
    }

    int best = 0;
    for (int i = 1; i < 3; i++)
        if (avg[i] > avg[best])
            best = i;

    cout << "최우수 학생은 " << best + 1 << "번째 학생이고 평균 점수는 "
        << (int)avg[best] << "점이다";
}

