import java.util.Scanner;//importação das classes para entrada de dados do teclado
import java.util.Random;//e geração de números aleatórios

public class Mega_sena
{
    public static void main(String[] args)
    {   
        //declaração dos vetores para armazenar
        //as maquina e usuario
        int[] maquina = new int[6];
        int[] usuario = new int[6];
        int[][] tela = new int[6][10]; 
        //criação do objeto para geração de números aleatórios
        Random aleatorios = new Random();
        //declaração das variáveis de c
        int i,l,re;
        int total = 0;
        int up = 1;

        System.out.println("1  2  3  4  5  6  7  8  9  10");

        for(i = 1; i < 4; ++i)
        {
            for(l = 10;l < 20;++l)
            {
                tela[i][l] = l + up;
                System.out.printf( "%i",tela[i][l]);
            }

            up = (l + up);
            System.out.print("\n");
        }
    }
}
