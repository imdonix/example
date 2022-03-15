#include "bit.c"
#include "cry.c"


int main()
{
    int b = 0;
    cry(&b);
    int a = bit(b);
    return a;
}