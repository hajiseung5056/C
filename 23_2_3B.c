#include<stdio.h> 
#include<stdlib.h> 
 
char n[30];
 
char *test() {
    printf("입력하세요 : ");
    fgets(n, sizeof(n), stdin); // fgets 함수를 사용하여 안전하게 문자열을 입력 받음
    return n;
}
 
int main() {
    char *test1;
    char *test2;
    char *test3;
 
    test1 = test();
    test2 = test();
    test3 = test();
 
    printf("%s\n", test1);
    printf("%s\n", test2);
    printf("%s", test3);
    
    return 0;
}