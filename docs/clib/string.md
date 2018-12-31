# string.h

- strlen
> 计算字符串 str 的长度，直到空结束字符，但不包括空结束字符

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char *p = "hello world\n";
    printf("strlen:%lu \n", strlen(p));

    return 0;
}
```

