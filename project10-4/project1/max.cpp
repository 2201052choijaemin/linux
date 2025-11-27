// **********************************************
//제 목 : stl의 vector클래스 알고리즘으로 최대,최소값, 오름차순,내림차순 출력
//날 짜 : 2025년11월27일
//작성자 : 2201052
// **********************************************

#include <iostream>     // 표준 입출력 사용을 위한 헤더
#include <vector>       // vector 컨테이너 사용
#include <algorithm>    // max_element, min_element, sort 등을 사용
using namespace std;

int main() {

    vector<int> v;   // 정수형 벡터 v 선언 (동적 배열)

    cout << "정수 4개를 입력하시오:";
    // 사용자에게 4개의 정수를 입력하라는 메시지 출력

    // 4개의 정수를 입력받아 벡터에 저장
    for (int i = 0; i < 4; i++) {
        int n;
        cin >> n;        // 입력값을 n에 저장
        v.push_back(n); // 입력받은 값을 벡터 v의 끝에 추가
    }

    vector<int>::iterator it;   // 벡터 반복자(iterator) 선언

    it = max_element(v.begin(), v.end());
    // v.begin()~v.end() 범위에서 가장 큰 값을 갖는 요소의 위치를 it에 저장

    cout << "최대값은" << distance(v.begin(), it + 1) << "번째 자리값 ";
    cout << *it << endl;   // 반복자가 가리키는 실제 값 출력

    it = min_element(v.begin(), v.end());
    // 가장 작은 값을 갖는 요소의 위치를 it에 저장

    cout << "최소값은" << distance(v.begin(), it + 1) << "번째 자리값 ";
    cout << *it << endl;   // 반복자가 가리키는 실제 값 출력

    sort(v.begin(), v.end());
    // v 벡터를 처음부터 끝까지 오름차순(작→큰)으로 정렬

    cout << "오름차순 결과는 ";
    for (it = v.begin(); it < v.end(); it++)  // 정렬된 값을 앞에서부터 순회
        cout << *it << ' ';   // 각 요소 출력
    cout << endl;

    sort(v.begin(), v.end(), std::greater<int>());
    // greater<int>()를 이용하여 큰→작 순으로 정렬

    cout << "내림차순 결과는 ";
    for (it = v.begin(); it < v.end(); it++)  // 정렬된 값을 출력
        cout << *it << ' ';
    cout << endl;
}