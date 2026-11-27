# Mini2D Engine

C++과 SDL3로 작은 2D 게임 엔진을 만들어보는 개인 학습 프로젝트입니다.
## 일차별 개발 기록

일차를 누르면 실습 내용과 확인한 결과를 볼 수 있어요. 날짜는 확인된 학습 기록 기준(KST)입니다.

| 일차 | 날짜 | 주제 |
| --- | --- | --- |
| [Day 01](docs/devlog/day-01.md) | 2026-08-24 | C++ 프로젝트와 엔진 진입점 |
| [Day 02](docs/devlog/day-02.md) | 2026-08-25 | 기본 자료형과 EngineConfig |
| [Day 03](docs/devlog/day-03.md) | 2026-08-26 | 함수와 엔진 실행 단계 |
| [Day 04](docs/devlog/day-04.md) | 2026-09-08 | Application 클래스와 객체 수명 |
| [Day 05](docs/devlog/day-05.md) | 2026-09-10 | SDL3 연결과 Window 만들기 |
| [Day 06](docs/devlog/day-06.md) | 2026-09-11 | 값 복사와 const 참조 |
| [Day 07](docs/devlog/day-07.md) | 2026-11-24 | 포인터, 주소, nullptr |
| [Day 08](docs/devlog/day-08.md) | 2026-11-24 | 자동 수명과 new / delete |
| [Day 09](docs/devlog/day-09.md) | 2026-11-26 | unique_ptr과 소유권 |
| [Day 10](docs/devlog/day-10.md) | 2026-11-27 | 게임 루프와 deltaTime |

## 현재 구현 상태

- SDL3 창 생성과 X 버튼으로 정상 종료
- 게임 루프에서 이벤트 확인, 업데이트·렌더 호출 반복
- `deltaTime` 계산과 가상 X 좌표 이동 확인
- 실제 화면 렌더링과 FPS 제한은 아직 미구현

## 빌드 환경

Windows · Visual Studio 2022 · C++ · SDL 3.4.16

[`C++ Class.sln`](C%2B%2B%20Class/C%2B%2B%20Class.sln)을 열고 `Debug | x64`로 빌드합니다. SDL3 소스는 별도로 준비해야 해요. 설치 위치가 다르면 솔루션 및 프로젝트의 SDL 프로젝트 참조와 헤더 경로를 맞춰주세요.
