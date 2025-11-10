// **********************************************
//    제목: 책가격을 출력하는 코드(프렌드 함수사용)
//    날짜:  2025년11월10일
//    작성자: 2201052 최재민
// **********************************************
#include <iostream> // 입출력 스트림 라이브러리 포함, cout 사용 가능
#include <string>   // 문자열(string) 클래스 사용 가능
using namespace std; // std 네임스페이스 사용, cout, string 등을 std:: 없이 사용 가능

// Book 클래스 정의
class Book {
private:
    string title; // 책 제목을 저장하는 멤버 변수
    int price;    // 책 가격을 저장하는 멤버 변수
    int pages;    // 책 페이지 수를 저장하는 멤버 변수

public:
    Book(string t = "", int p = 0, int pg = 0) {
        title = t;  // 매개변수 t를 title에 저장
        price = p;  // 매개변수 p를 price에 저장
        pages = pg; // 매개변수 pg를 pages에 저장
    }

    // 책 정보 출력 함수
    void show() {
        //제목,가격,페이지 출력
        cout << title << " " << price << "원 " << pages << "페이지" << endl;
    }

    // friend 함수 선언: 외부 연산자가 private 멤버에 접근 가능하게 함
    friend Book& operator+=(Book& b, int value); // += 연산자 오버로딩
    friend Book& operator-=(Book& b, int value); // -= 연산자 오버로딩
};

// 외부 함수로 구현된 += 연산자
Book& operator+=(Book& b, int value) {
    b.price += value; // Book 객체 b의 price에 value 더하기
    return b;         // 자기 자신(Book 객체) 반환, 연속 연산 가능
}

// 외부 함수로 구현된 -= 연산자
Book& operator-=(Book& b, int value) {
    b.price -= value; // Book 객체 b의 price에서 value 빼기
    return b;         // 자기 자신(Book 객체) 반환, 연속 연산 가능
}

int main() {
    // Book 객체 생성: 제목, 가격, 페이지 수 각각 지정
    Book a("청춘", 20000, 300), b("미래", 30000, 500);

    a += 500; // 외부 friend operator+= 호출, a의 가격 20000 + 500 = 20500
    b -= 500; // 외부 friend operator-= 호출, b의 가격 30000 - 500 = 29500

    a.show(); // a 정보 출력: "청춘 20500원 300페이지"
    b.show(); // b 정보 출력: "미래 29500원 500페이지"

    return 0; // 프로그램 정상 종료
}