#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    char buffer[100];
    double pi;

    archivo=fopen("archivo.txt","r+");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }
    int c=0;
    while (!feof(archivo)){
        c++;
        fgets(buffer,100,archivo);
        printf ("la linea %d es: %s", c, buffer);
    }
    fgets(buffer,100,archivo);
    printf("la primera linea es %s",buffer);
    /*
    fgets(buffer,100,archivo);
    printf("la segunda linea es %s",buffer);

    fgets(buffer,100,archivo);
    printf("la tercera linea es %s",buffer);

    fscanf(archivo, "%lf", &pi);
    printf("el numero en la cuarta linea es %lf",pi);

    //fprintf(archivo,"\n");

    fputs("se agrega una quinta linea",archivo);
  
    fclose(archivo);
*/
    return 0;

}