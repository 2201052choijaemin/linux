#include <iostream> // 입출력을 위한 헤더 파일을 포함
using namespace std; // std 네임스페이스 사용을 선언

class Power {
private:
    int kick;  // kick을 나타내는 변수
    int punch; // punch을 나타내는 변수

public:
    // 생성자: 기본값은 (0, 0)
    Power(int k = 0, int p = 0) {
        kick = k;
        punch = p;
    }

    // show 함수: kick과 punch를 출력
    void show() {
        cout << "kick = " << kick << ", punch = " << punch << endl;
    }

    // 연산자 오버로딩: Power 객체와 정수 간의 빼기 연산자 정의
    Power operator-(int value) {
        Power temp;  // 결과를 저장할 임시 Power 객체 생성
        temp.kick = kick - value;    // kick에서 value를 뺌
        temp.punch = punch - value;  // punch에서 value를 뺌
        return temp;  // 연산 결과 반환
    }
};

int main() {
    Power a(3, 5), b;
    a.show();  // 첫 번째 Power 객체 출력
    b.show();  // 두 번째 Power 객체 출력 (기본값 0, 0)

    b = a - 2;  // a에서 2를 빼서 b에 저장
    a.show();  // a 객체 출력 (변경되지 않음)
    b.show();  // b 객체 출력 (kick = 1, punch = 3)

    return 0; //종료
}
