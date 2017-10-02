#include <stdio.h>
#define N 3 //Define el tamaño de la matriz tanto por filas como por columnas
int matriz[N][N];
int i,j;

int idempotente (int n[N][N])
{
  int n2[N][N],r,s;
  for (i=0;i<N;i++)
  {
    for (j=0;j<N;j++)
    {
      n2[i][j]=n[i][j]*n[i][j]; //Completa cada celda de la matriz 2 con el cuadrado del valor que contiene la matriz 1 en la misma posición
      if(n2[i][j]==n[i][j])
	      r++;
    }
  }

  printf("\nNumero de coincidencias: %d\n",r); //Muestra el número de celdas que contienen el mismo valor en ambas matrices
  printf ("\nMatriz 1:");
  for (i=0;i<N;i++)
  {
	  printf("\n");
	  for (j=0;j<N;j++)
		  printf ("%d ",n[i][j]);
  }
  
  printf ("\n\nMatriz 2:");
  for (i=0;i<N;i++)
  {
	  printf("\n");
	  for (j=0;j<N;j++)
		  printf ("%d ",n2[i][j]);
  }

  if(r==N*N) //Si el número de coincidencias es igual al número de sueldas muestra como resultado un 1 en pantalla
    s=1;
  else
    s=0;
  return (s);
}

int main (void)
{
  for (i=0;i<N;i++)
  {
    for (j=0;j<N;j++)
    {
      printf("\nIntroducir los numeros (%d,%d):",i,j);
      scanf("%d",&matriz[i][j]);
    }
  }
  printf ("\n\nResultado: %d\n",idempotente (matriz));
}  
    