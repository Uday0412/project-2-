#include<stdio.h>
void a(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {

      for(j=1;j<=5;j++)   
        {
            if ((i==1&&j!=1&&j!=2&&j!=4&&j!=5)||(i==3)||(i==2&&j!=1&&j!=3&&j!=5)||(i==4&&j!=2&&j!=3&&j!=4))
                {
                printf("*");
                }
            else
                {
                printf(" ");
                } 
        }
        printf("\n");
    }
}

void b(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i==1&&j!=4&&j!=5)||(i==2&&j!=2&&j!=3&&j!=5)||(i==3&&j!=4&&j!=5)||(i==4&&j!=2&&j!=3&&j!=5)||(i==5&&j!=5))
            {
            printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }

}

void c(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i==1&&j!=1&&j!=5)||(i==2&&j!=2&&j!=3&&j!=4&&j!=5)||(i==3&&j!=2&&j!=3&&j!=4&&j!=5)||(i==4&&j!=2&&j!=3&&j!=4&&j!=5)||(i==5&&j!=1&&j!=5))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
void d(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i==1&&j!=4&&j!=5)||(i==2&&j!=2&&j!=3&&j!=5)||(i==3&&j!=2&&j!=3&&j!=5)||(i==4&&j!=2&&j!=3&&j!=5)||(i==5&&j!=4&&j!=5))
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
void e(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i==1)||(i==2&&j!=2&&j!=3&&j!=4&&j!=5)||(i==3&&j!=4&&j!=5)||(i==4&&j!=2&&j!=3&&j!=4&&j!=5)||(i==5))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}

void f(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i==1)||(i==2&&j!=2&&j!=3&&j!=4&&j!=5)||(i==3&&j!=4&&j!=5)||(i==4&&j!=2&&j!=3&&j!=4&&j!=5)||(i==5&&j!=2&&j!=3&&j!=4&&j!=5))
            {
                printf("+");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}

void g(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i==1&&j!=1)||(i==2&&j!=2&&j!=3&&j!=4&&j!=5)||(i==3&&j!=2)||(i==4&&j!=2&&j!=4)||(i==5&&j!=4))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
void h(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i==1&&j!=2&&j!=3&&j!=4)||(i==2&&j!=2&&j!=3&&j!=4)||(i==3)||(i==4&&j!=2&&j!=3&&j!=4)||(i==5&&j!=2&&j!=3&&j!=4))

            printf("*");
            else{
                printf(" ");
            }
        }
        printf("\n");
        
    }

}
void i(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
             if((i==1)||(i==2&&j!=1&&j!=2&&j!=4&&j!=5)||(i==3&&j!=1&&j!=2&&j!=4&&j!=5)||(i==4&&j!=1&&j!=2&&j!=4&&j!=5)||(i==5))
             printf("*");
             else
             printf(" ");
        }
        printf("\n");
    }

}
void j(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
          if((i==1)||(i==2&&j!=1&&j!=2&&j!=3&&j!=4)||(i==3&&j!=1&&j!=2&&j!=3&&j!=4)||(i==4&&j!=1&&j!=3&&j!=4)||(i==5&&j!=1&&j!=2&&j!=5))
          printf("+");
          else
          printf(" ");
        }
        printf("\n");
    }

}
void k(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
          if((i==1&&j!=2&&j!=3&&j!=5)||(i==2&&j!=2&&j!=4&&j!=5)||(i==3&&j!=3&&j!=4&&j!=5)||(i==4&&j!=2&&j!=4&&j!=5)||(i==5&&j!=2&&j!=3&&j!=5))
          printf("*");
          else
          printf(" ");
        }
        printf("\n");
    }

}
void l(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
          if((i==1&&j!=2&&j!=3&&j!=4&&j!=5)||(i==2&&j!=2&&j!=3&&j!=4&&j!=5)||(i==3&&j!=2&&j!=3&&j!=4&&j!=5)||(i==4&&j!=2&&j!=3&&j!=4&&j!=5)||(i==5&&j!=5))
         printf("*");
          else
          printf(" ");
        }
        printf("\n");
    }

}
void m(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
          if((i==1&&j!=2&&j!=3&&j!=4)||(i==2&&j!=3)||(i==3&&j!=2&&j!=4)||(i==4&&j!=2&&j!=3&&j!=4)||(i==5&&j!=2&&j!=3&&j!=4))
          printf("*");
          else
          printf(" ");
        }
        printf("\n");
    }

}
void n(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
          if((i==1&&j!=2&&j!=3&&j!=4)||(i==2&&j!=3&&j!=4)||(i==3&&j!=2&&j!=4)||(i==4&&j!=2&&j!=3)||(i==5&&j!=2&&j!=3&&j!=4))
          printf("+");
          else
          printf(" ");
        }
        printf("\n");
    }

}
void o(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
          if((i==1&&j!=1&&j!=5)||(i==2&&j!=2&&j!=3&&j!=4)||(i==3&&j!=2&&j!=3&&j!=4)||(i==4&&j!=2&&j!=3&&j!=4)||(i==5&&j!=1&&j!=5))
           printf("*");
          else
          printf(" ");
        }
        printf("\n");
    }

}

