// **********************************************
//    제목: 복소수와 복소수의 합을 출력하는 코드
//    날짜:  2025년11월3일
//    작성자: 2201052 최재민
// **********************************************

#include <iostream>  // 표준 입출력 라이브러리 포함
using namespace std; // std 네임스페이스 사용

// Complex 클래스 선언
class Complex;
class ComplexManager {
public:
    Complex ComplexAdd(Complex a, Complex b);  // 두 복소수의 합 계산
};

// 복소수를 표현하는 클래스
class Complex {
private:
    int real; // 매개변수
    int img;  // 매개변수
public:
    // 생성자: r, i 지정 가능, showMsg=true이면 생성 메시지 출력
    Complex(int r = 0, int i = 0, bool showMsg = true) : real(r), img(i) {
        if (showMsg)
            cout << "복소수 " << real << "+" << img << "j 생성" << endl; 
        //복소수값 출력 
    }

    // 복소수 값을 화면에 출력하는 함수
    void show() {
        cout << real << "+" << img << " j" << endl;
    }

    // ComplexManager가 private 멤버에 접근할 수 있도록 friend 선언
    friend class ComplexManager;
};

// ComplexManager 멤버함수 정의
// 두 Complex 객체의 합을 계산하여 새로운 Complex 객체 반환
Complex ComplexManager::ComplexAdd(Complex a, Complex b) {
    return Complex(a.real + b.real, a.img + b.img, false);  // 메시지 출력 안 함
}

// 프로그램 시작점
int main() {
    Complex x(2, 3), y(-5, 10), sum; // 복소수 객체 생성
    ComplexManager man;               // 복소수 연산 객체 생성

    sum = man.ComplexAdd(x, y);      // x + y 계산

    cout << "두 복소수의 합은 ";      // 안내 문구 출력
    sum.show();                       // 결과 출력: -3+13 j

    return 0; // 프로그램 종료
}
