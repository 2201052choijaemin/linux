// **********************************************
//제 목 : vector 알고리즘으로 맨뒤 단어 출력
//날 짜 : 2025년11월27일
//작성자 : 2201052
// **********************************************

#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <algorithm>    // max_element 사용
#include <string>       // string 타입 사용
using namespace std;

int main() {

    vector<string> v;    // 문자열을 저장할 벡터 v 선언
    string name;         // 입력받은 문자열을 임시 저장할 변수

    //문자열 5개 입력 
    for (int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요: ";
        getline(cin, name);     // 공백 포함 문자열 입력
        v.push_back(name);      // 입력받은 문자열을 벡터에 추가
    }

    vector<string>::iterator it;  // 반복자(iterator) 선언

    // 사전순으로 가장 뒤에 오는 문자열 찾기 
    it = max_element(v.begin(), v.end()); //주어진 범위에서 가장 큰 값을 가리키는 반복자를 반환한다.

    cout << "사전에서 가장 뒤에 나오는 문자열: " << *it << endl; // it가 가리키는 문자열 출력

    return 0;    // 프로그램 정상 종료
}
