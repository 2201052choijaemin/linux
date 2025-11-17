#include <iostream>   // 표준 입출력 사용을 위한 헤더
#include <string>     // 문자열(string) 사용을 위한 헤더
using namespace std;  // std 네임스페이스 사용

class Circle {
private:
    int radius;     // 멤버변수: 원의 반지름

public:
    // 생성자: radius 초기화
    Circle(int radius) : radius(radius) {}

    // radius를 반환하는 getter 함수
    int getRadius() { return radius; }

    // 원 정보 출력 함수
    void show() {
        cout << "반지름이 " << radius << "인 원" << endl;
    }
};

class NamedCircle : public Circle { // Circle을 상속받음
private:
    string name;       // 멤버변수: 원의 이름

public:
    // 생성자: 부모 생성자 호출 및 name 초기화
    NamedCircle(int radius, string name)
        : Circle(radius), name(name) {}

    // show() 함수 오버라이딩: 이름 포함 출력
    void show() {
        cout << "반지름이 " << getRadius()     // 부모 Circle의 getRadius() 사용
            << "인 " << name << endl;         // 이름 출력
    }
};

int main() {
    NamedCircle waffle(3, "waffle");   // NamedCircle 객체 생성, 반지름 3, 이름 waffle
    waffle.show();                      // show() 호출 → "반지름이 3인 waffle" 출력
}
