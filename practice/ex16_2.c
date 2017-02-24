#include <stdio.h>

typedef struct {
    char *name;
    int age;
    int height;
    int weight;
} Person;


int main()
{
    Person tommao;
    tommao.name = "无声";
    tommao.age = 25;
    tommao.height = 175;
    tommao.weight = 70;
    printf("Name:%s age:%d height:%d weight:%d\n",
            tommao.name, tommao.age, tommao.height, tommao.weight);
    return 0;
}
