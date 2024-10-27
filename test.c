#include <stdio.h>

int main() {
int n;
    
printf("Digite um número: ");
scanf("%d", &n);

printf("Números de 1 a %d:\n", n);
for (int i = 1; i <= n; i++) {
    printf("%d\n", i);
}

}
