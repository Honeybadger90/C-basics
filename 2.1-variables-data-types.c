#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 10;
    double b = 10.5;
    printf("%lu\n", sizeof(b)); // 8 bytes = 64 bits
    float c = 10.5;
    printf("%lu\n", sizeof(c)); // 4 bytes = 32 bits
    char d = 'a';
    char e[] = "char array"; //aka a string
    bool f = false;
    

    //int zero = .99999;
    //printf("zero is %d\n", zero); //implicit case

    int slices = 17;
    int people = 2;

    double slicesPerPerson = (double) (slices) / people; // 8.500
    printf("%lf\n", slicesPerPerson);

    double test1 = (25/2) * 2;
    double test2 = (25/2) *2.0;

    double test3 = 25.0 / 2 *2;
    double test4 = (double) 25 / 2 * 2.0;

    printf("test1: %f\n", test1);
    printf("test2: %f\n", test2);
    printf("test3: %f\n", test3);
    printf("test4: %f\n", test4);
    return 0;
}