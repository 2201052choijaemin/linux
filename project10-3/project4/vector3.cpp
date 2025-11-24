// **********************************************
//제 목 : vector 클래스와 erase함수를 활용해 벡터원소 평균값 구하기
//날 짜 : 2025년11월24일
//작성자 : 2201052
// **********************************************

#include <iostream>   // 입출력 헤더 파일
#include <vector>     // 동적 배열 헤더 파일
using namespace std;  // std:: 없이 사용

int main() {
    vector<int> v;  // 정수를 저장할 동적 배열(vector) 선언
    int num;        // 사용자로부터 입력받을 정수 변수

    // 정수 입력 (5개)
    cout << "숫자를 입력하세요:";
    for (size_t i = 0; i < 5; i++) {  // int -> size_t로 수정
        cin >> num;        // 사용자로부터 정수 입력
        v.push_back(num);  // 입력받은 정수를 벡터에 추가
    }

    // 초기 벡터 출력
    cout << "초기 벡터 원소:";
    for (size_t i = 0; i < v.size(); i++)  // int -> size_t로 수정
        cout << " " << v.at(i);  // 벡터 i번째 원소 출력
    cout << endl;

    // 음수 제거
    for (size_t i = 0; i < v.size(); ) {  // int -> size_t로 수정
        if (v.at(i) < 0) {
            v.erase(v.begin() + i);  // 음수일 경우 해당 원소 삭제
        }
        else {
            i++;  // 음수가 아니면 다음 원소로 이동
        }
    }

    // 음수 제거 후 벡터 출력
    cout << "음수를 삭제 후 벡터 원소:";
    for (size_t i = 0; i < v.size(); i++)  // int -> size_t로 수정
        cout << " " << v.at(i);  // 벡터 원소 출력
    cout << endl;

    // 평균값 계산
    int sum = 0;
    for (size_t i = 0; i < v.size(); i++)  // int -> size_t로 수정
        sum += v.at(i);  // 벡터 원소 합 계산

    float avg = (v.empty() ? 0 : (float)sum / v.size());
    // 벡터가 비어있으면 0, 아니면 합/원소 개수로 평균 계산

    cout << "평균값:" << avg << endl;  // 평균값 출력

    return 0;  // 프로그램 종료
}
