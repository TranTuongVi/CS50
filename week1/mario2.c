#include <cs50.h>
#include <stdio.h>
int main(void)
{
    //để người dùng nhập input là 1 số từ 1 đến 8
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n<1 || n>8);

    //in tháp
    for (int i=0; i<n; i++)
{
    //in khoảng trắng
    for (int j=0; j<n-1-i; j++)
    {
        printf(" ");
    }

    //in dấu #
    for (int k=0; k<i+1; k++)
    {
        printf("#");
    }

    //in 2 khoảng trắng
        printf("  ");

    //in dấu # right aligned
    for (int u=0;u<i+1;u++)
    {
        printf("#");
    }
    //in xuống dòng sau khi hoàn thành 1 hàng
    printf("\n");
    }
}

//in summarise: for each row
//print spaces
//print left hashes
//print gap
//print right hashes
