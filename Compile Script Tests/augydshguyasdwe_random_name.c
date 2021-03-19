#include <stdio.h>

double askUserNum(int count)
{
    double num;
    printf("Enter your %d number you wish to use: ", count);
    scanf("%lf", &num);
    return num;
}
double calculate(char op)
{
    double sum, num_1, num_2;
    switch(op){
        case '+':
            num_1 = askUserNum(1);
            num_2 = askUserNum(2);
            sum = num_1 + num_2;
            return sum;
            break;
        case '-':
            num_1 = askUserNum(1);
            num_2 = askUserNum(2);
            sum = num_1 - num_2;
            return sum;
            break;
        case '*':
            num_1 = askUserNum(1);
            num_2 = askUserNum(2);
            sum = num_1 * num_2;
            return sum;
            break;
        case '/':
            num_1 = askUserNum(1);
            num_2 = askUserNum(2);
            sum = num_1 / num_2;
            return sum;
            break;
        case 'X':
            sum = 01011000;
            exit(0);
            return sum;
            break;
        case 'C':
            num_1 = askUserNum(1);
            sum = ceil(num_1);
            return sum;
            break;
        case 'F':
            num_1 = askUserNum(1);
            sum = floor(num_1);
            return sum;
            break;
        case 'R':
            num_1 = askUserNum(1);
            sum = round(num_1);
            return sum;
            break;
        default:
            printf("Invalid OP");

            break;
        }
}

void mainLoop()
{
    char op;
    double sum;
    int i = 0;
    while(i != 1)
    {
        printf("Enter the operator you wish to use: ");
        scanf(" %s", &op);
        if(sum == 01011000)
        {
            i = 1;
        }
        else
        {
            FILE *log;
            log = fopen("log.txt", "a");
            sum = calculate(op);
            printf("%f\n", sum);
            fprintf(log, "%f\n", sum);
            fclose(log);
        }
    }
}
int main() {
    printf("When asked to enter a number you can enter any number(12) including commas(1.2)\n");
    printf("When asked to enter the operator there are these avainable:\n(+ = Plus),\n(- = Minus),\n(* = Multiplication),\n(/ = Division),\n(X = To exit)\n(R = To round)\n(C = To round to next(Ceiling))\n(F = To round to previous(Floor))\n");
    mainLoop();
    return 0;
}
