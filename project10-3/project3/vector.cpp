#include <iostream>   // 입출력 헤더 파일
#include <vector>     // 동적 배열(vector) 헤더 파일
#include <string>     // 문자열(string) 자료형 헤더 파일
using namespace std;  // std::를 생략

// 문자열을 모두 소문자로 변환하는 함수
string toLowerString(const string& s) {
    string result = s;
    for (size_t i = 0; i < result.size(); i++) {   // int -> size_t로 수정
        if (result[i] >= 'A' && result[i] <= 'Z') {
            result[i] = result[i] + ('a' - 'A'); // 대문자를 소문자로 변환
        }
    }
    return result;
}

int main() {
    vector<string> words;   // 문자열을 저장할 vector
    string input;

    // 5개의 문자열 입력
    for (size_t i = 0; i < 5; i++) {  // int -> size_t로 수정
        cout << "문자열을 입력하세요: ";
        cin >> input;
        words.push_back(input);   // vector에 저장
    }

    string maxWord = words.at(0);                     // 최대값 후보 초기화
    string maxWordLower = toLowerString(maxWord);     // 비교용 소문자 문자열

    for (size_t i = 1; i < words.size(); i++) {      // int -> size_t로 수정
        string currentLower = toLowerString(words.at(i)); // 현재 문자열 소문자로 변환
        if (currentLower > maxWordLower) {               // 사전순 비교
            maxWord = words.at(i);                       // 실제 원본 문자열 갱신
            maxWordLower = currentLower;                 // 비교용 소문자도 갱신
        }
    }

    cout << "사전에서 제일 뒤에 나오는 단어는 " << maxWord << "입니다" << endl; //값 출력

    return 0; //종료 
}
