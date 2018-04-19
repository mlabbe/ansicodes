#ifndef ANSICODES_H
#define ANSICODES_H

/*
  Ansicodes -- a modern ansi code subset as pure C macros.

   ****
   You must

     #define IMPLEMENT_ANSICODES

   in exactly one C or C++ file before including ansicodes.h.
   ****


  LICENSE is public domain/MIT.

  Things this does:

  1. Provide ansi features _commonly but not always
     supported_ in terminals.  It is up to you to determine fitness for
     your audience.

  2. Pure macro-only with C parser string combining.  There aren't any C
     functions at all.  This means you can't call these macros with variables
     and expect them to stringify.  But it is elegant in its simplicity.

  3. Everything is prefixed with AC_, but feel free to do a search and replace
     to remove that noise from your codebase if the pseudo-namespacing isn't
     needed.
 */

//
// Common for all color modes
//


// Reset all ansi settings
#define AC_RESETALL                "\x1b[0m"

// Helpers that output a string, then reset ANSI state
//
// usage: printf(ansistrln(AC_RED "Hello world"));
#define ansistr(s)   s AC_RESETALL
#define ansistrln(s) s AC_RESETALL "\n"

//
// Oldschool 16-color foreground, 8 color background ansi codes
//

// Black foreground

#define AC_BLACK                     "\x1b[30m"
#define AC_BLACK_BLACK               "\x1b[30m\x1b[40m"
#define AC_BLACK_RED                 "\x1b[30m\x1b[41m"
#define AC_BLACK_GREEN               "\x1b[30m\x1b[42m"
#define AC_BLACK_YELLOW              "\x1b[30m\x1b[43m"
#define AC_BLACK_BLUE                "\x1b[30m\x1b[44m"
#define AC_BLACK_MAGENTA             "\x1b[30m\x1b[45m"
#define AC_BLACK_CYAN                "\x1b[30m\x1b[46m"
#define AC_BLACK_WHITE               "\x1b[30m\x1b[47m"
#define AC_BRIGHT_BLACK              "\x1b[30;1m"
#define AC_BRIGHT_BLACK_BLACK        "\x1b[30;1m\x1b[40m"
#define AC_BRIGHT_BLACK_RED          "\x1b[30;1m\x1b[41m"
#define AC_BRIGHT_BLACK_GREEN        "\x1b[30;1m\x1b[42m"
#define AC_BRIGHT_BLACK_YELLOW       "\x1b[30;1m\x1b[43m"
#define AC_BRIGHT_BLACK_BLUE         "\x1b[30;1m\x1b[44m"
#define AC_BRIGHT_BLACK_MAGENTA      "\x1b[30;1m\x1b[45m"
#define AC_BRIGHT_BLACK_CYAN         "\x1b[30;1m\x1b[46m"
#define AC_BRIGHT_BLACK_WHITE        "\x1b[30;1m\x1b[47m"


// Red AC_foreground

#define AC_RED                       "\x1b[31m"
#define AC_RED_BLACK                 "\x1b[31m\x1b[40m"
#define AC_RED_RED                   "\x1b[31m\x1b[41m"
#define AC_RED_GREEN                 "\x1b[31m\x1b[42m"
#define AC_RED_YELLOW                "\x1b[31m\x1b[43m"
#define AC_RED_BLUE                  "\x1b[31m\x1b[44m"
#define AC_RED_MAGENTA               "\x1b[31m\x1b[45m"
#define AC_RED_CYAN                  "\x1b[31m\x1b[46m"
#define AC_RED_WHITE                 "\x1b[31m\x1b[47m"
#define AC_BRIGHT_RED                "\x1b[31;1m"
#define AC_BRIGHT_RED_BLACK          "\x1b[31;1m\x1b[40m"
#define AC_BRIGHT_RED_RED            "\x1b[31;1m\x1b[41m"
#define AC_BRIGHT_RED_GREEN          "\x1b[31;1m\x1b[42m"
#define AC_BRIGHT_RED_YELLOW         "\x1b[31;1m\x1b[43m"
#define AC_BRIGHT_RED_BLUE           "\x1b[31;1m\x1b[44m"
#define AC_BRIGHT_RED_MAGENTA        "\x1b[31;1m\x1b[45m"
#define AC_BRIGHT_RED_CYAN           "\x1b[31;1m\x1b[46m"
#define AC_BRIGHT_RED_WHITE          "\x1b[31;1m\x1b[47m"


