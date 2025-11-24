CX = g++                 ## C++ 컴파일러로 g++을 사용한다는 의미
CXFLAGS = -g -Wall       ## 컴파일 옵션 설정
                         ##  -g : 디버깅 정보 포함
                         ##  -Wall : 모든 경고 메시지 표시

TARGET = adder           ## 생성할 실행 파일 이름을 adder로 지정
SRCS = swap.cpp         ## 컴파일할 소스 파일 지정 (여기서는 shape.cpp)


$(TARGET): $(SRCS)       ## adder를 만들기 위해 shape.cpp가 필요하다는 의미
	$(CX) $(CXFLAGS) -o $(TARGET) $(SRCS)
                         ## g++ 명령으로 shape.cpp를 컴파일하고
                         ## -o 옵션으로 결과 실행파일 이름을 adder로 지정


.PHONY : clean            ## clean이 실제 파일 이름이 아님을 명시
clean:                    ## clean 명령 정의
	rm $(TARGET)         