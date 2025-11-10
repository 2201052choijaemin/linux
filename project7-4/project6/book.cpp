// **********************************************
//    제목: 가격을 비교해 조건문이 맞으면 출력하는 코드
//    날짜:  2025년11월10일
//    작성자: 2201052 최재민
// **********************************************

#include <iostream>  // 입출력 스트림 라이브러리 포함, cout 사용 가능
#include <string>    // 문자열(string) 클래스 사용 가능
using namespace std; // std 네임스페이스 사용, cout, string 등을 std:: 없이 사용 가능

// Book 클래스 정의
class Book {
    string title; // 책 제목을 저장하는 멤버 변수
    int price;    // 책 가격을 저장하는 멤버 변수
    int pages;    // 책 페이지 수를 저장하는 멤버 변수
public:
    // 생성자: 책 제목, 가격, 페이지 수를 받아 멤버 변수 초기화
    Book(string t, int p, int pg) : title(t), price(p), pages(pg) {}

    // ! 연산자 오버로딩: 책의 가격이 0이면 true 반환
    bool operator!() {
        return price == 0; // 가격이 0이면 true, 아니면 false 반환
    }
};

int main() {
    // Book 객체 생성: 제목 "벼룩시장", 가격 0, 페이지 50
    Book book("벼룩시장", 0, 50);

    // ! 연산자 호출: book 객체에 ! 연산자를 적용
    if (!book) cout << "공짜다" << endl; // 조건이 true이면 "공짜다" 출력
}
