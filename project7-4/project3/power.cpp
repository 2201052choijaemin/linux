// **********************************************
//    제목: 증감연산자를 이용해 kick,punch 값 출력
//    날짜:  2025년11월10일
//    작성자: 2201052 최재민
// **********************************************

#include <iostream> // 입출력 관련 라이브러리
using namespace std; // std 네임스페이스 사용

// Power 클래스 정의
class Power {
private:
    int kick; //멤버함수 선언
    int punch; //멤버함수 선언

public:
    // 생성자 생성후 kick,puch 값 0으로 초기화
    Power(int k = 0, int p = 0) : kick(k), punch(p) {}

    void show() {
        cout << "kick=" << kick << ",punch=" << punch << endl;
    }

    // 멤버 함수로 Power * 정수 구현
    Power operator*(int value) const {
        return Power(kick * value, punch * value);
    }
};

// * Power 형태를 위해 전역 함수 정의
Power operator*(int value, const Power& op) {
    return op * value; //값 리턴
}

int main() {
    Power a(3, 5), b; //멤버 함수 선언
    a.show();  // kick=3,punch=5
    b.show();  // kick=0,punch=0

    b = 2 * a; // 전역 operator* 호출 -> 결국 a * 2
    a.show();  // kick=3,punch=5
    b.show();  // kick=6,punch=10

    return 0; //프로그램 종료
}