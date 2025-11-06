// **********************************************
//    제목: 복소수의 합과 차를 출력하는 코드
//    날짜:  2025년11월3일
//    작성자: 2201052 최재민
// **********************************************

#include <iostream>  // 표준 입출력 라이브러리 포함
using namespace std; // std 네임스페이스 사용

// Complex 클래스 선언
// ComplexManager에서 Complex를 멤버함수 매개변수로 사용하기 위해 필요
class Complex;

// 복소수 클래스
class ComplexManager {
public:
    Complex ComplexAdd(Complex a, Complex b); // 두 복소수의 합을 반환하는 함수
    Complex ComplexSub(Complex a, Complex b); // 두 복소수의 차를 반환하는 함수
};

// 실제 복소수를 표현하는 클래스
class Complex {
private:
    int real; // 실수부
    int img;  // 허수부
public:
    // 생성자: r과 i가 주어지지 않으면 0으로 초기화
    Complex(int r = 0, int i = 0) : real(r), img(i) {}

    // 복소수 값을 화면에 출력하는 함수
    void show() {
        cout << real << "+" << img << "j" << endl; // "실수+허수j" 형태 출력
    }

    // ComplexManager 클래스가 Complex의 private 멤버에 접근할 수 있도록 선언
    friend class ComplexManager;
};

// ComplexManager 클래스의 멤버함수 정의
// 두 Complex 객체를 받아 합을 계산하여 새로운 Complex 객체로 반환
Complex ComplexManager::ComplexAdd(Complex a, Complex b) {
    return Complex(a.real + b.real, a.img + b.img);
}

// 두 Complex 객체를 받아 차를 계산하여 새로운 Complex 객체로 반환
Complex ComplexManager::ComplexSub(Complex a, Complex b) {
    return Complex(a.real - b.real, a.img - b.img);
}

int main() {
    // Complex 객체 x(5+5j), y(2+2j), sum, sub 생성
    Complex x(5, 5), y(2, 2), sum, sub;

    // Complex 연산을 수행하는 객체 생성
    ComplexManager man;

    // x와 y의 합을 계산하여 sum에 저장
    sum = man.ComplexAdd(x, y);
    cout << "두 복소수의 합은 "; // 안내 문구 출력
    sum.show();                  // 결과 출력: 7+7j

    // x와 y의 차를 계산하여 sub에 저장
    sub = man.ComplexSub(x, y);
    cout << "두 복소수의 차는 "; // 안내 문구 출력
    sub.show();                  // 결과 출력: 3+3j

    return 0; // 프로그램 종료
}