#include<stdio.h>
// int main () {
//     FILE *fptr;
//     fptr = fopen("test.txt", "r");
//     if(fptr == NULL) {
//         printf("does not exist\n");
    
    
//     }else{
//         fclose(fptr);
//         }
//         return 0;
//     }
// int main () {
//     FILE *fptr;
//     fptr = fopen("test.txt", "r");
  
//   char ch;
//   fscanf(fptr, "%c", &ch);
//   printf("%c", ch);
//   fscanf(fptr, "%c", &ch);
//   printf("%c", ch);
//   fscanf(fptr, "%c", &ch);
//   printf("%c", ch);
//   fscanf(fptr, "%c", &ch);
//   printf("%c", ch);
//   fscanf(fptr, "%c", &ch);
//   printf("%c", ch);
//   fscanf(fptr, "%c", &ch);
//   printf("%c", ch);
//         return 0;
//     }
// int main () {
//     FILE *fptr;
//     fptr = fopen("text.txt", "r");
  
//   int ch;
//   fscanf(fptr, "%d", &ch);
//   printf("%d", ch);
//   fscanf(fptr, "%d", &ch);
//   printf("%d", ch);
//   fscanf(fptr, "%d", &ch);
//   printf("%d", ch);

//         return 0;
//     }
// int main () {
//     FILE *fptr;
//     fptr = fopen("test.txt", "w");
//     fprintf(fptr ,"%c" , 'M');
//     fprintf(fptr ,"%c" , 'A');
//     fprintf(fptr ,"%c" , 'N');
//     fprintf(fptr ,"%c" , 'G');
//     fprintf(fptr ,"%c" , 'O');
//     return 0;
// }
int main () {
    FILE *fptr;
    fptr = fopen ("test.txt", "r");
    fputc('A' , fptr);
    fputc('P' , fptr);
    fputc('P' , fptr);
    fputc('L' , fptr);
    fputc('E' , fptr);
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    return 0;
}

