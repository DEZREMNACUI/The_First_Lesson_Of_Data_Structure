//////��°ͺղ������֤
//
//
//#include <stdio.h>
//#include <stdbool.h>
////����һ�����Ƿ�Ϊ����
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
////��֤��°ͺղ���
//void yanzheng(int number) {
//    if (number <= 2 || number % 2 != 0) {
//        printf("������һ������2��ż��\n");
//        return;
//    }
//    for (int i = 2; i <= number / 2; i++) {
//        if (isPrime(i) && isPrime(number - i)) {
//            printf("%d = %d + %d\n", number, i, number - i);
//        }
//    }
//}
//int main() {
//    printf("������һ������2��ż��\n");
//    int number;
//    scanf("%d", &number);
//    yanzheng(number);
//    return 0;
//}








////���飬ָ���ʹ��(���򣬲��ҵ�)
//#include "stdio.h"
//
//void printfArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ",arr[i]);
//    }
//    printf("\n");
//}//��ӡ����
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
//}//ð������
//
//int* search(int size, int arr[], int target) {
//    for (int i = 0; i < size; i++) {
//        if (arr[i] == target) {
//            return &arr[i];
//        }
//    }
//    return NULL;
//}//����ֵ
//
//int main(){
//    int arr[] = {5, 2, 9, 1, 5, 6};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    printf("ԭʼ����: \n");
//    printfArray(arr, size);
//    bubbleSort(arr, size);
//    printf("����������: \n");
//    printfArray(arr, size);
//
//    int target;
//    printf("��������Ҫ���ҵ�����\n");
//    scanf("%d", &target);
//    int* result = search(size, arr, target);
//    if (result == NULL) {
//        printf("����ҵ����ֲ�������֮��");
//    } else {
//        printf("%d�������е�λ��Ϊ�� %d", target, (int)(result - arr));
//    }
//}







////�ṹ�壨�ɼ�����
//#include "stdio.h"
//#include "string.h"
//
////����ѧ���ṹ��
//struct Student {
//    char name[50];
//    int id;
//    double score;
//};
//
////���ѧ����Ϣ
//void addStudent(struct Student students[], int* numStudents) {
//    if (*numStudents < 100) {
//        struct Student newStudent;
//        printf("������ѧ������: \n");
//        scanf("%s", newStudent.name);
//        printf("������ѧ��ѧ�ţ� \n");
//        scanf("%d", &newStudent.id);
//        printf("������ѧ���ɼ�: \n");
//        scanf("%lf", &newStudent.score);
//
//        students[*numStudents] = newStudent;
//        (*numStudents)++;
//        printf("ѧ����Ϣ��ӳɹ�\n");
//    } else {
//        printf("ѧ����Ϣ�������޷�������ӡ�n");
//    }
//}
//
////��ʾ����ѧ����Ϣ
//void displayStudens(struct Student students[], int numStudents) {
//    printf("ѧ���б�\n");
//    for (int i = 0; i < numStudents; i++) {
//        printf("������%s  ѧ�ţ�%d  �ɼ���%.2f\n", students[i].name, students[i].id, students[i].score);
//    }
//}
//
////����ѧ���ɼ�
//void searchStudent(struct Student students[], int numStudents, int searchID) {
//    for (int i = 0; i < numStudents; i++){
//        if (students[i].id == searchID) {
//            printf("ѧ�������� %s   ѧ�ţ�%d   �ɼ���%.2f\n", students[i].name, students[i].id, students[i].score);
//            break;
//        }
//    }
//    printf("δ�ҵ�ѧ��Ϊ%d��ѧ��\n", searchID);
//}
//
//int main() {
//    struct Student students[100];
//    int numStudents = 0;
//    int choice;
//
//    while (1) {
//        printf("\n�ɼ�����ϵͳ\n");
//        printf("1. ���ѧ��\n");
//        printf("2. ��ʾѧ���б�\n");
//        printf("3. ����ѧ���ɼ�\n");
//        printf("4. �˳�\n");
//        printf("��ѡ�����: ");
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
//                printf("��Ҫ���ҵ�ѧ������Ϊ:");
//                int searchID;
//                scanf("%d", &searchID);
//                searchStudent(students,numStudents,searchID);
//                break;
//            case 4:
//                printf("ллʹ��\n");
//                return 0;
//            default:
//                printf("��Ч��ѡ��\n");
//        }
//    }
//    return 0;
//}










