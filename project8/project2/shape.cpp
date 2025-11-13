// ************************************************************************
//제 목 : shape(protectd 활용) 클래스와 파생클래스 선언해 좌표값 과 값출력
//날 짜 : 2025년11월13일
//작성자 : 2201052
// ************************************************************************

#include <iostream>     // 입출력을 위한 헤더 파일 포함
using namespace std;    // std:: 를 생략하기 위해 사용

//shape 클래스 
class shape {
protected:               // 파생 클래스에서 접근 가능 
    int x, y;            //멤버 변수

public:
    void setshape(int x, int y);   //  멤버 함수 선언
    void showshape();              // 멤버 함수 선언
};

// shape 클래스의 멤버 함수 정의
void shape::setshape(int x, int y) {
    // this 포인터를 사용해 멤버 변수와 매개변수를 구분
    this->x = x;
    this->y = y;
}

// shape 클래스의 좌표 출력 함수 정의
void shape::showshape() {
    // 현재 도형의 좌표를 출력
    cout << "좌표(" << x << "," << y << ") 에";
}


// 원(Circle) 클래스 (shape를 상속)
class Circle : public shape {   // shape 클래스로부터 public 상속
private:
    int r;                      // 멤버 변수
public:
    void setCircle(int x, int y, int r);   //멤버 함수
    void show();                            // 멤버 함수
};

// Circle 클래스의 멤버 함수 정의
void Circle::setCircle(int x, int y, int r) {
    setshape(x, y);    // 부모 클래스의 setshape()을 이용해 좌표 설정
    this->r = r;       // 반지름 설정
}

// Circle의 출력 함수 정의
void Circle::show() {
    showshape();       // 부모 클래스의 showshape() 호출 → 좌표 출력
    cout << "반지름 " << r << " 인 원" << endl;   // 반지름과 함께 원 정보 출력
}


// 사각형(Rect) 클래스 (shape를 상속)
class Rect : public shape {   // shape 클래스로부터 public 상속
private:
    int w, h;                 //멤버 변수
public:
    void setRect(int x, int y, int w, int h);   // 사각형의 좌표, 폭, 높이 설정 함수
    void show();                                // 사각형 정보 출력 함수
};

// Rect 클래스의 멤버 함수 정의
void Rect::setRect(int x, int y, int w, int h) {
    setshape(x, y);   // 부모 클래스의 setshape() 호출 → 좌표 설정
    this->w = w;      // 폭 설정
    this->h = h;      // 높이 설정
}

// Rect의 출력 함수 정의
void Rect::show() {
    showshape();       // 부모 클래스의 showshape() 호출 → 좌표 출력
    cout << "폭 " << w << "높이" << h << "인 직삼각형" << endl;
    // 폭과 높이를 출력 (단, '직삼각형'은 '직사각형'의 오타)
}

// 삼각형(Triangle) 클래스 (shape를 상속)
class Triangle : public shape {   // shape 클래스로부터 public 상속
private:
    int w, h;                     // 밑변(width), 높이(height)
public:
    void setTriangle(int x, int y, int w, int h);   // 삼각형의 좌표, 밑변, 높이 설정 함수
    void show();                                    // 삼각형 정보 출력 함수
};

// Triangle 클래스의 멤버 함수 정의
void Triangle::setTriangle(int x, int y, int w, int h) {
    setshape(x, y);   // 부모 클래스의 setshape() 호출 → 좌표 설정
    this->w = w;      // 밑변 설정
    this->h = h;      // 높이 설정
}

// Triangle의 출력 함수 정의
void Triangle::show() {
    showshape();       // 부모 클래스의 showshape() 호출 → 좌표 출력
    cout << "밑변 " << w << "높이" << h << "인 삼각형" << endl;
    // 밑변과 높이를 출력
}

int main() {
    Circle x;      // Circle 객체 x 생성
    Rect y;        // Rect 객체 y 생성
    Triangle z;    // Triangle 객체 z 생성

    x.setCircle(0, 0, 2);        // 원: 좌표(0,0), 반지름 2
    y.setRect(1, 1, 5, 10);      // 사각형: 좌표(1,1), 폭 5, 높이 10
    z.setTriangle(2, 2, 3, 4);   // 삼각형: 좌표(2,2), 밑변 3, 높이 4

    x.show();    // 원 정보 출력
    y.show();    // 사각형 정보 출력
    z.show();    // 삼각형 정보 출력
}