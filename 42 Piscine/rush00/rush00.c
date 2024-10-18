//ft_press ( int len, char head, char mid, char tail) countx len county
#include <unistd.h>
void ft_putchar(char c) 
{   
    (write(1, &c, 1));
}
void ft_press(int lenght, char first, char middle, char last) 
{
    int countx;
    countx = 1; 
    while(countx <= lenght) 
    {
        if (countx == 1) 
        {
            ft_putchar(first);
        }
        else if (countx == lenght) 
        {
            ft_putchar(last);
        }
        else 
        {
            ft_putchar(middle);
        }
        countx++;
    }     
    ft_putchar('\n');

}
void rush00(int x, int y) 
{
    int county;
    county = 1;
    if (x >= 1 && y >= 1 )
    {
        while(county <= y)
        {
            if(county == 1) 
            {
                ft_press(x, 'A', 'B', 'C'); 
            }
            else if(county == y) 
            {
                ft_press(x, 'C', 'B', 'A'); 
            }
            else
            {
                ft_press(x, 'B', ' ', 'B'); 
            }
            county++;
        }
    }
}
