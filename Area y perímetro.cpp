#include <stdio.h>
 
int main()
{
	int base;
	int altura;
	int area;
	int perimetro;
	
	base = 0;
	altura = 0;
	area = 0;
	perimetro = 0;
	
	
	print("Edici�n por parte de Kevin Alberto Escobar Mtz git pull request");
	printf("Editado por Vicente Luis Marin S8A");
	printf("Ingrese la base del rect�ngulo: ");
	scanf("%d", &base); 
	printf("Ingrese la altura del rect�ngulo: ");
	scanf("%d", &altura);
	
	area = base * altura;
	perimetro = base + altura + base + altura;
	
	printf("El �rea del rect�ngulo es %d, y el per�metro es %d. ", area, perimetro); 
	
	return 0;
}
