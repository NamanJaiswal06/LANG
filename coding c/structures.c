#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
// struct student {
//     char name[100];
//     int rollNo;
//     float cgpa;
// };
// int main () {
//     struct student s1;
//     s1.rollNo = 123;
//     s1.cgpa = 9.5;
//     strcpy(s1.name, "naman");
//     printf("name is %s\n", s1.name);
//     printf("roll no is %d\n", s1.rollNo );
//     printf("cgpa is %f\n", s1.cgpa );
//     return 0;


// }
// struct student {
//     char name[100];
//     int rollNo;
//     float cgpa;
// };
// int main () {
//     struct student s1;
//     s1.rollNo = 123;
//     s1.cgpa = 9.5;
//     strcpy(s1.name, "naman");
//     printf("name is %s\n", s1.name);
//     printf("roll no is %d\n", s1.rollNo );
//     printf("cgpa is %f\n", s1.cgpa );
//        struct student s2;
//     s2.rollNo = 1243;
//     s2.cgpa = 9.5;
//     strcpy(s2.name, "naman");
//     printf("name is %s\n", s2.name);
//     printf("roll no is %d\n", s2.rollNo );
//     printf("cgpa is %f\n", s2.cgpa );  
//      struct student s3;
//     s3.rollNo = 1423;
//     s3.cgpa = 9.5;
//     strcpy(s3.name, "naman");
//     printf("name is %s\n", s3.name);
//     printf("roll no is %d\n", s3.rollNo );
//     printf("cgpa is %f\n", s3.cgpa );
//     return 0;


//}
// struct student{
//     char name[100];
//     int rollNo;
//     float cgpa;
// };
// int main () {
//     struct student ece[100];
//     ece[0].rollNo= 1665;
//     ece[0].cgpa = 9.6;
//     strcpy(ece[0].name , "naman");
//     printf("name is %s\n", ece[0].name);
//     printf("roll no is %d\n", ece[0].rollNo );
//     printf("cgpa is %f\n", ece[0].cgpa );
//     return 0;


//  struct student{
//     char name[100];
//    int rollNo;
//     float cgpa;
// };

// int main () {
//     struct student s1 = { "naman" , 1665 , 9.6};
//     printf("roll no is %d", s1.rollNo);
//     struct student *ptr= &s1;
//     printf("roll no is %d", (*ptr).rollNo);
//     printf("roll no with arrow is %d", ptr ->rollNo);

//     return 0;
// }

// 
// typedef struct student {
//     char name[100];
//     int roll;
//     float cgpa;
// } stu;
// int main () {
//     stu s1 ;
//     s1.roll = 45;
// }

// typedef struct houseadress {
//     char state[100];
//     char city[100];
//     int block;
//     int houseNo;
// } ha ;
// void printadress(ha no);

// int main () {
//     ha no[5];
//     printf("enter your details :");
//     scanf("%d\n", &no[0].houseNo);
//      scanf("%d\n", &no[0].block);
//       scanf("%s\n", &no[0].city);
//        scanf("%s\n", &no[0].state);
//         printf("enter your details :");
//     scanf("%d\n", &no[1].houseNo);
//      scanf("%d\n", &no[1].block);
//       scanf("%s\n", &no[1].city);
//        scanf("%s\n", &no[1].state);
//         printf("enter your details :");
//     scanf("%d\n", &no[2].houseNo);
//      scanf("%d\n", &no[2].block);
//       scanf("%s\n", &no[2].city);
//        scanf("%s\n", &no[2].state);
//         printf("enter your details :");
//     scanf("%d\n", &no[3].houseNo);
//      scanf("%d\n", &no[3].block);
//       scanf("%s\n", &no[3].city);
//        scanf("%s\n", &no[3].state);
//         printf("enter your details :");
//     scanf("%d\n", &no[4].houseNo);
//      scanf("%d\n", &no[4].block);
//       scanf("%s\n", &no[4].city);
//        scanf("%s\n", &no[4].state);

//        printadress(no[0]);
//          printadress(no[1]);
//            printadress(no[2]);
//              printadress(no[3]);
//                printadress(no[4]);
//           return 0;

// }
// void printadress(ha no) {
//     printf("adress is : %d , %d , %s , %s\n", no.houseNo, no.block, no.city, no.state);
// }

// struct vector{
//     int xaxis;
//     int yaxis;
// };
// void addvector(struct vector a, struct vector b);

// int main() {
//     struct vector no1;
//     printf("enter for 1:");
//     scanf("%d\n", &no1.xaxis);
//     scanf("%d\n", &no1.yaxis);
//     struct vector no2;
//     printf("enter for 2:");
//     scanf("%d\n", &no2.xaxis);
//     scanf("%d\n", &no2.yaxis);
//     addvector(no1 , no2);
    
//              return 0;

// }
// void addvector(struct vector a, struct vector b){
//     struct vector c;
//     c.xaxis = a.xaxis + b.xaxis;
//     c.yaxis = a.yaxis + b.yaxis;
//     printf("sum of x axis is %d\n", c.xaxis);
//     printf("sum of y axis is : %d\n", c.yaxis);
    
// // }
// struct complex{
//     int real;
//     int imag;
// };


// int main() {
//     struct complex no1={5 ,20};
//     printf("real part is :%d\n", no1.real);
//     printf("img part is :%d\n", no1.imag);

    
//                return 0;

// }
// #include<stdio.h>
// int main () {
//     FILE *fptr;
//     fptr = fopen("text.txt", "r");
//     if(fptr == NULL) {
//         printf("does not exist\n");
    
    
//     }else{
        
//         fclose(fptr);
//         }
//         return 0;
//     }
// struct node{
//     int data;
//     struct node *next;
// };
// struct node *head=NULL;




// void cll(){
//     struct node *new ,*temp;
//     int choice;
//     int item;
    
//     do{
//         new = (struct node*)malloc(sizeof(struct node));
        

//         printf("enter data");
//         scanf("%d" , &item);

//         new ->data = item;
//         new ->next = NULL;
//         if(head== NULL){
//             head = temp = new;
//         }
//         else{
//             temp ->next = new;
//             temp = temp->next;
//         }
//         printf("to add more node press 1");
//         scanf("%d" , &choice);

//     }
//     while(choice==1);
// }

// void traverse(){
//     struct node *temp = head;
//     while(temp!= NULL){
//         printf("%d", temp ->data);
//         temp = temp->next;
//     }
// }


// int main(){
//     cll();
//     traverse();
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node *next;
// };

// struct node *head = NULL;

// void cll() {
//     struct node *new, *temp;
//     int choice, item;

//     do {
//         new = (struct node*)malloc(sizeof(struct node));
//         // if(!new) {
//         //     printf("Memory allocation failed\n");
//         //     return;
//         }

//         printf("Enter data: ");
//         scanf("%d", &item);

//         new->data = item;
//         new->next = NULL;

//         if(head == NULL) {
//             head = temp = new;
//         } else {
//             temp->next = new;
//             temp = new;
//         }

//         printf("To add more node press 1: ");
//         scanf("%d", &choice);

//     } while(choice == 1);
// }

// void traverse() {
//     struct node *temp = head;
//     while(temp != NULL) {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// int main() {
//     cll();
//     traverse();
//     return 0;
// }

int fact(int n){
    if(n==0){
        return 1;
    }

    int ans = fact(n) *fact(n-1);
    return ans;
}

int main(){
    int n =5;
    int ans= fact(n);
    printf("%d" , ans);
}