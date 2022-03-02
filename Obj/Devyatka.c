/* Ofront+ 1.0 -m3 -21 */
#include "SYSTEM.oh"




static void Devyatka_Main (void);


/*============================================================================*/

static void Devyatka_Main (void)
{
__asm

; ---------------------------------------------------------------------------
LOC_74CC:       LD      A, (BYTE_881B)
                LD      B, A
                LD      A, #1
                LD      (BYTE_881B), A
                LD      A, B
                AND     A
                JR      Z, LOC_74E8
                CALL    CLS         ; SUB_85F2
                CALL    SUB_7F00
                CALL    SUB_7E7C
                CALL    SUB_8238
                JP      LOC_79A3
; ---------------------------------------------------------------------------
LOC_74E8:       CALL    CLS         ; SUB_85F2
                CALL    INIT_VARS   ; SUB_7F9D
LOC_74EE:       CALL    INIT_RSRC   ; SUB_7F5F
                CALL    INIT_RSRC
                CALL    SUB_7F00
                CALL    SUB_7E7C
                CALL    SUB_8238
                CALL    SUB_7BF6
                LD      IX, #DATA_86E8
                CALL    SUB_8154
                AND     A
                JP      NZ, LOC_79A3
                LD      IX, #0x86F5
                CALL    SUB_8154
                AND     A
                JP      NZ, LOC_7794
                JP      LOC_784A

; =============== S U B R O U T I N E =======================================

SUB_7519:       LD      (WORD_7759), IX
                DI
                PUSH    IY
                LD      HL, #DATA_8662  ; ������ ������
                LD      DE, #0x775B
                LD      BC, #8
                LDIR
                LD      DE, #0x7763
                LD      C, #8
                LDIR
                LD      IY, #0x775B
                LD      DE, #0x7763
                LD      B, #0xC
LOC_753B:       LD      A, 0(IX)
                AND     A
                JR      Z, LOC_7580
                CP      #4
                JR      Z, LOC_7570
                CP      #0x16
                JR      Z, LOC_7570
                CP      #0x1F
                JR      Z, LOC_7570
                PUSH    BC
                LD      HL, #0x86C1
                LD      BC, #9
LOC_7554:       CP      #0xA
                JR      C, LOC_755D
                ADD     HL, BC
                SUB     #9
                JR      LOC_7554
; ---------------------------------------------------------------------------
LOC_755D:       LD      C, A
                ADD     HL, BC
                POP     BC
                CP      #4
                JR      NC, LOC_756B
                INC     HL
                LD      A, (HL)
                AND     A
                JR      Z, LOC_757C
                JR      LOC_7570
; ---------------------------------------------------------------------------
LOC_756B:       DEC     HL
                LD      A, (HL)
                AND     A
                JR      Z, LOC_757C
LOC_7570:       LD      A, 0(IX)
                LD      0(IY), A
                LD      A, #0x32 ; '2'
                LD      (DE), A
                INC     DE
                INC     IY
LOC_757C:       INC     IX
                DJNZ    LOC_753B
LOC_7580:       CALL    SUB_76C7
                LD      IX, #0x775B
                LD      IY, #0x7763
                LD      B, #8
LOC_758D:       LD      A, 0(IX)
                AND     A
                JR      Z, LOC_75A6
                PUSH    BC
                PUSH    IX
                PUSH    IY
                CALL    SUB_75CD
                POP     IY
                POP     IX
                POP     BC
                INC     IX
                INC     IY
                DJNZ    LOC_758D
LOC_75A6:       LD      B, #7
                LD      IX, #0x7763
                LD      IY, #0x775B
                LD      A, 0(IX)
                LD      C, 0(IY)
LOC_75B6:       CP      1(IX)
                JP      NC, LOC_75C2
                LD      A, 1(IX)
                LD      C, 1(IY)
LOC_75C2:       INC     IX
                INC     IY
                DJNZ    LOC_75B6
                LD      A, C
                POP     IY
                EI
                RET

; =============== S U B R O U T I N E =======================================

SUB_75CD:       LD      A, 0(IX)
                AND     A
                RET     Z
                LD      HL, #0x776B
                LD      DE, #0xA
LOC_75D8:       CP      E
                JR      C, LOC_75E0
                ADD     HL, DE
                SUB     #9
                JR      LOC_75D8
; ---------------------------------------------------------------------------
LOC_75E0:       LD      E, A
                ADD     HL, DE
                CP      #4
                JP      Z, LOC_7682
                PUSH    HL
                DEC     HL
                LD      A, (HL)
                CP      #1
                JR      Z, LOC_7634
                CP      #0xFF
                JR      Z, LOC_7634
                CP      #0
                JR      Z, LOC_762A
                CP      #3
                JR      Z, LOC_7617
LOC_75FA:       DEC     HL
                LD      A, (HL)
                CP      #0xFF
                JR      Z, LOC_7634
                CP      #3
                JR      Z, LOC_7634
                CP      #0
                JR      Z, LOC_760D
                DEC     0(IY)
                JR      LOC_75FA
; ---------------------------------------------------------------------------
LOC_760D:       LD      A, 0(IY)
                ADD     A, #0xA
                LD      0(IY), A
                JR      LOC_7634
; ---------------------------------------------------------------------------
LOC_7617:       LD      A, 0(IY)
                SUB     #0xA
                LD      0(IY), A
LOC_761F:       DEC     HL
                LD      A, (HL)
                CP      #0xFF
                JR      Z, LOC_7634
                DEC     0(IY)
                JR      LOC_761F
; ---------------------------------------------------------------------------
LOC_762A:       DEC     HL
                LD      A, (HL)
                AND     A
                JR      NZ, LOC_760D
                INC     0(IY)
                JR      LOC_762A
; ---------------------------------------------------------------------------
LOC_7634:       POP     HL
                INC     HL
                LD      A, (HL)
                CP      #1
                JR      Z, LOCRET_7681
                CP      #0xFF
                JR      Z, LOCRET_7681
                CP      #0
                JR      Z, LOC_7677
                CP      #3
                JR      Z, LOC_7664
LOC_7647:       INC     HL
                LD      A, (HL)
                CP      #0xFF
                JR      Z, LOCRET_7681
                CP      #3
                JR      Z, LOCRET_7681
                CP      #0
                JR      Z, LOC_765A
                DEC     0(IY)
                JR      LOC_7647
; ---------------------------------------------------------------------------
LOC_765A:       LD      A, 0(IY)
                ADD     A, #0xA
                LD      0(IY), A
                JR      LOCRET_7681
; ---------------------------------------------------------------------------
LOC_7664:       LD      A, 0(IY)
                SUB     #0xA
                LD      0(IY), A
LOC_766C:       INC     HL
                LD      A, (HL)
                CP      #0xFF
                JR      Z, LOCRET_7681
                DEC     0(IY)
                JR      LOC_766C
; ---------------------------------------------------------------------------
LOC_7677:       INC     HL
                LD      A, (HL)
                AND     A
                JR      NZ, LOC_765A
                INC     0(IY)
                JR      LOC_7677
; ---------------------------------------------------------------------------
LOCRET_7681:    RET
; ---------------------------------------------------------------------------
LOC_7682:       DEC     HL
                DEC     HL
                DEC     HL
                PUSH    HL
                POP     DE
                LD      B, #9
                LD      C, #0
LOC_768B:       LD      A, (HL)
                AND     A
                JR      NZ, LOC_7690
                INC     C
LOC_7690:       INC     HL
                DJNZ    LOC_768B
                LD      A, C
                AND     A
                JR      Z, LOC_76A1
                LD      A, 0(IY)
                ADD     A, #0xA
                ADD     A, C
                LD      0(IY), A
                RET
; ---------------------------------------------------------------------------
LOC_76A1:       LD      A, 0(IY)
                SUB     #0x14
                LD      0(IY), A
                LD      H, D
                LD      L, E
                DEC     HL
                LD      A, (HL)
                CP      #3
                RET     Z
                LD      A, 0(IY)
                ADD     A, #5
                LD      0(IY), A
                INC     HL
                INC     HL
                LD      A, (HL)
                CP      #3
                RET     Z
                LD      A, 0(IY)
                ADD     A, #0xF
                LD      0(IY), A
                RET

; =============== S U B R O U T I N E =======================================

SUB_76C7:       LD      HL, #0x86C2
                LD      DE, #0x776C
                LD      BC, #9
                LDIR
                LD      HL, #0x86CB
                LD      DE, #0x7776
                LD      C, #9
                LDIR
                LD      HL, #0x86D4
                LD      DE, #0x7780
                LD      C, #9
                LDIR
                LD      HL, #0x86DD
                LD      DE, #0x778A
                LD      C, #9
                LDIR
                LD      IX, (WORD_7759)
                LD      B, #0xC
LOC_76F6:       LD      A, 0(IX)
                AND     A
                JR      Z, LOC_7712
                LD      HL, #0x776B
                LD      DE, #0xA
LOC_7702:       CP      E
                JR      C, LOC_770A
                ADD     HL, DE
                SUB     #9
                JR      LOC_7702
; ---------------------------------------------------------------------------
LOC_770A:       LD      E, A
                ADD     HL, DE
                LD      (HL), #2
                INC     IX
                DJNZ    LOC_76F6
LOC_7712:       LD      HL, #0x776C
                CALL    SUB_774E
                LD      HL, #0x7774
                CALL    SUB_7743
                LD      HL, #0x7776
                CALL    SUB_774E
                LD      HL, #0x777E
                CALL    SUB_7743
                LD      HL, #0x7780
                CALL    SUB_774E
                LD      HL, #0x7788
                CALL    SUB_7743
                LD      HL, #0x778A
                CALL    SUB_774E
                LD      HL, #0x7792
                CALL    SUB_7743
                RET

; =============== S U B R O U T I N E =======================================

SUB_7743:       LD      B, #9
LOC_7745:       LD      A, (HL)
                AND     A
                RET     NZ
                LD      (HL), #3
                DEC     HL
                DJNZ    LOC_7745
                RET

; =============== S U B R O U T I N E =======================================

SUB_774E:       LD      B, #9
LOC_7750:       LD      A, (HL)
                AND     A
                RET     NZ
                LD      (HL), #3
                INC     HL
                DJNZ    LOC_7750
                RET

; ---------------------------------------------------------------------------
WORD_7759:      .DW 0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB 0xFF
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB 0xFF
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB 0xFF
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB 0xFF
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB 0xFF
; ---------------------------------------------------------------------------
LOC_7794:       LD      IX, #0x86F5
                CALL    SUB_8154
                AND     A
                JR      NZ, LOC_77AD
                CALL    SUB_7D28
                CALL    SUNDUK_2
                CALL    SUB_7C36
                CALL    SUNDUK     ; SUB_7DD0
                JP      LOC_784A
; ---------------------------------------------------------------------------
LOC_77AD:       LD      A, (BYTE_86CE)
                AND     A
                JP      Z, LOC_7813
                LD      IX, #0x86F5
                CALL    SUB_7519
                LD      (BYTE_8661), A
                LD      (BYTE_77FD), A
                LD      HL, #0x86C2
                CP      #0xA
                JR      C, LOC_77DF
                LD      HL, #0x86CB
                SUB     #9
                CP      #0xA
                JR      C, LOC_77DF
                LD      HL, #0x86D4
                SUB     #9
                CP      #0xA
                JR      C, LOC_77DF
                LD      HL, #0x86DD
                SUB     #9
LOC_77DF:       DEC     A
                LD      B, #0
                LD      C, A
                ADD     HL, BC
                LD      (HL), #1
                LD      IX, #0x86F5
                CALL    SUB_7E4D
                CALL    SUB_7CF8
                LD      A, (BYTE_8710)
                DEC     A
                LD      (BYTE_8710), A
                CALL    SUB_82A7
                LD      A, #2

; ---------------------------------------------------------------------------
                .DB     6
BYTE_77FD:      .DB     0xD
; ---------------------------------------------------------------------------
                CALL    SUB_7BC6
                CALL    SUB_7F00
                CALL    SUB_832A
                LD      A, (BYTE_86F5)
                AND     A
                LD      A, #2
                JP      Z, LOC_7AA7
                JP      LOC_784A
; ---------------------------------------------------------------------------
LOC_7813:       LD      A, #1
                LD      (BYTE_86CE), A
                LD      A, #0xD
                LD      (BYTE_8661), A
                LD      IX, #0x86F5
                CALL    SUB_7E4D
                CALL    SUB_7CF8
                LD      A, (BYTE_8710)
                DEC     A
                LD      (BYTE_8710), A
                CALL    SUB_82A7
                LD      A, #2
                LD      B, #0xD
                CALL    SUB_7BC6
                CALL    SUB_7F00
                CALL    SUB_832A
                LD      A, (BYTE_86F5)
                AND     A
                LD      A, #2
                JP      Z, LOC_7AA7
                JP      LOC_784A
; ---------------------------------------------------------------------------
LOC_784A:       LD      IX, #0x8702
                CALL    SUB_8154
                AND     A
                JR      NZ, LOC_7863
                CALL    SUB_7D88
                CALL    SUNDUK_2
                CALL    SUB_7C67
                CALL    SUNDUK
                JP      LOC_79A3
; ---------------------------------------------------------------------------
LOC_7863:       LD      A, (BYTE_86CE)
                AND     A
                JP      Z, LOC_78C9
                LD      IX, #0x8702
                CALL    SUB_7519
                LD      (BYTE_8661), A
                LD      (LOC_78B2+1), A
                LD      HL, #0x86C2
                CP      #0xA
                JR      C, LOC_7895
                LD      HL, #0x86CB
                SUB     #9
                CP      ##0xA
                JR      C, LOC_7895
                LD      HL, #0x86D4
                SUB     #9
                CP      #0xA
                JR      C, LOC_7895
                LD      HL, #0x86DD
                SUB     #9
LOC_7895:       DEC     A
                LD      B, #0
                LD      C, A
                ADD     HL, BC
                LD      (HL), #1
                LD      IX, #0x8702
                CALL    SUB_7E4D
                CALL    SUB_7D58
                LD      A, (BYTE_8711)
                DEC     A
                LD      (BYTE_8711), A
                CALL    SUB_82A7
                LD      A, #3
LOC_78B2:       LD      B, #0xD
                CALL    SUB_7BC6
                CALL    SUB_7F00
                CALL    SUB_832A
                LD      A, (BYTE_8702)
                AND     A
                LD      A, #3
                JP      Z, LOC_7AA7
                JP      LOC_79A3
; ---------------------------------------------------------------------------
LOC_78C9:       LD      A, #1
                LD      (BYTE_86CE), A
                LD      A, #0xD
                LD      (BYTE_8661), A
                LD      IX, #0x8702
                CALL    SUB_7E4D
                CALL    SUB_7D58
                LD      A, (BYTE_8711)
                DEC     A
                LD      (BYTE_8711), A
                CALL    SUB_82A7
                LD      A, #3
                LD      B, #0xD
                CALL    SUB_7BC6
                CALL    SUB_7F00
                CALL    SUB_832A
                LD      A, (BYTE_8702)
                AND     A
                LD      A, #3
                JP      Z, LOC_7AA7
                JP      LOC_79A3
; ---------------------------------------------------------------------------
LOC_7900:       LD      A, (BYTE_86CE)
                AND     A
                JP      Z, LOC_7969
                LD      IX, #DATA_86E8
                CALL    SUB_7519
                LD      (BYTE_8661), A
                LD      (LOC_7952+1), A
                LD      HL, #0x86C2
                CP      #0xA
                JR      C, LOC_7932
                LD      HL, #0x86CB
                SUB     #9
                CP      #0xA
                JR      C, LOC_7932
                LD      HL, #0x86D4
                SUB     #9
                CP      #0xA
                JR      C, LOC_7932
                LD      HL, #0x86DD
                SUB     #9
LOC_7932:       DEC     A
                LD      B, #0
                LD      C, A
                ADD     HL, BC
                LD      (HL), #1
                LD      IX, #DATA_86E8
                CALL    SUB_7E4D
                CALL    SUB_7E7C
                CALL    SUB_7C98
                LD      A, (BYTE_870F)
                DEC     A
                LD      (BYTE_870F), A
                CALL    SUB_82A7
                LD      A, #1
LOC_7952:       LD      B, #0xD
                CALL    SUB_7BC6
                CALL    SUB_7F00
                CALL    SUB_832A
                LD      A, (DATA_86E8)
                AND     A
                LD      A, #1
                JP      Z, LOC_7AA7
                JP      LOC_7794
; ---------------------------------------------------------------------------
LOC_7969:       LD      A, #1
                LD      (BYTE_86CE), A
                LD      A, #0xD
                LD      (BYTE_8661), A
                LD      IX, #DATA_86E8
                CALL    SUB_7E4D
                CALL    SUB_7E7C
                CALL    SUB_7C98
                LD      A, (BYTE_870F)
                DEC     A
                LD      (BYTE_870F), A
                CALL    SUB_82A7
                LD      A, #1
                LD      B, #0xD
                CALL    SUB_7BC6
                CALL    SUB_7F00
                CALL    SUB_832A
                LD      A, (DATA_86E8)
                AND     A
                LD      A, #1
                JP      Z, LOC_7AA7
                JP      LOC_7794
; ---------------------------------------------------------------------------
LOC_79A3:       LD      IX, #DATA_86E8
                CALL    SUB_8154
                AND     A
                JR      NZ, LOC_79BC
                CALL    SUB_7CC8
                CALL    SUNDUK_2
                CALL    SUB_7C05
                CALL    SUNDUK
                JP      LOC_7794
; ---------------------------------------------------------------------------
LOC_79BC:       LD      A, (BYTE_8650)
                AND     A
                JP      NZ, LOC_7900
LOC_79C3:       CALL    SUB_838F
                LD      A, (SWCLS)
                LD      HL, #0x5800
                LD      (HL), A
                LD      DE, #0x5801
                LD      BC, #0x1F
                LDIR
                LD      A, (WORD_8814)
                CP      #9
                JP      C, LOC_805A
                LD      A, (BYTE_880E)
                BIT     4, A
                JR      Z, LOC_79C3
                LD      A, (WORD_8814)
                CP      #0x98
                JP      C, LOC_79C3
                CP      #0xB8
                JP      NC, LOC_79C3
                XOR     A
                LD      (BYTE_8661), A
                LD      B, #1
                LD      C, #0x10
                LD      A, (WORD_8814+1)
LOC_79FC:       CP      C
                JR      C, LOC_7A03
                SUB     C
                INC     B
                JR      LOC_79FC
; ---------------------------------------------------------------------------
LOC_7A03:       LD      HL, #DATA_86E8
                LD      A, (HL)
                AND     A
                JP      Z, LOC_79C3
                LD      A, B
                CP      #0xE
                JP      NC, LOC_79C3
                DEC     HL
LOC_7A12:       INC     HL
                DJNZ    LOC_7A12
                LD      A, (HL)
                AND     A
                JR      NZ, LOC_7A1F
                DEC     HL
                LD      A, (HL)
                AND     A
                JP      Z, LOC_79C3
LOC_7A1F:       LD      (BYTE_8661), A
                LD      HL, #0x86C1
                CP      #0xA
                JR      C, LOC_7A45
                LD      HL, #0x86CA
                SUB     #9
                CP      #0xA
                JR      C, LOC_7A45
                LD      HL, #0x86D3
                SUB     #9
                CP      #0xA
                JR      C, LOC_7A45
                LD      HL, #0x86DC
                SUB     #9
                CP      #0xA
                JP      NC, LOC_79C3
LOC_7A45:       LD      B, A
LOC_7A46:       INC     HL
                DJNZ    LOC_7A46
                CP      #4
                JP      NZ, LOC_7A5E
                LD      A, (BYTE_86CE)
                AND     A
                JR      NZ, LOC_7A70
                LD      A, (BYTE_8661)
                CP      #0xD
                JR      Z, LOC_7A70
                JP      LOC_79C3
; ---------------------------------------------------------------------------
LOC_7A5E:       JR      NC, LOC_7A69
                INC     HL
                LD      A, (HL)
                DEC     HL
                AND     A
                JR      NZ, LOC_7A70
                JP      LOC_79C3
; ---------------------------------------------------------------------------
LOC_7A69:       DEC     HL
                LD      A, (HL)
                INC     HL
                AND     A
                JP      Z, LOC_79C3
LOC_7A70:       LD      (HL), #1
                LD      IX, #DATA_86E8
                CALL    SUB_7E4D
                CALL    SUB_7E7C
                CALL    SUB_7C98
                LD      A, (BYTE_870F)
                DEC     A
                LD      (BYTE_870F), A
                CALL    SUB_82A7
                LD      A, (BYTE_8661)
                LD      B, A
                LD      A, #1
                CALL    SUB_7BC6
                CALL    SUB_7F00
                CALL    SUB_832A
                CALL    SUB_8319
                LD      A, (DATA_86E8)
                AND     A
                LD      A, #1
                JP      Z, LOC_7AA7
                JP      LOC_7794
; ---------------------------------------------------------------------------
LOC_7AA7:       PUSH    AF
                EX      AF, AF
                XOR     A
                LD      (BYTE_8650), A
                EX      AF, AF
                LD      HL, #0x8656
                LD      DE, #0x865A
                CP      #1
                JR      Z, LOC_7AC8
                LD      HL, #0x8657
                LD      DE, #0x865B
                CP      #2
                JR      Z, LOC_7AC8
                LD      HL, #0x8658
                LD      DE, #0x865C
LOC_7AC8:       LD      (LOC_7B08+1), DE
                LD      (LOC_7B0C+1), HL
                LD      (LOC_7B12+1), HL
                LD      (LOC_7B19+1), DE
                LD      (LOC_7B1F+1), HL
                CALL    SUNDUK_2
                LD      HL, #0xE840
                POP     AF
                LD      DE, #0xD8A0
                CP      #1
                JR      Z, LOC_7AF1
                LD      DE, #0xD820
                CP      #2
                JR      Z, LOC_7AF1
                LD      DE, #0xD870
LOC_7AF1:       LD      A, (WORD_8655)
                LD      B, A
LOC_7AF5:       PUSH    BC
                PUSH    HL
                PUSH    DE
                PUSH    BC
                LD      BC, #0x87C0
                CALL    SUB_7DE2
                CALL    SUB_832A
                POP     BC
                LD      A, B
                DEC     A
                LD      (WORD_8655), A
LOC_7B08:       LD      A, (BYTE_865A)
                AND     A
LOC_7B0C:       LD      A, (WORD_8655+1)
                JR      Z, LOC_7B1E
                DEC     A
LOC_7B12:       LD      (WORD_8655+1), A
                AND     A
                JR      NZ, LOC_7B22
                XOR     A
LOC_7B19:       LD      (BYTE_865A), A
                JR      LOC_7B22
; ---------------------------------------------------------------------------
LOC_7B1E:       INC     A
LOC_7B1F:       LD      (WORD_8655+1), A
LOC_7B22:       CALL    SUB_81B1
                POP     DE
                POP     HL
                POP     BC
                DJNZ    LOC_7AF5
                CALL    SUNDUK
                XOR     A
                LD      (WORD_8655), A
                LD      A, (BYTE_865A)
                AND     A
                JP      NZ, LOC_7B4E
                LD      A, (BYTE_865B)
                AND     A
                JP      NZ, LOC_7B4E
                LD      A, (BYTE_865C)
                AND     A
                JP      NZ, LOC_7B4E
                LD      B, #0x19
LOC_7B48:       HALT
                DJNZ    LOC_7B48
                JP      LOC_74EE
; ---------------------------------------------------------------------------
LOC_7B4E:       CALL    CLS
                LD      A, (BYTE_865D)
                LD      (SWTMP), A
                LD      DE, #0x906
                LD      HL, #DATA_9C8C
                LD      BC, #0x1803
                CALL    SPRITE
                INC     D
                INC     D
                INC     D
                INC     D
                DEC     E
                LD      BC, #0x865A
                LD      HL, (WORD_8655+1)
                CALL    SUB_81EA
                LD      A, (BYTE_865E) ; ���� ������� �������� ������
                LD      (SWTMP), A
                LD      DE, #0x90E
                LD      HL, #DATA_992C
                LD      BC, #0x1803
                CALL    SPRITE
                INC     D
                INC     D
                INC     D
                INC     D
                DEC     E
                LD      BC, #0x865B
                LD      HL, (WORD_8657)
                CALL    SUB_81EA
                LD      A, (BYTE_865F) ; ���� �������� �������� ������
                LD      (SWTMP), A
                LD      DE, #0x916
                LD      HL, #DATA_9A94
                LD      BC, #0x1803
                CALL    SPRITE
                INC     D
                INC     D
                INC     D
                INC     D
                DEC     E
                LD      BC, #0x865C
                LD      HL, (WORD_8657+1)
                CALL    SUB_81EA
                CALL    WAIT_5
LOC_7BB4:       CALL    SUB_84BB
                LD      A, (BYTE_880E)
                BIT     4, A
                JP      NZ, LOC_74E8
                BIT     5, A
                JP      NZ, LOC_74E8
                JR      LOC_7BB4

; =============== S U B R O U T I N E =======================================

SUB_7BC6:       EX      AF, AF
                LD      A, B
                LD      DE, #0xF020
LOC_7BCB:       CP      #0xA
                JR      C, LOC_7BD9
                SUB     #9
                LD      B, A
                LD      A, #0x20
                ADD     A, E
                LD      E, A
                LD      A, B
                JR      LOC_7BCB
; ---------------------------------------------------------------------------
LOC_7BD9:       LD      B, A
                LD      A, D
LOC_7BDB:       ADD     A, #0x18
                DJNZ    LOC_7BDB
                LD      D, A
                LD      HL, #0xD8A0
                EX      AF, AF
                CP      #1
                JR      Z, LOC_7BF0
                LD      L, #0x20
                CP      #2
                JR      Z, LOC_7BF0
                LD      L, #0x70
LOC_7BF0:       LD      BC, #0x87E0
                JP      SUB_7DE2

; =============== S U B R O U T I N E =======================================

SUB_7BF6:       CALL    SUNDUK_2
                CALL    SUB_7C36
                CALL    SUB_7C67
                CALL    SUB_7C05
                JP      SUNDUK

; =============== S U B R O U T I N E =======================================

SUB_7C05:       CALL    SUB_7C98
                LD      HL, #0x865A
                LD      A, (HL)
                AND     A
                LD      A, (WORD_8655+1)
                JR      NZ, LOC_7C17
                AND     A
                JR      NZ, LOC_7C19
                LD      (HL), #1
LOC_7C17:       INC     A
                INC     A
LOC_7C19:       DEC     A
                LD      (WORD_8655+1), A
                CALL    SUB_81B1
                LD      BC, #0x87C0
                LD      HL, #0x0D8A0
                LD      DE, #0x0E840
                CALL    SUB_7DE2
                LD      HL, #0x8655
                INC     (HL)
                CALL    SUB_81B1
                JP      SUB_832A

; =============== S U B R O U T I N E =======================================

SUB_7C36:       CALL    SUB_7CF8
                LD      HL, #0x865B
                LD      A, (HL)
                AND     A
                LD      A, (WORD_8657)
                JR      NZ, LOC_7C48
                AND     A
                JR      NZ, LOC_7C4A
                LD      (HL), #1
LOC_7C48:       INC     A
                INC     A
LOC_7C4A:       DEC     A
                LD      (WORD_8657), A
                CALL    SUB_81B1
                LD      BC, #0x87C0
                LD      HL, #0xD820
                LD      DE, #0xE840
                CALL    SUB_7DE2
                LD      HL, #0x8655
                INC     (HL)
                CALL    SUB_81B1
                JP      SUB_832A

; =============== S U B R O U T I N E =======================================

SUB_7C67:       CALL    SUB_7D58
                LD      HL, #0x865C
                LD      A, (HL)
                AND     A
                LD      A, (WORD_8657+1)
                JR      NZ, LOC_7C79
                AND     A
                JR      NZ, LOC_7C7B
                LD      (HL), #1
LOC_7C79:       INC     A
                INC     A
LOC_7C7B:       DEC     A
                LD      (WORD_8657+1), A
                CALL    SUB_81B1
                LD      BC, #0x87C0
                LD      HL, #0xD870
                LD      DE, #0xE840
                CALL    SUB_7DE2
                LD      HL, #0x8655
                INC     (HL)
                CALL    SUB_81B1
                JP      SUB_832A

; =============== S U B R O U T I N E =======================================
; ��������: ������� ������ ����� ���� �����

SUB_7C98:       LD      A, (BYTE_865D) ; ���� �������� ������� ������
                LD      (SWTMP), A
                LD      DE, #0x131C
                LD      HL, #DATA_9CD4
                LD      BC, #0x1803
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9D1C
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9CD4
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9C8C ; ������� ������ �����
                CALL    WAIT_5
                JP      SPRITE

; =============== S U B R O U T I N E =======================================
; ������� ������ ����� ������ �������

SUB_7CC8:       LD      A, (BYTE_865D) ; ���� �������� ������� ������
                LD      (SWTMP), A
                LD      DE, #0x131C
                LD      HL, #DATA_9D64
                LD      BC, #0x1803
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9DAC
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9D64
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9C8C ; ������� ������ �����
                CALL    WAIT_5
                JP      SPRITE

; =============== S U B R O U T I N E =======================================
; ��������: ������ ������� ����� ���� �����

SUB_7CF8:       LD      A, (BYTE_865E) ; ���� ������� �������� ������
                LD      (SWTMP), A
                LD      DE, #0x21C
                LD      HL, #DATA_9974
                LD      BC, #0x1803
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_99BC
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9974
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_992C
                CALL    WAIT_5
                JP      SPRITE

; =============== S U B R O U T I N E =======================================
; ������ ������� ����� ������ �������

SUB_7D28:       LD      A, (BYTE_865E) ; ���� ������� �������� ������
                LD      (SWTMP), A
                LD      DE, #0x21C
                LD      HL, #DATA_9A04
                LD      BC, #0x1803
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9A4C
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9A04
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_992C
                CALL    WAIT_5
                JP      SPRITE

; =============== S U B R O U T I N E =======================================
; ��������: ������� ������� ����� ���� �����

SUB_7D58:       LD      A, (BYTE_865F) ; ���� �������� �������� ������
                LD      (SWTMP), A
                LD      DE, #0x0D1C
                LD      HL, #DATA_9ADC
                LD      BC, #0x1803
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9B24
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9ADC
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9A94
                CALL    WAIT_5
                JP      SPRITE

; =============== S U B R O U T I N E =======================================
; ������� ������� ����� ������ �������

SUB_7D88:       LD      A, (BYTE_865F) ; ���� �������� �������� ������
                LD      (SWTMP), A
                LD      DE, #0xD1C
                LD      HL, #DATA_9B6C
                LD      BC, #0x1803
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9BB4
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9B6C
                CALL    WAIT_5
                CALL    SPRITE
                LD      HL, #DATA_9A94
                CALL    WAIT_5
                JP      SPRITE

; =============== S U B R O U T I N E =======================================

WAIT_5:         HALT
                HALT
                HALT
                HALT
                HALT
                RET

; =============== S U B R O U T I N E =======================================

SUNDUK_2:       LD      A, (BYTE_8660)
                LD      (SWTMP), A
                LD      DE, #0x81C
                LD      HL, #DATA_9C44  ; ������ ���� ������ ������� (������)
                LD      BC, #0x1803
                JP      SPRITE

; =============== S U B R O U T I N E =======================================

SUNDUK:         LD      A, (BYTE_8660)
                LD      (SWTMP), A
                LD      DE, #0x81C
                LD      HL, #DATA_9BFC  ; Ƹ���� ������-����
                LD      BC, #0x1803
                JP      SPRITE

; =============== S U B R O U T I N E =======================================

SUB_7DE2:       PUSH    HL
                LD      HL, (WORD_8814)
                LD      (WORD_8651), HL
                POP     HL
                LD      (WORD_8814), HL
                LD      (WORD_8653), DE
                LD      (LOC_83A3+1), BC
                LD      (WORD_83B2), BC
LOC_7DF9:       CALL    SUB_85BF
                CALL    SUB_8406
                CALL    LOC_83A3
                HALT
                CALL    LOC_840B
                LD      HL, (WORD_8814)
                LD      BC, (WORD_8653)
                LD      A, H
                CP      B
                JR      NZ, LOC_7E15
                LD      A, L
                CP      C
                JR      Z, LOC_7E3A
LOC_7E15:       LD      A, H
                CP      B
                JR      Z, LOC_7E25
                JR      NC, LOC_7E21
                INC     H
                INC     H
                INC     H
                INC     H
                JR      LOC_7E25
; ---------------------------------------------------------------------------
LOC_7E21:       DEC     H
                DEC     H
                DEC     H
                DEC     H
LOC_7E25:       LD      A, L
                CP      C
                JR      Z, LOC_7E35
                JR      NC, LOC_7E31
                INC     L
                INC     L
                INC     L
                INC     L
                JR      LOC_7E35
; ---------------------------------------------------------------------------
LOC_7E31:       DEC     L
                DEC     L
                DEC     L
                DEC     L
LOC_7E35:       LD      (WORD_8814), HL
LOC_7E38:       JR      LOC_7DF9
; ---------------------------------------------------------------------------
LOC_7E3A:       LD      HL, #0x8780
                LD      (LOC_83A3+1), HL
                LD      HL, #0x87A0
                LD      (WORD_83B2), HL
                LD      HL, (WORD_8651)
                LD      (WORD_8814), HL
                RET

; =============== S U B R O U T I N E =======================================

SUB_7E4D:       LD      A, (BYTE_8661)
                AND     A
                RET     Z
                PUSH    IX
LOC_7E54:       CP      0(IX)
                JR      Z, LOC_7E5D
                INC     IX
                JR      LOC_7E54
; ---------------------------------------------------------------------------
LOC_7E5D:       LD      0(IX), #0
                POP     IX
                LD      B, #0xC
LOC_7E65:       LD      A, 0(IX)
                AND     A
                JR      NZ, LOC_7E77
                LD      A, 1(IX)
                AND     A
                RET     Z
                LD      0(IX), A
                LD      1(IX), #0
LOC_7E77:       INC     IX
                DJNZ    LOC_7E65
                RET

; =============== S U B R O U T I N E =======================================

SUB_7E7C:       LD      A, (SWCLS)
                LD      (SWTMP), A
                LD      DE, #0x1301
                LD      HL, #DATA_86E8
                LD      B, #0xC
LOC_7E8A:       LD      A, (HL)
                AND     A
                JR      Z, LOC_7E91
                INC     HL
                DJNZ    LOC_7E8A
LOC_7E91:       LD      A, #0xC
                SUB     B
                CP      #0xC
                JR      Z, LOC_7EAB
                AND     A
                JR      Z, LOC_7EA1
                LD      B, A
LOC_7E9C:       INC     E
                INC     E
                DJNZ    LOC_7E9C
                INC     E
LOC_7EA1:       DEC     E
                LD      HL, #DATA_8662  ; ������ ������
                LD      BC, #0x2003
                CALL    SPRITE
LOC_7EAB:       LD      DE, #0x1300
                LD      HL, #DATA_87BC
                LD      IX, #DATA_86E8
                LD      B, #0xC
LOC_7EB7:       PUSH    HL
                PUSH    BC
                PUSH    DE
                LD      DE, #0x60
                LD      A, (BYTE_86E6)
                LD      (SWTMP), A
                LD      A, 0(IX)
                AND     A
                JR      NZ, LOC_7ECC
                POP     DE
                JR      LOC_7EF7
LOC_7ECC:       LD      B, A
                CP      #0xA
                JR      C, LOC_7EED
                LD      A, (BYTE_86E7)
                LD      (SWTMP), A
                LD      A, B
                CP      #0x13
                JR      C, LOC_7EED
                LD      A, (BYTE_86E6)
                LD      (SWTMP), A
                LD      A, B
                CP      #0x1C
                JR      C, LOC_7EED
                LD      A, (BYTE_86E7)
                LD      (SWTMP), A
LOC_7EED:       ADD     HL, DE
                DJNZ    LOC_7EED
                POP     DE
                LD      BC, #0x2003
                CALL    SPRITE
LOC_7EF7:       INC     E
                INC     E
                POP     BC
                INC     IX
                POP     HL
                DJNZ    LOC_7EB7
                RET

; =============== S U B R O U T I N E =======================================

SUB_7F00:       LD      A, (SWCLS)
                LD      (SWTMP), A
                LD      HL, #0x881C
                LD      IX, #0x86C2
                LD      DE, #0x200      ; ���������� ������ ����� ����
                LD      A, (BYTE_86E6)
                CALL    SUB_7F25
                LD      A, (BYTE_86E7)
                CALL    SUB_7F25
                LD      A, (BYTE_86E6)
                CALL    SUB_7F25
                LD      A, (BYTE_86E7)
SUB_7F25:       LD      B, #9           ; ���������� ���� � ����
                PUSH    DE
LOC_7F28:       PUSH    BC
                PUSH    AF
                LD      (SWTMP), A
                LD      A, 0(IX)
                AND     A
                JR      NZ, LOC_7F46
                PUSH    HL
                LD      A, (SWCLS)      ; ���� ������� �����
                LD      (SWTMP), A
                LD      HL, #DATA_959C  ; ������ �����
                LD      BC, #0x2003     ; ������ ������� �����
                CALL    SPRITE          ; ����� ������� �����
                POP     HL
                JR      LOC_7F4C
; ---------------------------------------------------------------------------
LOC_7F46:       LD      BC, #0x2003
                CALL    SPRITE
LOC_7F4C:       INC     E
                INC     E
                INC     E
                INC     IX
                LD      BC, #0x60
                ADD     HL, BC
                POP     AF
                POP     BC
                DJNZ    LOC_7F28
                POP     DE
                INC     D
                INC     D
                INC     D
                INC     D
                RET

; =============== S U B R O U T I N E =======================================

INIT_RSRC:      LD      HL, #DATA_8662  ; ������ ������
                LD      DE, #0x86C2
                LD      BC, #0x24
                LDIR
                LD      DE, #DATA_86E8
                LD      BC, #0x27
                LDIR
                CALL    SUB_8006
                LD      HL, #0x8713
                LD      DE, #DATA_86E8
                LD      BC, #0xC
                LDIR
                LD      DE, #0x86F5
                LD      C, #0xC
                LDIR
                LD      DE, #0x8702
                LD      C, #0xC
                LDIR
                CALL    SUB_7FBB
                LD      A, #0xC
                LD      (BYTE_870F), A
                LD      (BYTE_8710), A
                LD      (BYTE_8711), A
                RET

; =============== S U B R O U T I N E =======================================

INIT_VARS:      LD      A, #0
                LD      (WORD_8655), A
                LD      A, #0x14
                LD      (WORD_8655+1), A
                LD      (WORD_8657), A
                LD      (WORD_8657+1), A
                XOR     A
                LD      (BYTE_8659), A
                LD      (BYTE_865A), A
                LD      (BYTE_865B), A
                LD      (BYTE_865C), A
                RET

; =============== S U B R O U T I N E =======================================

SUB_7FBB:       LD      A, #0xFF
                LD      (BYTE_86F4), A
                LD      (BYTE_8701), A
                LD      (BYTE_870E), A
                LD      IX, #DATA_86E8
                CALL    SUB_7FE6
                LD      IX, #0x86F5
                CALL    SUB_7FE6
                LD      IX, #0x8702
                CALL    SUB_7FE6
                XOR     A
                LD      (BYTE_86F4), A
                LD      (BYTE_8701), A
                LD      (BYTE_870E), A
                RET

; =============== S U B R O U T I N E =======================================

SUB_7FE6:       LD      B, #0xC
LOC_7FE8:       PUSH    IX
LOC_7FEA:       LD      A, 0(IX)
                CP      #0xFF
                JR      Z, LOC_8001
                LD      C, 1(IX)
                CP      C
                JR      C, LOC_7FFD
                LD      1(IX), A
                LD      0(IX), C
LOC_7FFD:       INC     IX
                JR      LOC_7FEA
; ---------------------------------------------------------------------------
LOC_8001:       POP     IX
                DJNZ    LOC_7FE8
                RET

; =============== S U B R O U T I N E =======================================

SUB_8006:       LD      HL, #0x875B
                LD      (HL), #0
                LD      D, H
                LD      E, L
                LD      BC, #0x24
                INC     DE
                LDIR
                LD      B, #0x24
                LD      E, B
LOC_8016:       PUSH    BC
                PUSH    DE
                LD      H, #0
                LD      A, R
                LD      L, A
                LD      B, (HL)
                LD      A, R
                ADD     A, B
                ADD     A, L
                LD      L, A
                LD      C, (HL)
                LD      A, R
                ADD     A, B
                ADD     A, C
LOC_8028:       SUB     E
                CP      E
                JR      NC, LOC_8028
                LD      L, A
                LD      BC, #0x8713
                ADD     HL, BC
                LD      A, (HL)
                LD      (HL), #0
                LD      D, H
                LD      E, L
                INC     HL
                LD      BC, #0x24
                LDIR
                LD      HL, #0x875B
                LD      B, A
LOC_8040:       LD      A, (HL)
                AND     A
                JR      Z, LOC_8047
                INC     HL
                JR      LOC_8040
; ---------------------------------------------------------------------------
LOC_8047:       LD      A, B
                LD      (HL), A
                POP     DE
                DEC     E
                POP     BC
                DJNZ    LOC_8016
                LD      HL, #0x875B
                LD      DE, #0x8713
                LD      BC, #0x24
                LDIR
                RET

; ---------------------------------------------------------------------------

LOC_805A:       LD      A, (WORD_8814+1)
                CP      #8
                JP      C, LOC_79C3
                LD      DE, #6
                LD      HL, #0x5801
                LD      B, #1
                CP      #0x30 ; '0'
                JR      C, LOC_8092
                CP      #0x38 ; '8'
                JP      C, LOC_79C3
                ADD     HL, DE
                INC     B
                CP      #0x60
                JR      C, LOC_8092
                CP      #0x68 ; 'H'
                JP      C, LOC_79C3
                ADD     HL, DE
                INC     B
                CP      #0x90
                JR      C, LOC_8092
                CP      #0x98
                JP      C, LOC_79C3
                ADD     HL, DE
                INC     B
                CP      #0xC0
                JR      C, LOC_8092
                JP      LOC_79C3
; ---------------------------------------------------------------------------
LOC_8092:       LD      A, (BYTE_86E6)
                LD      (HL), A
                INC     HL
                LD      (HL), A
                INC     HL
                LD      (HL), A
                INC     HL
                LD      (HL), A
                INC     HL
                LD      (HL), A
                LD      A, (BYTE_880E)
                BIT     4, A
                JP      Z, LOC_79C3
                PUSH    BC
                CALL    SUB_8319
                POP     BC
                LD      A, B
                CP      #1
                JP      Z, LOC_74E8
                CP      #2
                JR      Z, LOC_8125
                CP      #3
                JR      Z, LOC_812D
                CP      #4
                JR      Z, LOC_80C0
                JP      LOC_79C3
; ---------------------------------------------------------------------------
LOC_80C0:       LD      IX, (0x5CB0)
                LD      A, 0(IX)
                CP      #0x3E
                JR      NZ, LOC_8104
                LD      A, (0x5FBD)
                BIT     7, A
                JR      Z, LOC_8121
                RES     7, A
                CP      #0x40
                JR      NC, LOC_8121
                LD      (LOC_810D+1), A
                PUSH    IX
                POP     HL
                INC     HL
                INC     HL
                LD      (LOC_810F+1), HL
                LD      B, #0x32 ; '2'
LOC_80E5:       LD      A, 0(IX)
                CP      #0xC3
                JR      NZ, LOC_8100
                LD      A, 1(IX)
                CP      #0
                JR      NZ, LOC_8100
                LD      A, 2(IX)
                CP      #0xC0
                JR      NZ, LOC_8100
                LD      0(IX), #0xC9
                JR      LOC_810D
; ---------------------------------------------------------------------------
LOC_8100:       INC     IX
                DJNZ    LOC_80E5
LOC_8104:       LD      HL, #0x2758
                EXX
                LD      IY, #0x5C3A
                RET
; ---------------------------------------------------------------------------
LOC_810D:       LD      A, #0
LOC_810F:       CALL    0               ; RESET
                LD      HL, #0x74CC
                LD      DE, #0xC000
                LD      BC, #0x4000
                LDIR
                LD      0(IX), #0xC3
LOC_8121:       LD      HL, (0x5CB0)
                JP      (HL)
; ---------------------------------------------------------------------------
LOC_8125:       LD      A, #1
                LD      (BYTE_8650), A
                JP      LOC_79A3
; ---------------------------------------------------------------------------
LOC_812D:       CALL    SUB_832A
                LD      A, (SWCLS)
                LD      (SWTMP), A
                LD      HL, #DATA_96FC  ; ������� ���������
                LD      DE, #0x20B
                LD      BC, #0x380A
                CALL    SPRITE
LOC_8142:       CALL    SUB_84BB
                LD      A, (BYTE_880E)
                AND     A
                JR      Z, LOC_8142
                CALL    SUB_8319
                CALL    SUB_7F00
                JP      LOC_79C3

; =============== S U B R O U T I N E =======================================

SUB_8154:       LD      B, #0xC
LOC_8156:       LD      A, 0(IX)
                AND     A
                JR      Z, LOC_81AC
                CP      #0xD
                JR      Z, LOC_81AE
                CP      #4
                JR      Z, LOC_816C
                CP      #0x16
                JR      Z, LOC_816C
                CP      #0x1F
                JR      NZ, LOC_8174
LOC_816C:       LD      A, (BYTE_86CE)
                AND     A
                JR      NZ, LOC_81AE
                JR      LOC_81A8
LOC_8174:       LD      HL, #0x86C1
                CP      #0xA
                JR      C, LOC_8192
                LD      HL, #0x86CA
                SUB     #9
                CP      #0xA
                JR      C, LOC_8192
                LD      HL, #0x86D3
                SUB     #9
                CP      #0xA
                JR      C, LOC_8192
                LD      HL, #0x86DC
                SUB     #9
LOC_8192:       LD      C, B
                LD      B, A
LOC_8194:       INC     HL
                DJNZ    LOC_8194
                LD      B, C
                CP      #4
                JR      NC, LOC_81A3
                INC     HL
                LD      A, (HL)
                AND     A
                JR      NZ, LOC_81AE
                JR      LOC_81A8
LOC_81A3:       DEC     HL
                LD      A, (HL)
                AND     A
                JR      NZ, LOC_81AE
LOC_81A8:       INC     IX
                DJNZ    LOC_8156
LOC_81AC:       XOR     A
                RET
; ---------------------------------------------------------------------------
LOC_81AE:       LD      A, #1
                RET

; =============== S U B R O U T I N E =======================================

SUB_81B1:       LD      A, (BYTE_8660)
                LD      DE, #0x0B1B
                LD      BC, #0x8659
                LD      HL, (WORD_8655)
                CALL    SUB_81EA
                LD      A, (BYTE_865D)
                LD      DE, #0x171B
                LD      BC, #BYTE_865A
                LD      HL, (WORD_8655+1)
                CALL    SUB_81EA
                LD      A, (BYTE_865E) ; ���� ������� �������� ������
                LD      DE, #0x61B
                LD      BC, #0x865B
                LD      HL, (WORD_8657)
                CALL    SUB_81EA
                LD      A, (BYTE_865F) ; ���� �������� �������� ������
                LD      DE, #0x111B
                LD      BC, #BYTE_865C
                LD      HL, (WORD_8657+1)

; =============== S U B R O U T I N E =======================================

SUB_81EA:       PUSH    HL
                LD      (SWTMP), A
                LD      HL, #DATA_8662  ; ������ ������
                LD      A, (BC)
                AND     A
                JR      Z, LOC_81F8
                LD      HL, #DATA_9FC4
LOC_81F8:       LD      BC, #0x801
                CALL    SPRITE
                POP     HL
                LD      H, #0
                CALL    SUB_861D
                LD      IX, #0x8819
                LD      B, #2
LOC_820A:       PUSH    BC
                INC     E
                PUSH    DE
                LD      DE, #8
                LD      HL, #0x9F6C
                LD      A, 0(IX)
                LD      B, A
                INC     B
LOC_8218:       ADD     HL, DE
                DJNZ    LOC_8218
                POP     DE
                LD      BC, #0x801
                CALL    SPRITE
                POP     BC
                INC     IX
                DJNZ    LOC_820A
                LD      HL, #0x9F74
                INC     E
                LD      BC, #0x801
                CALL    SPRITE
                LD      HL, #0x8800
                INC     E
                JP      SPRITE

; =============== S U B R O U T I N E =======================================

SUB_8238:       LD      A, (BYTE_865E)  ; ���� ������� �������� ������
                LD      (SWTMP), A
                LD      DE, #0x21C      ; ���������� ������� ������� ������
                LD      HL, #DATA_992C  ; ������ ������� �����
                LD      BC, #0x1803     ; ������ ������� ������� ������
                CALL    SPRITE          ; �����
                LD      HL, #DATA_9DF4
                LD      DE, #0x51B
                LD      BC, #0x804
                CALL    SPRITE          ; ������� ����� ������� ������
                LD      A, (BYTE_8660)  ; ��������� ����� ����
                LD      (SWTMP), A
                LD      DE, #0x81C
                LD      HL, #DATA_9BFC
                LD      BC, #0x1803
                CALL    SPRITE          ; ������� ����� ������-����
                LD      A, (BYTE_865F)  ; ���� �������� �������� ������
                LD      (SWTMP), A
                LD      DE, #0x0D1C
                LD      HL, #DATA_9A94
                LD      BC, #0x1803
                CALL    SPRITE          ; ������� �������� �������� ������
                LD      HL, #DATA_9DF4
                LD      DE, #0x101B
                LD      BC, #0x804
                CALL    SPRITE          ; ������� ����� �������� ������
                LD      A, (BYTE_865D)
                LD      (SWTMP), A
                LD      DE, #0x131C
                LD      HL, #DATA_9C8C
                LD      BC, #0x1803
                CALL    SPRITE          ; ������� �������� ������� ������
                LD      HL, #DATA_9DF4
                LD      DE, #0x161B
                LD      BC, #0x804
                CALL    SPRITE          ; ������� ����� �������� ������
                JP      SUB_81B1

; =============== S U B R O U T I N E =======================================

SUB_82A7:       LD      A, (BYTE_865E)  ; ���� ������� �������� ������
                LD      (SWTMP), A
                LD      HL, #DATA_8662  ; ������ ������
                LD      A, (BYTE_8710)
                AND     A
                JR      Z, LOC_82C4
                LD      B, A
                LD      A, #0xD
                SUB     B
                LD      B, A
                LD      HL, #0x9DD4
                LD      DE, #0x20
LOC_82C1:       ADD     HL, DE
                DJNZ    LOC_82C1
LOC_82C4:       LD      DE, #0x51B
                LD      BC, #0x804
                CALL    SPRITE
                LD      A, (BYTE_865F) ; ���� �������� �������� ������
                LD      (SWTMP), A
                LD      HL, #DATA_8662  ; ������ ������
                LD      A, (BYTE_8711)
                AND     A
                JR      Z, LOC_82EA
                LD      B, A
                LD      A, #0xD
                SUB     B
                LD      B, A
                LD      HL, #0x9DD4
                LD      DE, #0x20
LOC_82E7:       ADD     HL, DE
                DJNZ    LOC_82E7
LOC_82EA:       LD      DE, #0x101B
                LD      BC, #0x804
                CALL    SPRITE
                LD      A, (BYTE_865D)
                LD      (SWTMP), A
                LD      HL, #DATA_8662  ; ������ ������
                LD      A, (BYTE_870F)
                AND     A
                JR      Z, LOC_8310
                LD      B, A
                LD      A, #0xD
                SUB     B
                LD      B, A
                LD      HL, #0x9DD4
                LD      DE, #0x20
LOC_830D:       ADD     HL, DE
                DJNZ    LOC_830D
LOC_8310:       LD      DE, #0x161B
                LD      BC, #0x804
                JP      SPRITE

; =============== S U B R O U T I N E =======================================

SUB_8319:       EX      AF, AF
LOC_831A:       CALL    SUB_84BB
                LD      A, (BYTE_880E)
                BIT     4, A
                JR      NZ, LOC_831A
                BIT     5, A
                JR      NZ, LOC_831A
                EX      AF, AF
                RET

; =============== S U B R O U T I N E =======================================

SUB_832A:       PUSH    AF
                PUSH    BC
                PUSH    DE
                PUSH    HL
                LD      HL, #0x32
                LD      DE, #0xA
                LD      A, (SWCLS)
                LD      (0x5C48), A
                CALL    0x3B5
                POP     HL
                POP     DE
                POP     BC
                POP     AF
                RET

; =============== S U B R O U T I N E =======================================
; ����� ������������ ������� ��������� ������
;  ����: �L - ����� �������
;        DE - ����� ������ Y, X � �����������
;        � - ���-�� ���� �� ��� Y. � - ���-�� ���� �� ��� X
;  �����: �������� �L, ��, DE ���������

SPRITE:         EX      AF, AF
                XOR     A
                EX      AF, AF
                PUSH    HL
                PUSH    DE
                PUSH    BC
                CALL    POSIT
                PUSH    DE
                EXX
                POP     DE
                EXX
LOC_834F:       PUSH    BC
                PUSH    DE
                LD      B, #0
                LDIR
                POP     DE
                POP     BC
                CALL    SUB_85D4
                EX      AF, AF
                INC     A
                EX      AF, AF
                DJNZ    LOC_834F
                EX      AF, AF
                SRL     A
                SRL     A
                SRL     A
                LD      H, A
                EX      AF, AF
                EXX
                PUSH    DE
                EXX
                POP     DE
                POP     BC
                PUSH    BC
                LD      B, H
                LD      A, D
                AND     #0x18
                RRCA
                RRCA
                RRCA
                OR      #0x58
                LD      H, A
                LD      L, E
                LD      DE, #0x20
                LD      A, (SWTMP)
LOC_837F:       PUSH    BC
                PUSH    HL
                LD      B, C
LOC_8382:       LD      (HL), A
                INC     HL
                DJNZ    LOC_8382
                POP     HL
                ADD     HL, DE
                POP     BC
                DJNZ    LOC_837F
                POP     BC
                POP     DE
                POP     HL
                RET

; =============== S U B R O U T I N E =======================================

SUB_838F:       CALL    SUB_85BF
                CALL    SUB_8406
                CALL    LOC_83A3
                CALL    SUB_84BB
                CALL    Z, SUB_8589
                EI
                HALT
                JP      LOC_840B
; ---------------------------------------------------------------------------
LOC_83A3:       LD      HL, #0x8780
                LD      A, (BYTE_880B)
                INC     A
                LD      (BYTE_880B), A
                BIT     3, A
                JR      Z, LOC_83B4
; ---------------------------------------------------------------------------
                .DB  0x21
WORD_83B2:      .DW 0x87A0
; ---------------------------------------------------------------------------
LOC_83B4:       LD      A, (BYTE_880F)
                AND     A
                JR      Z, LOC_83E0
                LD      DE, #0x7404
                LD      BC, #0x20
                LDIR
                LD      HL, #0x7404
                LD      D, A
LOC_83C6:       LD      E, L
                LD      B, #8
LOC_83C9:       SCF
                RR      (HL)
                INC     L
                EX      AF, AF
                SRL     (HL)
                INC     L
                EX      AF, AF
                RR      (HL)
                INC     L
                EX      AF, AF
                RR      (HL)
                INC     L
                DJNZ    LOC_83C9
                LD      L, E
                DEC     D
                JP      NZ, LOC_83C6
LOC_83E0:       LD      BC, #0x81F
                LD      DE, (WORD_8810)
LOC_83E7:       LD      A, (DE)
                AND     (HL)
                INC     L
                OR      (HL)
                LD      (DE), A
                LD      A, E
                INC     E
                INC     L
                AND     C
                CP      C
                JR      Z, LOC_83F9
                LD      A, (DE)
                AND     (HL)
                INC     L
                OR      (HL)
                LD      (DE), A
                DEC     L
LOC_83F9:       DEC     E
                INC     L
                INC     L
                CALL    SUB_85D4
                LD      A, D
                CP      #0x58
                RET     NC
                DJNZ    LOC_83E7
                RET

; =============== S U B R O U T I N E =======================================

SUB_8406:       LD      HL, #0x771A
                JR      LOC_840E
; ---------------------------------------------------------------------------
LOC_840B:       LD      HL, #0x127E
LOC_840E:       LD      (WORD_841D), HL
                LD      (WORD_8421), HL
                LD      HL, #0x7424
                LD      DE, (WORD_8810)
                LD      B, #8
; ---------------------------------------------------------------------------
WORD_841D:      .DW 0x771A
                .DB  0x1C
                .DB  0x2C
WORD_8421:      .DW 0x771A
                .DB  0x2C
                .DB  0x1D
                .DB 0xCD
                .DB 0xD4
                .DB  0x85
                .DB  0x10
                .DB 0xF3
                .DB 0xC9
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0
                .DB    0

; =============== S U B R O U T I N E =======================================

SUB_8443:       NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                NOP
                RET

; =============== S U B R O U T I N E =======================================

SUB_84BB:       XOR     A
                LD      (BYTE_880E), A
                CALL    SUB_8443
                LD      A, (BYTE_880E)
                LD      E, A
                AND     A
                RET     NZ
                LD      BC, #0xFEFE
                IN      A, (C)
                RRA
                JR      C, LOC_84ED
                LD      B, #0xF7
                IN      A, (C)
                BIT     4, A
                CALL    Z, SUB_857A
                LD      B, #0xEF
                IN      A, (C)
                RRA
                RRA
                RRA
                CALL    NC, SUB_857D
                RRA
                CALL    NC, SUB_8580
                RRA
                CALL    NC, SUB_8583
                JR      LOC_8505
; ---------------------------------------------------------------------------
LOC_84ED:       LD      B, #0xEF
                IN      A, (C)
                RRA
                CALL    NC, SUB_8586
                RRA
                CALL    NC, SUB_8580
                RRA
                CALL    NC, SUB_8583
                RRA
                CALL    NC, SUB_857D
                RRA
                CALL    NC, SUB_857A
LOC_8505:       LD      B, #0xF7
                IN      A, (C)
                RRA
                CALL    NC, SUB_857A
                RRA
                CALL    NC, SUB_857D
                RRA
                CALL    NC, SUB_8583
                RRA
                CALL    NC, SUB_8580
                RRA
                JR      C, LOC_8524
                LD      B, #0xFE
                IN      A, (C)
                RRA
                CALL    C, SUB_8586
LOC_8524:       LD      B, #0xFB
                IN      A, (C)
                RRA
                CALL    NC, SUB_8580
                LD      B, #0xFD
                IN      A, (C)
                RRA
                CALL    NC, SUB_8583
                LD      B, #0xDF
                IN      A, (C)
                RRA
                CALL    NC, SUB_857D
                RRA
                CALL    NC, SUB_857A
                LD      B, #0x7F
                IN      A, (C)
                RRA
                CALL    NC, SUB_8586
                RRA
                RRA
                CALL    NC, SUB_8586
                IN      A, (0x1F)
                AND     #0x1F
                CP      #0x1F
                JR      Z, LOC_8569
                RRA
                CALL    C, SUB_857D
                RRA
                CALL    C, SUB_857A
                RRA
                CALL    C, SUB_8583
                RRA
                CALL    C, SUB_8580
                RRA
                CALL    C, SUB_8586
LOC_8569:       LD      A, E
                LD      (BYTE_880E), A
                LD      A, (BYTE_8812)
                LD      HL, #0x8813
                INC     (HL)
                CP      E
                RET     Z
                SUB     A
                LD      (HL), #1
                RET

; =============== S U B R O U T I N E =======================================

SUB_857A:       SET     0, E
                RET

; =============== S U B R O U T I N E =======================================

SUB_857D:       SET     1, E
                RET

; =============== S U B R O U T I N E =======================================

SUB_8580:       SET     2, E
                RET

; =============== S U B R O U T I N E =======================================

SUB_8583:       SET     3, E
                RET

; =============== S U B R O U T I N E =======================================

SUB_8586:       SET     4, E
                RET

; =============== S U B R O U T I N E =======================================

SUB_8589:       LD      A, (BYTE_880E)
                LD      (BYTE_8812), A
                AND     A
                RET     Z
                LD      C, A
                LD      A, (BYTE_8813)
                LD      E, A
                LD      HL, #0x8815
                BIT     0, C
                CALL    NZ, SUB_85B7
                BIT     1, C
                LD      A, #0xFE
                CALL    NZ, SUB_85B0
                DEC     L
                BIT     2, C
                CALL    NZ, SUB_85B7
                BIT     3, C
                LD      A, #0xBE
                RET     Z

; =============== S U B R O U T I N E =======================================

SUB_85B0:       LD      B, E
LOC_85B1:       CP      (HL)
                RET     Z
                INC     (HL)
                DJNZ    LOC_85B1
                RET

; =============== S U B R O U T I N E =======================================

SUB_85B7:       LD      B, E
                XOR     A
LOC_85B9:       CP      (HL)
                RET     Z
                DEC     (HL)
                DJNZ    LOC_85B9
                RET

; =============== S U B R O U T I N E =======================================

SUB_85BF:       LD      HL, (WORD_8814)
                LD      C, H
                LD      A, L
                CALL    0x22B0
                LD      (WORD_8810), HL
                LD      (BYTE_880F), A
                EX      DE, HL
                RET
; ---------------------------------------------------------------------------
                LD      C, H
                LD      A, L
                JP      0x22B0

; =============== S U B R O U T I N E =======================================
; ������� �� ������ ������ (� ����������� �����������)

SUB_85D4:       INC     D
                LD      A, D
                AND     #7
                RET     NZ
                LD      A, E
                ADD     A, #0x20
                LD      E, A
                RET     C
                LD      A, D
                SUB     #8
                LD      D, A
                RET

; =============== S U B R O U T I N E =======================================
; �������� ��������� � ����������� � ���������� ������
;  ����: DE - Y, X
;  �����: DE - ����� � ������

POSIT:          LD      A, D
                AND     #7
                RRCA
                RRCA
                RRCA
                OR      E
                LD      E, A
                LD      A, D
                AND     #0x18
                OR      #0x40
                LD      D, A
                RET

; =============== S U B R O U T I N E =======================================

; ������� ������ � ���������
;  (SWPAP) - ���� �������, 0..7
;  (SWCLS) - ��� ����� ����

CLS:            LD      A, (SWPAP)      ; ���� ���� �������
                OUT     (0xFE), A       ; ��������� ������
                LD      HL, #0x4000
                LD      (HL), L
                LD      DE, #0x4001
                LD      BC, #0x17FF
                LDIR                    ; ������ ����� (���������� ����)
                INC     HL
                LD      A, (SWCLS)      ; ���� ���������� ����
                LD      (SWTMP), A  ; � ������������� �� ��������� ����
                LD      (HL), A
                INC     DE
                LD      BC, #0x2FF
                LDIR                    ; ������ ����� (���������� ����) ���������� ������
                LD      HL, #DATA_95FC
                LD      DE, #0
                LD      BC, #0x820
                JP      SPRITE

; =============== S U B R O U T I N E =======================================

SUB_861D:       PUSH    HL
                EXX
                POP     HL
                EX      AF, AF
                LD      BC, #0x8816
                LD      DE, #0x2710
                CALL    SUB_8641
                LD      DE, #0x3E8
                CALL    SUB_8641
                LD      DE, #0x64 ; 'D'
                CALL    SUB_8641
                LD      DE, #0xA
                CALL    SUB_8641
                LD      A, L
                LD      (BC), A
                EX      AF, AF
                EXX
                RET

; =============== S U B R O U T I N E =======================================

SUB_8641:       XOR     A
LOC_8642:       PUSH    HL
                SBC     HL, DE
                JR      C, LOC_864C
                INC     A
                INC     SP
                INC     SP
                JR      LOC_8642
LOC_864C:       POP     HL
                LD      (BC), A
                INC     BC
                RET

; =============== S U B R O U T I N E =======================================
BYTE_8650:      .DB 0
WORD_8651:      .DW 0
WORD_8653: .DW 0xE840
WORD_8655: .DW 0x1303
WORD_8657: .DW 0x1313
BYTE_8659: .DB 0
BYTE_865A: .DB 0
BYTE_865B: .DB 0
BYTE_865C: .DB 0
BYTE_865D: .DB 0x42  ; ���� �������� ������� ������
BYTE_865E: .DB 0x44  ; ���� ������� �������� ������
BYTE_865F: .DB 0x45  ; ���� �������� �������� ������
BYTE_8660: .DB 0x46  ; ���� ������ �������-�����
BYTE_8661:      .DB 0

DATA_8662: ; ������ ������ 32x3 = 96 ����
           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

BYTE_86CE: .DB 0
           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
           .DB 0x00,0x00,0x00,0x00,0x00,0x00

BYTE_86E6: .DB 0x38                ;
BYTE_86E7: .DB 0x3A                ;

DATA_86E8: .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
BYTE_86F4: .DB 0
BYTE_86F5: .DB 0
           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
BYTE_8701:      .DB 0
BYTE_8702:      .DB 4
                .DB    5
                .DB  0xA
                .DB  0xE
                .DB  0x11
                .DB  0x18
                .DB  0x1A
                .DB  0x1B
                .DB  0x1C
                .DB  0x1D
                .DB  0x20
                .DB  0x21
BYTE_870E:      .DB 0
BYTE_870F: .DB 0xC
BYTE_8710: .DB 0xC
BYTE_8711: .DB 0xC

BYTE_8712: .DB 0x00,0x23,0x21,0x06,0x0A,0x0F,0x19,0x03,0x1D,0x20,0x07,0x14,0x22,0x04,0x1F,0x1B
           .DB 0x17,0x0C,0x24,0x16,0x10,0x1A,0x0E,0x15,0x18,0x12,0x05,0x0B,0x08,0x11,0x13,0x0D
           .DB 0x1C,0x02,0x01,0x09,0x1E

           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
           .DB 0x00,0x00,0x00,0x00,0x23,0x21,0x06,0x0A,0x0F,0x19,0x03,0x1D,0x20,0x07,0x14,0x22
           .DB 0x04,0x1F,0x1B,0x17,0x0C,0x24,0x16,0x10,0x1A,0x0E,0x15,0x18,0x12,0x05,0x0B,0x08
           .DB 0x11,0x13,0x0D,0x1C,0x02,0x01,0x09,0x1E,0x00,0x3F,0x00,0xFF,0x00,0x1F,0x40,0xFF
           .DB 0x00,0x07,0x70,0xFF,0x00,0x01,0x7C,0xFF,0x00,0x00,0x7E,0xFF,0x00,0x00,0x78,0xFF
           .DB 0x00,0x01,0x4C,0xFF,0x00,0x31,0x04,0xFF,0x00,0x3F,0x00,0xFF,0x00,0x1F,0x40,0xFF
           .DB 0x00,0x07,0x70,0xFF,0x00,0x01,0x4C,0xFF,0x00,0x00,0x46,0xFF,0x00,0x00,0x78,0xFF
           .DB 0x00,0x01,0x4C,0xFF,0x00

DATA_87BC: .DB 0x31,0x04,0xFF,0x00,0x81,0x3C,0xFF,0x00,0x00,0x42,0xFF,0x00,0x00,0xA5,0xFF,0x00
           .DB 0x00,0xAB,0xFF,0x00,0x00,0xAB,0xFF,0x00,0x00,0xA5,0xFF,0x00,0x00,0x42,0xFF,0x00
           .DB 0x81,0x3C,0xFF,0x00,0x01,0xFC,0xFF,0x00,0x01,0xAC,0xFF,0x00,0x01,0xD4,0xFF,0x00
           .DB 0x01,0xAC,0xFF,0x00,0x01,0xD4,0xFF,0x00,0x01,0xAC,0xFF,0x00,0x01,0xD4,0xFF,0x00
           .DB 0x01,0xFC,0xFF,0x00,0x00,0x14,0x3E,0x54,0x3E,0x15,0x3E,0x14

SWTMP:     .DB 0x46                ; ��������� ������� �����
SWPAP:     .DB 0                   ; ���� �������
SWCLS:     .DB 7                   ; ���������� ������� �����
BYTE_880B:      .DB 0x9E
                .DB    0
                .DB    0
BYTE_880E:      .DB 0
BYTE_880F:      .DB 0
WORD_8810:      .DW 0x4000
BYTE_8812:      .DB 0
BYTE_8813:      .DB 0x6F
WORD_8814:      .DW 0
                .DB    0
                .DB    0
                .DB    0
                .DB    1
                .DB    9
BYTE_881B: .DB 0 ; ������������� ����. ���������� ��� ������

DATA_959C: .DB 0x00,0x00,0x00,0x55,0x55,0x54,0x00,0x00,0x02,0x40,0x00,0x00,0x00,0x00,0x02,0x40
           .DB 0x00,0x00,0x00,0x00,0x02,0x40,0x00,0x00,0x00,0x00,0x02,0x40,0x00,0x00,0x00,0x00
           .DB 0x02,0x40,0x00,0x00,0x00,0x00,0x02,0x40,0x00,0x00,0x00,0x00,0x02,0x40,0x00,0x00
           .DB 0x00,0x00,0x02,0x40,0x00,0x00,0x00,0x00,0x02,0x40,0x00,0x00,0x00,0x00,0x02,0x40
           .DB 0x00,0x00,0x00,0x00,0x02,0x40,0x00,0x00,0x00,0x00,0x02,0x40,0x00,0x00,0x00,0x00
           .DB 0x02,0x40,0x00,0x00,0x00,0x00,0x02,0x40,0x00,0x00,0x2A,0xAA,0xAA,0x00,0x00,0x00

DATA_95FC: .DB 0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA
           .DB 0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA
           .DB 0x55,0x03,0x1B,0x18,0xDD,0x00,0x55,0x00,0x06,0x75,0x20,0x00,0x55,0x00,0x0D,0x9C
           .DB 0x98,0x00,0x55,0x00,0x64,0x54,0x8C,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55
           .DB 0xAA,0x02,0xA8,0xA9,0x49,0x00,0xAA,0x00,0x05,0x47,0x50,0x00,0xAA,0x00,0x15,0x49
           .DB 0x54,0x00,0xAA,0x00,0x54,0x55,0x54,0x00,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA
           .DB 0x55,0x03,0x3B,0x29,0xC9,0x80,0x55,0x00,0x05,0x75,0x50,0x00,0x55,0x00,0x1D,0x89
           .DB 0x58,0x00,0x55,0x00,0x66,0x49,0x54,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55
           .DB 0xAA,0x02,0x28,0xA9,0x49,0x40,0xAA,0x00,0x05,0x45,0x50,0x00,0xAA,0x00,0x15,0x49
           .DB 0x50,0x00,0xAA,0x00,0x55,0x55,0x54,0x00,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA
           .DB 0x55,0x02,0x2B,0x7D,0x49,0x80,0x55,0x00,0x06,0x75,0x20,0x00,0x55,0x00,0x15,0x88
           .DB 0x90,0x00,0x55,0x00,0x66,0x54,0xBE,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55
           .DB 0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA
           .DB 0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x00,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA
           .DB 0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55
           .DB 0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55

DATA_96FC: ; ������� ���������
           .DB 0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x50,0x04,0x14,0x00,0x00,0x00
           .DB 0x00,0x00,0x00,0x15,0xAF,0xD0,0xAA,0xDB,0x7B,0x37,0x87,0x9B,0x67,0xCA,0x51,0xD9
           .DB 0x94,0xDB,0x33,0xB6,0x4C,0xDB,0x6C,0x15,0xA3,0x8F,0x00,0xDB,0x33,0x76,0x6C,0xDB
           .DB 0x6C,0x0A,0x57,0x06,0x3C,0xDB,0x33,0x36,0x6C,0xDB,0x67,0x95,0xAE,0x0F,0x00,0xDB
           .DB 0x33,0x36,0x6C,0xDB,0x60,0xCA,0x4C,0x19,0x94,0x7E,0x33,0x36,0x4C,0xCF,0xC0,0xD5
           .DB 0xAF,0xD0,0xAA,0x24,0x7B,0x37,0x87,0x84,0x8F,0x8A,0x50,0x04,0x15,0x00,0x00,0x00
           .DB 0x00,0x00,0x00,0x15,0xAA,0xA8,0x00,0x00,0x00,0x00,0x00,0x00,0xAA,0xAA,0x55,0x51
           .DB 0xF3,0xF7,0xC7,0xDF,0xB3,0x3E,0x55,0x55,0xAA,0xAB,0x33,0x06,0x6C,0xC6,0x36,0x66
           .DB 0xAA,0xAA,0x55,0x53,0x33,0x06,0x6C,0xC6,0x3C,0x66,0x55,0x55,0xAA,0xAB,0x33,0xF7
           .DB 0xCC,0xC6,0x38,0x7E,0xAA,0xAA,0x55,0x53,0x33,0x06,0x67,0xC6,0x3C,0x66,0x55,0x55
           .DB 0xAA,0xA3,0x33,0x06,0x66,0xC6,0x36,0x66,0xAA,0xAA,0x55,0x57,0xFB,0xF7,0xCC,0xC6
           .DB 0x33,0x66,0x55,0x55,0xAA,0xA6,0x18,0x00,0x00,0x00,0x00,0x00,0xAA,0xAA,0x55,0x55
           .DB 0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xAA,0xA8,0x0A,0xAA,0xAA,0xAA,0xAA,0x02
           .DB 0xAA,0xAA,0x55,0x52,0x40,0x00,0x00,0x00,0x05,0x71,0x55,0x55,0xAA,0xAA,0x5E,0xF7
           .DB 0x1C,0xE6,0x72,0x4A,0xAA,0xAA,0x55,0x52,0x50,0x94,0xA5,0x09,0x49,0x71,0x55,0x55
           .DB 0xAA,0xAB,0xDE,0x97,0xBD,0x09,0x72,0x4A,0xAA,0xAA,0x55,0x50,0x50,0x94,0x25,0x09
           .DB 0x49,0x49,0x55,0x55,0xAA,0xAA,0x5E,0x94,0x24,0xE6,0x72,0x72,0xAA,0xAA,0x55,0x55
           .DB 0x00,0x00,0x00,0x00,0x01,0x05,0x55,0x55,0xAA,0xAA,0xA0,0x02,0xAA,0xAA,0xA8,0xAA
           .DB 0xAA,0xAA,0x55,0x55,0x44,0x90,0x00,0x00,0x02,0x55,0x55,0x55,0xAA,0xAA,0xA8,0xD3
           .DB 0x9D,0x27,0x41,0x2A,0xAA,0xAA,0x55,0x55,0x48,0xB4,0xA1,0x29,0x41,0x55,0x55,0x55
           .DB 0xAA,0xAA,0xA8,0x97,0xAD,0x2F,0x41,0x2A,0xAA,0xAA,0x55,0x55,0x48,0x94,0xA5,0x29
           .DB 0x41,0x55,0x55,0x55,0xAA,0xAA,0xA8,0x94,0x98,0xC9,0x79,0x2A,0xAA,0xAA,0x55,0x55
           .DB 0x44,0x00,0x00,0x00,0x02,0x55,0x55,0x55,0xA0,0xAA,0xA0,0xAA,0xAA,0xAA,0xA8,0xAA
           .DB 0xAA,0xAA,0x4E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x92,0x4B,0xDE,0xE3
           .DB 0x3D,0xEF,0xB8,0xCE,0x3A,0x4A,0x52,0x4A,0x12,0x94,0xA5,0x02,0x25,0x29,0x42,0x95
           .DB 0x92,0x7B,0xD2,0xE4,0xA5,0xE2,0x39,0x2E,0x43,0x2A,0x12,0x4A,0x12,0x84,0xA5,0x02
           .DB 0x21,0x29,0x42,0x95,0xBF,0x4B,0xD2,0x83,0x25,0xE2,0x20,0xCE,0x3A,0x4A,0x00,0x00
           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA
           .DB 0xAA,0xAA,0x55,0x55,0x55,0x00,0x01,0x15,0x55,0x55,0x55,0x55,0xAA,0xAA,0xAA,0x23
           .DB 0x18,0xCA,0x02,0xAA,0xAA,0xAA,0x55,0x55,0x55,0x64,0xA5,0x25,0x79,0x55,0x55,0x55
           .DB 0xAA,0xAA,0xAA,0x24,0xA5,0x2A,0x42,0xAA,0xAA,0xAA,0x55,0x55,0x55,0x23,0x9C,0xE5
           .DB 0x55,0x55,0x55,0x55,0xAA,0xAA,0xAA,0x20,0x84,0x2A,0x4A,0xAA,0xAA,0xAA,0x55,0x55
           .DB 0x55,0x73,0x18,0xC5,0x55,0x55,0x55,0x55,0xAA,0xAA,0xAA,0x00,0x02,0x0A,0x0A,0xAA
           .DB 0xAA,0xAA,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xAA,0xAA,0xAA,0xAA
           .DB 0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55

           ; ������ ������� �����
DATA_992C: .DB 0x01,0x42,0x00,0x02,0x1D,0x00,0x02,0x0E,0x80,0x01,0x65,0x00,0x02,0xE1,0x00,0x02
           .DB 0x40,0x80,0x02,0xF0,0x80,0x01,0x39,0x00,0x03,0x71,0x00,0x04,0x04,0xC0,0x0A,0x4F
           .DB 0x30,0x35,0x3C,0x48,0x4A,0x92,0xA8,0x45,0x45,0x48,0x5A,0xAA,0xA8,0x5A,0x57,0x54
           .DB 0x5D,0x27,0x94,0x5E,0x8F,0x24,0x4C,0x5E,0x34,0xF3,0x89,0xEF,0x06,0x00,0x00,0xF0
           .DB 0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00

DATA_9974: ; ������ ������� �����, ���� 2
           .DB 0x00,0xA4,0x00,0x01,0x5A,0x00,0x02,0x1D,0x00,0x04,0x05,0x00,0x04,0x61,0x00,0x02
           .DB 0xE0,0x80,0x02,0x50,0x80,0x01,0x79,0x00,0x03,0x31,0x00,0x04,0x04,0xC0,0x0A,0x6F
           .DB 0x30,0x35,0x3C,0x48,0x4A,0x92,0xA4,0x45,0x45,0x54,0x5A,0xAA,0xA4,0x5A,0x55,0x54
           .DB 0x5D,0x23,0x94,0x5E,0x87,0xC4,0x4C,0x4F,0xB4,0xF2,0x0E,0x6B,0x00,0x60,0x00,0xFE
           .DB 0xC7,0xFF,0x02,0x38,0x00,0x01,0xC0,0x00

DATA_99BC: ; ������ ������� �����, ���� 3
           .DB 0x00,0x42,0x00,0x00,0xBD,0x00,0x01,0x05,0x00,0x02,0x05,0x00,0x04,0x61,0x00,0x06
           .DB 0xF8,0x80,0x02,0xA8,0x80,0x01,0x79,0x00,0x03,0x51,0x00,0x04,0xA4,0xC0,0x0A,0x4F
           .DB 0x38,0x15,0x3C,0x44,0x2A,0x92,0xA2,0x45,0x45,0x52,0x5A,0xAA,0xAA,0x5A,0x55,0xD2
           .DB 0x5D,0x23,0xD2,0x5E,0x83,0xC4,0x5F,0x47,0xD4,0xEB,0x07,0xB7,0x00,0x4E,0x00,0xFF
           .DB 0x00,0xFF,0x00,0xB9,0x00,0x01,0x06,0x00

DATA_9A04: ; ������ ������� �����, ���� 4
           .DB 0x00,0x81,0x00,0x00,0xBD,0x00,0x01,0x00,0x80,0x02,0x00,0x40,0x01,0x7C,0x40,0x01
           .DB 0x54,0x80,0x01,0x7C,0x80,0x00,0xAD,0x00,0x03,0xB9,0x00,0x04,0x04,0xC0,0x0A,0x4F
           .DB 0x30,0x35,0x3C,0x48,0x4A,0x92,0xA8,0x45,0x45,0x48,0x5A,0xAA,0xA8,0x5A,0x57,0x54
           .DB 0x5D,0x27,0x94,0x5E,0x8F,0x24,0x4C,0x5E,0x34,0xF3,0x89,0xEF,0x06,0x00,0x00,0xF0
           .DB 0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00

DATA_9A4C: ; ������ ������� �����, ���� 5
           .DB 0x00,0x84,0x00,0x01,0x72,0x00,0x02,0xE2,0x00,0x01,0x4D,0x00,0x01,0x0E,0x80,0x02
           .DB 0x04,0x80,0x02,0x1E,0x80,0x01,0x39,0x00,0x03,0x3D,0x00,0x04,0x00,0xC0,0x0A,0x4F
           .DB 0x30,0x35,0x3C,0x48,0x4A,0x92,0xA8,0x45,0x45,0x48,0x5A,0xAA,0xA8,0x5A,0x57,0x54
           .DB 0x5D,0x27,0x94,0x5E,0x8F,0x24,0x4C,0x5E,0x34,0xF3,0x89,0xEF,0x06,0x00,0x00,0xF0
           .DB 0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00

           ; ������� ������� �����
DATA_9A94: .DB 0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x20,0x80,0x00,0x40,0x40,0x00,0xBF,0x20,0x00
           .DB 0x80,0x20,0x00,0xBE,0x20,0x00,0x96,0x20,0x00,0xBE,0x20,0x00,0xAC,0x20,0x03,0x5C
           .DB 0x20,0x04,0x62,0x30,0x0B,0x7C,0x08,0x17,0x1C,0x04,0x2E,0x00,0x2A,0x2E,0x08,0x7A
           .DB 0x2E,0x00,0x7A,0x2E,0x08,0xBA,0x2F,0x37,0xFA,0xF6,0x77,0xF7,0x00,0x00,0x00,0xFF
           .DB 0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00

DATA_9ADC:
           .DB 0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x20,0x80,0x00,0x40,0x60,0x00,0xBF,0x20,0x01
           .DB 0x00,0x20,0x01,0x3E,0x20,0x01,0x2A,0x20,0x01,0x3E,0x20,0x01,0x34,0x20,0x03,0x5C
           .DB 0x20,0x04,0x62,0x30,0x0B,0x7C,0x08,0x17,0x1C,0x04,0x26,0x00,0x04,0x2E,0x08,0x1A
           .DB 0x2E,0x00,0x3A,0x2E,0x08,0x7A,0x2E,0x00,0xBA,0xF6,0x09,0xF7,0x00,0x03,0xE0,0xFF
           .DB 0xB7,0x9F,0x01,0x74,0x60,0x00,0x83,0x80

DATA_9B24:
           .DB 0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x20,0x80,0x00,0x40,0x40,0x00,0x80,0x20,0x01
           .DB 0x3F,0x20,0x01,0x00,0x20,0x01,0x3E,0x20,0x01,0x2A,0x20,0x01,0x3C,0x20,0x03,0x14
           .DB 0x20,0x04,0x62,0x30,0x0B,0x7C,0x08,0x17,0x1C,0x04,0x26,0x00,0x04,0x2E,0x08,0x1A
           .DB 0x2E,0x00,0x3A,0x2E,0x08,0x7A,0x2E,0x00,0x3A,0xF6,0x08,0xF7,0x00,0x01,0xE0,0xFF
           .DB 0xF3,0xDF,0x00,0x87,0xA0,0x00,0xB8,0x40

DATA_9B6C:
           .DB 0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x40,0x80,0x00,0x80,0x40,0x00,0xBF,0x20,0x01
           .DB 0x00,0x20,0x01,0x3E,0x20,0x01,0x2A,0x20,0x01,0x3E,0x20,0x01,0x36,0x20,0x03,0x5C
           .DB 0x20,0x04,0x62,0x30,0x0B,0x7C,0x08,0x17,0x1C,0x04,0x2E,0x00,0x2A,0x2E,0x08,0x7A
           .DB 0x2E,0x00,0x7A,0x2E,0x08,0xBA,0x2F,0x37,0xFA,0xF6,0x77,0xF7,0x00,0x00,0x00,0xFF
           .DB 0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00

DATA_9BB4:
           .DB 0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x40,0x80,0x00,0x80,0x40,0x00,0xBF,0x40,0x01
           .DB 0x00,0x40,0x01,0x1F,0x40,0x01,0x15,0x40,0x01,0x1F,0x40,0x01,0x1B,0x40,0x03,0x0E
           .DB 0xC0,0x04,0x20,0x30,0x0B,0x7C,0x08,0x17,0x1C,0x04,0x2E,0x00,0x2A,0x2E,0x08,0x7A
           .DB 0x2E,0x00,0x7A,0x2E,0x08,0xBA,0x2F,0x37,0xFA,0xF6,0x77,0xF7,0x00,0x00,0x00,0xFF
           .DB 0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00

DATA_9BFC: ; Ƹ���� ������-����
           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xC0,0x04,0x00,0x20,0x0B
           .DB 0xFF,0x50,0x17,0xFE,0x90,0x17,0xFE,0x50,0x10,0x00,0xD0,0x17,0x8E,0xD0,0x17,0xAE
           .DB 0xD0,0x17,0x8E,0xD0,0x17,0xFE,0xA0,0x17,0xFE,0x40,0x10,0x00,0x80,0x0F,0xFF,0x00
           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xF6,0xDB,0x61,0xB6,0xDE,0x7D,0xF7,0xDC,0x6D
           .DB 0xB6,0xDE,0x7D,0xB6,0xDB,0x00,0x00,0x00

DATA_9C44: ; ������ ���� ������ ������� (������)
           .DB 0x02,0x00,0x10,0x02,0x7F,0xC8,0x02,0xBF,0xD4,0x02,0xBF,0xD4,0x02,0x7F,0xC8,0x02
           .DB 0x00,0x10,0x04,0x00,0x10,0x08,0x00,0x50,0x10,0x00,0xD0,0x17,0xFE,0xD0,0x17,0xDE
           .DB 0xD0,0x17,0xDE,0xD0,0x17,0xFE,0xA0,0x17,0xFE,0x40,0x10,0x00,0x80,0x0F,0xFF,0x00
           .DB 0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xF6,0xDB,0x61,0xB6,0xDE,0x7D,0xF7,0xDC,0x6D
           .DB 0xB6,0xDE,0x7D,0xB6,0xDB,0x00,0x00,0x00

DATA_9C8C: ; ������� ������ �����
           .DB 0x00,0x1A,0x00,0x00,0x21,0x00,0x00,0xCE,0x80,0x01,0x03,0x40,0x00,0x80,0x40,0x00
           .DB 0xB8,0x20,0x00,0x96,0x20,0x00,0xBF,0x40,0x00,0x84,0x80,0x00,0xB0,0x80,0x01,0x80
           .DB 0x80,0x06,0x03,0x70,0x09,0x83,0x8C,0x16,0xC6,0xB2,0x2C,0x7D,0xBA,0x5E,0xFB,0xFA
           .DB 0x5C,0x7E,0xFA,0x5F,0xBD,0xF6,0x2F,0x83,0xEA,0xF3,0x7B,0x97,0x00,0x00,0x00,0xFF
           .DB 0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00

DATA_9CD4: ; ������� ������ �����, ���� 2
           .DB 0x00,0x36,0x00,0x00,0x41,0x00,0x00,0xBE,0x80,0x01,0x00,0x40,0x01,0x00,0x40,0x01
           .DB 0x3E,0x40,0x01,0x6A,0x40,0x01,0x7F,0x40,0x01,0x36,0x80,0x00,0x9C,0x80,0x01,0x80
           .DB 0x80,0x06,0x00,0x70,0x09,0xC1,0x8C,0x16,0xC2,0xB2,0x2C,0x7D,0xBA,0x5E,0xFB,0xFA
           .DB 0x5C,0x7F,0x7A,0x5F,0xBE,0xFA,0x2F,0x8D,0xF2,0xF3,0x73,0xE7,0x00,0x07,0xC0,0xFE
           .DB 0x6F,0xBF,0x02,0x00,0x40,0x01,0xFF,0x80

DATA_9D1C: ; ������� ������ �����, ���� 3
           .DB 0x00,0x36,0x00,0x00,0x41,0x00,0x00,0xBE,0x80,0x00,0x80,0x80,0x01,0x00,0x40,0x01
           .DB 0x3E,0x40,0x01,0x2A,0x40,0x01,0x3F,0x40,0x00,0xB6,0x80,0x00,0x9C,0x80,0x01,0x80
           .DB 0x80,0x06,0x01,0x70,0x09,0xC1,0x8C,0x16,0xE2,0xB2,0x2C,0x7D,0xBA,0x5E,0xFB,0xFA
           .DB 0x5C,0x7F,0x7A,0x5F,0xBE,0xFA,0x2F,0x8D,0xF2,0xF3,0x72,0xE7,0x00,0x07,0xC0,0xFF
           .DB 0xE3,0xBF,0x00,0x5C,0x40,0x00,0x83,0x00

DATA_9D64: ; ������� ������ �����, ���� 4
           .DB 0x00,0x16,0x00,0x00,0x21,0x00,0x00,0xDE,0x80,0x01,0x00,0x40,0x01,0x00,0x40,0x01
           .DB 0x3E,0x40,0x01,0x2A,0x40,0x00,0xBE,0x80,0x00,0x80,0x80,0x00,0x99,0x00,0x01,0x81
           .DB 0x80,0x06,0x43,0x70,0x09,0x83,0x8C,0x16,0xC2,0xB2,0x2C,0x7D,0xBA,0x5E,0xFB,0xFA
           .DB 0x5C,0x7E,0xFA,0x5F,0xBD,0xF4,0x2F,0x83,0xEA,0xF3,0x7B,0x97,0x00,0x00,0x00,0xFF
           .DB 0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00

DATA_9DAC: ; ������� ������ �����, ���� 5
           .DB 0x00,0x2C,0x00,0x00,0x42,0x00,0x00,0xB1,0x80,0x01,0x60,0x40,0x01,0x00,0x40,0x01
           .DB 0x0E,0x40,0x01,0x14,0x80,0x01,0x7E,0x80,0x00,0x88,0x80,0x00,0x86,0x80,0x01,0x80
           .DB 0x80,0x06,0x40,0x70,0x09,0xC0,0x8C,0x16,0xE2,0xB2,0x2C,0x7D,0xBA,0x5E,0xFB,0xFA
           .DB 0x5C,0x7E,0xFA,0x5F,0xBD,0xF4,0x2F,0x83,0xEA,0xF3,0x7B,0x97,0x00,0x00,0x00,0xFF
           .DB 0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00

           ; ����� �������-���������
DATA_9DF4: .DB 0x0F,0xFF,0xFF,0xFF,0x0A,0xAA,0xAA,0xB5,0x0A,0xAA,0xAA,0xAB,0x0A,0xAA,0xAA,0xB5
           .DB 0x0A,0xAA,0xAA,0xAB,0x0A,0xAA,0xAA,0xB5,0x0A,0xAA,0xAA,0xAB,0x0F,0xFF,0xFF,0xFF

DATA_9FC4: .DB 0x00,0x00,0x00,0x00,0x3C,0x00,0x00,0x00

__endasm;}


int main (int argc, char **argv)
{
  __INIT(argc, argv);
  __REGMAIN("Devyatka", 0);
/* BEGIN */
  __FINI;
}
