# 结构

`结构是一个或多个变量的几何`

**坐标点示例**

```c
struct Point {
    int x;
    int y;
};

int main() {
    struct Point point = {1, 2};
    printf("x:%d y:%d \n", point->x, point->y);
    return 0;
}
```

**矩形示例**

```c
struct rect {
    struct Point pt1;
    struct Point pt2;
};
```

## typedef 简化代码

```c
typedef struct Point {
    int x;
    int y;
} Point;


int main() {
    Point point = {1, 2};
    printf("x:%d y:%d \n", point->x, point->y);
    return 0;
}
```
