# Day 10. 게임 루프와 deltaTime

2026-11-27 (KST)

## 실습 내용

`SDL_WaitEvent()` 대신 `SDL_PollEvent()`로 닫기 요청을 확인하고, 요청이 없으면 `Update()`와 `Render()`를 반복했어요. `std::chrono::steady_clock`으로 프레임 간격을 초 단위로 계산해 `Update(deltaTime)`에 넘겼습니다.

```cpp
void Engine::Application::Update(double deltaTime)
{
    positionX += 100.0 * deltaTime;
}
```

## 확인한 내용

마지막 실행에서 `positionX : 175.198`과 정상 종료 코드 `0`을 확인했어요. 초당 100만큼 움직이도록 했으니, 누적된 약 1.75초만큼 이동했어요. 실제 화면 렌더링과 60FPS 제한은 아직 적용하지 않았어요.

[← Day 09](day-09.md) · [개발 기록 목차](../../README.md)
