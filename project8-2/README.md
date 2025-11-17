실습과제1

예제 8 3 에서 SmartTV 객체 htv 가 생성될 때 자동으로 호출되
는 생성자를 순서대로 자세히 설명하시오

htv 생성시 지정된 인수가 각 생성자에 어떻게 전달되는지도
자세히 설명하시오

smarttv 호출 
smartv는 ipaddr과 size를 받아 widetv생성자에 넘긴다

widetv 호출
smartv생성자로부터 전달된 값을 받아 widetv생성자 자신의 멤버 최기화 리스트에서 tv(size)호출

tv호출
widetv 생성자 tv(size)호출

wide 멤버변수 초기화 
widetv 생성자가 끝난후 smartv 생성자 본문 실행

smarttv 멤버 변수 초기화
각생성자 값 초기화

객체생성 완료
