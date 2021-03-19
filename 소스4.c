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
//        printf("이름, 학번, 나이를 입력하세요 : ");
//        /*scanf_s("%c %d %d", &s[i].name, &s[i].num, &s[i].age);*/
//        /*
//        scanf_s("%s", s[i].name);  //배열에는 주소값 x
//        scanf_s("%d", &s[i].num);
//        scanf_s("%d\n", &s[i].age);
//        */
//        scanf_s("%s %d %d\n", s->name, &s->age, &s->num);
//    }
//    
//    for (int i = 0; i < 3; i++) 
//    {
//        printf("이름 : %s\n", s[i].name);
//        printf("학번 : %d\n", s[i].num);
//        printf("나이 : %d\n", s[i].age);
//    }
//    return 0;
//}