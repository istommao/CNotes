# 字符串

## 字符串读取

```c
#include <stdio.h>

int main()
{
    char name[32];
    printf("请输入您的名字:");
    scanf("%s", name);

    printf("您好, %s \n", name);

    return 0;
}
```

## 字符串格式化

```c
#include <stdio.h>

int main()
{
    char str[] = "12345";

    printf("%s\n", str);
    printf("%3s\n", str);
    printf("%.3s\n", str);
    printf("%8s\n", str);
    printf("%-8s\n", str);
    return 0;
}
```

`%9.9s`

从左到右 第一个9表示 输出最小宽度, 第二个9表示精度

## 字符串处理

### 计算字符串长度

```c
#include <stdio.h>

int str_len(const char s[])
{
    int len = 0;
    while (s[len])
        len++;

    return len;
}

int main()
{
    char str[128];

    printf("请输入字符串: ");
    scanf("%s", str);

    printf("字符串 \"%s\" 的长度是 %d \n", str, str_len(str));

    return 0;
}
```

## 大小写字符转换

```c
#include <ctype.h>
#include <stdio.h>

void str_toupper(char s[])
{
    int i = 0;
    while (s[i]) {
        s[i] = toupper(s[i]);
        i++;
    }
}
void str_tolower(char s[])
{
    int i = 0;
    while (s[i]) {
        s[i] = tolower(s[i]);
        i++;
    }
}

int main()
{
    char str[128];
    printf("请输入字符串: ");
    scanf("%s", str);

    str_toupper(str);
    printf("大写字母: %s\n", str);

    str_tolower(str);
    printf("小写字母: %s\n", str);

    return 0;
}
```




