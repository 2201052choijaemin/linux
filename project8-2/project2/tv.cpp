#include <iostream>   // 표준 입출력 사용을 위한 헤더
#include <string>     // string 클래스 사용을 위한 헤더
using namespace std;  // std 네임스페이스 사용

// TV 클래스 정의
class TV {
    int size; // TV 스크린 크기를 저장하는 멤버 변수
public:
    TV() { // TV 클래스의 기본 생성자
        size = 20; // 기본 스크린 크기를 20으로 설정
        cout << "TV 생성" << endl; // 생성되었음을 출력
    }
    void setSize(int s) { size = s; } // 스크린 크기를 설정하는 멤버 함수
    int getSize() { return size; } // 현재 스크린 크기를 반환하는 멤버 함수
};

// WideTV 클래스 정의 — TV 클래스를 상속받음
class WideTV : public TV { 
    bool videoIn; // 외부 입력(Video In) 지원 여부를 저장하는 멤버 변수
public:
    WideTV() : TV() { // WideTV의 생성자, TV의 생성자를 먼저 호출
        videoIn = false; // 기본값: 외부 입력 기능 미지원
        cout << "WideTV 생성" << endl; // 생성되었음을 출력
    }
    void setVideoIn(bool v) { videoIn = v; } // 외부 입력 지원 여부 설정
    bool getVideoIn() { return videoIn; } // 외부 입력 지원 여부 반환
};

// SmartTV 클래스 정의 — WideTV 클래스를 상속받음
class SmartTV : public WideTV {
    string ipAddr; // SmartTV의 인터넷 IP 주소를 저장하는 멤버 변수
public:
    SmartTV() : WideTV() { // SmartTV 생성자, WideTV 생성자를 먼저 호출
        ipAddr = "0.0.0.0"; // 기본 IP 주소 설정
        cout << "SmartTV 생성" << endl; // 생성되었음을 출력
    }

    // SmartTV의 여러 속성을 한 번에 설정하는 멤버 함수
    void setSmartTV(int size, bool videoIn, string ip) {
        setSize(size);         // TV 클래스로부터 상속받은 setSize() 호출
        setVideoIn(videoIn);   // WideTV 클래스로부터 상속받은 setVideoIn() 호출
        ipAddr = ip;           // SmartTV 고유 멤버인 IP 주소 설정
    }

    string getIpAddr() { return ipAddr; } // IP 주소 반환 함수
};

int main() { // 프로그램의 시작점
    SmartTV htv; // SmartTV 객체 생성 → 생성자 호출 순서: TV → WideTV → SmartTV

    htv.setSmartTV(50, false, "192.0.0.2"); // 크기, 외부 입력, IP 주소를 설정

    cout << "size = " << htv.getSize() << endl; // 설정된 스크린 크기 출력
    cout << "videoIn = " << boolalpha << htv.getVideoIn() << endl; // 외부 입력 여부 출력
    cout << "IP = " << htv.getIpAddr() << endl; // IP 주소 출력
}