// Green AC_foreground

#define AC_GREEN                     "\x1b[32m"
#define AC_GREEN_BLACK               "\x1b[32m\x1b[40m"
#define AC_GREEN_RED                 "\x1b[32m\x1b[41m"
#define AC_GREEN_GREEN               "\x1b[32m\x1b[42m"
#define AC_GREEN_YELLOW              "\x1b[32m\x1b[43m"
#define AC_GREEN_BLUE                "\x1b[32m\x1b[44m"
#define AC_GREEN_MAGENTA             "\x1b[32m\x1b[45m"
#define AC_GREEN_CYAN                "\x1b[32m\x1b[46m"
#define AC_GREEN_WHITE               "\x1b[32m\x1b[47m"
#define AC_BRIGHT_GREEN              "\x1b[32;1m"
#define AC_BRIGHT_GREEN_BLACK        "\x1b[32;1m\x1b[40m"
#define AC_BRIGHT_GREEN_RED          "\x1b[32;1m\x1b[41m"
#define AC_BRIGHT_GREEN_GREEN        "\x1b[32;1m\x1b[42m"
#define AC_BRIGHT_GREEN_YELLOW       "\x1b[32;1m\x1b[43m"
#define AC_BRIGHT_GREEN_BLUE         "\x1b[32;1m\x1b[44m"
#define AC_BRIGHT_GREEN_MAGENTA      "\x1b[32;1m\x1b[45m"
#define AC_BRIGHT_GREEN_CYAN         "\x1b[32;1m\x1b[46m"
#define AC_BRIGHT_GREEN_WHITE        "\x1b[32;1m\x1b[47m"


// Yellow AC_foreground

#define AC_YELLOW                    "\x1b[33m"
#define AC_YELLOW_BLACK              "\x1b[33m\x1b[40m"
#define AC_YELLOW_RED                "\x1b[33m\x1b[41m"
#define AC_YELLOW_GREEN              "\x1b[33m\x1b[42m"
#define AC_YELLOW_YELLOW             "\x1b[33m\x1b[43m"
#define AC_YELLOW_BLUE               "\x1b[33m\x1b[44m"
#define AC_YELLOW_MAGENTA            "\x1b[33m\x1b[45m"
#define AC_YELLOW_CYAN               "\x1b[33m\x1b[46m"
#define AC_YELLOW_WHITE              "\x1b[33m\x1b[47m"
#define AC_BRIGHT_YELLOW             "\x1b[33;1m"
#define AC_BRIGHT_YELLOW_BLACK       "\x1b[33;1m\x1b[40m"
#define AC_BRIGHT_YELLOW_RED         "\x1b[33;1m\x1b[41m"
#define AC_BRIGHT_YELLOW_GREEN       "\x1b[33;1m\x1b[42m"
#define AC_BRIGHT_YELLOW_YELLOW      "\x1b[33;1m\x1b[43m"
#define AC_BRIGHT_YELLOW_BLUE        "\x1b[33;1m\x1b[44m"
#define AC_BRIGHT_YELLOW_MAGENTA     "\x1b[33;1m\x1b[45m"
#define AC_BRIGHT_YELLOW_CYAN        "\x1b[33;1m\x1b[46m"
#define AC_BRIGHT_YELLOW_WHITE       "\x1b[33;1m\x1b[47m"


// Blue AC_foreground

