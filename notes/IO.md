# 输入输出

```c
#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}
```

## 字符计数

```c
#include <stdio.h>

int main()
{
    long nc;
    nc = 0;

    while (getchar() != EOF)
        ++nc;

    printf("%ld\n", nc);
    return 0;
}
```

## 行计数

```c
#include <stdio.h>

int main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;

    printf("%d\n", nl);
    return 0;
}
```
