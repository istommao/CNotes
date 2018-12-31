# 指针

## 指针与函数

```c
#include <stdio.h>

void yao(int *age)
{
    int diff;
    if (*age >= 30) {
        diff = *age - 30;
        printf("Yes diff: %d \n", diff);
    } else {
        diff = 30 - *age;
        printf("No diff: %d \n", diff);
    }
}

int main()
{
    int age = 27;

    yao(&age);

    return 0;
}
```

### 二值互换

```c
#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a, b;
    printf("请输入两个整数:\n");
    printf("整数A: ");
    scanf("%d", &a);
    printf("整数B: ");
    scanf("%d", &b);

    swap(&a, &b);

    puts("互换后的值");
    printf("整数A 是: %d \n", a);
    printf("整数B 是: %d \n", b);

    return 0;
}
```


## 指针和数值

