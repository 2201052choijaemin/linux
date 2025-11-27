// **********************************************
//제 목 : student 클래스 선언뒤 vector 알고리즘 이용해 값 출력 
//날 짜 : 2025년11월27일
//작성자 : 2201052
// **********************************************

#include <iostream>   // 입출력에 필요한 라이브러리 포함
#include <vector>     // 동적 배열(vector) 사용을 위해 포함
#include <algorithm>  // max_element 등 알고리즘 함수를 사용하기 위해 포함
#include <string>     // string 클래스 사용을 위해 포함
using namespace std;  // std 네임스페이스를 전역으로 사용

// Student 클래스 정의
class Student {
private:
	string name;  // 학생 이름
	int score;    // 학생 성적

public:
	// 생성자: 이름과 점수를 받아 초기화
	Student(string n, int s) : name(n), score(s) {}

	// 점수를 반환하는 함수
	int getScore() { return score; }

	// 이름을 반환하는 함수
	string getName() { return name; }

	// 연산자 오버로딩: 두 학생 객체를 점수 기준으로 비교
	bool operator<(const Student& other) {
		return this->score < other.score;  // 현재 객체 점수가 다른 객체 점수보다 작으면 true 반환
	}
};

int main() {
	vector<Student> st;  // Student 객체를 저장할 벡터 생성
	string name;         // 사용자 입력용 이름 변수
	int score;           // 사용자 입력용 점수 변수

	// 학생 3명의 이름과 점수 입력 받기
	for (int i = 0; i < 3; i++) {
		cout << "이름과 성적을 입력: ";  // 사용자에게 입력 안내
		cin >> name >> score;            // 이름과 점수를 입력받음
		st.push_back(Student(name, score)); // 벡터에 Student 객체 추가
	}

	// 벡터에서 가장 점수가 높은 학생을 찾음
	vector<Student>::iterator it = max_element(st.begin(), st.end());
	// max_element는 내부적으로 < 연산자를 사용하므로 Student::operator< 호출됨

	// 최우수 학생 정보 출력
	cout << "최우수학생은" << endl
		<< "이름:" << it->getName() << endl  // 이름 출력
		<< "성적 " << it->getScore() << " 점" << endl;  // 점수 출력

	return 0;  // 프로그램 종료
}
