#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nome[20];
  char prenom[20];
  int age;
  char sex;
  char tl[10];
  printf("donner le nome : ");
  scanf("%s",nome);
  printf("donner le prenom :");
  scanf("%s",prenom);
  printf("donner l'age ");
  scanf("%d",&age);
  printf("donner sex m/f");
  scanf(" %c",&sex);
  printf("donner telephon ");
  scanf("%s",tl);

//afichage
printf("%s\n",nome);
printf("%s\n",prenom);
printf("%d\n",age);
printf("%c\n",sex);
printf("%s\n",tl);
    return 0;
}
