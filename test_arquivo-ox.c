#include <assert.h>
#include "function_guga.c"

int guga(char c);

int main()
{
    assert(guga('X') == 1);
    assert(guga('O') == 1);

    assert(guga('A') == 0);
    assert(guga('x') == 0);

    return 0;
}
