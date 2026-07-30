#include <cs50.h>
#include <stdio.h>
int main(void)
{
    //lấy chiều cao n (từ 1 đến 8)
    int n;
    do
    {
        n = get_int("Positive Number: ");
    }
    while (n<1 || n>8);
    //In kim tự tháp
    for (int i = 0; i<n ; i++)
{
    //in khoảng trắng
    for (int j = 0; j < n-1-i; j++)
    {
         printf(" ");
    }

    //In dấu #
    for (int k=0; k<i+1; k++)
    {
        printf("#");
    }
    printf("\n");
    }
}
