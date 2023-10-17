//////哥德巴赫猜想的验证
//
//
//#include <stdio.h>
//#include <stdbool.h>
////检验一个数是否为质数
//bool isPrime(int num) {
//    if (num <= 1) {
//        return false;
//    }
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
////验证哥德巴赫猜想
//void yanzheng(int number) {
//    if (number <= 2 || number % 2 != 0) {
//        printf("请输入一个大于2的偶数\n");
//        return;
//    }
//    for (int i = 2; i <= number / 2; i++) {
//        if (isPrime(i) && isPrime(number - i)) {
//            printf("%d = %d + %d\n", number, i, number - i);
//        }
//    }
//}
//int main() {
//    printf("请输入一个大于2的偶数\n");
//    int number;
//    scanf("%d", &number);
//    yanzheng(number);
//    return 0;
//}








////数组，指针的使用(排序，查找等)
//#include "stdio.h"
//
//void printfArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ",arr[i]);
//    }
//    printf("\n");
//}//打印数组
//
//void bubbleSort(int arr[], int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - 1 - i; j++) {
//            if (arr[j] > arr[j+1]) {
//                int temp;
//                temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//            }
//        }
//    }
//}//冒泡排序
//
//int* search(int size, int arr[], int target) {
//    for (int i = 0; i < size; i++) {
//        if (arr[i] == target) {
//            return &arr[i];
//        }
//    }
//    return NULL;
//}//查找值
//
//int main(){
//    int arr[] = {5, 2, 9, 1, 5, 6};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    printf("原始数组: \n");
//    printfArray(arr, size);
//    bubbleSort(arr, size);
//    printf("排序后的数组: \n");
//    printfArray(arr, size);
//
//    int target;
//    printf("请输入你要查找的数字\n");
//    scanf("%d", &target);
//    int* result = search(size, arr, target);
//    if (result == NULL) {
//        printf("你查找的数字不在数组之中");
//    } else {
//        printf("%d在数组中的位置为： %d", target, (int)(result - arr));
//    }
//}







////结构体（成绩管理）
//#include "stdio.h"
//#include "string.h"
//
////定义学生结构体
//struct Student {
//    char name[50];
//    int id;
//    double score;
//};
//
////添加学生信息
//void addStudent(struct Student students[], int* numStudents) {
//    if (*numStudents < 100) {
//        struct Student newStudent;
//        printf("请输入学生姓名: \n");
//        scanf("%s", newStudent.name);
//        printf("请输入学生学号： \n");
//        scanf("%d", &newStudent.id);
//        printf("请输入学生成绩: \n");
//        scanf("%lf", &newStudent.score);
//
//        students[*numStudents] = newStudent;
//        (*numStudents)++;
//        printf("学生信息添加成功\n");
//    } else {
//        printf("学生信息已满，无法继续添加、n");
//    }
//}
//
////显示所有学生信息
//void displayStudens(struct Student students[], int numStudents) {
//    printf("学生列表：\n");
//    for (int i = 0; i < numStudents; i++) {
//        printf("姓名：%s  学号：%d  成绩：%.2f\n", students[i].name, students[i].id, students[i].score);
//    }
//}
//
////查找学生成绩
//void searchStudent(struct Student students[], int numStudents, int searchID) {
//    for (int i = 0; i < numStudents; i++){
//        if (students[i].id == searchID) {
//            printf("学生姓名： %s   学号：%d   成绩：%.2f\n", students[i].name, students[i].id, students[i].score);
//            break;
//        }
//    }
//    printf("未找到学号为%d的学生\n", searchID);
//}
//
//int main() {
//    struct Student students[100];
//    int numStudents = 0;
//    int choice;
//
//    while (1) {
//        printf("\n成绩管理系统\n");
//        printf("1. 添加学生\n");
//        printf("2. 显示学生列表\n");
//        printf("3. 查找学生成绩\n");
//        printf("4. 退出\n");
//        printf("请选择操作: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//            case 1:
//                addStudent(students, &numStudents);
//                break;
//            case 2:
//                displayStudens(students, numStudents);
//                break;
//            case 3:
//                printf("你要查找的学生号码为:");
//                int searchID;
//                scanf("%d", &searchID);
//                searchStudent(students,numStudents,searchID);
//                break;
//            case 4:
//                printf("谢谢使用\n");
//                return 0;
//            default:
//                printf("无效的选项\n");
//        }
//    }
//    return 0;
//}