#define AC_BLUE                      "\x1b[34m"
#define AC_BLUE_BLACK                "\x1b[34m\x1b[40m"
#define AC_BLUE_RED                  "\x1b[34m\x1b[41m"
#define AC_BLUE_GREEN                "\x1b[34m\x1b[42m"
#define AC_BLUE_YELLOW               "\x1b[34m\x1b[43m"
#define AC_BLUE_BLUE                 "\x1b[34m\x1b[44m"
#define AC_BLUE_MAGENTA              "\x1b[34m\x1b[45m"
#define AC_BLUE_CYAN                 "\x1b[34m\x1b[46m"
#define AC_BLUE_WHITE                "\x1b[34m\x1b[47m"
#define AC_BRIGHT_BLUE               "\x1b[34;1m"
#define AC_BRIGHT_BLUE_BLACK         "\x1b[34;1m\x1b[40m"
#define AC_BRIGHT_BLUE_RED           "\x1b[34;1m\x1b[41m"
#define AC_BRIGHT_BLUE_GREEN         "\x1b[34;1m\x1b[42m"
#define AC_BRIGHT_BLUE_YELLOW        "\x1b[34;1m\x1b[43m"
#define AC_BRIGHT_BLUE_BLUE          "\x1b[34;1m\x1b[44m"
#define AC_BRIGHT_BLUE_MAGENTA       "\x1b[34;1m\x1b[45m"
#define AC_BRIGHT_BLUE_CYAN          "\x1b[34;1m\x1b[46m"
#define AC_BRIGHT_BLUE_WHITE         "\x1b[34;1m\x1b[47m"


// Magenta AC_foreground

#define AC_MAGENTA                   "\x1b[35m"
#define AC_MAGENTA_BLACK             "\x1b[35m\x1b[40m"
#define AC_MAGENTA_RED               "\x1b[35m\x1b[41m"
#define AC_MAGENTA_GREEN             "\x1b[35m\x1b[42m"
#define AC_MAGENTA_YELLOW            "\x1b[35m\x1b[43m"
#define AC_MAGENTA_BLUE              "\x1b[35m\x1b[44m"
#define AC_MAGENTA_MAGENTA           "\x1b[35m\x1b[45m"
#define AC_MAGENTA_CYAN              "\x1b[35m\x1b[46m"
#define AC_MAGENTA_WHITE             "\x1b[35m\x1b[47m"
#define AC_BRIGHT_MAGENTA            "\x1b[35;1m"
#define AC_BRIGHT_MAGENTA_BLACK      "\x1b[35;1m\x1b[40m"
#define AC_BRIGHT_MAGENTA_RED        "\x1b[35;1m\x1b[41m"
#define AC_BRIGHT_MAGENTA_GREEN      "\x1b[35;1m\x1b[42m"
#define AC_BRIGHT_MAGENTA_YELLOW     "\x1b[35;1m\x1b[43m"
#define AC_BRIGHT_MAGENTA_BLUE       "\x1b[35;1m\x1b[44m"
#define AC_BRIGHT_MAGENTA_MAGENTA    "\x1b[35;1m\x1b[45m"
#define AC_BRIGHT_MAGENTA_CYAN       "\x1b[35;1m\x1b[46m"
#define AC_BRIGHT_MAGENTA_WHITE      "\x1b[35;1m\x1b[47m"


// Cyan AC_foreground

#define AC_CYAN                      "\x1b[36m"
#define AC_CYAN_BLACK                "\x1b[36m\x1b[40m"
#define AC_CYAN_RED                  "\x1b[36m\x1b[41m"
#define AC_CYAN_GREEN                "\x1b[36m\x1b[42m"
#define AC_CYAN_YELLOW               "\x1b[36m\x1b[43m"
#define AC_CYAN_BLUE                 "\x1b[36m\x1b[44m"
#define AC_CYAN_MAGENTA              "\x1b[36m\x1b[45m"
#define AC_CYAN_CYAN                 "\x1b[36m\x1b[46m"
#define AC_CYAN_WHITE                "\x1b[36m\x1b[47m"
#define AC_BRIGHT_CYAN               "\x1b[36;1m"
#define AC_BRIGHT_CYAN_BLACK         "\x1b[36;1m\x1b[40m"
#define AC_BRIGHT_CYAN_RED           "\x1b[36;1m\x1b[41m"
#define AC_BRIGHT_CYAN_GREEN         "\x1b[36;1m\x1b[42m"
#define AC_BRIGHT_CYAN_YELLOW        "\x1b[36;1m\x1b[43m"
#define AC_BRIGHT_CYAN_BLUE          "\x1b[36;1m\x1b[44m"
#define AC_BRIGHT_CYAN_MAGENTA       "\x1b[36;1m\x1b[45m"
#define AC_BRIGHT_CYAN_CYAN          "\x1b[36;1m\x1b[46m"
#define AC_BRIGHT_CYAN_WHITE         "\x1b[36;1m\x1b[47m"


