#include <stdio.h>
#include <math.h>//biblioteka potrzebna bo u¿ywam funkcji sqrt (pierwiastek kwadratowy)
int main()
{
    int liczba,i;
    do
    {
        printf("Podaj liczbe z <0,100>\n");
        //fflush(stdin);//czyszczenie bufora
        scanf("%d",&liczba);
    }while(liczba<0 || liczba>100);
    for (i=2;i<=sqrt(liczba);i++)//optymalizacja
    //for (i=2;i<liczba);i++) mo¿na tak
    {
        if (liczba%i==0)
        {
            printf("Nie jest to liczba pierwsza! \n");
            getchar();
            return 0;
        }
    }
    printf("Liczba pierwsza:\n");
    getchar();
    return 0;
}
