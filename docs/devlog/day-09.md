# Day 09. unique_ptr과 소유권

2026-11-26 (KST)

## 실습 내용

`std::make_unique`로 `Application`을 만들었어요. 스코프 종료 때의 자동 정리, `reset()` 직후의 정리, `std::move`로 소유권을 넘기는 경우를 비교했습니다.

```cpp
auto app = std::make_unique<Engine::Application>();
auto owner = std::move(app);
owner->Run();
```

## 확인한 내용

`reset()`을 쓰면 소멸 로그가 `[Main] Returning`보다 먼저 나왔어요. 소유권을 넘긴 경우에는 기존 `app`이 비고, 새 소유자가 범위를 벗어날 때 객체가 정리됐어요.

[← Day 08](day-08.md) · [개발 기록 목차](../../README.md) · [Day 10 →](day-10.md)