// White AC_foreground

#define AC_WHITE                     "\x1b[37m"
#define AC_WHITE_BLACK               "\x1b[37m\x1b[40m"
#define AC_WHITE_RED                 "\x1b[37m\x1b[41m"
#define AC_WHITE_GREEN               "\x1b[37m\x1b[42m"
#define AC_WHITE_YELLOW              "\x1b[37m\x1b[43m"
#define AC_WHITE_BLUE                "\x1b[37m\x1b[44m"
#define AC_WHITE_MAGENTA             "\x1b[37m\x1b[45m"
#define AC_WHITE_CYAN                "\x1b[37m\x1b[46m"
#define AC_WHITE_WHITE               "\x1b[37m\x1b[47m"
#define AC_BRIGHT_WHITE              "\x1b[37;1m"
#define AC_BRIGHT_WHITE_BLACK        "\x1b[37;1m\x1b[40m"
#define AC_BRIGHT_WHITE_RED          "\x1b[37;1m\x1b[41m"
#define AC_BRIGHT_WHITE_GREEN        "\x1b[37;1m\x1b[42m"
#define AC_BRIGHT_WHITE_YELLOW       "\x1b[37;1m\x1b[43m"
#define AC_BRIGHT_WHITE_BLUE         "\x1b[37;1m\x1b[44m"
#define AC_BRIGHT_WHITE_MAGENTA      "\x1b[37;1m\x1b[45m"
#define AC_BRIGHT_WHITE_CYAN         "\x1b[37;1m\x1b[46m"
#define AC_BRIGHT_WHITE_WHITE        "\x1b[37;1m\x1b[47m"

//
// 8-bit colour macros
//

// color reference: https://en.wikipedia.org/wiki/ANSI_escape_code#8-bit

#define AC_FG8(i) "\x1b[38;5;"#i"m"
#define AC_BG8(i) "\x1b[48;5;"#i"m"


//
// 24-bit colour macros
//

// foreground and background color definitions
// note that these macros can only be used with literals
//
// recommended usage is to define named colours:
//
// #define REDYELLOW FG24(255,0,0) BG24(255,255,0)

#define AC_FG24(r,g,b) "\x1b[38;2;"#r";"#g";"#b"m"
#define AC_BG24(r,g,b) "\x1b[48;2;"#r";"#g";"#b"m"

//
// Decorations
//

#define AC_BOLD       "\x1b[1m"
#define AC_UNDERLINE  "\x1b[4m"
#define AC_REVERSED   "\x1b[7m"

//
// Cursor and screen
//

// Move cursor n points in some direction
#define AC_UP(n)    "\x1b["#n"A"
#define AC_DOWN(n)  "\x1b["#n"B"
#define AC_RIGHT(n) "\x1b["#n"C"
#define AC_LEFT(n)  "\x1b["#n"D"

// Move cursor to x,y
#define AC_POS(x,y) "\x1b["#x";"#y"H"

// bring cursor to 0,0
#define AC_HOME     "\x1b[H"

// clear screen and bring cursor to 0,0
#define AC_CLS      "\x1b[2J" AC_HOME

//
// Function calls
//

#ifdef AC_CORE_STATIC
#  define ACDEF static
#else
#  define ACDEF extern
#endif

// Enable ansicodes on Windows consoles.
// Idempotent on Windows, noop on other OSes.
// Works on Windows as of Fall Creators Update (1709)
ACDEF void
AC_EnableANSICodes(void);


#if defined(WIN32) || defined(_WIN32)
#  define AC__WIN32
#endif



#ifdef IMPLEMENT_ANSICODES

#define WIN32_LEAN_AND_MEAN
#include<Windows.h>

void
AC_EnableANSICodes(void) {
#ifdef AC__WIN32
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    DWORD mode;
    GetConsoleMode(hStdout, &mode);
    mode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    mode |= DISABLE_NEWLINE_AUTO_RETURN;
    SetConsoleMode(hStdout, mode);
#endif
}
#endif

#endif
