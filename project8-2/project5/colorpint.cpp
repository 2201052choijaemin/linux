#include <iostream> // 표준 입출력 사용을 위한 헤더
#include <string> // std::string을 사용하기 위해 포함

// 1. Point 클래스 (부모 클래스)
class Point {
private:
    int x, y; // 멤버변수

public:
    // 기본 생성자: (0, 0)으로 초기화
    Point() : x(0), y(0) {}

    // 매개변수가 있는 생성자: (x, y)로 초기화
    Point(int x, int y) : x(x), y(y) {}

    // x, y 좌표를 설정하는 멤버 함수
    void setPoint(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // private 멤버인 x를 반환하는 getter 함수
    int getX() {
        return x;
    }

    // private 멤버인 y를 반환하는 getter 함수
    int getY() {
        return y;
    }
};

// 2. ColorPoint 클래스 (자식 클래스) - Point를 상속
class ColorPoint : public Point {
private:
    std::string color; // 점의 색상

public:
    // 기본 생성자 (main의 zeroPoint 객체용)
    // Point의 기본 생성자(Point())를 호출하고 color를 "BLACK"으로 초기화
    ColorPoint() : Point(0, 0), color("BLACK") {}

    // 매개변수가 있는 생성자 (main의 cp(5, 5) 객체용)
    // Point의 생성자(Point(x, y))를 호출하고 color는 우선 "BLACK"으로 초기화
    ColorPoint(int x, int y) : Point(x, y), color("BLACK") {}

    // 색상을 설정하는 멤버 함수
    void setColor(std::string color) {
        this->color = color;
    }

    // 점의 정보(색상과 좌표)를 출력하는 멤버 함수
    void show() {
        // Point 클래스로부터 상속받은 public getter 함수를 사용
        std::cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << std::endl;
    }
};

// 3. 문제에서 제공된 main 함수
int main() {
    ColorPoint zeroPoint; // BLACK 색에 (0, 0) 위치의 점
    zeroPoint.show(); // zeroPoint를 출력한다.

    ColorPoint cp(5, 5); // (5, 5) 위치에 "BLACK" 색의 점 생성
    cp.setPoint(10, 20); // 점의 위치를 (10, 20)으로 변경
    cp.setColor("BLUE"); // 점의 색을 "BLUE"로 변경
    cp.show(); // cp를 출력한다.

    return 0; // 프로그램 정상 종료
}