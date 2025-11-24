// **********************************************
//제 목 : vector 클래스 활용해 최대, 최소값 받기
//날 짜 : 2025년11월24일
//작성자 : 2201052
// **********************************************

#include <iostream> //c++ 표준 헤더파일
#include <vector>  //c++ 자료구조 헤더파일

using namespace std; //std생략

int main() {
    vector<int> nums(4);  // 정수 4개 저장할 vector

    cout << "정수 4개를 입력하시오: ";
    for (int i = 0; i < 4; i++) {
        cin >> nums[i];  // 사용자로부터 숫자 입력받기
    }

    // 초기값으로 첫 번째 원소를 최대값과 최소값으로 설정
    int maxVal = nums[0];  // 최대값 초기화
    int minVal = nums[0];  // 최소값 초기화

    // 반복문을 통해 최대값과 최소값 찾기
    for (int i = 1; i < 4; i++) {
        if (nums[i] > maxVal) {  // 현재 값이 최대값보다 크면
            maxVal = nums[i];    // 최대값 갱신
        }
        if (nums[i] < minVal) {  // 현재 값이 최소값보다 작으면
            minVal = nums[i];    // 최소값 갱신
        }
    }

    cout << "최대값은 " << maxVal << ", 최소값은 " << minVal << "입니다" << endl; //최대, 최소값 출력 

    return 0;  //종료
}
