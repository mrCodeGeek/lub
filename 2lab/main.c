#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a[3];
    float square, height, median, bisector, hp;
    bool check = true;

    while(check)
    {
    printf("Введите три стороны треугольника через пробел: ");

    if (scanf("%f %f %f", &a[0], &a[1], &a[2]) != 3) {
        printf("Неправильный формат данных\n");
        continue;
    }

    if(a[0]+a[1]>a[2] && a[0]+a[2]>a[1] && a[2]+a[1]>a[0])
    {
    check = false;
    }
    else
    {
    printf("Ошибка\n");
    }
    }

    hp = (a[0]+a[1]+a[2])/2;
    square = sqrtf(hp*(hp-a[0])*(hp-a[1])*(hp-a[2]));
    printf("Площадь треугольника= %.5f\n\n", square);

    for (int i = 0; i < 3; ++i)
    {
    height = 2*square/a[i];
    printf("Высота к стороне а%d = %f\n", i+1, height);

    if(i==0)
    {
    median = 0.5*sqrtf(2*powf(a[1],2)+2*powf(a[2],2)-powf(a[0],2));
    bisector = 2/(a[1]+a[2])*sqrtf(a[1]*a[2]*hp*(hp-a[0]));
    }
    else if(i==1)
    {
    median = 0.5*sqrtf(2*powf(a[0],2)+2*powf(a[2],2)-powf(a[1],2));
    bisector = 2/(a[0]+a[2])*sqrtf(a[0]*a[2]*hp*(hp-a[1]));
    }
    else if(i==2)
    {
    median = 0.5*sqrtf(2*powf(a[1],2)+2*powf(a[0],2)-powf(a[2],2));
    bisector = 2/(a[1]+a[0])*sqrtf(a[1]*a[0]*hp*(hp-a[2]));
    }

    printf("Медиана к стороне а%d = %.5f\n", i+1, median);
    printf("Бисектриса к стороне а%d = %.5f\n\n", i+1, bisector);
    }

    return 0;
}
