# 结构体

> 结构体是一种复合数据类型

`示例`

```c
struct student {
    char  name[64];
    int   height;
    float weight;
};

struct student codingcat;
```

## 结构体与typedef

> typedef可以给原有类型的数据类型定义一个"同义词"，
> 有效利用typedef可以简化struct student 这样的冗长写法。

```c
typedef struct student {
    char  name[64];
    int   height;
    float weight;
} Student;

Stuent codingcat = {"tom", 175, 66};
```

## 作为成员的结构体

```c
typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    Point pt;
    double fuel;
} Car;
```

```c
// 二叉树
typedef struct Tree {
    struct Tree *left;
    struct Tree *right;
    int val;
} Tree;
```


## 结构体函数指针

```c
void (*eat)(Animal *animal, char *food);

typedef struct {
    char *name;
    void (*eat)(Animal *animal, char *food);
} Animal;

int eat(Animal *animal, char *food) {
    printf("%s eat %s\n", animal->name, food);
}

int main() {
    Animal cat = {.name="tom", .eat=eat};
    cat.eat("fish");
    return 0;
}
```
