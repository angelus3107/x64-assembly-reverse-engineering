#include <stdio.h>

int main(){
    
    int a = -1, b=2;

    if (a == b){
        return 1;
    }
    if (a > b){
        return 2;
    }
    if (a < b){
        return 3;
    }

    return 0;
}



//Listing:



                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             int __cdecl main(int _Argc, char * * _Argv, char * * _Env)
             int               EAX:4          <RETURN>
             int               ECX:4          _Argc
             char * *          RDX:8          _Argv
             char * *          R8:8           _Env
             undefined4        Stack[-0xc]:4  local_c                                 XREF[4]:     1400014ed(W), 
                                                                                                   1400014fb(R), 
                                                                                                   14000150a(R), 
                                                                                                   140001519(R)  
             undefined4        Stack[-0x10]:4 local_10                                XREF[4]:     1400014f4(W), 
                                                                                                   1400014fe(R), 
                                                                                                   14000150d(R), 
                                                                                                   14000151c(R)  
                             .text                                           XREF[2]:     __tmainCRTStartup:140001155(c), 
                             main                                                         140005078(*)  
       1400014e0 55              PUSH       RBP
       1400014e1 48 89 e5        MOV        RBP,RSP
       1400014e4 48 83 ec 30     SUB        RSP,0x30
       1400014e8 e8 23 01        CALL       __main                                           undefined __main(void)
                 00 00
       1400014ed c7 45 fc        MOV        dword ptr [RBP + local_c],0xffffffff
                 ff ff ff ff
       1400014f4 c7 45 f8        MOV        dword ptr [RBP + local_10],0x2
                 02 00 00 00
       1400014fb 8b 45 fc        MOV        EAX,dword ptr [RBP + local_c]
       1400014fe 3b 45 f8        CMP        EAX,dword ptr [RBP + local_10]
       140001501 75 07           JNZ        LAB_14000150a
       140001503 b8 01 00        MOV        EAX,0x1
                 00 00
       140001508 eb 23           JMP        LAB_14000152d
                             LAB_14000150a                                   XREF[1]:     140001501(j)  
       14000150a 8b 45 fc        MOV        EAX,dword ptr [RBP + local_c]
       14000150d 3b 45 f8        CMP        EAX,dword ptr [RBP + local_10]
       140001510 7e 07           JLE        LAB_140001519
       140001512 b8 02 00        MOV        EAX,0x2
                 00 00
       140001517 eb 14           JMP        LAB_14000152d
                             LAB_140001519                                   XREF[1]:     140001510(j)  
       140001519 8b 45 fc        MOV        EAX,dword ptr [RBP + local_c]
       14000151c 3b 45 f8        CMP        EAX,dword ptr [RBP + local_10]
       14000151f 7d 07           JGE        LAB_140001528
       140001521 b8 03 00        MOV        EAX,0x3
                 00 00
       140001526 eb 05           JMP        LAB_14000152d
                             LAB_140001528                                   XREF[1]:     14000151f(j)  
       140001528 b8 00 00        MOV        EAX,0x0
                 00 00
                             LAB_14000152d                                   XREF[3]:     140001508(j), 140001517(j), 
                                                                                          140001526(j)  
       14000152d 48 83 c4 30     ADD        RSP,0x30
       140001531 5d              POP        RBP
       140001532 c3              RET
