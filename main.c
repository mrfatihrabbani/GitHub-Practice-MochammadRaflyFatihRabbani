#include <stdio.h>
#include <math.h>


int areaHexagon(int x){
    return (3*sqrt(3)/2)*x*x;
}
int perimeterHexagon(int x){
    return 6*x;
}
int areaOctagon(int x){
    return 2*x*x*(1+sqrt(2));
}
int perimeterOctagon(int x){
    return 8*x;
}
int areaDecagon(int x){
    return ((5*x*x)/2) * (sqrt(5 + 2*sqrt(5)));
}
int perimeterDecagon(int x){
    return 10*x;
}

void printMenu(){
    printf("= Things Calculator =\n");
    printf("Options:\n");
    printf("1. Hexagon Area\n");
    printf("2. Hexagon Perimeter\n");
    printf("3. Octagon Area\n");
    printf("4. Octagon Perimeter\n");
    printf("5. Decagon Area\n");
    printf("6. DecagonPerimeter\n");
    printf("\nChoose Option: ");
}

int main() {
    int option;

    printf("Hello! This is Fatih!\n");
    printf("Here is a program i've made to calculate parameters and areas using C!\n");

    printMenu();
    scanf("%d", &option);

    float length;
    printf("Enter length: ");
    scanf("%f", &length);

    float output;
    switch(option) {
        case 1 : 
            output = areaHexagon(length);
        break;
        case 2 : 
            output = perimeterHexagon(length);
        break;
        case 3 : 
            output = areaOctagon(length);
        break;
        case 4 : 
            output = perimeterOctagon(length);
        break;
        case 5 : 
            output = areaDecagon(length);
        break;
        case 6 : 
            output = perimeterDecagon(length);
        break;
        default:
            output = 0;
    }

    printf("Result: %.2f\n", output);

}