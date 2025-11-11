#include <stdio.h>

void tohanoi(int num, char from, char to, char aux);

int main() {
    int num;
    printf("Enter number of disks: ");
    scanf("%d", &num);
    printf("The sequence of moves are:\n");
    tohanoi(num, 'A', 'C', 'B');
    return 0;
}

void tohanoi(int num, char from, char to, char aux) {
    if (num == 1) {
        printf("Move disk from %c to %c\n", from, to);
        return;
    }
    tohanoi(num - 1, from, aux, to);
    printf("Move disk from %c to %c\n", from, to);
    tohanoi(num - 1, aux, to, from);
}
