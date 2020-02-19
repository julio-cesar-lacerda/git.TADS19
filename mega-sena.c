#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

int main()
{
    int usuario[6],maquina[6],tela[6][10];
    int i,l,total = 0,up = 1,re;
    
    do
    {
        up = 1;
        re = 0;
        printf("\n\t\t\t\t\33[44m                                \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[42m           \33[4mMega-Sena\33[0m\33[42m          \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m                                \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101m1  2  3  4  5  6  7  8  9  10 \33[44m \33[49m\n");
        for(i = 1; i < 4; ++i)
        {
        printf("\t\t\t\t\33[44m \33[49m");
        for(l = 10;l < 20;++l)
        {
          tela[i][l] = l + up;
          printf("\33[101m%i ", tela[i][l]);
        }
            up = (l + up);
            printf("\33[44m \33[49m");
            printf("\n");
        }
        printf("\t\t\t\t\33[44m                                \33[49m");

        printf("\nEscolha seis números tabela: ");
        for(i = 0; i < 6;++i)
        {
            scanf("%i",&usuario[i]);
        }
    
        for(i = 0;i < 6;++i)
        {
            for(l = 0;l < 6;++l)
            {   
                if(usuario[i] == usuario[l])
                {
                    re++;
                }
            }
        }

        if(re > 6)
        {
            system("clear");
            printf("\nNão poder número repetido");
        }
     
    }while(re > 6);

    system("clear");
    do
    {
        re = 0;
         // srand(time(NULL));
        for(i = 0; i < 6;++i)
        {
            maquina[i] = 1 + (rand() % 60);
        }

        for(i = 0;i < 6;++i)
        {
            for(l = 0;l < 6;++l)
            {
                if(maquina[i] == maquina[l])
                {
                    re++;
                }
            }
        }
    }while(re > 6);  

    for(i = 0;i < 6;++i)
    {
        for(l = 0; l < 6;++l)
        {
            if(maquina[l] == usuario[i])
            {
                total++;
            }
        }
    }

    if(total == 6)
    {
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[42m              \33[4mMega-Sena\33[0m\33[42m           \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101mNúmeros sorteados: ");
        for(i = 0;i < 6;++i)
        {
            printf("%i ",maquina[i]);
        }
        printf("\33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101mSeu número: ");
        for(i = 0;i < 6;++i)
        {
            printf("%i ",usuario[i]);
        }
        printf("\t   \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101m           Você acertou!!         \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101m                SENA              \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
    }

    else if(total == 5)
    {
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[42m              \33[4mMega-Sena\33[0m\33[42m           \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101mNúmeros sorteados: ");
        for(i = 0;i < 6;++i)
        {
            printf("%i ",maquina[i]);
        }
        printf("\33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101mSeu número: ");
        for(i = 0;i < 6;++i)
        {
            printf("%i ",usuario[i]);
        }
        printf("\t   \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101m           Você acertou!!         \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101m               QUINA              \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
    }

    else if(total == 4)
    {
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[42m              \33[4mMega-Sena\33[0m\33[42m           \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101mNúmeros sorteados: ");
        for(i = 0;i < 6;++i)
        {
            printf("%i ",maquina[i]);
        }
        printf("\33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101mSeu número: ");
        for(i = 0;i < 6;++i)
        {
            printf("%i ",usuario[i]);
        }
        printf("\t   \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101m           Você acertou!!         \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101m               QUADRA             \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
    }
    
    else
    {
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[42m              \33[4mMega-Sena\33[0m\33[42m           \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101mNúmeros sorteados: ");
        for(i = 0;i < 6;++i)
        {
            printf("%i ",maquina[i]);
        }
        printf("\33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101mSeu número: ");
        for(i = 0;i < 6;++i)
        {
            printf("%i ",usuario[i]);
        }
        printf("\t   \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
        printf("\n\t\t\t\t\33[44m \33[49m\33[101m           VOCÊ PERDEU!!          \33[44m \33[49m");
        printf("\n\t\t\t\t\33[44m                                    \33[49m");
    }

    printf("\n\nCriando e elaborador por júlio César.");
    return 0;
    printf("\n");
}
