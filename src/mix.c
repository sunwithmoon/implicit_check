
#include "stdio.h"
#define SIZE 50
unsigned int data[SIZE]; // input data
unsigned long long state[SIZE]; // implicit flow variables
int tmp;
// funcs

void func_0(void){
    if (data[0] == 3626764237){
        state[0] |= 1;
    }
}

void func_1(void){
    if (data[1] == 1806341205){
        state[0] |= 2;
    }
}

void func_2(void){
    if (data[2] == 2195908194){
        state[0] |= 4;
    }
}

void func_3(void){
    if (data[3] == 2046968324){
        state[0] |= 8;
    }
}

void func_4(void){
    if (data[4] == 3900315155){
        state[0] |= 16;
    }
}

void func_5(void){
    if (data[5] == 2167613558){
        state[0] |= 32;
    }
}

void func_6(void){
    if (data[6] == 1210484339){
        state[0] |= 64;
    }
}

void func_7(void){
    if (data[7] == 3246154361){
        state[0] |= 128;
    }
}

void func_8(void){
    if (data[8] == 3874773259){
        state[0] |= 256;
    }
}

void func_9(void){
    if (data[9] == 1332073689){
        state[0] |= 512;
    }
}

void func_10(void){
    if (data[10] == 3134603515){
        state[0] |= 1024;
    }
}

void func_11(void){
    if (data[11] == 2937688618){
        state[0] |= 2048;
    }
}

void func_12(void){
    if (data[12] == 432508404){
        state[0] |= 4096;
    }
}

void func_13(void){
    if (data[13] == 1864753826){
        state[0] |= 8192;
    }
}

void func_14(void){
    if (data[14] == 3921352636){
        state[0] |= 16384;
    }
}

void func_15(void){
    if (data[15] == 2048741382){
        state[0] |= 32768;
    }
}

void check_0(void){
    if((state[0] & 0) == 0 && (state[0] & 256) == 0){
        printf("012");
    }
}

void check_1(void){
    if((state[0] & 281474976710656) == 281474976710656 && (state[0] & 32768) == 0){
        printf("012");
    }
}

void check_2(void){
    if((state[0] & 262144) == 262144 && (state[0] & 549760008192) == 0){
        printf("012");
    }
}

void check_3(void){
    if((state[0] & 1236950581248) == 1236950581248 && (state[0] & 549760008192) == 0){
        printf("012");
    }
}

void check_4(void){
    if((state[0] & 2199023779840) == 2199023779840 && (state[0] & 140737572241408) == 0){
        printf("012");
    }
}

void check_5(void){
    if((state[0] & 2102272) == 2102272 && (state[0] & 17867063984128) == 0){
        printf("012");
    }
}

void check_6(void){
    if((state[0] & 35184472752128) == 35184472752128 && (state[0] & 149602300854276) == 0){
        printf("012");
    }
}

void check_7(void){
    if((state[0] & 299075752690688) == 299075752690688 && (state[0] & 562950221922320) == 0){
        printf("012");
    }
}

void check_8(void){
    if((state[0] & 2149056516) == 2149056516 && (state[0] & 34963722248) == 0){
        printf("012");
    }
}

void check_9(void){
    if((state[0] & 17592254201921) == 17592254201921 && (state[0] & 79723182956544) == 0){
        printf("012");
    }
}

void check_10(void){
    if((state[0] & 17593293473792) == 17593293473792 && (state[0] & 564049733484642) == 0){
        printf("012");
    }
}

void check_11(void){
    if((state[0] & 8796102525442) == 8796102525442 && (state[0] & 70471823532036) == 0){
        printf("012");
    }
}

void check_12(void){
    if((state[0] & 566936078848) == 566936078848 && (state[0] & 137466224897) == 0){
        printf("012");
    }
}

void check_13(void){
    if((state[0] & 42206984) == 42206984 && (state[0] & 35357244686464) == 0){
        printf("012");
    }
}

void check_14(void){
    if((state[0] & 27525371658304) == 27525371658304 && (state[0] & 145135738814596) == 0){
        printf("012");
    }
}

void check_15(void){
    if((state[0] & 281477124214904) == 281477124214904 && (state[0] & 1142780329985) == 0){
        printf("012");
    }
}

void func_16(void){
    int i;
    for(i=0;i<10;i++){
        if (data[16 + i*2] == 3428567412){
            state[16] += 1;
        }
    }
}

void check_16(void){
    if(state[16] == 5){
        printf("012");
    }
}

