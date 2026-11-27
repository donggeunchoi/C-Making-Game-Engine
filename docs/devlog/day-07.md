# Day 07. 포인터, 주소, nullptr

2026-11-24 (KST)

## 실습 내용

`&config`로 주소를 얻고 `ptr->windowWidth`로 멤버를 읽었어요. `nullptr` 검사도 연습하고, `SDL_Window*`가 SDL 창을 가리키는 포인터라는 점을 살펴봤습니다.

## 확인한 내용

`ptr = nullptr`로 바꿔도 원래 객체는 사라지지 않아요. 가리키는 대상이 없으면 `->`로 접근하면 안 돼요.

[← Day 06](day-06.md) · [개발 기록 목차](../../README.md) · [Day 08 →](day-08.md)
