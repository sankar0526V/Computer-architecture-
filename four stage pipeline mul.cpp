#include <stdio.h>
int pipelinedMultiplier(int operand1, int operand2) {
    int fetch, multiply, writeResult, nextInstruction;
    fetch = operand1 * operand2;
    multiply = fetch;
    writeResult = multiply;
    nextInstruction = writeResult;
    return nextInstruction;
}
int main() {
    int operand1, operand2;
    int totalInstructions;
    int totalClockCycles;
    float clockCyclesPerInstruction;
    printf("Enter operand 1: ");
    scanf("%d", &operand1);
    printf("Enter operand 2: ");
    scanf("%d", &operand2);
    printf("Enter the number of instructions: ");
    scanf("%d", &totalInstructions);
    totalClockCycles = totalInstructions * 4; 
    clockCyclesPerInstruction = (float)totalClockCycles / totalInstructions;
    printf("\nTotal Clock Cycles: %d\n", totalClockCycles);
    printf("Clock Cycles Per Instruction: %.2f\n", clockCyclesPerInstruction);
    return 0;
}
