// **********************************************
//    제목: 복소수 출력후 증감연산자 및 프렌드 함수 이용 출력 코드
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
    // 생성자: 실수부와 허수부 값 초기화
    Complex(int r = 0, int i = 0) {
        real = r; //지역변수
        img = i; //지연변수
        cout << "복소수 " << real << "+" << img << "j 생성" << endl; //복소수 값 출력
    }

    // friend 연산자 함수 선언
    friend Complex& operator++(Complex& c);    // 전위 증가 연산자 (++x)
    friend Complex operator--(Complex& c, int); // 후위 감소 연산자 (x--)

    void show() {
        cout << " " << real; //실수부 출력
        if (img >= 0)
            cout << "+" << img << "j" << endl; // 허수부가 양수면 + 표시
        else
            cout << img << "j" << endl; // 허수부가 음수면 그대로 출력
    }
}; 

// 전위 증가 연산자 (++x)
Complex& operator++(Complex& c) {
    ++c.real; // 실수부 1 증가
    ++c.img; // 허수부 1 증가
    return c;
}

// 후위 감소 연산자 (x--)
Complex operator--(Complex& c, int) {
    Complex temp = c; // 증가이전 현재 상태 저장
    c.real--; // 실수부 1 감소
    c.img--; // 허수부 1 감소
    return temp; // 감소 전 상태 반환
}

int main() {
    Complex x(2, 3); // Complex 객체 x 생성(2,3)
    ++x;             // 전위 증가 연산자 호출 
    cout << "증가결과"; //안내문 출력
    x.show(); //증가결과 출력

    x--;             // 후위 감소 연산자 호출 
    cout << "감소결과"; //안내문 출력
    x.show(); // 감소 결과 출력

    return 0; //프로그램 종료
}
