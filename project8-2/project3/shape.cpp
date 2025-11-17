#include <iostream>            // 표준 입출력 사용을 위한 헤더
using namespace std;          // std 네임스페이스 사용

class Shape {
private:
    int x, y;                 // 멤버변수
public:
    Shape(int x, int y) : x(x), y(y) {      // 생성자, 멤버 초기화 리스트
        cout << "Shape 생성, ";             // Shape 생성 메시지
    }
    ~Shape() {                // 소멸자
        cout << "Shape 소멸" << endl;       // Shape 소멸 메시지
    }
    void show() {             // 기본 show() (자식에서 숨겨짐)
        cout << "Shape 기본 show()" << endl;
    }

protected:
    // 자식 클래스에서 x, y를 사용해야 하므로 getter 제공
    int getX() { return x; }
    int getY() { return y; }
};

class Circle : public Shape { // Shape 상속
private:
    int r;                    // 멤버변수
public:
    Circle(int x, int y, int r) : Shape(x, y), r(r) { // Circle 생성자
        cout << "Circle 생성" << endl;
    }
    ~Circle() {               // 소멸자
        cout << "Circle 소멸, ";
    }
    void show() {             // Circle show()
        //부모클래스와 연결되지 않고 자식클래스 안에서만작동
        cout << "좌표 " << getX() << " " << getY()
            << " 에 반지름 " << r << " 인 원" << endl;
    }
};

class Rect : public Shape {   // Shape 상속
private:
    int w, h;                 // 멤버변수
public:
    Rect(int x, int y, int w, int h) : Shape(x, y), w(w), h(h) {
        cout << "Rect 생성" << endl;
    }
    ~Rect() {
        cout << "Rect 소멸, ";
    }
    void show() {             // Rect show()
        cout << "좌표 " << getX() << " " << getY()
            << " 에 폭 " << w << " 높이 " << h
            << " 인 직사각형" << endl; //값 출력
    }
};

class Triangle : public Shape {
private:
    int b, h;                 // 멤버변수
public:
    Triangle(int x, int y, int b, int h) : Shape(x, y), b(b), h(h) {  //수를 받는 멤버함수
        cout << "Triangle 생성" << endl;  //출력문
    }
    ~Triangle() {
        cout << "Triangle 소멸, ";
    }
    void show() {             // Triangle show()
        cout << "좌표 " << getX() << " " << getY()
            << " 에 밑변 " << b << " 높이 " << h
            << " 인 삼각형" << endl; //삼각형 값 출ㄺ 
    }
};

int main() {
    Circle x(0, 0, 2);         // Circle 생성
    Rect y(1, 1, 5, 10);       // Rect 생성
    Triangle z(2, 2, 5, 10);   // Triangle 생성

    x.show();                  // Circle의 show() 호출
    y.show();                  // Rect의 show() 호출
    z.show();                  // Triangle의 show() 호출

}
