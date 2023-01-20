#include <stdio.h>

int main()
{
 FILE *arc=NULL;
 FILE *arc1=NULL;
 int x;
 arc=fopen("vector.txt","r");
 arc1=fopen("resultado.txt","w");
 if(arc==NULL){
    printf("No existen permisos para poder abrir el archivo");
    return -1;
 }
 if(arc1==NULL){
    printf("No existen permisos para poder abrir el archivo");
 return (-1);
 }

 while(!feof(arc)){
    fscanf(arc,"%d",&x);
    if(x%10==0 && x!=0){
        fprintf(arc1,"El valor %d es multiplo de 10\n",x);
        printf("El valor %d es multiplo de 10\n",x);
    }
    else{
        fprintf(arc1,"%d\n",x);
        printf("%d\n",x);
    }

 }
  
 fclose(arc);
 fclose(arc1);

    return 0;
}