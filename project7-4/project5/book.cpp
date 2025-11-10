// **********************************************
//    제목: 책이 가격과 제목이 맞으면 출력하는 코드
//    날짜:  2025년11월10일
//    작성자: 2201052 최재민
// **********************************************
#include <iostream> // 입출력 관련 라이브러리
#include <string>   // 문자열(string) 관련 라이브러리
using namespace std; // std 네임스페이스를 사용

// Book 클래스 정의
class Book {
    string title; // 책 제목을 저장하는 멤버변수
    int price;    // 책 가격을 저장하는 멤버변수
    int pages;    // 책 페이지 수을 저장하는 멤버변수
public:
    // 생성자(Constructor) : Book 객체 생성 시 제목, 가격, 페이지 수 초기화
    Book(string t, int p, int pg) : title(t), price(p), pages(pg) {}

    // int형 price와 비교 연산자 오버로딩
    bool operator==(int p) {
        return price == p; // 객체의 price가 전달된 값과 같은지 비교
    }

    // string형 title과 비교 연산자 오버로딩
    bool operator==(string t) {
        return title == t; // 객체의 title이 전달된 문자열과 같은지 비교
    }

    // 다른 Book 객체와 비교 연산자 오버로딩
    bool operator==(Book& b) {
        // 제목, 가격, 페이지 수 모두 같으면 true 반환
        return title == b.title && price == b.price && pages == b.pages;
    }
};

int main() {
    // Book 객체 a와 b 생성
    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);

    // a 객체의 price가 30000인지 비교 후 True 면 출력 
    if (a == 30000) cout << "정가 30000원" << endl;

    // a 객체의 title이 "명품 C++"인지 비교후 True 면 출력 
    if (a == "명품 C++") cout << "명품 C++입니다." << endl;
}