// **********************************************
//제 목 : vector 알고리즘으로 사전단어 순서대로 출력
//날 짜 : 2025년11월27일
//작성자 : 2201052
// **********************************************

#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <algorithm>    // sort 함수 사용
#include <string>       // string 타입 사용
using namespace std;

int main() {

    vector<string> v;   // 문자열을 저장할 벡터 v 선언
    string name;        // 입력받은 문자열을 임시 저장할 변수

    // 문자열 5개 입력 
    for (int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요: ";
        getline(cin, name);     // 공백 포함 문자열 입력
        v.push_back(name);      // 입력받은 문자열을 벡터에 추가
    }

    // 벡터 문자열을 사전순(오름차순)으로 정렬 
    sort(v.begin(), v.end());   // 알파벳 순서대로 정렬

    vector<string>::iterator it;  // 반복자 선언

    cout << "사전순으로 나열된 문자열:" << endl;

    // 정렬된 문자열 출력
    for (it = v.begin(); it < v.end(); it++)
        cout << *it << endl;     // 반복자가 가리키는 문자열 출력
}