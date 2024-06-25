#include <stdio.h>
void stage1(int input, int *output_stage1) 
{
    *output_stage1 = input * 2;
}

void stage2(int input_stage1, int *output_stage2) 
{
    *output_stage2 = input_stage1 + 5;
}
void stage3(int input_stage2) 
{
    printf("Result: %d\n", input_stage2);
}

int main()
{
    int input_data = 10;
    int intermediate_data_stage1;
    int intermediate_data_stage2;
    stage1(input_data, &intermediate_data_stage1);
    stage2(intermediate_data_stage1, &intermediate_data_stage2);
    stage3(intermediate_data_stage2);
    return 0;
}