void func_17(void){
    int i;
    for(i=0;i<10;i++){
        if (data[17 + i*2] == 3534814261){
            state[17] += 1;
        }
    }
}

void check_17(void){
    if(state[17] == 6){
        printf("012");
    }
}

void func_18(void){
    int i;
    for(i=0;i<10;i++){
        if (data[18 + i*2] == 3219886967){
            state[18] += 1;
        }
    }
}

void check_18(void){
    if(state[18] == 6){
        printf("012");
    }
}

void func_19(void){
    int i;
    for(i=0;i<10;i++){
        if (data[19 + i*2] == 947184262){
            state[19] += 1;
        }
    }
}

void check_19(void){
    if(state[19] == 10){
        printf("012");
    }
}

void func_20(void){
    int i;
    for(i=0;i<10;i++){
        if (data[20 + i*2] == 4246444759){
            state[20] += 1;
        }
    }
}

void check_20(void){
    if(state[20] == 8){
        printf("012");
    }
}

void func_21(void){
    int i;
    for(i=0;i<10;i++){
        if (data[21 + i*2] == 2074811791){
            state[21] += 1;
        }
    }
}

void check_21(void){
    if(state[21] == 9){
        printf("012");
    }
}

void func_22(void){
    int i;
    for(i=0;i<10;i++){
        if (data[22 + i*2] == 3131574100){
            state[22] += 1;
        }
    }
}

void check_22(void){
    if(state[22] == 6){
        printf("012");
    }
}

void func_23(void){
    int i;
    for(i=0;i<10;i++){
        if (data[23 + i*2] == 3808436180){
            state[23] += 1;
        }
    }
}

void check_23(void){
    if(state[23] == 8){
        printf("012");
    }
}

void func_24(void){
    int i;
    for(i=0;i<32;i++){
        if (data[24] & (1<<i)){
            state[24] |= 1<<i;
        }
    }
}

void check_24(void){
    if(state[24] == 453492343){
        printf("012");
    }
}

void func_25(void){
    int i;
    for(i=0;i<32;i++){
        if (data[25] & (1<<i)){
            state[25] |= 1<<i;
        }
    }
}

void check_25(void){
    if(state[25] == 4186548013){
        printf("012");
    }
}

void func_26(void){
    int i;
    for(i=0;i<32;i++){
        if (data[26] & (1<<i)){
            state[26] |= 1<<i;
        }
    }
}

void check_26(void){
    if(state[26] == 3652167038){
        printf("012");
    }
}

void func_27(void){
    int i;
    for(i=0;i<32;i++){
        if (data[27] & (1<<i)){
            state[27] |= 1<<i;
        }
    }
}

void check_27(void){
    if(state[27] == 1293645251){
        printf("012");
    }
}

void func_28(void){
    int i;
    for(i=0;i<32;i++){
        if (data[28] & (1<<i)){
            state[28] |= 1<<i;
        }
    }
}

void check_28(void){
    if(state[28] == 2174486938){
        printf("012");
    }
}

void func_29(void){
    int i;
    for(i=0;i<32;i++){
        if (data[29] & (1<<i)){
            state[29] |= 1<<i;
        }
    }
}

void check_29(void){
    if(state[29] == 4280277627){
        printf("012");
    }
}

void func_30(void){
    int i;
    for(i=0;i<32;i++){
        if (data[30] & (1<<i)){
            state[30] |= 1<<i;
        }
    }
}

void check_30(void){
    if(state[30] == 853469582){
        printf("012");
    }
}

void func_31(void){
    int i;
    for(i=0;i<32;i++){
        if (data[31] & (1<<i)){
            state[31] |= 1<<i;
        }
    }
}

void check_31(void){
    if(state[31] == 2186626545){
        printf("012");
    }
}

void func_32(void){
    int i;
    for(i=0;i<32;i++){
        if (data[32] & (1<<i)){
            state[32] |= 1<<i;
        }
    }
}

void check_32(void){
    if(state[32] == 47173254){
        printf("012");
    }
}

void func_33(void){
    int i;
    for(i=0;i<10;){
        if (data[33 + i] == 3329201957){
            state[33] += 1;
        }
        i++;
        printf(" ");
        if(state[33]==9)exit(0);
    }
}

void func_34(void){
    int i;
    for(i=0;i<10;){
        if (data[34 + i] == 1117900804){
            state[34] += 1;
        }
        i++;
        printf(" ");
        if(state[34]==9)exit(0);
    }
}

