# Qt 공부 용~
### 참고

    [https://www.youtube.com/watch?v=G03yX_GF5-c](https://www.youtube.com/watch?v=G03yX_GF5-c)

    [Qt 초간단 예제를 이용한 속성강의](https://blog.daum.net/goodgodgd/10)

    [Qt프로그래밍(QtQuick) Beginner를 위한 글 읽는 순서 - Qt - makersweb](https://makersweb.net/qt/12205)
    [](https://softengn.tistory.com/3?category=945926)
    [](https://valueelectronic.tistory.com/13)

- 컴포넌트 설치
    - 설치된 uninstall 들어가면 set up 들어갈 수 있는데 거기서 컴포넌트 추가 설치해줄 수 있음.
- MFC랑 비슷한거 QT Designer
- kit 설정 지우거나 추가하는 법
	- kit 지우거나 추가하고 싶은 프로젝트의 Projects 메뉴로 들어간다.
	- Build & Run에서 지우거나 추가하고 싶은 kit 우클릭해서 삭제/추가한다.


### 시그널과 슬롯
- 시그널과 슬롯은 오브젝트 간의 통신을 위한 매커니즘 
	- GUI에서 이벤트 실행했을 때 지정한 함수를 실행하기 위해서 시그널과 슬롯 사용하면 원하는 함수를 수행할 수 있는 매커니즘 제공.
	- 시그널 : 이벤트가 발생하면 처리
	- 슬롯 : 시그널로부터 받은 이벤트 처리할 함수를 지정해주는 함수
	- 항상 시그널:슬롯 = 1:1로 연결해 사용하는 건 x, n:1, 1:n도 가능.


### Graphics View Framework
- 어플리케이션 상에 사용자에게 보여지는 Surface를 관리하고 개발자가 커스터마이징 한 2D그래픽 요소들을 어플리케이션상에서 상호 작용할 수 있는 인터페이스를 제공.
- BSP Tree 알고리즘을 사용
	- BSP : Binary Space Partitioning
	- 공간을 2개로 분할하는 알고리즘
	- 큰 지형을 이진 트리 형태로 분석해 노드 정보를 구성함. 이를 참조해 렌더링 할 대상을 찾아내는 원리.
	- 빠름...

- 기본 요소
	- QGraphicsView
	- QGraphicsScene
	- QGraphicsItem

- Graphics View Architecture
	- 


###OpenGL
- 실리콘 그래픽스에서 개발한 3D 그래필 표준 API
- OpenGL, OpenGL ES
- cpu 절약, 임베디드 디바이스 같이 제한된 자원에서 UX를 잘 설계할 수 있음.


### Thread
- 쓰레드 생성하려면 QThread 상속
- 쓰레드와 프로세스가 공유하는 글로벌 변수에 값이 변경되는 것을 동기화하기 위해 뮤텍스(Mutex)를 사용. 
	- 글로벌 데이터를 변경해야 하는 경우 Mutex 사용해 다른 프로세스가 값 변경 못 하거나 참조할 수 없도록 동기화 가능

- 많이 사용하는 목록?
	1. QMutex 
		- 하나의 쓰레드가 특정 공용변수를 Access 하는 동안 다른 쓰레드가 접근할 수 없도록 잠금 장치 같은 기능 제공
	2. QReadWriteLock 
		- QMutex랑 비슷하지만 Read Write 구분해 데이터 Access
	3. QSemaphore
		- 정확한 숫자에 의해 식별이 된 여러개의 리소스를 동기화 기능 제공.

	등등등..


Reentrancy
두 개 이상의 쓰레드가 병렬로 접근했을 때호출될 순서에 상관없이 실행코드가 겹쳐서 실행 되더라도 결과는 보장되어야 한다는 의미.
Thread-Safety
두 개 이상의 쓰레드가 공용변수에 병렬로 접근하더라도 안전성을 보장하는 것을 의미.


- QThread
	- start() 사용해 쓰레드 시작. finished()로 끝남.
	- 쓰레드가 종료될 때까지 기다릴 때 : wait(), sleep(), msleep(), usleep()
	- isRunning으로 확인
	- exit, quit로 쓰레드 종료, deleteLater 써서 메모리 해제
	- 시그널인 거 슬롯인 거 나눠져 있는 데 쓰기 귀찮으니까 필요할 때 찾아서 보셈.


	- run 재정의 해서 거기다 원하는 기능 추가. (start 실행하면 run 함수 자동 호출)
	
	
	- Wait Condition (QWaitCondition) : 어플리케이션에서 여러 스레드간 동기화를 목적. 
	- Semaphore (QSemaphore) : 프로세스 간 메시지를 전송하거나 공유 메모리 영역의 접근을 동기화 하는데 비교적 긴 시간을 확보해야하는 경우 사용.
	- QtConcurrent : low-level 사용x, 프로세스 수에 따라 사용하는 쓰레드의 수를 자동으로 조절.












































