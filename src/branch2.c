
#include "stdio.h"
#define SIZE 50
unsigned int data[SIZE]; // input data
unsigned long long state=0; // implicit flow variables
int tmp;
// funcs

void func_0(void){
    if (data[0] == 3626764237){
        state |= 1;
    }
}

void func_1(void){
    if (data[1] == 1806341205){
        state |= 2;
    }
}

void func_2(void){
    if (data[2] == 2195908194){
        state |= 4;
    }
}

void func_3(void){
    if (data[3] == 2046968324){
        state |= 8;
    }
}

void func_4(void){
    if (data[4] == 3900315155){
        state |= 16;
    }
}

void func_5(void){
    if (data[5] == 2167613558){
        state |= 32;
    }
}

void func_6(void){
    if (data[6] == 1210484339){
        state |= 64;
    }
}

void func_7(void){
    if (data[7] == 3246154361){
        state |= 128;
    }
}

void func_8(void){
    if (data[8] == 3874773259){
        state |= 256;
    }
}

void func_9(void){
    if (data[9] == 1332073689){
        state |= 512;
    }
}

void func_10(void){
    if (data[10] == 3134603515){
        state |= 1024;
    }
}

void func_11(void){
    if (data[11] == 2937688618){
        state |= 2048;
    }
}

void func_12(void){
    if (data[12] == 432508404){
        state |= 4096;
    }
}

void func_13(void){
    if (data[13] == 1864753826){
        state |= 8192;
    }
}

void func_14(void){
    if (data[14] == 3921352636){
        state |= 16384;
    }
}

void func_15(void){
    if (data[15] == 2048741382){
        state |= 32768;
    }
}

void func_16(void){
    if (data[16] == 1118805955){
        state |= 65536;
    }
}

void func_17(void){
    if (data[17] == 60308648){
        state |= 131072;
    }
}

void func_18(void){
    if (data[18] == 3726325546){
        state |= 262144;
    }
}

void func_19(void){
    if (data[19] == 3738645480){
        state |= 524288;
    }
}

void func_20(void){
    if (data[20] == 2437440079){
        state |= 1048576;
    }
}

void func_21(void){
    if (data[21] == 4155553746){
        state |= 2097152;
    }
}

void func_22(void){
    if (data[22] == 1924014660){
        state |= 4194304;
    }
}

void func_23(void){
    if (data[23] == 4006490763){
        state |= 8388608;
    }
}

void func_24(void){
    if (data[24] == 468399889){
        state |= 16777216;
    }
}

void func_25(void){
    if (data[25] == 2367674807){
        state |= 33554432;
    }
}

void func_26(void){
    if (data[26] == 3034658173){
        state |= 67108864;
    }
}

void func_27(void){
    if (data[27] == 2351240810){
        state |= 134217728;
    }
}

void func_28(void){
    if (data[28] == 2320500417){
        state |= 268435456;
    }
}

void func_29(void){
    if (data[29] == 2523796087){
        state |= 536870912;
    }
}

void func_30(void){
    if (data[30] == 1911213317){
        state |= 1073741824;
    }
}

void func_31(void){
    if (data[31] == 1653137829){
        state |= 2147483648;
    }
}

void func_32(void){
    if (data[32] == 2472402290){
        state |= 4294967296;
    }
}

void func_33(void){
    if (data[33] == 1246955724){
        state |= 8589934592;
    }
}

void func_34(void){
    if (data[34] == 801997237){
        state |= 17179869184;
    }
}

void func_35(void){
    if (data[35] == 2820330615){
        state |= 34359738368;
    }
}

void func_36(void){
    if (data[36] == 2046685052){
        state |= 68719476736;
    }
}

void func_37(void){
    if (data[37] == 3253884088){
        state |= 137438953472;
    }
}

void func_38(void){
    if (data[38] == 3765700075){
        state |= 274877906944;
    }
}

void func_39(void){
    if (data[39] == 3965891272){
        state |= 549755813888;
    }
}

void func_40(void){
    if (data[40] == 3618339112){
        state |= 1099511627776;
    }
}

void func_41(void){
    if (data[41] == 3485918757){
        state |= 2199023255552;
    }
}

void func_42(void){
    if (data[42] == 3648514451){
        state |= 4398046511104;
    }
}

void func_43(void){
    if (data[43] == 4079209076){
        state |= 8796093022208;
    }
}