////顺序表的表示与实现（类型定义，初始化，插入，删除，查找）
//#include "stdio.h"
//#include "stdlib.h"
//
//#define MAX_SIZE 100 // 定义顺序表的最大容量
//
//// 定义顺序表结构体
//typedef struct Arraylist {
//    int data[MAX_SIZE];
//    int length; // 当前顺序表长度
//}Arraylist;
//
////初始化顺序表
//void intiArrayList(Arraylist* list) {
//    list->length = 0;
//}
//
////插入元素到顺序表的指定位置
//int insertElement(Arraylist* list, int position, int value) {
//    if (position < 0 || position > list->length || list->length == MAX_SIZE) {
//        return 0; //插入失败
//    }
//
//    //将position之后的元素后移一位
//    for (int i = list->length; i > position; i--) {
//        list->data[i] = list->data[i-1];
//    }
//
//    //插入新元素
//    list->data[position] = value;
//    list->length++;
//    return 1; //插入成功
//}
//
////去除顺序表中的指定元素
//int deleteElement(Arraylist* list, int position) {
//    if (position < 0 || position >= list->length) {
//        return 0; //去除失败
//    }
//
//    //将position之后的元素前移一位
//    for (int i = position; i < list->length - 1; i++) {
//        list->data[i] = list->data[i+1];
//    }
//
//    list->length--;
//    return 1; // 去除成功
//}
//
////查找元素在顺序表中的位置
//int findElement(Arraylist* list, int value) {
//    for (int i = 0; i < list->length; i++){
//        if (list->data[i] == value) {
//            return i; //返回元素位置
//        }
//    }
//    return 0;//未找到
//}
//
////打印顺序表
//void printArrayList(Arraylist* list) {
//    printf("顺序表为： \n");
//    for (int i = 0; i < list->length; ++i) {
//        printf("%d ", list->data[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    Arraylist list;
//    intiArrayList(&list);
//    int position;
//    int value;
//    int play;
//    while (1) {
//        printf("添加数值按1\n");
//        printf("去除数值按2\n");
//        printf("查找数值按3\n");
//        printf("打印数值按4\n");
//        printf("退出按5\n");
//        scanf("%d", &play);
//        switch (play) {
//            case 1:
//                printf("请输入你想要插入的位置与数值\n");
//                scanf("%d %d", &position, &value);
//                insertElement(&list, position , value);
//                break;
//            case 2:
//                printf("请输入你想要去除的位置\n");
//                scanf("%d", &position);
//                deleteElement(&list, position);
//                break;
//            case 3:
//                printf("请输入你想要查找的值\n");
//                scanf("%d", &value);
//                if (findElement(&list, value)) {
//                    printf("%d在%d位\n", value, findElement(&list, value));
//                } else {
//                    printf("你查找的值不存在\n");
//                }
//                break;
//            case 4:
//                printArrayList(&list);
//                break;
//            case 5:
//                printf("谢谢使用");
//                return 0;
//            default:
//                printf("无效的选项");
//        }
//    }
//    return 0;
//}










//顺序表的应用
//集合的运算：并， 交， 差等
#include "stdio.h"

#define MAX_SIZE 100

//定义顺序表结构体
typedef struct ArrayList {
    int data[MAX_SIZE];
    int length;
}ArrayList;

//初始化顺序表
void initArrayList(ArrayList* list) {
    list->length = 0;
}

//向顺序表中插入元素
int insertElement(ArrayList* list, int value) {
    if (list->length >= MAX_SIZE) {
        return 0;//顺序表已满，插入失败
    }

    list->data[list->length] = value;
    list->length++;
    return 1;//插入成功
}

//打印顺序表
void printArrayList(ArrayList* list) {
    printf("集合: ");
    for (int i = 0; i < list->length; ++i) {
        printf("%d ",list->data[i]);
    }
    printf("\n");
}

//集合并运算
void unionArrayList(ArrayList* result, ArrayList* set1, ArrayList* set2) {
    initArrayList(result);

    //将set1中的元素插入结果集合
    for (int i = 0; i < set1->length; ++i) {
        insertElement(result, set1->data[i]);
    }

    //遍历set2, 将不在结果集合中的元素插入
    for (int i = 0; i < set2->length; ++i) {
        int element = set2->data[i];
        int found = 0;

        //检查element是否在结果集合中
        for (int j = 0; j < result->length; ++j) {
            if (result->data[j] == element) {
                found =1;
                break;
            }
        }
        if (!found) {
            insertElement(result, element);
        }
    }
}

//集合交运算
void intersectionArrayList(ArrayList* result, ArrayList* set1, ArrayList* set2){
    initArrayList(result);

    //遍历set1, 检查元素是否在set2中，并插入结果集合
    for (int i = 0; i < set1->length; ++i) {
        int element = set1->data[i];
        for (int j = 0; j < set2->length; ++j) {
            if (set2->data[j] == element) {
                insertElement(result, element);
                break;
            }
        }
    }
}

//集合差运算(set1 - set2)
void differenceArrayList(ArrayList* result, ArrayList* set1, ArrayList* set2) {
    initArrayList(result);//初始化结果集合
    //遍历set1, 检查元素是否不在set2中， 并插入结果集合
    for (int i = 0; i < set1->length; ++i) {
        int element = set1->data[i];
        int found = 0;
        for (int j = 0; j < set2->length; ++j) {
             if (set2->data[j] == element) {
                 found = 1;
                 break;
             }
        }
        if (!found) {
            insertElement(result, element);
        }

    }
}

int main() {
    int s1, s2, temp;
    ArrayList set1, set2, result;
    initArrayList(&set1);
    initArrayList(&set2);
    printf("请输入set1集合的数量\n");
    scanf("%d", &s1);
    printf("请输入集合set1\n");
    for (int i = 0; i < s1; ++i) {
        scanf("%d", &temp);
        insertElement(&set1, temp);
    }
    printf("集合set1为：\n");
    printArrayList(&set1);
    printf("请输入set2集合的数量\n");
    scanf("%d", &s2);
    printf("请输入集合set2\n");
    for (int i = 0; i < s2; ++i) {
        scanf("%d", &temp);
        insertElement(&set2, temp);
    }
    printf("集合set2为\n");
    printArrayList(&set2);

    //计算并集
    printf("并集为：\n");
    unionArrayList(&result, &set1, &set2);
    printArrayList(&result);

    //计算交集
    printf("交集为: \n");
    intersectionArrayList(&result, &set1, &set2);
    printArrayList(&result);

    //计算差集
    printf("set1与set2的差集为：\n");
    differenceArrayList(&result, &set1, &set2);
    printArrayList(&result);
    return 0;
}


























