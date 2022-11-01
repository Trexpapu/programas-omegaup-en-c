#include<stdio.h>
#include<stdlib.h>
int comparaenteros(const void *p, const void *q);
int difp(int tamanos[], int cpostes, int necesito);
int main()
{
	// k es la cantidad de poster necesitados y n los postes disponibles
	int k, n;
	int z=0;
	//leer con restricciones
	while(z!=1){
		//printf("Ingrese la cantidad de postes que necesita y luego la cantidad de postes de la empresa\n");
		scanf("%d %d", &k, &n); 
		if(k>1 && k<=10000 && n>=k && n<=100000){
			z=1;
		}
		else{
			z=0;
		}

	} 
	// t es el tamaño de cada poste
	int t[n];
	//pidiendo los tamaños de los postes
	for(int i=0; i<n; i++){
		int u=0;
		while(u!=1){
		//	printf("Ingrese el tamano del poste\n");
			scanf("%d", &t[i]);
			if(t[i]>=1 && t[i]<=1000000){
				u=1;
			}
			else{
				u=0;
			}
		}//fin while
	}//fin for
	qsort(t, n, sizeof(int), &comparaenteros);

	//for(int i=0; i<n; i++){
	//	printf("%d\t", t[i]);
	//}

	//printf("\n");


	difp(t, n, k);

	return 0;
}


int comparaenteros(const void *p, const void *q){
	int x, y;
	x=*(int *) p;
	y=*(int *) q;
	if (x<y)
		return -1;
	
	if(x==y)
		return 0;
	
	return 1;


	}

int difp(int tamanos [], int cpostes, int necesito){
	//parte de la diferencia minima
	int z;//la posicion de i
	int avance;//el avance de grupos
	int arreglo[cpostes-necesito];//nuevo arreglo
	int resta;//la diferencia minima
	for(int i=0; i<cpostes;i++){
		z=tamanos[i];
		//printf("%d es z ", z);
		//printf("\n");
		avance= i+(necesito-1);
		//printf("%d avance ", avance);
		//printf("\n");
		resta=z-tamanos[avance];
		resta=resta*-1;
		//printf("%d resta", resta);
		//printf("\n");
		arreglo[i]=resta;//llenando nuevo arreglo
		if(avance==(cpostes-1)){//uno antes de postes
			break;
		}
		avance=0;


	}//fin del for
//ordenando nuevo arreglo
	qsort(arreglo, cpostes, sizeof(int), &comparaenteros);
	
	//printf("\n");
	//printf("La diferencia minima es: %d", arreglo[0]);
	printf("%d", arreglo[0]);

}