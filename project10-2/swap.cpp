// **********************************************
//제 목 : 예제10-8을 참고하여 템플릿 클래스 정의 값 출력 
//날 짜 : 2025년11월24일
//작성자 : 2201052
// **********************************************

#include<iostream>  // C++ 표준 입출력 헤더파일
using namespace std; //네임스페이스 사용

// 두 개의 자료형 T1, T2를 받는 템플릿 클래스 정의
template<class T1, class T2>
class GClass {
    T1 data1;    // 첫 번째 데이터
    T2 data2;    // 두 번째 데이터
public:
    GClass();            // 기본 생성자
    void set(T1 a, T2 b); // 두 멤버 변수에 값 설정
    void get(T1& a, T2& b); // 두 멤버 변수 값을 전달받은 변수에 저장
    void swap();          // 두 멤버 변수의 값을 서로 교환
};

// 기본 생성자: data1, data2를 0으로 초기화
// (단, T1, T2가 0으로 초기화 가능한 자료형일 경우만 정상 동작)
template<class T1, class T2>
GClass<T1, T2>::GClass() {
    data1 = 0;
    data2 = 0;
}

// 멤버 변수 data1, data2에 인자값을 저장
template<class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
    data1 = a;
    data2 = b;
}

// 멤버 변수 값을 호출자 변수에 전달
template<class T1, class T2>
void GClass<T1, T2>::get(T1& a, T2& b) {
    a = data1;
    b = data2;
}

// 멤버 변수 data1, data2의 값을 서로 교환하는 함수
template<class T1, class T2>
void GClass<T1, T2>::swap() {
    T1 temp = data1; // data1을 임시 저장
    data1 = data2;   // data2 값을 data1에 대입
    data2 = temp;    // 임시 저장해둔 data1 값을 data2에 대입
}

int main() {
    int a, b;
    GClass<int, int> x;  // int형 두 개를 가지는 객체 생성

    x.set(2, 5);         // data1 = 2, data2 = 5
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;

    x.swap();            // 두 값 교환 → data1=5, data2=2
    x.get(a, b);         // get 함수 호출
    cout << "a=" << a << '\t' << "b=" << b << endl;

    double c, d;
    GClass<double, double> y;  // double형 두 개를 가지는 객체 생성

    y.set(3.14, 6.28);   // data1 = 3.14, data2 = 6.28
    y.get(c, d);         // 
    cout << "c=" << c << '\t' << "d=" << d << endl; //값 출력

    y.swap();            // 두 값 교환 → data1=6.28, data2=3.14
    y.get(c, d);         // get 함수 호출
    cout << "c=" << c << '\t' << "d=" << d << endl; //값 출력
}
