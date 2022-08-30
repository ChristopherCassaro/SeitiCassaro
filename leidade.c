#include <stdio.h>

int leidade (){
int i;
    printf ("Digite a idade (0 a 110)\n");
    scanf ("%d", &i);
    while (i < 0 || i > 110){
        printf ("Digite novamente\n");
        scanf ("%d", &i);
    }
    return i;
}
int abs (int x) {
  if (x < 0) x = (-1)* x;
  return x;
}
int main() {
    int id1, id2;
    id1 = leidade();
    id2 = leidade();
    
    printf ("dif = %d", abs (id1 - id2));
    return 0;
}

