#include<stdio.h>
#include<string.h>
// int main () {
//     char name[] = { 'N' , 'A' , 'M' , 'A', 'N' , '\0' };
//     printf("%c", name[]);
//     return 0;

// }
// void printstring( char arr[]);
// int main () {

// char firstname[] = "naman";
// char lastname[] = "jaiswal";
// printstring(firstname);
// printstring(lastname);

// return 0;

// }



// void printstring(char arr[]) {
//     for(int i = 0; arr[i] != '\0' ; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }
// int main () {
//     char name[50];
//     scanf("%s" , name);
//     printf( "my name is %s", name);
//     return 0;

// }
// int main () {
//     char *canChange = "hello world";
//     puts(canChange);
//     canChange = "hello";
//     puts(canChange);
//     char cannotChange[] = "hello world";
//     puts(cannotChange);
//     return 0;

// }
// int countLength(char arr[]);
// int main() {
//     char name[100];
//     fgets(name , 100 , stdin);
//     printf("length is %d", countLength(name));



//     return 0;

    
// }
// int countLength(char arr[]) {
//     int count = 0;
//     for( int i =0; arr[i] != '\0'; i++){
//         count ++;
//     }
//     return count-1;
// }
// int main () {
//     char str1[100] = "nam";
//     char str2[] = "an";
//     strcat( str1, str2);
//     puts(str1);
//     printf("%d", strcmp(str1 , str2));
//     return 0;

// }
// int main () {
//     char str1[100] = "HHHA";
//     char str2[] = "HHHB";
//     strcat( str1, str2);
//     puts(str1);
//     printf("%d", strcmp(str1 , str2));
//     return 0;

// }

// int main () {

//     char str[100];
//     char ch;
//     int i = 0;
//     while(ch != '\n'){
//         scanf("%c",&ch);
//         str[i] = ch;
//         i++;

//     }
//     str[i] = '\0';

  
//     puts(str);
//     return 0;
    
// }
void salting(char password[]);
int main() {
    char password[100];
    scanf("%s", password);
    salting(password);
    return 0;

}
void salting( char password[]) {
    char salt[] = "123";
    char newPass[200];
    strcpy(newPass , password);
    strcat(newPass , salt);
    puts(newPass);


}
// void slicing( char slice[] , int n , int m );
// int main() {
//     char word[100]; 
//     scanf("%s", word);
//     slicing(word , 4 , 6);
//     return 0;

// }
// void slicing( char slice[] , int n , int m) {
    
//     char newStr [100];
// int j = 0;
//     for( int i = n ; i <= m; i++ , j++){
//         newStr [j] = slice[i];
    
        
// }
// newStr[j] = '\0';
// puts (newStr);
// }
// int vowels( char vow[]);
// int main () {
//     char word[100];
//     scanf("%s" , word);
//     vowels(word);
//     return 0;

// }
// int vowels(char vow[]) {
//     int count = 0;
//     for ( int i = 0 ; vow[i] != '\0' ; i++) {
//         if( vow[i] == 'a' ||  vow[i] == 'e' || vow[i] == 'i' || vow[i] == 'o' || vow[i] == 'u'  ) {
//             count++;
//         }
        

//     }
//     printf("%d", count);
//     return count;

// }
// void check( char str[], char ch);
// int main() {
//     char word[100];
//     scanf("%s", word);
//     check(word, 'n');
//     return 0;
// }
// void check( char str[] , char ch) {
    
//     for(int i = 0; str[i] != '\0'; i++) {
//         if(str[i] == ch){
//             printf("yes");
//             return;

//         }
// }
// printf("no");
// }

    
