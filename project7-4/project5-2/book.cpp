// **********************************************
//    제목: 책이 가격과 제목이 맞으면 출력하는 코드(프렌드 함수 사용)
//    날짜:  2025년11월10일
//    작성자: 2201052 최재민
// **********************************************

#include <iostream> // 입출력 관련 라이브러리
#include <string>   // 문자열(string) 관련 라이브러리
using namespace std; // std 네임스페이스 사용

// Book 클래스 정의
class Book {
    string title; // 책 제목을 저장하는 멤버현수
    int price;    // 책 가격을 저장하는 멤버현수
    int pages;    // 책 페이지 수를 저장하는 멤버현수
public:
    // 생성자: 객체 생성 시 제목, 가격, 페이지 수 초기화
    Book(string t, int p, int pg) : title(t), price(p), pages(pg) {}

    // 프렌드 함수(friend function) 선언
    friend bool operator==(const Book& b, int price);           // Book과 int 비교
    friend bool operator==(const Book& b, const string& title); // Book과 string 비교
    friend bool operator==(const Book& b1, const Book& b2);    // Book과 Book 비교
};

// Book과 price(int) 비교 연산자 정의
bool operator==(const Book& b, int price) {
    return b.price == price; // Book 객체의 price가 주어진 값과 같은지 비교
}

// Book과 title(string) 비교 연산자 정의
bool operator==(const Book& b, const string& title) {
    return b.title == title; // Book 객체의 title이 주어진 문자열과 같은지 비교
}

// 두 Book 객체를 비교하는 연산자 정의
bool operator==(const Book& b1, const Book& b2) {
    // 제목, 가격, 페이지 수가 모두 같으면 true 반환
    return (b1.title == b2.title && b1.price == b2.price && b1.pages == b2.pages);
}

int main() {
    // Book 객체 a와 b 생성
    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);

    // a 객체의 price가 30000인지 비교후 true면 출력
    if (a == 30000) cout << "정가 30000원" << endl;

    // a 객체의 title이 "명품 C++"인지 비교 true면 출력
    if (a == "명품 C++") cout << "명품 C++입니다." << endl;

    // a와 b가 같은 책인지 비교 true면 출력
    if (a == b) cout << "두 책이 같은 책입니다." << endl;
}