void func_35(void){
    int i;
    for(i=0;i<10;){
        if (data[35 + i] == 1039739206){
            state[35] += 1;
        }
        i++;
        printf(" ");
        if(state[35]==6)exit(0);
    }
}

void func_36(void){
    int i;
    for(i=0;i<10;){
        if (data[36 + i] == 172998835){
            state[36] += 1;
        }
        i++;
        printf(" ");
        if(state[36]==7)exit(0);
    }
}

void func_37(void){
    int i;
    for(i=0;i<10;){
        if (data[37 + i] == 4233300811){
            state[37] += 1;
        }
        i++;
        printf(" ");
        if(state[37]==10)exit(0);
    }
}

void func_38(void){
    int i;
    for(i=0;i<10;){
        if (data[38 + i] == 3860157493){
            state[38] += 1;
        }
        i++;
        printf(" ");
        if(state[38]==8)exit(0);
    }
}

void func_39(void){
    int i;
    for(i=0;i<10;){
        if (data[39 + i] == 3535578308){
            state[39] += 1;
        }
        i++;
        printf(" ");
        if(state[39]==7)exit(0);
    }
}

void func_40(void){
    int i;
    for(i=0;i<10;){
        if (data[40 + i] == 2935160070){
            state[40] += 1;
        }
        i++;
        printf(" ");
        if(state[40]==7)exit(0);
    }
}

void func_41(void){
    int i;
    for(i=0;i<32;){
        if (data[41] & (1<<i)){
            state[41] |= 1<<i;
        }
        i++;
        printf(" ");
        if(state[41]==3498404567)exit(0);
    }
}

void func_42(void){
    int i;
    for(i=0;i<32;){
        if (data[42] & (1<<i)){
            state[42] |= 1<<i;
        }
        i++;
        printf(" ");
        if(state[42]==3392245684)exit(0);
    }
}

void func_43(void){
    int i;
    for(i=0;i<32;){
        if (data[43] & (1<<i)){
            state[43] |= 1<<i;
        }
        i++;
        printf(" ");
        if(state[43]==3571021833)exit(0);
    }
}

void func_44(void){
    int i;
    for(i=0;i<32;){
        if (data[44] & (1<<i)){
            state[44] |= 1<<i;
        }
        i++;
        printf(" ");
        if(state[44]==1438900767)exit(0);
    }
}

void func_45(void){
    int i;
    for(i=0;i<32;){
        if (data[45] & (1<<i)){
            state[45] |= 1<<i;
        }
        i++;
        printf(" ");
        if(state[45]==2905336913)exit(0);
    }
}

void func_46(void){
    int i;
    for(i=0;i<32;){
        if (data[46] & (1<<i)){
            state[46] |= 1<<i;
        }
        i++;
        printf(" ");
        if(state[46]==3058730681)exit(0);
    }
}

void func_47(void){
    int i;
    for(i=0;i<32;){
        if (data[47] & (1<<i)){
            state[47] |= 1<<i;
        }
        i++;
        printf(" ");
        if(state[47]==1749051456)exit(0);
    }
}

void func_48(void){
    int i;
    for(i=0;i<32;){
        if (data[48] & (1<<i)){
            state[48] |= 1<<i;
        }
        i++;
        printf(" ");
        if(state[48]==2851491674)exit(0);
    }
}

void func_49(void){
    int i;
    for(i=0;i<32;){
        if (data[49] & (1<<i)){
            state[49] |= 1<<i;
        }
        i++;
        printf(" ");
        if(state[49]==3160182655)exit(0);
    }
}
 
int main(int argc, char* argv[]){
    int fd = open(argv[1], 0);
    read(fd, data, SIZE * 4);
// call funcs
func_0();func_1();func_2();func_3();func_4();func_5();func_6();func_7();func_8();func_9();func_10();func_11();func_12();func_13();func_14();func_15();check_0();check_1();check_2();check_3();check_4();check_5();check_6();check_7();check_8();check_9();check_10();check_11();check_12();check_13();check_14();check_15();func_16();check_16();func_17();check_17();func_18();check_18();func_19();check_19();func_20();check_20();func_21();check_21();func_22();check_22();func_23();check_23();func_24();check_24();func_25();check_25();func_26();check_26();func_27();check_27();func_28();check_28();func_29();check_29();func_30();check_30();func_31();check_31();func_32();check_32();func_33();func_34();func_35();func_36();func_37();func_38();func_39();func_40();func_41();func_42();func_43();func_44();func_45();func_46();func_47();func_48();func_49(); 
    return 0;
}
