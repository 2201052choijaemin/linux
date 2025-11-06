#include <iostream>  // 입출력을 위한 헤더 파일을 포함
using namespace std;  // std 네임스페이스 사용을 선언

class Complex {  // 복소수 클래스를 정의
private:
   int real;  // 실수 부분을 저장할 변수
   int img;   // 허수 부분을 저장할 변수
public:
    // 생성자: 기본값은 (0, 0)으로 복소수를 초기화
    Complex(int r = 0, int i = 0){  
        real = r;  // 실수 부분을 초기화
        img = i;   // 허수 부분을 초기화
    }

    // 복소수 덧셈 연산자 오버로딩
    Complex operator+ (Complex c){  
        Complex temp;  // 임시 복소수 객체 생성
        temp.real = real + c.real;  // 실수 부분끼리 더하기
        temp.img = img + c.img;     // 허수 부분끼리 더하기
        return temp;  // 덧셈 결과인 복소수 반환
    }

    // 복소수 출력 함수
    void show(){
        cout << " " << real;  // 실수 부분 출력
        if(img >= 0)  // 허수 부분이 0 이상이면 '+'를 붙여서 출력
            cout << "+" << img <<"j" << endl;
        else  // 허수 부분이 음수일 때는 '+' 없이 그대로 출력
            cout << img << "j" << endl;
    }
};

int main() {
    Complex x(2, 3), y(-5, 10), sum;  // 두 복소수 x(2, 3)과 y(-5, 10) 생성, sum은 덧셈 결과를 저장할 변수
    sum = x + y;  // 복소수 x와 y의 덧셈 결과를 sum에 저장
    cout << "두 복소수의 합은";  // 출력문으로 덧셈 결과 설명
    sum.show();  // 덧셈 결과를 출력
    return 0;  // 프로그램 종료
}
