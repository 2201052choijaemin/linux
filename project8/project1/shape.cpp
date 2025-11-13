// **********************************************
//제 목 : shape 클래스와 파생클래스 선언해 좌표값 과 값출력
//날 짜 : 2025년11월13일
//작성자 : 2201052
// **********************************************
#include <iostream>     // 입출력을 위한 헤더 파일
using namespace std;    // 표준 네임스페이스 사용

// shape 클래스
class shape {
private:
    int x, y;           // 멤버 변수
public:
    // 좌표 설정 함수
    void setshape(int x, int y) {
        this->x = x;    // 매개변수 x를 멤버 변수 x에 대입
        this->y = y;    // 매개변수 y를 멤버 변수 y에 대입
    }
    // 좌표 출력 함수
    void showshape() {
        cout << "좌표(" << x << "," << y << ") 에";
    }
};

// Circle 클래스 shape 상속
class Circle : public shape {
private:
    int r;              // 멤버 변수
public:
    // 원의 좌표와 반지름 설정 함수
    void setCircle(int x, int y, int r) {
        setshape(x, y); // 부모 클래스의 setshape() 사용 → 좌표 설정
        this->r = r;    // 반지름 설정
    }
    void show();        // 원의 정보 출력 함수 선언
};

// Circle의 show() 함수 정의
void Circle::show() {
    showshape();        // 좌표 출력
    cout << "반지름 " << r << " 인 원" << endl;   // 반지름 출력
}

// Rect 클래스 shape 상속
class Rect : public shape {
private:
    int w, h;           // 멤버 변수
public:
    // 사각형의 좌표, 폭, 높이 설정 함수
    void setRect(int x, int y, int w, int h) {
        setshape(x, y); // 좌표 설정
        this->w = w;    // 폭 설정
        this->h = h;    // 높이 설정
    }
    void show();        // 사각형 정보 출력 함수 선언
};

// Rect의 show() 함수 정의
void Rect::show() {
    showshape();    // 좌표 출력
    cout << "폭 " << w << "높이" << h << "인 직삼각형" << endl;   // 폭, 높이 출력
}

// Triangle 클래스 shape 상속
class Triangle : public shape {
private:
    int w, h;           // 멤버 변수
public:
    // 삼각형의 좌표, 밑변, 높이 설정 함수
    void setTriangle(int x, int y, int w, int h) {
        setshape(x, y); // 좌표 설정
        this->w = w;    // 밑변 설정
        this->h = h;    // 높이 설정
    }
    void show();        // 삼각형 정보 출력 함수 선언
};

// Triangle의 show() 함수 정의
void Triangle::show() {
    showshape();        // 좌표 출력
    cout << "밑변 " << w << "높이" << h << "인 삼각형" << endl;  // 밑변, 높이 출력
}

int main() {
    Circle x;       // Circle 객체 생성
    Rect y;         // Rect 객체 생성
    Triangle z;     // Triangle 객체 생성

    x.setCircle(0, 0, 2);       // 원의 좌표 (0,0), 반지름 2 설정
    y.setRect(1, 1, 5, 10);     // 사각형의 좌표 (1,1), 폭 5, 높이 10 설정
    z.setTriangle(2, 2, 3, 4);  // 삼각형의 좌표 (2,2), 밑변 3, 높이 4 설정

    x.show();       // 원의 정보 출력
    y.show();       // 사각형의 정보 출력
    z.show();       // 삼각형의 정보 출력
}