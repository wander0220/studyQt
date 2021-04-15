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















































