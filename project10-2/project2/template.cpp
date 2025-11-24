#include <iostream>              // 표준 입출력 헤더 포함
using namespace std;             // std:: 를 생략

// 템플릿 클래스 선언
template <class T>
class Container {
    T* p;                        // 동적 할당된 배열의 시작 주소를 저장하는 포인터
    int size;                    // 배열의 크기(원소 개수)
public:
    Container(int n);            // 생성자: 배열의 크기를 입력받아 동적 메모리 할당
    ~Container();                // 소멸자: 동적 메모리 해제
    void set(int index, T value) { p[index] = value; }  // index 위치에 값 저장
    T get(int index);            // index 위치의 값을 반환하는 함수
};

// 생성자 정의
template <class T>
Container<T>::Container(int n) {
    size = n;                    // size 멤버 변수에 n 저장
    p = new T[n];                // T 타입의 배열 n개를 동적 할당
}

// 소멸자 정의
template <class T>
Container<T>::~Container() {
    delete[] p;                  // new[] 로 할당된 배열 메모리 해제
}

// get() 함수 정의
template <class T>
T Container<T>::get(int index) {
    return p[index];             // index 위치의 배열 요소 반환
}

int main() {
    Container<char> c(26);       // char 타입을 저장하는 Container 객체 생성, 크기 26

    for (int i = 0; i < 26; i++)
        c.set(i, 'a' + i);       // 'a'부터 'z'까지 차례대로 배열에 저장

    for (int i = 25; i >= 0; i--)
        cout << c.get(i);        // 저장된 알파벳을 뒤에서부터 꺼내어 출력

    cout << endl;                // 줄 바꿈 출력
    return 0;                    // 프로그램 종료
}
