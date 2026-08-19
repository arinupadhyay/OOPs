#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int n;
    char src;
    char aux;
    char dest;
    int state; 
} StackFrame;


typedef struct {
    StackFrame *array;
    int top;
    int capacity;
} Stack;

Stack* createStack(int capacity) {
    Stack *stack = (Stack*) malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (StackFrame*) malloc(stack->capacity * sizeof(StackFrame));
    return stack;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

void push(Stack *stack, StackFrame frame) {
    stack->array[++stack->top] = frame;
}

StackFrame pop(Stack *stack) {
    return stack->array[stack->top--];
}


void hanoiRecursive(int n, char src, char aux, char dest) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", src, dest);
        return;
    }
    hanoiRecursive(n - 1, src, dest, aux);
    printf("Move disk %d from %c to %c\n", n, src, dest);
    hanoiRecursive(n - 1, aux, src, dest);
}


void hanoiIterative(int n, char src, char aux, char dest) {
    Stack *stack = createStack(3 * n + 10);
    
    StackFrame firstFrame = {n, src, aux, dest, 1};
    push(stack, firstFrame);

    while (!isEmpty(stack)) {
        StackFrame *top = &stack->array[stack->top];

        if (top->n == 1) {
            printf("Move disk 1 from %c to %c\n", top->src, top->dest);
            pop(stack);
            continue;
        }

        if (top->state == 1) {
            top->state = 2; 
            StackFrame nextFrame = {top->n - 1, top->src, top->dest, top->aux, 1};
            push(stack, nextFrame);
        } 
        else if (top->state == 2) {
            printf("Move disk %d from %c to %c\n", top->n, top->src, top->dest);
            top->state = 3; 
            StackFrame nextFrame = {top->n - 1, top->aux, top->src, top->dest, 1};
            push(stack, nextFrame);
        } 
        else if (top->state == 3) {
            pop(stack);
        }
    }

    free(stack->array);
    free(stack);
}

int main() {
    int test_cases[] = {3, 4};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_cases; i++) {
        int n = test_cases[i];
        printf("       TOWER OF HANOI FOR N = %d          \n", n);
     

        printf("--- Recursive Output ---\n");
        hanoiRecursive(n, 'A', 'B', 'C');

        printf("\n--- Non-Recursive (Iterative) Output ---\n");
        hanoiIterative(n, 'A', 'B', 'C');
        printf("\n");
    }

    return 0;
}