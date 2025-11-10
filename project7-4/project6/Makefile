CX = g++ #C++ 컴파일러 지정
CXFLAGS = -g -Wall #-g : 디버깅 정보 포함
TARGET = adder #생성할 실행 파일 이름
SRCS = book.cpp #소스 파일
$(TARGET): $(SRCS) #기본 빌드 규칙 : 실행 파일 만들기
	$(CX) $(CXFLAGS) -o $(TARGET) $(SRCS)
.PHONY: clean #clean 규칙 지정
#clean 명령 : 생성된 실행 파일 삭제
clean:  
	rm $(TARGET)  