//#include <stdio.h>
//
//struct Student 
//{
//    char name[30];
//    int num;
//    int age;
//};
//
//int main() 
//{
//    struct Student s[3];
//    for (int i = 0; i < 3; i++) 
//    {
//        printf("�̸�, �й�, ���̸� �Է��ϼ��� : ");
//        /*scanf_s("%c %d %d", &s[i].name, &s[i].num, &s[i].age);*/
//        /*
//        scanf_s("%s", s[i].name);  //�迭���� �ּҰ� x
//        scanf_s("%d", &s[i].num);
//        scanf_s("%d\n", &s[i].age);
//        */
//        scanf_s("%s %d %d\n", s->name, &s->age, &s->num);
//    }
//    
//    for (int i = 0; i < 3; i++) 
//    {
//        printf("�̸� : %s\n", s[i].name);
//        printf("�й� : %d\n", s[i].num);
//        printf("���� : %d\n", s[i].age);
//    }
//    return 0;
//}