////˳���ı�ʾ��ʵ�֣����Ͷ��壬��ʼ�������룬ɾ�������ң�
//#include "stdio.h"
//#include "stdlib.h"
//
//#define MAX_SIZE 100 // ����˳�����������
//
//// ����˳���ṹ��
//typedef struct Arraylist {
//    int data[MAX_SIZE];
//    int length; // ��ǰ˳�����
//}Arraylist;
//
////��ʼ��˳���
//void intiArrayList(Arraylist* list) {
//    list->length = 0;
//}
//
////����Ԫ�ص�˳����ָ��λ��
//int insertElement(Arraylist* list, int position, int value) {
//    if (position < 0 || position > list->length || list->length == MAX_SIZE) {
//        return 0; //����ʧ��
//    }
//
//    //��position֮���Ԫ�غ���һλ
//    for (int i = list->length; i > position; i--) {
//        list->data[i] = list->data[i-1];
//    }
//
//    //������Ԫ��
//    list->data[position] = value;
//    list->length++;
//    return 1; //����ɹ�
//}
//
////ȥ��˳����е�ָ��Ԫ��
//int deleteElement(Arraylist* list, int position) {
//    if (position < 0 || position >= list->length) {
//        return 0; //ȥ��ʧ��
//    }
//
//    //��position֮���Ԫ��ǰ��һλ
//    for (int i = position; i < list->length - 1; i++) {
//        list->data[i] = list->data[i+1];
//    }
//
//    list->length--;
//    return 1; // ȥ���ɹ�
//}
//
////����Ԫ����˳����е�λ��
//int findElement(Arraylist* list, int value) {
//    for (int i = 0; i < list->length; i++){
//        if (list->data[i] == value) {
//            return i; //����Ԫ��λ��
//        }
//    }
//    return 0;//δ�ҵ�
//}
//
////��ӡ˳���
//void printArrayList(Arraylist* list) {
//    printf("˳���Ϊ�� \n");
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
//        printf("�����ֵ��1\n");
//        printf("ȥ����ֵ��2\n");
//        printf("������ֵ��3\n");
//        printf("��ӡ��ֵ��4\n");
//        printf("�˳���5\n");
//        scanf("%d", &play);
//        switch (play) {
//            case 1:
//                printf("����������Ҫ�����λ������ֵ\n");
//                scanf("%d %d", &position, &value);
//                insertElement(&list, position , value);
//                break;
//            case 2:
//                printf("����������Ҫȥ����λ��\n");
//                scanf("%d", &position);
//                deleteElement(&list, position);
//                break;
//            case 3:
//                printf("����������Ҫ���ҵ�ֵ\n");
//                scanf("%d", &value);
//                if (findElement(&list, value)) {
//                    printf("%d��%dλ\n", value, findElement(&list, value));
//                } else {
//                    printf("����ҵ�ֵ������\n");
//                }
//                break;
//            case 4:
//                printArrayList(&list);
//                break;
//            case 5:
//                printf("ллʹ��");
//                return 0;
//            default:
//                printf("��Ч��ѡ��");
//        }
//    }
//    return 0;
//}










//˳����Ӧ��
//���ϵ����㣺���� ���� ���
#include "stdio.h"

#define MAX_SIZE 100

//����˳���ṹ��
typedef struct ArrayList {
    int data[MAX_SIZE];
    int length;
}ArrayList;

//��ʼ��˳���
void initArrayList(ArrayList* list) {
    list->length = 0;
}

//��˳����в���Ԫ��
int insertElement(ArrayList* list, int value) {
    if (list->length >= MAX_SIZE) {
        return 0;//˳�������������ʧ��
    }

    list->data[list->length] = value;
    list->length++;
    return 1;//����ɹ�
}

//��ӡ˳���
void printArrayList(ArrayList* list) {
    printf("����: ");
    for (int i = 0; i < list->length; ++i) {
        printf("%d ",list->data[i]);
    }
    printf("\n");
}

//���ϲ�����
void unionArrayList(ArrayList* result, ArrayList* set1, ArrayList* set2) {
    initArrayList(result);

    //��set1�е�Ԫ�ز���������
    for (int i = 0; i < set1->length; ++i) {
        insertElement(result, set1->data[i]);
    }

    //����set2, �����ڽ�������е�Ԫ�ز���
    for (int i = 0; i < set2->length; ++i) {
        int element = set2->data[i];
        int found = 0;

        //���element�Ƿ��ڽ��������
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

//���Ͻ�����
void intersectionArrayList(ArrayList* result, ArrayList* set1, ArrayList* set2){
    initArrayList(result);

    //����set1, ���Ԫ���Ƿ���set2�У�������������
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

//���ϲ�����(set1 - set2)
void differenceArrayList(ArrayList* result, ArrayList* set1, ArrayList* set2) {
    initArrayList(result);//��ʼ���������
    //����set1, ���Ԫ���Ƿ���set2�У� ������������
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
    printf("������set1���ϵ�����\n");
    scanf("%d", &s1);
    printf("�����뼯��set1\n");
    for (int i = 0; i < s1; ++i) {
        scanf("%d", &temp);
        insertElement(&set1, temp);
    }
    printf("����set1Ϊ��\n");
    printArrayList(&set1);
    printf("������set2���ϵ�����\n");
    scanf("%d", &s2);
    printf("�����뼯��set2\n");
    for (int i = 0; i < s2; ++i) {
        scanf("%d", &temp);
        insertElement(&set2, temp);
    }
    printf("����set2Ϊ\n");
    printArrayList(&set2);

    //���㲢��
    printf("����Ϊ��\n");
    unionArrayList(&result, &set1, &set2);
    printArrayList(&result);

    //���㽻��
    printf("����Ϊ: \n");
    intersectionArrayList(&result, &set1, &set2);
    printArrayList(&result);

    //����
    printf("set1��set2�ĲΪ��\n");
    differenceArrayList(&result, &set1, &set2);
    printArrayList(&result);
    return 0;
}


























