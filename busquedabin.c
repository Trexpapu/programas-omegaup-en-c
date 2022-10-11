#include<stdio.h>
void leerchapas(int a, int A[]);
void norepetirchapas(int A1[], int a1);
void leerllaves(int a2, int A2[]);
void norepetirllaves(int A3[], int a3);
void busquedabinaria(int a, int b, int C[], int D[]);
void bubblesort(int A[], int n);

void swap(int A[], int i, int j);

void main(){
    int m, m1, n, n1;
    int z=0, q=0;
    while(z==0){
    //printf("ingrese la cantidad de chapas\n");
    scanf("%d", &m1);
    if(m1>=1 && m1<=100){
        z=1;
        m=m1;
        //printf("la cantidad de chapas que ingreso fue: %d", m);
        //printf("\n");
    }
    else{
        //printf("CANTIDAD INVALIDA ingrese una cantidad de chapas entre 1 al 100, 000\n");
        z=0;
    }
    }
    int chapas[m];

    leerchapas(m, chapas);
    




//repetir proceso pero para llaves

    while(q==0){
    //printf("\ningrese la cantidad de llaves\n");
    scanf("%d", &n1);
    if(n1>=1 && n1<=100){
        q=1;
        n=n1;
        //printf("la cantidad de llaves que ingreso fue: %d", n);
    }
    else{
        //printf("CANTIDAD INVALIDA ingrese una cantidad de llaves entre 1 al 100, 000\n");
        q=0;
    }
    }
    int llaves[n];
     leerllaves(n, llaves);
     

    busquedabinaria(n, m, chapas, llaves);


}



//lectura de tamaño de chapa y restriccion 
void leerchapas(int a, int A[]){

    int z=1;
    int arraychapas[a];
    for(int i=1; i<=a; i++){
        int q=0;
        while(q==0){

        //printf("\ningrese una chapa\n");
        scanf("\n%d", &arraychapas[i]);
        if(arraychapas[i]>=1 && arraychapas[i]<=100){
            A[z]=arraychapas[i];
            z=z+1;
            q=1;
                }
        else{
            q=0;
                }
        
        }
    }

    norepetirchapas(A, a);
}

void norepetirchapas(int A1[], int a1){
    int j;
    int sum2=0;
    int cont;
    for(int i=1; i<=a1; i++){
        j=i+1;
        cont=i;
        while(cont<=a1){
        if(A1[j]==A1[i]){
            sum2=sum2+1;
            }
        j=j+1;
        cont=cont+1;
        }
    }
    //printf("\n%d", sum2);
    if(sum2==0){
        //printf("\ntodo bien ninguna chapa se repite ");
    }
    else{
        //printf("\n al menos una chapa de repite\n");
        leerchapas(a1, A1);
    }
    
}



void leerllaves(int a2, int A2[]){
    int z=1;
    int arrayllaves[a2];
    for(int i=1; i<=a2; i++){
        int q=0;
        while(q==0){

        //printf("\ningrese una llave\n");
        scanf("\n%d", &arrayllaves[i]);
        if(arrayllaves[i]>=1 && arrayllaves[i]<=100){
            A2[z]=arrayllaves[i];
            z=z+1;
            q=1;
                }
        else{
            q=0;
                }
        
        }
    }

    norepetirllaves(A2, a2);

}


void norepetirllaves(int A3[], int a3){
        int j;
        int sum2=0;
        int cont;
        for(int i=1; i<=a3; i++){
            j=i+1;
            cont=i;
            while(cont<=a3){
            if(A3[j]==A3[i]){
                sum2=sum2+1;
                }
            j=j+1;
            cont=cont+1;
            }
        }
        //printf("\n%d", sum2);
        if(sum2==0){
            //printf("\ntodo bien ninguna llave se repite ");
        }
            else{
            //printf("\n al menos una llave de repite\n");
            leerllaves(a3, A3);
        }
}

//busquedabinaria(n, m, chapas, llaves);
void busquedabinaria(int a, int b, int C[], int D[]){
        int salida[a];
        int mitad;

        bubblesort(C , b);
        for(int i=1; i<=a;i++){
      int izquierda=0;
      int derecha=b-1;
      int f=0;
     int  busqueda=D[i];
            while(izquierda<=derecha){
         mitad=(izquierda+derecha)/2;

        int valormedio=C[mitad];
        if(busqueda==valormedio){
            f=1;
            izquierda=200;
            derecha=2;
           // printf("la mitad es %d\n", mitad);
            salida[i]=mitad;
        }
        if(busqueda<valormedio){
            derecha=mitad-1;
        }
        else{
            izquierda=mitad+1;
        }

         }//fin while
         
         if(f==0){
            salida[i]=0;
         }
     }//fin for
     for(int i=1; i<=a;i++){
        printf("%d ", salida[i]);
     }
}


void bubblesort(int A[], int n){
    int j;
    for(int i=2; i<=n; i++){
        j=i;
        while(A[j-1]>A[j] &&j>0){
            swap(A, j, j-1);
            j--;
        }
    }
}

void swap(int A[], int i, int j){
    int aux=A[i];
    A[i]=A[j];
    A[j]=aux;
}
