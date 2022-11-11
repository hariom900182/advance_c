#include <stdio.h>

void main()
{
#ifdef OS
    printf("%d", OS);
#if OS == 1
#warning "Cannot use dos as it's linux"
#elif OS == 2
#warning "Cannot use shell as it's Window"

// remove already defined identifier using undef
#undef OS
#endif

#endif
}