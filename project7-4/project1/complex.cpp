// **********************************************
//    제목: 복소수 출력후 증감연산자 이용 출력 코드
//    날짜:  2025년11월10일
//    작성자: 2201052 최재민
// **********************************************

#include <iostream> // 입출력 관련 라이브러리
using namespace std; // std 네임스페이스 사용

// Complex 클래스 정의
class Complex {
private:
    int real; // 실수부
    int img;  // 허수부

public:
    //생성자 생성후 실수부 허수부 값 0으로 초기화
    Complex(int r = 0, int i = 0) {
        real = r; // 실수부 초기화
        img = i;  // 허수부 초기화
        cout << "복소수 " << real << "+" << img << "j 생성" << endl; // 객체 생성 시 출력
    }

    //전위 증가 연산자 (++x)
    Complex& operator++() {
        ++real; // 실수부 1 증가
        ++img;  // 허수부 1 증가
        return *this; // 증가된 객체 자신 반환
    }

    // 후위 감소 연산자 (x--) 
    Complex operator--(int) {
        Complex temp = *this;  // 현재 상태를 임시 객체에 저장 (후위 연산 특성)
        real--;                // 실수부 1 감소
        img--;                 // 허수부 1 감소
        return temp;           // 감소 전 상태를 반환
    }

 
    void show() {
        cout << " " << real;   // 실수부 출력
        if (img >= 0)
            cout << "+" << img << "j" << endl; // 허수부가 양수면 + 표시
        else
            cout << img << "j" << endl;       // 허수부가 음수면 그대로 출력
    }
};

int main() {
    Complex x(2, 3); // Complex 객체 x 생성, 실수부 2, 허수부 3
    ++x;             // 전위 증가 연산자 호출 (x.real++, x.img++)
    cout << "증가결과"; // 전위 증가 후 출력 안내
    x.show();        // 증가 결과 출력

    x--;             // 후위 감소 연산자 호출 (현재 값 저장 후 감소)
    cout << "감소결과"; // 후위 감소 후 출력 안내
    x.show();        // 감소 결과 출력

    return 0;        // 프로그램 정상 종료
}