#include <iostream>              // 입출력 기능을 사용하기 위해 iostream 헤더 포함
using namespace std;            // std::를 생략하고 표준 라이브러리 사용

template <class T>              // 템플릿 선언: 데이터 타입에 상관없이 사용 가능
T max(T data[], int n ){        // 배열 data와 요소 개수 n을 받아 최대값을 구하는 함수
    T max = data[0];            // 첫 번째 원소를 초기 최대값으로 설정
    for(int i =0; i<n;i++){     // 배열의 모든 요소를 반복하면서
        if(data[i] > max)       // 현재 값이 저장된 최대값보다 크다면
            max = data[i];      // 최대값 갱신
    }
    return max;                 // 최종 최대값 반환
}

int main() {                  
    int a[5] = { -5, 10, 30, 20, 6 };    // 정수형 배열 선언 및 초기화
    double b[4] = { 3.14, 1.5, -6.0, 0.5 }; // 실수형 배열 선언 및 초기화
    char c[3] = { 'a', 'x', 'p' };       // 문자형 배열 선언 및 초기화

    cout << "정수 배열의 최대값은 " << max(a, 5) << endl;  // 정수 배열 최대값 출력
    cout << "실수 배열의 최대값은 " << max(b, 4) << endl;  // 실수 배열 최대값 출력
    cout << "문자 배열의 최대값은 " << max(c, 3) << endl;  // 문자 배열 최대값 출력

    return 0;                   // 프로그램 정상 종료
}
