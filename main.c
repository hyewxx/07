#include <stdio.h>

static int all_files;   // 전역 변수에 static을 붙이면 지역 변수와 달리 범위가 파일 안으로 좁아짐
extern void sub();

int main(void)
{
    sub();
    printf("%d\n", all_files);
    return 0;
}