// **********************************************
//    제목: 템플릿 함수를 이용해 최대값 출력
//    날짜:  2025년11월20일
//    작성자: 2201052 최재민
// **********************************************

#include <iostream>                   // 표준 입출력 사용을 위한 헤더 포함
using namespace std;                  // std 네임스페이스 사용

class Circle {                        // Circle 클래스 선언
private:                       
    int radius;                       // 반지름을 저장할 private 멤버 변수
public:
    Circle(int radius = 1) {          // 멤버 함수
        this->radius = radius;        // this 포인터로 멤버 변수 초기화
    }
    int getRadius() {                 // 반지름 값을 반환하는 멤버 함수
        return radius;
    }
    bool operator> (Circle& c){       // Circle 객체 간의 > 연산자 오버로딩
        return this-> radius > c.radius;  // 현재 객체의 반지름이 큰지 비교
    }
};

template <class T>                    // 템플릿 함수 선언: 어떤 타입이든 비교 가능
T bigger(T a, T b) {                  // 두 값을 받아 더 큰 값 반환
    if (a > b) return a;              // > 연산자를 사용해 비교
    else return b;
}

int main() {                          
    int a = 20, b = 50, c;            // int형 변수 선언 및 초기화
    c = bigger(a, b);                 // bigger 템플릿 함수 호출: int 타입으로 인스턴스화
    cout << "20과 50중 큰 값은 " << c << endl;  // 결과 출력

    Circle donut(10), pizza(20), y;   // Circle 객체 생성: 반지름 10, 20
    y = bigger(donut, pizza);         // bigger 함수 호출: Circle 타입으로 인스턴스화
                                      // Circle의 > 연산자를 이용해 비교
    cout << "donut 과 pizza중 큰 반지름은 " 
         << y.getRadius() << endl;    // 더 큰 반지름 출력

}                                      // main 함수 종료
