#include <stdio.h>

int main(){
    int s, n;
    char a, a2;

    scanf("%d %d ", &s, &n);
    n = n % 26;

    while(1){
        scanf("%c", &a);
        if (s == 4) {
            printf("Operacao invalida.");
            break;
        }
        
        if (a <= 122 && a >= 97){ //<= 'z' && >= 'a'
            
            if (s == 1){
                a2 = a + n;
                if (a2 > 122){
                    a2 = a2 - 26;
                }
            } else if (s == 2){
                a2 = a - n;
                if (a2 < 97){
                    a2 = a2 + 26;
                }
            }

        }   else {
            a2 = a;
        }

        printf("%c", a2);
        if (a == '.') break;
    }
    return 0;
}