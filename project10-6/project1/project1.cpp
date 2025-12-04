// **********************************************
//제 목 : 행렬을 더해 값을 출력
//날 짜 : 2025 년 12 월 1 일
//작성자 : 2201052 최재민
// **********************************************
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <vector<int>> A = { {2 ,4}, {5 ,-5} };
	vector<vector<int>> B = { {-2, 3}, {0, -5} };
	vector<vector<int>> C = { {0 ,0}  , {0, 0} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	cout << "연산결과" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << C[i][j] << ' ';
		}
		cout << endl;
	}
}