void func_44(void){
    if (data[44] == 2489771122){
        state |= 17592186044416;
    }
}

void func_45(void){
    if (data[45] == 1935153793){
        state |= 35184372088832;
    }
}

void func_46(void){
    if (data[46] == 3407305306){
        state |= 70368744177664;
    }
}

void func_47(void){
    if (data[47] == 353789296){
        state |= 140737488355328;
    }
}

void func_48(void){
    if (data[48] == 2631883398){
        state |= 281474976710656;
    }
}

void func_49(void){
    if (data[49] == 2706462215){
        state |= 562949953421312;
    }
}

void check_0(void){
    if((state & 0) == 0 && (state & 256) == 0){
        printf("012");
    }
}

void check_1(void){
    if((state & 32) == 32 && (state & 1099511627776) == 0){
        printf("012");
    }
}

void check_2(void){
    if((state & 70368744177664) == 70368744177664 && (state & 34359771136) == 0){
        printf("012");
    }
}

void check_3(void){
    if((state & 8598323200) == 8598323200 && (state & 70368760954880) == 0){
        printf("012");
    }
}

void check_4(void){
    if((state & 17660905521152) == 17660905521152 && (state & 17213947904) == 0){
        printf("012");
    }
}

void check_5(void){
    if((state & 33817088) == 33817088 && (state & 274890489856) == 0){
        printf("012");
    }
}

void check_6(void){
    if((state & 580542139473920) == 580542139473920 && (state & 8796093088257) == 0){
        printf("012");
    }
}

void check_7(void){
    if((state & 140739635970176) == 140739635970176 && (state & 4399120318720) == 0){
        printf("012");
    }
}

void check_8(void){
    if((state & 140739640037376) == 140739640037376 && (state & 5501854154816) == 0){
        printf("012");
    }
}

void check_9(void){
    if((state & 1099549409344) == 1099549409344 && (state & 22539988500608) == 0){
        printf("012");
    }
}

void check_10(void){
    if((state & 17182179328) == 17182179328 && (state & 79164937864196) == 0){
        printf("012");
    }
}

void check_11(void){
    if((state & 3298543484928) == 3298543484928 && (state & 43989055048832) == 0){
        printf("012");
    }
}

void check_12(void){
    if((state & 17729627177984) == 17729627177984 && (state & 9071004485639) == 0){
        printf("012");
    }
}

void check_13(void){
    if((state & 281630740580352) == 281630740580352 && (state & 4948081246338) == 0){
        printf("012");
    }
}

void check_14(void){
    if((state & 140739669467153) == 140739669467153 && (state & 18142428399104) == 0){
        printf("012");
    }
}

void check_15(void){
    if((state & 17938635554944) == 17938635554944 && (state & 283699838255104) == 0){
        printf("012");
    }
}

void check_16(void){
    if((state & 162901683863554) == 162901683863554 && (state & 72567973089316) == 0){
        printf("012");
    }
}

void check_17(void){
    if((state & 275147403024) == 275147403024 && (state & 140262260802) == 0){
        printf("012");
    }
}

void check_18(void){
    if((state & 281479273845062) == 281479273845062 && (state & 3592782610960) == 0){
        printf("012");
    }
}

void check_19(void){
    if((state & 633320316602596) == 633320316602596 && (state & 5016528687361) == 0){
        printf("012");
    }
}

void check_20(void){
    if((state & 282574629941264) == 282574629941264 && (state & 37392799368960) == 0){
        printf("012");
    }
}

void check_21(void){
    if((state & 567906368356357) == 567906368356357 && (state & 63774897740928) == 0){
        printf("012");
    }
}

void check_22(void){
    if((state & 1443394489736) == 1443394489736 && (state & 409018363814496) == 0){
        printf("012");
    }
}

void check_23(void){
    if((state & 74795263746088) == 74795263746088 && (state & 888959584962832) == 0){
        printf("012");
    }
}

void check_24(void){
    if((state & 351845197895690) == 351845197895690 && (state & 61473867300992) == 0){
        printf("012");
    }
}

void check_25(void){
    if((state & 70446365540537) == 70446365540537 && (state & 444392749947138) == 0){
        printf("012");
    }
}

void check_26(void){
    if((state & 714040527819008) == 714040527819008 && (state & 37950771037712) == 0){
        printf("012");
    }
}

