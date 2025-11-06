// **********************************************
//    제목: 복소수와 복소수의 합을 출력하는 코드
//    날짜:  2025년11월3일
//    작성자: 2201052 최재민
// **********************************************

#include <iostream>  // 표준 입출력 라이브러리 포함
using namespace std; // std 네임스페이스 사용

// 클래스 선언
class Complex {
private:
    double real; // 실수부
    double img;  // 허수부
public:
    // 기본 생성자: 0+0j로 초기화, 생성 메시지 출력
    Complex() : real(0), img(0) {
        cout << "복소수 " << real << "+" << img << "j생성" << endl;
    }

    // showMsg=true이면 생성 메시지 출력
    Complex(double r, double i, bool showMsg = true) : real(r), img(i) {
        if (showMsg)
            cout << "복소수 " << real << "+" << img << "j생성" << endl;
        //복소수 값 0으로 초기호 후 출력 
    }

    // 복소수 값을 화면에 출력하는 함수
    void show() {
        cout << real << "+" << img << " j" << endl;
    }

    // 전역 함수 ComplexAdd가 private 멤버에 접근할 수 있도록 friend 선언
    friend Complex ComplexAdd(Complex a, Complex b);
};

// 두 복소수의 합을 계산하는 전역 함수
Complex ComplexAdd(Complex a, Complex b) {
    // 합을 만들 때 메시지 출력하지 않음
    return Complex(a.real + b.real, a.img + b.img, false);
}


int main() {
    Complex x(2, 3), y(-5, 10), sum; // 복소수 객체 생성
    sum = ComplexAdd(x, y);           // x + y 계산

    cout << "두 복소수의 합은 ";      // 안내 문구 출력
    sum.show();                        // 결과 출력: -3+13 j

    return 0; // 프로그램 종료
}