void p(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
          if((i==1&&j!=4&&j!=5)||(i==2&&j!=2&&j!=3&&j!=5)||(i==3&&j!=4&&j!=5)||(i==4&&j!=2&&j!=3&&j!=4&&j!=5)||(i==5&&j!=2&&j!=3&&j!=4&&j!=5))
          printf("*");
          else
          printf(" ");
        }
        printf("\n");
    }

}
void q(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
          if((i==1&&j!=3&&j!=4)||(i==2&&j!=2&&j!=3&&j!=4)||(i==3&&j!=2&&j!=3&&j!=4)||(i==4&&j!=2&&j!=3)||(i==5&&j!=1))
          printf("*");
          else
          printf(" ");
        }
        printf("\n");
    }

}
void r(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i==1&&j!=5)||(i==2&&j!=2&&j!=3&&j!=4)||(i==3&&j!=5))
            {
                printf("*");
            }
            if((i==4&&j!=2&&j!=4&&j!=5)||(i==5&&j!=2&&j!=3))
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }

}
void s(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
           if((i==1) || (i==3) || (i==5 )|| (i==2&&j!=2&&j!=3&&j!=4&&j!=5) || (i==4&&j!=1&&j!=2&&j!=3&&j!=4))
           printf("*");
           else{
            printf(" ");
           }
        }
        printf("\n");
    }

}
void t(void)
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=5;j++)
        {
           if(j==3||i==1)
           {
            printf("*");
           }
           else{
            printf(" ");
           }
        }
        printf("\n");
    }

}
void u(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i==1&&j!=2&&j!=3&&j!=4)||(i==2&&j!=2&&j!=3&&j!=4)||(i==3&&j!=2&&j!=3&&j!=4))
            {
                printf("*");
            }
            if((i==4&&j!=2&&j!=3&j!=4)||(i==5))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

void v(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i==1&&j!=2&&j!=3&&j!=4)||(i==2&&j!=2&&j!=3&&j!=4))
            {
                printf("*");
            }
            if((i==3&&j!=1&&j!=5&&j!=3)||(i==4&&j!=1&&j!=2&&j!=3&&j!=5)||(i==5&&j!=1&&j!=2&&j!=3&&j!=4&&j!=5))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}

void y(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i==1&&j!=2&&j!=3&&j!=4)||(i==2&&j!=1&&j!=3&&j!=5))
            {
                printf("*");
            }
            if((i==3&&j!=1&&j!=2&&j!=4&&j!=5)||(i==4&&j!=1&&j!=3&&j!=4&&j!=5))
            {
                printf("*");
            }
            if(i==5&&j!=2&&j!=3&&j!=4&&j!=5)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
void x(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i==1&&j!=2&&j!=3&&j!=4)||(i==2&&j!=1&&j!=3&&j!=5))
            {
                printf("*");
            }
            if((i==3&&j!=1&&j!=2&&j!=4&&j!=5)||(i==4&&j!=1&&j!=3&&j!=4&&j!=5))
            {
                printf("*");
            }
            if(i==5&&j!=2&&j!=3&&j!=4&&j!=5)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
int main()
{   
    u();
    printf("\n");
    d();
    printf("\n");
    a();
    printf("\n");
    y();
    printf("\n");
   

    return 0;
}
