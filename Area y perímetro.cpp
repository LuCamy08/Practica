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
	
	
	print("Edición por parte de Kevin Alberto Escobar Mtz git pull request");
	printf("Ingrese la base del rectángulo: ");
	scanf("%d", &base); 
	printf("Ingrese la altura del rectángulo: ");
	scanf("%d", &altura);
	
	area = base * altura;
	perimetro = base + altura + base + altura;
	
	printf("El área del rectángulo es %d, y el perímetro es %d. ", area, perimetro); 
	
	return 0;
}
