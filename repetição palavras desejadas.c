#include <stdio.h>
#include <string.h>

int main() {
    char a[20], b[20];
    int x;
    
    printf("Digite o texto:\n");
    scanf("%s ", a);
    
    if (scanf("%[^\n]", b) == 1){
       for (x = 1; x < 10; x++){
           
        printf("%s %s\n", a, b);
    }
}
    else {
      for (x = 1; x < 10, x++;){
        printf("%s \n", a);
    }
}
 
 
    return 0;
}
