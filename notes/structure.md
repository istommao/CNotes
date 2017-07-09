# 结构

`结构是一个或多个变量的几何`

**坐标点示例**

```c
struct Point {
    int x;
    int y;
};
```

**矩形示例**

```c
struct rect {
    struct Point pt1;
    struct Point pt2;
};
```
