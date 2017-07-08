# define

```c
#include <stdio.h>

#define MAX 300
#define MIN 0
#define STEP 20

int main()
{
    int num;
    for (num = MIN; num <= MAX; num = num + STEP)
        printf("%3d %6d.1f\n", num, (5.0 / 9.0) * (num - 32));

    return 0;
}
```
