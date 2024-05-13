
#include "stdio.h"
#define SIZE 50
unsigned int data[SIZE]; // input data
unsigned long long state[SIZE]; // implicit flow variables
int tmp;
// funcs

void func_0(void){
    if (data[0] == 3626764237){
        state[0] = 1;
    }
}

void func_1(void){
    if (data[1] == 1806341205){
        state[1] = 1;
    }
}

void func_2(void){
    if (data[2] == 2195908194){
        state[2] = 1;
    }
}

void func_3(void){
    if (data[3] == 2046968324){
        state[3] = 1;
    }
}

void func_4(void){
    if (data[4] == 3900315155){
        state[4] = 1;
    }
}

void func_5(void){
    if (data[5] == 2167613558){
        state[5] = 1;
    }
}

void func_6(void){
    if (data[6] == 1210484339){
        state[6] = 1;
    }
}

void func_7(void){
    if (data[7] == 3246154361){
        state[7] = 1;
    }
}

void func_8(void){
    if (data[8] == 3874773259){
        state[8] = 1;
    }
}

void func_9(void){
    if (data[9] == 1332073689){
        state[9] = 1;
    }
}

void func_10(void){
    if (data[10] == 3134603515){
        state[10] = 1;
    }
}

void func_11(void){
    if (data[11] == 2937688618){
        state[11] = 1;
    }
}

void func_12(void){
    if (data[12] == 432508404){
        state[12] = 1;
    }
}

void func_13(void){
    if (data[13] == 1864753826){
        state[13] = 1;
    }
}

void func_14(void){
    if (data[14] == 3921352636){
        state[14] = 1;
    }
}

void func_15(void){
    if (data[15] == 2048741382){
        state[15] = 1;
    }
}

void func_16(void){
    if (data[16] == 1118805955){
        state[16] = 1;
    }
}

void func_17(void){
    if (data[17] == 60308648){
        state[17] = 1;
    }
}

void func_18(void){
    if (data[18] == 3726325546){
        state[18] = 1;
    }
}

void func_19(void){
    if (data[19] == 3738645480){
        state[19] = 1;
    }
}

void func_20(void){
    if (data[20] == 2437440079){
        state[20] = 1;
    }
}

void func_21(void){
    if (data[21] == 4155553746){
        state[21] = 1;
    }
}

void func_22(void){
    if (data[22] == 1924014660){
        state[22] = 1;
    }
}

void func_23(void){
    if (data[23] == 4006490763){
        state[23] = 1;
    }
}

void func_24(void){
    if (data[24] == 468399889){
        state[24] = 1;
    }
}

void func_25(void){
    if (data[25] == 2367674807){
        state[25] = 1;
    }
}

void func_26(void){
    if (data[26] == 3034658173){
        state[26] = 1;
    }
}

void func_27(void){
    if (data[27] == 2351240810){
        state[27] = 1;
    }
}

void func_28(void){
    if (data[28] == 2320500417){
        state[28] = 1;
    }
}

void func_29(void){
    if (data[29] == 2523796087){
        state[29] = 1;
    }
}

void func_30(void){
    if (data[30] == 1911213317){
        state[30] = 1;
    }
}

void func_31(void){
    if (data[31] == 1653137829){
        state[31] = 1;
    }
}

void func_32(void){
    if (data[32] == 2472402290){
        state[32] = 1;
    }
}

void func_33(void){
    if (data[33] == 1246955724){
        state[33] = 1;
    }
}

void func_34(void){
    if (data[34] == 801997237){
        state[34] = 1;
    }
}

void func_35(void){
    if (data[35] == 2820330615){
        state[35] = 1;
    }
}

void func_36(void){
    if (data[36] == 2046685052){
        state[36] = 1;
    }
}

void func_37(void){
    if (data[37] == 3253884088){
        state[37] = 1;
    }
}

void func_38(void){
    if (data[38] == 3765700075){
        state[38] = 1;
    }
}

void func_39(void){
    if (data[39] == 3965891272){
        state[39] = 1;
    }
}

void func_40(void){
    if (data[40] == 3618339112){
        state[40] = 1;
    }
}

void func_41(void){
    if (data[41] == 3485918757){
        state[41] = 1;
    }
}

void func_42(void){
    if (data[42] == 3648514451){
        state[42] = 1;
    }
}

void func_43(void){
    if (data[43] == 4079209076){
        state[43] = 1;
    }
}

void func_44(void){
    if (data[44] == 2489771122){
        state[44] = 1;
    }
}

void func_45(void){
    if (data[45] == 1935153793){
        state[45] = 1;
    }
}

void func_46(void){
    if (data[46] == 3407305306){
        state[46] = 1;
    }
}

void func_47(void){
    if (data[47] == 353789296){
        state[47] = 1;
    }
}

void func_48(void){
    if (data[48] == 2631883398){
        state[48] = 1;
    }
}

void func_49(void){
    if (data[49] == 2706462215){
        state[49] = 1;
    }
}

void check_0(void){
    int i=0;
    for(i=0;i<SIZE;i++)
        printf("%d\n", state[i]);

}
 
int main(int argc, char* argv[]){
    int fd = open(argv[1], 0);
    read(fd, data, SIZE * 4);
// call funcs
func_0();func_1();func_2();func_3();func_4();func_5();func_6();func_7();func_8();func_9();func_10();func_11();func_12();func_13();func_14();func_15();func_16();func_17();func_18();func_19();func_20();func_21();func_22();func_23();func_24();func_25();func_26();func_27();func_28();func_29();func_30();func_31();func_32();func_33();func_34();func_35();func_36();func_37();func_38();func_39();func_40();func_41();func_42();func_43();func_44();func_45();func_46();func_47();func_48();func_49();check_0(); 
    return 0;
}
