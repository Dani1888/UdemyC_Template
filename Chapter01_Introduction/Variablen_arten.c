#include <stdio.h>

int main()
{
    // *** Wertebereiche und Speichergrößen von C++ Datentypen ***

    // C++ Datentyp	    Bit-Variante    Minimum Wert	            Maximum Wert	            Speicherplatz
    // bool (Boolean)	                0 (false)	                1 (true)	                8 Bit, 1 Byte
    // char		                        -128	                    +127	                    8 Bit, 1 Byte
    // unsigned char		            0	                        255	                        8 Bit, 1 Byte
    // int	            16	            -32.768	                    +32.767	                    16 Bit, 2 Byte
    // unsigned int	    16	            0	                        65.535	                    16 Bit, 2 Byte
    // int	            32	            -2.147.483.648	            +2.147.483.647	            32 Bit, 4 Byte
    // unsigned int	    32	            0	                        4.294.967.295	            32 Bit, 4 Byte
    // int	            64	            -9.223.372.036.854.775.808	+9.223.372.036.854.775.807	64 Bit, 8 Byte
    // unsigned int	    64	            0	                        18.446.744.073.709.551.615	64 Bit, 8 Byte
    // short		                    -32.768	                    +32.767	                    16 Bit, 2 Byte
    // unsigned short		            0	                        65.535	                    16 Bit, 2 Byte
    // long		                        -2.147.483.648	            +2.147.483.647	            32 Bit, 4 Byte
    // unsigned long		            0	                        4.294.967.295	            32 Bit, 4 Byte
    // long long		                -9.223.372.036.854.775.808	+9.223.372.036.854.775.807	64 Bit, 8 Byte
    // unsigned long long		        0	                        18.446.744.073.709.551.615	64 Bit, 8 Byte
    // Genauigkeit
    // float	        6 Stellen	    -3,4E+38	                +3,4E+38	                32 Bit, 4 Byte
    // double	        15 Stellen	    -1,7E+308	                +1,7E+308	                64 Bit, 8 Byte
    // long double	    19 Stellen	    -1,1E+4932	                +1,1E+4932	                80 Bit, 10 Byte


    printf("Hello World!\n");

    float my_number_A = 15;
    float my_nummer_B = 3;
    float my_result;

    my_result = my_number_A + my_nummer_B;
    printf("float %f\n", my_result);

    int A = 15;
    int B = 3;
    int R;
    R = A--;

    // cahr immer in einzelnen 'Anführungszeichen'
    char ASCI_Buchstaben = 'Z';
    char ASCI_Buchstaben = 'A';

    // char in doppelten "anführungszeichen" bedeutet =
    char ASCI_Buchstaben = "A";

    char ASCI_Buchstaben = 'Z';


    printf("int %d\n", R);

    printf("int %d\n", R);

    unsigned int A_unsignet_int = 15u;
    unsigned int B_unsignet_int = 15u;
    unsigned int R_unsignet_int;
    R_unsignet_int = A_unsignet_int - 1u;


    printf("int %u\n", R_unsignet_int);

    printf("int %d\n", R_unsignet_int);


    int a = 15;
    int b;
    int c;
    int d;

    printf("Please value for variable a:\n");
    scanf("%d", &a);

    printf("Please value for variable a\n");
    scanf("%d", &b);

    printf("Please value for variable a\n");
    scanf("%d", &c);

    printf("Please value for variable a\n");
    scanf("%d", &d);

    printf("The value form the Variable %d\n", a);
    printf("The value form the Variable %d\n", b);
    printf("The value form the Variable %d\n", c);
    printf("The value form the Variable %d\n", d);


    return 0;
}
