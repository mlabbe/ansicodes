#include<stdio.h>

#define IMPLEMENT_ANSICODES
#include "../ansicodes.h"

#define REDYELLOW AC_FG24(255,0,0) AC_BG24(255,255,0)

int main(void)  {
    AC_EnableANSICodes();
    printf(AC_CLS);

    printf(AC_POS(10,10));

    printf(ansistrln(REDYELLOW "hello world 24bpp"));


    printf(AC_FG8(252) ansistrln("grey"));
    printf(AC_FG8(9) ansistrln("salmon"));
    printf(AC_FG8(214) ansistrln("orange"));

    printf(AC_FG8(38) AC_BG8(252) ansistrln("blue on gray"));
    printf(AC_FG8(184) AC_BG24(64,64,64) ansistrln("barf on 24-bit gray"));

    for(int i = 0; i < 10; i++) {
        printf(".!" AC_LEFT(1));
    }
    puts("");

    printf(AC_UNDERLINE ansistrln("This is underlined"));
    printf(AC_BOLD      ansistr("This is bold") " and this isn't\n");
    printf(AC_REVERSED   ansistrln("This is reversed"));

    return 0;
}