void check_27(void){
    if((state & 703838915036328) == 703838915036328 && (state & 38210881460308) == 0){
        printf("012");
    }
}

void check_28(void){
    if((state & 574168760458242) == 574168760458242 && (state & 159707288576453) == 0){
        printf("012");
    }
}

void check_29(void){
    if((state & 196022865249817) == 196022865249817 && (state & 648232068059168) == 0){
        printf("012");
    }
}

void check_30(void){
    if((state & 855042159578400) == 855042159578400 && (state & 72669114667201) == 0){
        printf("012");
    }
}

void check_31(void){
    if((state & 1043436841349634) == 1043436841349634 && (state & 70440167492828) == 0){
        printf("012");
    }
}

void check_32(void){
    if((state & 78720577180450) == 78720577180450 && (state & 53064432364685) == 0){
        printf("012");
    }
}

void check_33(void){
    if((state & 142137563826183) == 142137563826183 && (state & 864284928456560) == 0){
        printf("012");
    }
}

void check_34(void){
    if((state & 1626721686154) == 1626721686154 && (state & 754269897903184) == 0){
        printf("012");
    }
}

void check_35(void){
    if((state & 442025252107023) == 442025252107023 && (state & 2168702733504) == 0){
        printf("012");
    }
}

void check_36(void){
    if((state & 757752558066980) == 757752558066980 && (state & 13270550373080) == 0){
        printf("012");
    }
}

void check_37(void){
    if((state & 591061655281903) == 591061655281903 && (state & 459759250509328) == 0){
        printf("012");
    }
}

void check_38(void){
    if((state & 220056959552341) == 220056959552341 && (state & 305403297558562) == 0){
        printf("012");
    }
}

void check_39(void){
    if((state & 55012141735830) == 55012141735830 && (state & 1061739412348937) == 0){
        printf("012");
    }
}

void check_40(void){
    if((state & 182272003355435) == 182272003355435 && (state & 873117213576324) == 0){
        printf("012");
    }
}

void check_41(void){
    if((state & 621305171706989) == 621305171706989 && (state & 361503596301074) == 0){
        printf("012");
    }
}

void check_42(void){
    if((state & 291410999396275) == 291410999396275 && (state & 794837735542860) == 0){
        printf("012");
    }
}

void check_43(void){
    if((state & 687221227739311) == 687221227739311 && (state & 429710783063824) == 0){
        printf("012");
    }
}

void check_44(void){
    if((state & 595309622138128) == 595309622138128 && (state & 493206755109614) == 0){
        printf("012");
    }
}

void check_45(void){
    if((state & 570776769408091) == 570776769408091 && (state & 405589556052896) == 0){
        printf("012");
    }
}

void check_46(void){
    if((state & 309153700897258) == 309153700897258 && (state & 746377460588053) == 0){
        printf("012");
    }
}

void check_47(void){
    if((state & 709471133417346) == 709471133417346 && (state & 398836587364477) == 0){
        printf("012");
    }
}

void check_48(void){
    if((state & 133488781444765) == 133488781444765 && (state & 992406830430562) == 0){
        printf("012");
    }
}

void check_49(void){
    if((state & 385432925594428) == 385432925594428 && (state & 740466981248195) == 0){
        printf("012");
    }
}
 
int main(int argc, char* argv[]){
    int fd = open(argv[1], 0);
    read(fd, data, SIZE * 4);
// call funcs
func_0();func_1();func_2();func_3();func_4();func_5();func_6();func_7();func_8();func_9();func_10();func_11();func_12();func_13();func_14();func_15();func_16();func_17();func_18();func_19();func_20();func_21();func_22();func_23();func_24();func_25();func_26();func_27();func_28();func_29();func_30();func_31();func_32();func_33();func_34();func_35();func_36();func_37();func_38();func_39();func_40();func_41();func_42();func_43();func_44();func_45();func_46();func_47();func_48();func_49();check_0();check_1();check_2();check_3();check_4();check_5();check_6();check_7();check_8();check_9();check_10();check_11();check_12();check_13();check_14();check_15();check_16();check_17();check_18();check_19();check_20();check_21();check_22();check_23();check_24();check_25();check_26();check_27();check_28();check_29();check_30();check_31();check_32();check_33();check_34();check_35();check_36();check_37();check_38();check_39();check_40();check_41();check_42();check_43();check_44();check_45();check_46();check_47();check_48();check_49(); 
    return 0;
}
