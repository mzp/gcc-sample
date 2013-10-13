char jhc_c_compile[] = "gcc tmp/rts/profile.c tmp/rts/rts_support.c tmp/rts/gc_none.c tmp/rts/jhc_rts.c tmp/lib/lib_cbits.c tmp/rts/gc_jgc.c tmp/rts/stableptr.c tmp/rts/conc.c -Itmp/cbits -Itmp tmp/main_code.c -o hs.out '-std=gnu99' -D_GNU_SOURCE '-falign-functions=4' -ffast-math -Wextra -Wall -Wno-unused-parameter -fno-strict-aliasing -g -lm '-D_JHC_GC=_JHC_GC_JGC' '-D_JHC_CONC=_JHC_CONC_NONE'";
char jhc_command[] = "ajhc ./tests/9_nofib/digits-of-e1.hs --tdir=tmp -L- -L../ -pjhc -fdebug -flint";
char jhc_version[] = "ajhc 0.8.0.9 (cb8e7e73f55b17ffc19c067d250294dfdef1c63d)";

#include "jhc_rts_header.h"
struct s_caches_pub {
    struct s_cache *cFR$__fJhc_Basics_$pp;
    struct s_cache *cFJhc_Text_Read_readsPrec$d19;
    struct s_cache *cBap__1__Jhc_Text_Read_readsPrec$d17u101598;
    struct s_cache *cFJhc_Text_Read_readsPrec$d13;
    struct s_cache *cP1__Jhc_Text_Read_readsPrec$d5;
    struct s_cache *cBap__1__Jhc_Text_Read_readsPrec$d6u101624;
    struct s_cache *cFJhc_Text_Read_lex$d30;
    struct s_cache *cFJhc_Text_Read_lex$d29;
    struct s_cache *cBap__1__Jhc_Text_Read_lex$d23u101636;
    struct s_cache *cBap__1__Jhc_Text_Read_lex$d19u101648;
    struct s_cache *cFJhc_Text_Read_lex$d21;
    struct s_cache *cFJhc_Text_Read_lex$d20;
    struct s_cache *cFJhc_Text_Read_lex$d11;
    struct s_cache *cFJhc_Text_Read_lex$d7;
    struct s_cache *cFJhc_Text_Read_lex$d6;
    struct s_cache *cFJhc_Text_Read_lex$d5;
    struct s_cache *cFJhc_Text_Read_lex$d3;
    struct s_cache *cFJhc_Text_Read_nonnull$d3;
    struct s_cache *cFJhc_Basics_concatMap$d2;
    struct s_cache *cFW$__fJhc_Inst_Show_showWordMax;
    struct s_cache *cP1__theMain$d3;
    struct s_cache *cCJhc_Prim_Prim_$x3a;
    struct s_cache *cCJhc_Type_Basic_Integer;
    struct s_cache *cCJhc_Prim_Prim_$LcR;
    struct s_cache *cCJhc_Type_Word_Int;
    struct s_cache *cFW$__fR$__fJhc_List_387__f;
    struct s_cache *cFtheMain$d102;
    struct s_cache *cFtheMain$d103;
    struct s_cache *cFtheMain$d14;
    struct s_cache *cFtheMain$d15;
    struct s_cache *cFtheMain$d16;
    struct s_cache *cFtheMain$d17;
    struct s_cache *cFtheMain$d18;
    struct s_cache *cFtheMain$d19;
    struct s_cache *cFtheMain$d20;
    struct s_cache *cFtheMain$d21;
    struct s_cache *cFtheMain$d22;
    struct s_cache *cFtheMain$d23;
    struct s_cache *cFtheMain$d24;
    struct s_cache *cFtheMain$d25;
    struct s_cache *cFtheMain$d13;
    struct s_cache *cFtheMain$d12;
    struct s_cache *cFtheMain$d28;
    struct s_cache *cFtheMain$d29;
    struct s_cache *cFtheMain$d30;
    struct s_cache *cFtheMain$d31;
    struct s_cache *cFtheMain$d32;
    struct s_cache *cFtheMain$d33;
    struct s_cache *cFtheMain$d34;
    struct s_cache *cFtheMain$d35;
    struct s_cache *cFtheMain$d36;
    struct s_cache *cFtheMain$d37;
    struct s_cache *cFtheMain$d38;
    struct s_cache *cFtheMain$d39;
    struct s_cache *cFtheMain$d27;
    struct s_cache *cFtheMain$d26;
    struct s_cache *cFtheMain$d42;
    struct s_cache *cFtheMain$d43;
    struct s_cache *cFtheMain$d44;
    struct s_cache *cFtheMain$d45;
    struct s_cache *cFtheMain$d46;
    struct s_cache *cFtheMain$d47;
    struct s_cache *cFtheMain$d48;
    struct s_cache *cFtheMain$d49;
    struct s_cache *cFtheMain$d50;
    struct s_cache *cFtheMain$d51;
    struct s_cache *cFtheMain$d52;
    struct s_cache *cFtheMain$d53;
    struct s_cache *cFtheMain$d41;
    struct s_cache *cFtheMain$d40;
    struct s_cache *cFtheMain$d60;
    struct s_cache *cFtheMain$d61;
    struct s_cache *cFtheMain$d62;
    struct s_cache *cFtheMain$d63;
    struct s_cache *cFtheMain$d64;
    struct s_cache *cFtheMain$d65;
    struct s_cache *cFtheMain$d66;
    struct s_cache *cFtheMain$d67;
    struct s_cache *cFtheMain$d68;
    struct s_cache *cFtheMain$d69;
    struct s_cache *cFtheMain$d70;
    struct s_cache *cFtheMain$d71;
    struct s_cache *cFtheMain$d59;
    struct s_cache *cFtheMain$d58;
    struct s_cache *cFtheMain$d74;
    struct s_cache *cFtheMain$d75;
    struct s_cache *cFtheMain$d76;
    struct s_cache *cFtheMain$d77;
    struct s_cache *cFtheMain$d78;
    struct s_cache *cFtheMain$d79;
    struct s_cache *cFtheMain$d80;
    struct s_cache *cFtheMain$d81;
    struct s_cache *cFtheMain$d82;
    struct s_cache *cFtheMain$d83;
    struct s_cache *cFtheMain$d84;
    struct s_cache *cFtheMain$d85;
    struct s_cache *cFtheMain$d73;
    struct s_cache *cFtheMain$d72;
    struct s_cache *cFtheMain$d88;
    struct s_cache *cFtheMain$d89;
    struct s_cache *cFtheMain$d90;
    struct s_cache *cFtheMain$d91;
    struct s_cache *cFtheMain$d92;
    struct s_cache *cFtheMain$d93;
    struct s_cache *cFtheMain$d94;
    struct s_cache *cFtheMain$d95;
    struct s_cache *cFtheMain$d96;
    struct s_cache *cFtheMain$d97;
    struct s_cache *cFtheMain$d98;
    struct s_cache *cFtheMain$d99;
    struct s_cache *cFtheMain$d87;
    struct s_cache *cFtheMain$d86;
    struct s_cache *cFtheMain$d56;
    struct s_cache *cFtheMain$d57;
    struct s_cache *cFtheMain$d10;
    struct s_cache *cFtheMain$d11;
    struct s_cache *cFR$__fMain_1__aux;
    struct s_cache *cFtheMain$d6;
    struct s_cache *cFJhc_Show_shows;
    struct s_cache *cFR$__fJhc_Show_11__showl;
    struct s_cache *cP1__theMain$d4;
    struct s_cache *cP2__theMain$d3;
    struct s_cache *cFtheMain$d2;
    struct s_cache *cFJhc_Text_Read_readsPrec$d10;
    struct s_cache *cFJhc_Text_Read_readsPrec$d12;
    struct s_cache *cFJhc_Text_Read_readsPrec$d11;
    struct s_cache *cFJhc_Text_Read_readsPrec$d2;
    struct s_cache *cFJhc_Text_Read_readsPrec$d4;
    struct s_cache *cFJhc_Text_Read_readsPrec$d3;
    struct s_cache *cFJhc_Text_Read_lex$d28;
    struct s_cache *cFJhc_Text_Read_lex$d27;
    struct s_cache *cFJhc_Text_Read_lex$d25;
    struct s_cache *cFJhc_Text_Read_lex$d24;
    struct s_cache *cFJhc_Text_Read_lex$d16;
    struct s_cache *cFJhc_Text_Read_lex$d15;
    struct s_cache *cFJhc_Text_Read_lex$d13;
    struct s_cache *cFJhc_Text_Read_lex$d12;
    struct s_cache *cFJhc_Text_Read_lex$d8;
    struct s_cache *cFJhc_Text_Read_lex$d9;
    struct s_cache *cFJhc_Text_Read_readsPrec$d18;
    struct s_cache *cFJhc_Text_Read_readsPrec$d14;
    struct s_cache *cFJhc_Text_Read_readsPrec$d8;
    struct s_cache *cFJhc_Text_Read_lex$d14;
    struct s_cache *cFJhc_Text_Read_lex$d17;
    struct s_cache *cFJhc_Text_Read_lex$d32;
    struct s_cache *cFJhc_Text_Read_lex$d4;
    struct s_cache *cFJhc_Text_Read_lexLitChar$d4;
    struct s_cache *cFJhc_Text_Read_lexLitChar$d6;
    struct s_cache *cFJhc_Text_Read_lexLitChar$d7;
    struct s_cache *cFJhc_Text_Read_lexLitChar$d9;
    struct s_cache *cFJhc_Text_Read_lexLitChar$d10;
    struct s_cache *cFJhc_Text_Read_lexLitChar$d12;
    struct s_cache *cFJhc_Text_Read_lexLitChar$d13;
    struct s_cache *cFJhc_Text_Read_lexLitChar$d14;
    struct s_cache *cFJhc_Text_Read_lexLitChar$d15;
    struct s_cache *cFJhc_Text_Read_lexLitChar$d16;
    struct s_cache *cFJhc_Text_Read_lexLitChar$d2;
    struct s_cache *cFJhc_Text_Read_lexLitChar$d3;
    struct s_cache *cFJhc_Text_Read_readDec$d5;
    struct s_cache *cP1__Jhc_Text_Read_lex$d18;
    struct s_cache *cFJhc_Text_Read_readsPrec$d7;
    struct s_cache *cP1__Jhc_Text_Read_lex$d22;
    struct s_cache *cFJhc_Text_Read_lex$d31;
    struct s_cache *cFJhc_Text_Read_lex$d26;
    struct s_cache *cFJhc_Text_Read_readDec$d3;
    struct s_cache *cFJhc_Basics_45__go;
    struct s_cache *cFJhc_Text_Read_readDec$d2;
    struct s_cache *cFJhc_Text_Read_readDec$d7;
    struct s_cache *cFJhc_Text_Read_readDec$d4;
    struct s_cache *cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7;
    struct s_cache *cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6;
    struct s_cache *cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4;
    struct s_cache *cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3;
    struct s_cache *cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2;
    struct s_cache *cFJhc_Basics_$pp;
    struct s_cache *cFtheMain$d104;
    struct s_cache *cFW$__fJhc_List_span$d5;
    struct s_cache *cFW$__fJhc_List_span$d4;
    struct s_cache *cFW$__fJhc_List_span$d3;
    struct s_cache *cP1__W$__fJhc_List_span$d2;
    struct s_cache *cFJhc_Text_Read_nonnull$d4;
    struct s_cache *cP1__Jhc_Text_Read_readsPrec$d16;
};
#include <stdio.h>

enum {
    CJhc_Prim_Prim_$BE = 1,
    CJhc_Prim_Prim_$LR = 0,
    CJhc_Prim_Prim_$LcR = 0,
    CJhc_Prim_Prim_$x3a = 0,
    CJhc_Type_Basic_Char = 0,
    CJhc_Type_Basic_Integer = 0,
    CJhc_Type_Word_Int = 0,
    $_hole = 0,
    P1__Jhc_Text_Read_119__isCharName = 1,
    P1__Jhc_Text_Read_77__isSym = 2,
    P1__Jhc_Text_Read_78__isIdChar = 3,
    P1__Jhc_Text_Read_lex$d18 = 4,
    P1__Jhc_Text_Read_lex$d22 = 5,
    P1__Jhc_Text_Read_lexLitChar$d11 = 6,
    P1__Jhc_Text_Read_lexLitChar$d5 = 7,
    P1__Jhc_Text_Read_lexLitChar$d8 = 8,
    P1__Jhc_Text_Read_readsPrec$d16 = 9,
    P1__Jhc_Text_Read_readsPrec$d5 = 10,
    P1__Prelude_CType_isDigit = 11,
    P1__Prelude_CType_isHexDigit = 12,
    P1__Prelude_CType_isOctDigit = 13,
    P1__W$__fJhc_List_span$d2 = 14,
    P1__theMain$d3 = 15,
    P1__theMain$d4 = 16,
    P1__theMain$d5 = 17,
    P2__theMain$d3 = 18,
    TJhc_Prim_Prim_$BE = 19,
    TJhc_Type_Basic_Char = 20,
    TJhc_Type_Basic_Integer = 21,
    TJhc_Type_C_CChar = 22,
    TJhc_Type_Word_Int = 23
};
struct sBap__1__Jhc_Text_Read_lex$d19u101648 A_ALIGNED;
struct sBap__1__Jhc_Text_Read_lex$d23u101636 A_ALIGNED;
struct sBap__1__Jhc_Text_Read_readsPrec$d17u101598 A_ALIGNED;
struct sBap__1__Jhc_Text_Read_readsPrec$d6u101624 A_ALIGNED;
struct sCJhc_Prim_Prim_$LcR A_ALIGNED;
struct sCJhc_Prim_Prim_$x3a A_ALIGNED;
struct sCJhc_Type_Basic_Integer A_ALIGNED;
struct sCJhc_Type_Word_Int A_ALIGNED;
struct sFJhc_Basics_$pp A_ALIGNED;
struct sFJhc_Basics_45__go A_ALIGNED;
struct sFJhc_Basics_concatMap$d2 A_ALIGNED;
struct sFJhc_Show_shows A_ALIGNED;
struct sFJhc_Text_Read_lex$d11 A_ALIGNED;
struct sFJhc_Text_Read_lex$d12 A_ALIGNED;
struct sFJhc_Text_Read_lex$d13 A_ALIGNED;
struct sFJhc_Text_Read_lex$d14 A_ALIGNED;
struct sFJhc_Text_Read_lex$d15 A_ALIGNED;
struct sFJhc_Text_Read_lex$d16 A_ALIGNED;
struct sFJhc_Text_Read_lex$d17 A_ALIGNED;
struct sFJhc_Text_Read_lex$d20 A_ALIGNED;
struct sFJhc_Text_Read_lex$d21 A_ALIGNED;
struct sFJhc_Text_Read_lex$d24 A_ALIGNED;
struct sFJhc_Text_Read_lex$d25 A_ALIGNED;
struct sFJhc_Text_Read_lex$d26 A_ALIGNED;
struct sFJhc_Text_Read_lex$d27 A_ALIGNED;
struct sFJhc_Text_Read_lex$d28 A_ALIGNED;
struct sFJhc_Text_Read_lex$d29 A_ALIGNED;
struct sFJhc_Text_Read_lex$d3 A_ALIGNED;
struct sFJhc_Text_Read_lex$d30 A_ALIGNED;
struct sFJhc_Text_Read_lex$d31 A_ALIGNED;
struct sFJhc_Text_Read_lex$d32 A_ALIGNED;
struct sFJhc_Text_Read_lex$d4 A_ALIGNED;
struct sFJhc_Text_Read_lex$d5 A_ALIGNED;
struct sFJhc_Text_Read_lex$d6 A_ALIGNED;
struct sFJhc_Text_Read_lex$d7 A_ALIGNED;
struct sFJhc_Text_Read_lex$d8 A_ALIGNED;
struct sFJhc_Text_Read_lex$d9 A_ALIGNED;
struct sFJhc_Text_Read_lexLitChar$d10 A_ALIGNED;
struct sFJhc_Text_Read_lexLitChar$d12 A_ALIGNED;
struct sFJhc_Text_Read_lexLitChar$d13 A_ALIGNED;
struct sFJhc_Text_Read_lexLitChar$d14 A_ALIGNED;
struct sFJhc_Text_Read_lexLitChar$d15 A_ALIGNED;
struct sFJhc_Text_Read_lexLitChar$d16 A_ALIGNED;
struct sFJhc_Text_Read_lexLitChar$d2 A_ALIGNED;
struct sFJhc_Text_Read_lexLitChar$d3 A_ALIGNED;
struct sFJhc_Text_Read_lexLitChar$d4 A_ALIGNED;
struct sFJhc_Text_Read_lexLitChar$d6 A_ALIGNED;
struct sFJhc_Text_Read_lexLitChar$d7 A_ALIGNED;
struct sFJhc_Text_Read_lexLitChar$d9 A_ALIGNED;
struct sFJhc_Text_Read_nonnull$d3 A_ALIGNED;
struct sFJhc_Text_Read_nonnull$d4 A_ALIGNED;
struct sFJhc_Text_Read_readDec$d2 A_ALIGNED;
struct sFJhc_Text_Read_readDec$d3 A_ALIGNED;
struct sFJhc_Text_Read_readDec$d4 A_ALIGNED;
struct sFJhc_Text_Read_readDec$d5 A_ALIGNED;
struct sFJhc_Text_Read_readDec$d7 A_ALIGNED;
struct sFJhc_Text_Read_readsPrec$d10 A_ALIGNED;
struct sFJhc_Text_Read_readsPrec$d11 A_ALIGNED;
struct sFJhc_Text_Read_readsPrec$d12 A_ALIGNED;
struct sFJhc_Text_Read_readsPrec$d13 A_ALIGNED;
struct sFJhc_Text_Read_readsPrec$d14 A_ALIGNED;
struct sFJhc_Text_Read_readsPrec$d18 A_ALIGNED;
struct sFJhc_Text_Read_readsPrec$d19 A_ALIGNED;
struct sFJhc_Text_Read_readsPrec$d2 A_ALIGNED;
struct sFJhc_Text_Read_readsPrec$d3 A_ALIGNED;
struct sFJhc_Text_Read_readsPrec$d4 A_ALIGNED;
struct sFJhc_Text_Read_readsPrec$d7 A_ALIGNED;
struct sFJhc_Text_Read_readsPrec$d8 A_ALIGNED;
struct sFMain_e A_ALIGNED;
struct sFR$__fJhc_Basics_$pp A_ALIGNED;
struct sFR$__fJhc_Show_11__showl A_ALIGNED;
struct sFR$__fMain_1__aux A_ALIGNED;
struct sFW$__fJhc_Inst_Show_showWordMax A_ALIGNED;
struct sFW$__fJhc_List_span$d3 A_ALIGNED;
struct sFW$__fJhc_List_span$d4 A_ALIGNED;
struct sFW$__fJhc_List_span$d5 A_ALIGNED;
struct sFW$__fR$__fJhc_List_387__f A_ALIGNED;
struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2 A_ALIGNED;
struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3 A_ALIGNED;
struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4 A_ALIGNED;
struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6 A_ALIGNED;
struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7 A_ALIGNED;
struct sFtheMain$d10 A_ALIGNED;
struct sFtheMain$d102 A_ALIGNED;
struct sFtheMain$d103 A_ALIGNED;
struct sFtheMain$d104 A_ALIGNED;
struct sFtheMain$d105 A_ALIGNED;
struct sFtheMain$d11 A_ALIGNED;
struct sFtheMain$d12 A_ALIGNED;
struct sFtheMain$d13 A_ALIGNED;
struct sFtheMain$d14 A_ALIGNED;
struct sFtheMain$d15 A_ALIGNED;
struct sFtheMain$d16 A_ALIGNED;
struct sFtheMain$d17 A_ALIGNED;
struct sFtheMain$d18 A_ALIGNED;
struct sFtheMain$d19 A_ALIGNED;
struct sFtheMain$d2 A_ALIGNED;
struct sFtheMain$d20 A_ALIGNED;
struct sFtheMain$d21 A_ALIGNED;
struct sFtheMain$d22 A_ALIGNED;
struct sFtheMain$d23 A_ALIGNED;
struct sFtheMain$d24 A_ALIGNED;
struct sFtheMain$d25 A_ALIGNED;
struct sFtheMain$d26 A_ALIGNED;
struct sFtheMain$d27 A_ALIGNED;
struct sFtheMain$d28 A_ALIGNED;
struct sFtheMain$d29 A_ALIGNED;
struct sFtheMain$d30 A_ALIGNED;
struct sFtheMain$d31 A_ALIGNED;
struct sFtheMain$d32 A_ALIGNED;
struct sFtheMain$d33 A_ALIGNED;
struct sFtheMain$d34 A_ALIGNED;
struct sFtheMain$d35 A_ALIGNED;
struct sFtheMain$d36 A_ALIGNED;
struct sFtheMain$d37 A_ALIGNED;
struct sFtheMain$d38 A_ALIGNED;
struct sFtheMain$d39 A_ALIGNED;
struct sFtheMain$d40 A_ALIGNED;
struct sFtheMain$d41 A_ALIGNED;
struct sFtheMain$d42 A_ALIGNED;
struct sFtheMain$d43 A_ALIGNED;
struct sFtheMain$d44 A_ALIGNED;
struct sFtheMain$d45 A_ALIGNED;
struct sFtheMain$d46 A_ALIGNED;
struct sFtheMain$d47 A_ALIGNED;
struct sFtheMain$d48 A_ALIGNED;
struct sFtheMain$d49 A_ALIGNED;
struct sFtheMain$d50 A_ALIGNED;
struct sFtheMain$d51 A_ALIGNED;
struct sFtheMain$d52 A_ALIGNED;
struct sFtheMain$d53 A_ALIGNED;
struct sFtheMain$d56 A_ALIGNED;
struct sFtheMain$d57 A_ALIGNED;
struct sFtheMain$d58 A_ALIGNED;
struct sFtheMain$d59 A_ALIGNED;
struct sFtheMain$d6 A_ALIGNED;
struct sFtheMain$d60 A_ALIGNED;
struct sFtheMain$d61 A_ALIGNED;
struct sFtheMain$d62 A_ALIGNED;
struct sFtheMain$d63 A_ALIGNED;
struct sFtheMain$d64 A_ALIGNED;
struct sFtheMain$d65 A_ALIGNED;
struct sFtheMain$d66 A_ALIGNED;
struct sFtheMain$d67 A_ALIGNED;
struct sFtheMain$d68 A_ALIGNED;
struct sFtheMain$d69 A_ALIGNED;
struct sFtheMain$d7 A_ALIGNED;
struct sFtheMain$d70 A_ALIGNED;
struct sFtheMain$d71 A_ALIGNED;
struct sFtheMain$d72 A_ALIGNED;
struct sFtheMain$d73 A_ALIGNED;
struct sFtheMain$d74 A_ALIGNED;
struct sFtheMain$d75 A_ALIGNED;
struct sFtheMain$d76 A_ALIGNED;
struct sFtheMain$d77 A_ALIGNED;
struct sFtheMain$d78 A_ALIGNED;
struct sFtheMain$d79 A_ALIGNED;
struct sFtheMain$d80 A_ALIGNED;
struct sFtheMain$d81 A_ALIGNED;
struct sFtheMain$d82 A_ALIGNED;
struct sFtheMain$d83 A_ALIGNED;
struct sFtheMain$d84 A_ALIGNED;
struct sFtheMain$d85 A_ALIGNED;
struct sFtheMain$d86 A_ALIGNED;
struct sFtheMain$d87 A_ALIGNED;
struct sFtheMain$d88 A_ALIGNED;
struct sFtheMain$d89 A_ALIGNED;
struct sFtheMain$d90 A_ALIGNED;
struct sFtheMain$d91 A_ALIGNED;
struct sFtheMain$d92 A_ALIGNED;
struct sFtheMain$d93 A_ALIGNED;
struct sFtheMain$d94 A_ALIGNED;
struct sFtheMain$d95 A_ALIGNED;
struct sFtheMain$d96 A_ALIGNED;
struct sFtheMain$d97 A_ALIGNED;
struct sFtheMain$d98 A_ALIGNED;
struct sFtheMain$d99 A_ALIGNED;
struct sP1__Jhc_Text_Read_lex$d18 A_ALIGNED;
struct sP1__Jhc_Text_Read_lex$d22 A_ALIGNED;
struct sP1__Jhc_Text_Read_readsPrec$d16 A_ALIGNED;
struct sP1__Jhc_Text_Read_readsPrec$d5 A_ALIGNED;
struct sP1__W$__fJhc_List_span$d2 A_ALIGNED;
struct sP1__theMain$d3 A_ALIGNED;
struct sP1__theMain$d4 A_ALIGNED;
struct sP2__theMain$d3 A_ALIGNED;
struct sTJhc_Prim_Prim_$BE A_ALIGNED;

struct sBap__1__Jhc_Text_Read_lex$d19u101648 {
    fptr_t head;
    wptr_t a1;
    sptr_t a2;
};

struct sBap__1__Jhc_Text_Read_lex$d23u101636 {
    fptr_t head;
    wptr_t a1;
    sptr_t a2;
};

struct sBap__1__Jhc_Text_Read_readsPrec$d17u101598 {
    fptr_t head;
    wptr_t a1;
    sptr_t a2;
};

struct sBap__1__Jhc_Text_Read_readsPrec$d6u101624 {
    fptr_t head;
    wptr_t a1;
    sptr_t a2;
};

struct sCJhc_Prim_Prim_$LcR {
    sptr_t a1;
    sptr_t a2;
};

struct sCJhc_Prim_Prim_$x3a {
    sptr_t a1;
    sptr_t a2;
};

struct sCJhc_Type_Basic_Integer {
    uintmax_t a1;
};

struct sCJhc_Type_Word_Int {
    uint32_t a1;
};

struct sFJhc_Basics_$pp {
    fptr_t head;
    wptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFJhc_Basics_45__go {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Basics_concatMap$d2 {
    fptr_t head;
    wptr_t a1;
    sptr_t a2;
};

struct sFJhc_Show_shows {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFJhc_Text_Read_lex$d11 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lex$d12 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFJhc_Text_Read_lex$d13 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFJhc_Text_Read_lex$d14 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lex$d15 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFJhc_Text_Read_lex$d16 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFJhc_Text_Read_lex$d17 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lex$d20 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFJhc_Text_Read_lex$d21 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFJhc_Text_Read_lex$d24 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFJhc_Text_Read_lex$d25 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFJhc_Text_Read_lex$d26 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFJhc_Text_Read_lex$d27 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFJhc_Text_Read_lex$d28 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFJhc_Text_Read_lex$d29 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFJhc_Text_Read_lex$d3 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lex$d30 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFJhc_Text_Read_lex$d31 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lex$d32 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lex$d4 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lex$d5 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFJhc_Text_Read_lex$d6 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFJhc_Text_Read_lex$d7 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lex$d8 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lex$d9 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lexLitChar$d10 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lexLitChar$d12 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lexLitChar$d13 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lexLitChar$d14 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lexLitChar$d15 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lexLitChar$d16 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lexLitChar$d2 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lexLitChar$d3 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lexLitChar$d4 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lexLitChar$d6 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lexLitChar$d7 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_lexLitChar$d9 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_nonnull$d3 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_nonnull$d4 {
    fptr_t head;
    wptr_t a1;
    sptr_t a2;
};

struct sFJhc_Text_Read_readDec$d2 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readDec$d3 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readDec$d4 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readDec$d5 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFJhc_Text_Read_readDec$d7 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readsPrec$d10 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readsPrec$d11 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readsPrec$d12 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readsPrec$d13 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readsPrec$d14 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readsPrec$d18 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readsPrec$d19 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readsPrec$d2 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readsPrec$d3 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readsPrec$d4 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readsPrec$d7 {
    fptr_t head;
    sptr_t a1;
};

struct sFJhc_Text_Read_readsPrec$d8 {
    fptr_t head;
    sptr_t a1;
};

struct sFMain_e {
    fptr_t head;
};

struct sFR$__fJhc_Basics_$pp {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFR$__fJhc_Show_11__showl {
    fptr_t head;
    sptr_t a1;
    wptr_t a2;
};

struct sFR$__fMain_1__aux {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fJhc_Inst_Show_showWordMax {
    fptr_t head;
    sptr_t a2;
    uintmax_t a1;
};

struct sFW$__fJhc_List_span$d3 {
    fptr_t head;
    sptr_t a1;
    wptr_t a2;
};

struct sFW$__fJhc_List_span$d4 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fJhc_List_span$d5 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fR$__fJhc_List_387__f {
    fptr_t head;
    sptr_t a2;
    uint32_t a1;
};

struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2 {
    fptr_t head;
    uintmax_t a1;
    uintmax_t a2;
};

struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3 {
    fptr_t head;
    uintmax_t a1;
    uintmax_t a2;
};

struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7 {
    fptr_t head;
    sptr_t a1;
    uintmax_t a2;
};

struct sFtheMain$d10 {
    fptr_t head;
    wptr_t a2;
    sptr_t a6;
    wptr_t a8;
    uintmax_t a1;
    uintmax_t a3;
    uintmax_t a4;
    uintmax_t a5;
    uintmax_t a7;
};

struct sFtheMain$d102 {
    fptr_t head;
    wptr_t a6;
    sptr_t a7;
    wptr_t a8;
    uintmax_t a1;
    uintmax_t a2;
    uintmax_t a3;
    uintmax_t a4;
    uintmax_t a5;
};

struct sFtheMain$d103 {
    fptr_t head;
    sptr_t a3;
    uintmax_t a1;
    uintmax_t a2;
};

struct sFtheMain$d104 {
    fptr_t head;
    sptr_t a1;
};

struct sFtheMain$d105 {
    fptr_t head;
};

struct sFtheMain$d11 {
    fptr_t head;
    sptr_t a2;
    uintmax_t a1;
    uintmax_t a3;
};

struct sFtheMain$d12 {
    fptr_t head;
    sptr_t a2;
    uintmax_t a1;
};

struct sFtheMain$d13 {
    fptr_t head;
    sptr_t a2;
    sptr_t a4;
    sptr_t a5;
    uintmax_t a1;
    uintmax_t a3;
    uintmax_t a6;
};

struct sFtheMain$d14 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d15 {
    fptr_t head;
    sptr_t a2;
    wptr_t a3;
    sptr_t a5;
    wptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a4;
};

struct sFtheMain$d16 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d17 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d18 {
    fptr_t head;
    sptr_t a2;
    wptr_t a3;
    sptr_t a5;
    wptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a4;
};

struct sFtheMain$d19 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d2 {
    fptr_t head;
    uint32_t a1;
    uint32_t a2;
};

struct sFtheMain$d20 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d21 {
    fptr_t head;
    sptr_t a2;
    wptr_t a3;
    wptr_t a4;
    sptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a5;
};

struct sFtheMain$d22 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d23 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d24 {
    fptr_t head;
    sptr_t a2;
    wptr_t a3;
    wptr_t a5;
    sptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a4;
};

struct sFtheMain$d25 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d26 {
    fptr_t head;
    sptr_t a2;
    uintmax_t a1;
};

struct sFtheMain$d27 {
    fptr_t head;
    sptr_t a3;
    sptr_t a5;
    sptr_t a6;
    uintmax_t a1;
    uintmax_t a2;
    uintmax_t a4;
};

struct sFtheMain$d28 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d29 {
    fptr_t head;
    wptr_t a1;
    sptr_t a3;
    sptr_t a5;
    wptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a2;
    uintmax_t a4;
};

struct sFtheMain$d30 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d31 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d32 {
    fptr_t head;
    sptr_t a2;
    wptr_t a3;
    sptr_t a5;
    wptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a4;
};

struct sFtheMain$d33 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d34 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d35 {
    fptr_t head;
    wptr_t a1;
    sptr_t a3;
    sptr_t a5;
    wptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a2;
    uintmax_t a4;
};

struct sFtheMain$d36 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d37 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d38 {
    fptr_t head;
    sptr_t a2;
    wptr_t a3;
    wptr_t a5;
    sptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a4;
};

struct sFtheMain$d39 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d40 {
    fptr_t head;
    sptr_t a2;
    uintmax_t a1;
};

struct sFtheMain$d41 {
    fptr_t head;
    sptr_t a2;
    sptr_t a4;
    sptr_t a6;
    uintmax_t a1;
    uintmax_t a3;
    uintmax_t a5;
};

struct sFtheMain$d42 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d43 {
    fptr_t head;
    wptr_t a1;
    sptr_t a3;
    wptr_t a4;
    sptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a2;
    uintmax_t a5;
};

struct sFtheMain$d44 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d45 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d46 {
    fptr_t head;
    sptr_t a2;
    wptr_t a4;
    sptr_t a5;
    sptr_t a6;
    sptr_t a7;
    wptr_t a8;
    uintmax_t a1;
    uintmax_t a3;
};

struct sFtheMain$d47 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d48 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d49 {
    fptr_t head;
    sptr_t a2;
    wptr_t a3;
    wptr_t a4;
    sptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a5;
};

struct sFtheMain$d50 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d51 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d52 {
    fptr_t head;
    sptr_t a2;
    wptr_t a3;
    wptr_t a4;
    sptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a5;
};

struct sFtheMain$d53 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d56 {
    fptr_t head;
    wptr_t a3;
    wptr_t a6;
    sptr_t a7;
    uintmax_t a1;
    uintmax_t a2;
    uintmax_t a4;
    uintmax_t a5;
    uintmax_t a8;
};

struct sFtheMain$d57 {
    fptr_t head;
    sptr_t a2;
    uintmax_t a1;
    uintmax_t a3;
};

struct sFtheMain$d58 {
    fptr_t head;
    sptr_t a2;
    uintmax_t a1;
};

struct sFtheMain$d59 {
    fptr_t head;
    sptr_t a2;
    sptr_t a4;
    sptr_t a5;
    uintmax_t a1;
    uintmax_t a3;
    uintmax_t a6;
};

struct sFtheMain$d6 {
    fptr_t head;
    sptr_t a1;
};

struct sFtheMain$d60 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d61 {
    fptr_t head;
    wptr_t a1;
    sptr_t a3;
    wptr_t a4;
    sptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a2;
    uintmax_t a5;
};

struct sFtheMain$d62 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d63 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d64 {
    fptr_t head;
    sptr_t a2;
    wptr_t a4;
    sptr_t a5;
    wptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a3;
};

struct sFtheMain$d65 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d66 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d67 {
    fptr_t head;
    wptr_t a1;
    sptr_t a3;
    wptr_t a5;
    sptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a2;
    uintmax_t a4;
};

struct sFtheMain$d68 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d69 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d7 {
    fptr_t head;
};

struct sFtheMain$d70 {
    fptr_t head;
    sptr_t a2;
    wptr_t a4;
    sptr_t a5;
    wptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a3;
};

struct sFtheMain$d71 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d72 {
    fptr_t head;
    sptr_t a2;
    uintmax_t a1;
};

struct sFtheMain$d73 {
    fptr_t head;
    sptr_t a2;
    sptr_t a3;
    sptr_t a6;
    uintmax_t a1;
    uintmax_t a4;
    uintmax_t a5;
};

struct sFtheMain$d74 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d75 {
    fptr_t head;
    sptr_t a2;
    sptr_t a3;
    wptr_t a5;
    sptr_t a6;
    wptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a4;
};

struct sFtheMain$d76 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d77 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d78 {
    fptr_t head;
    wptr_t a1;
    wptr_t a2;
    sptr_t a4;
    sptr_t a5;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a3;
    uintmax_t a6;
};

struct sFtheMain$d79 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d80 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d81 {
    fptr_t head;
    wptr_t a1;
    sptr_t a3;
    sptr_t a4;
    wptr_t a5;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a2;
    uintmax_t a6;
};

struct sFtheMain$d82 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d83 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d84 {
    fptr_t head;
    sptr_t a2;
    sptr_t a3;
    wptr_t a5;
    sptr_t a6;
    wptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a4;
};

struct sFtheMain$d85 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d86 {
    fptr_t head;
    sptr_t a2;
    uintmax_t a1;
};

struct sFtheMain$d87 {
    fptr_t head;
    sptr_t a2;
    sptr_t a4;
    sptr_t a6;
    uintmax_t a1;
    uintmax_t a3;
    uintmax_t a5;
};

struct sFtheMain$d88 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d89 {
    fptr_t head;
    sptr_t a2;
    wptr_t a3;
    sptr_t a5;
    wptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a4;
};

struct sFtheMain$d90 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d91 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d92 {
    fptr_t head;
    sptr_t a2;
    wptr_t a3;
    sptr_t a5;
    wptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a4;
};

struct sFtheMain$d93 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d94 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d95 {
    fptr_t head;
    wptr_t a1;
    sptr_t a3;
    wptr_t a4;
    sptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a2;
    uintmax_t a5;
};

struct sFtheMain$d96 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d97 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFtheMain$d98 {
    fptr_t head;
    sptr_t a2;
    wptr_t a3;
    sptr_t a5;
    wptr_t a6;
    sptr_t a7;
    sptr_t a8;
    uintmax_t a1;
    uintmax_t a4;
};

struct sFtheMain$d99 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sP1__Jhc_Text_Read_lex$d18 {
    what_t what;
    sptr_t a1;
};

struct sP1__Jhc_Text_Read_lex$d22 {
    what_t what;
    sptr_t a1;
};

struct sP1__Jhc_Text_Read_readsPrec$d16 {
    what_t what;
    sptr_t a1;
};

struct sP1__Jhc_Text_Read_readsPrec$d5 {
    what_t what;
    sptr_t a1;
};

struct sP1__W$__fJhc_List_span$d2 {
    what_t what;
    sptr_t a1;
};

struct sP1__theMain$d3 {
    what_t what;
    sptr_t a1;
    sptr_t a2;
};

struct sP1__theMain$d4 {
    what_t what;
    sptr_t a1;
};

struct sP2__theMain$d3 {
    what_t what;
    sptr_t a1;
};

struct sTJhc_Prim_Prim_$BE {
    what_t what;
    wptr_t a1;
};
void jhc_hs_init(gc_t gc,arena_t arena) ;
static wptr_t E__bap__1__Jhc_Text_Read_lex$d19u101648(gc_t gc,arena_t arena,struct sBap__1__Jhc_Text_Read_lex$d19u101648* arg) A_STD A_FALIGNED;
static wptr_t E__bap__1__Jhc_Text_Read_lex$d23u101636(gc_t gc,arena_t arena,struct sBap__1__Jhc_Text_Read_lex$d23u101636* arg) A_STD A_FALIGNED;
static wptr_t E__bap__1__Jhc_Text_Read_readsPrec$d17u101598(gc_t gc,arena_t arena,struct sBap__1__Jhc_Text_Read_readsPrec$d17u101598* arg) A_STD A_FALIGNED;
static wptr_t E__bap__1__Jhc_Text_Read_readsPrec$d6u101624(gc_t gc,arena_t arena,struct sBap__1__Jhc_Text_Read_readsPrec$d6u101624* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Basics_$pp(gc_t gc,arena_t arena,struct sFJhc_Basics_$pp* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Basics_45__go(gc_t gc,arena_t arena,struct sFJhc_Basics_45__go* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Basics_concatMap$d2(gc_t gc,arena_t arena,struct sFJhc_Basics_concatMap$d2* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Show_shows(gc_t gc,arena_t arena,struct sFJhc_Show_shows* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d11(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d11* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d12(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d12* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d13(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d13* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d14(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d14* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d15(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d15* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d16(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d16* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d17(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d17* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d20(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d20* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d21(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d21* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d24(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d24* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d25(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d25* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d26(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d26* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d27(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d27* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d28(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d28* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d29(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d29* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d3(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d3* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d30(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d30* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d31(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d31* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d32(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d32* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d4(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d4* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d5(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d5* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d6(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d6* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d7(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d7* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d8(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d8* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lex$d9(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d9* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lexLitChar$d10(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d10* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lexLitChar$d12(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d12* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lexLitChar$d13(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d13* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lexLitChar$d14(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d14* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lexLitChar$d15(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d15* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lexLitChar$d16(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d16* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lexLitChar$d2(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d2* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lexLitChar$d3(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d3* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lexLitChar$d4(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d4* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lexLitChar$d6(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d6* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lexLitChar$d7(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d7* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_lexLitChar$d9(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d9* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_nonnull$d3(gc_t gc,arena_t arena,struct sFJhc_Text_Read_nonnull$d3* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_nonnull$d4(gc_t gc,arena_t arena,struct sFJhc_Text_Read_nonnull$d4* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readDec$d2(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readDec$d2* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readDec$d3(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readDec$d3* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readDec$d4(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readDec$d4* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readDec$d5(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readDec$d5* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readDec$d7(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readDec$d7* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readsPrec$d10(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d10* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readsPrec$d11(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d11* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readsPrec$d12(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d12* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readsPrec$d13(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d13* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readsPrec$d14(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d14* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readsPrec$d18(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d18* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readsPrec$d19(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d19* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readsPrec$d2(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d2* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readsPrec$d3(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d3* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readsPrec$d4(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d4* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readsPrec$d7(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d7* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Text_Read_readsPrec$d8(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d8* arg) A_STD A_FALIGNED;
static wptr_t E__fMain_e(gc_t gc,arena_t arena,struct sFMain_e* arg) A_STD A_FALIGNED;
static wptr_t E__fR$__fJhc_Basics_$pp(gc_t gc,arena_t arena,struct sFR$__fJhc_Basics_$pp* arg) A_STD A_FALIGNED;
static wptr_t E__fR$__fJhc_Show_11__showl(gc_t gc,arena_t arena,struct sFR$__fJhc_Show_11__showl* arg) A_STD A_FALIGNED;
static wptr_t E__fR$__fMain_1__aux(gc_t gc,arena_t arena,struct sFR$__fMain_1__aux* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fJhc_Inst_Show_showWordMax(gc_t gc,arena_t arena,struct sFW$__fJhc_Inst_Show_showWordMax* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fJhc_List_span$d3(gc_t gc,arena_t arena,struct sFW$__fJhc_List_span$d3* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fJhc_List_span$d4(gc_t gc,arena_t arena,struct sFW$__fJhc_List_span$d4* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fJhc_List_span$d5(gc_t gc,arena_t arena,struct sFW$__fJhc_List_span$d5* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fR$__fJhc_List_387__f(gc_t gc,arena_t arena,struct sFW$__fR$__fJhc_List_387__f* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2(gc_t gc,arena_t arena,struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3(gc_t gc,arena_t arena,struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4(gc_t gc,arena_t arena,struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6(gc_t gc,arena_t arena,struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7(gc_t gc,arena_t arena,struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d10(gc_t gc,arena_t arena,struct sFtheMain$d10* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d102(gc_t gc,arena_t arena,struct sFtheMain$d102* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d103(gc_t gc,arena_t arena,struct sFtheMain$d103* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d104(gc_t gc,arena_t arena,struct sFtheMain$d104* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d105(gc_t gc,arena_t arena,struct sFtheMain$d105* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d11(gc_t gc,arena_t arena,struct sFtheMain$d11* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d12(gc_t gc,arena_t arena,struct sFtheMain$d12* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d13(gc_t gc,arena_t arena,struct sFtheMain$d13* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d14(gc_t gc,arena_t arena,struct sFtheMain$d14* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d15(gc_t gc,arena_t arena,struct sFtheMain$d15* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d16(gc_t gc,arena_t arena,struct sFtheMain$d16* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d17(gc_t gc,arena_t arena,struct sFtheMain$d17* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d18(gc_t gc,arena_t arena,struct sFtheMain$d18* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d19(gc_t gc,arena_t arena,struct sFtheMain$d19* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d2(gc_t gc,arena_t arena,struct sFtheMain$d2* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d20(gc_t gc,arena_t arena,struct sFtheMain$d20* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d21(gc_t gc,arena_t arena,struct sFtheMain$d21* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d22(gc_t gc,arena_t arena,struct sFtheMain$d22* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d23(gc_t gc,arena_t arena,struct sFtheMain$d23* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d24(gc_t gc,arena_t arena,struct sFtheMain$d24* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d25(gc_t gc,arena_t arena,struct sFtheMain$d25* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d26(gc_t gc,arena_t arena,struct sFtheMain$d26* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d27(gc_t gc,arena_t arena,struct sFtheMain$d27* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d28(gc_t gc,arena_t arena,struct sFtheMain$d28* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d29(gc_t gc,arena_t arena,struct sFtheMain$d29* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d30(gc_t gc,arena_t arena,struct sFtheMain$d30* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d31(gc_t gc,arena_t arena,struct sFtheMain$d31* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d32(gc_t gc,arena_t arena,struct sFtheMain$d32* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d33(gc_t gc,arena_t arena,struct sFtheMain$d33* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d34(gc_t gc,arena_t arena,struct sFtheMain$d34* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d35(gc_t gc,arena_t arena,struct sFtheMain$d35* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d36(gc_t gc,arena_t arena,struct sFtheMain$d36* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d37(gc_t gc,arena_t arena,struct sFtheMain$d37* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d38(gc_t gc,arena_t arena,struct sFtheMain$d38* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d39(gc_t gc,arena_t arena,struct sFtheMain$d39* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d40(gc_t gc,arena_t arena,struct sFtheMain$d40* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d41(gc_t gc,arena_t arena,struct sFtheMain$d41* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d42(gc_t gc,arena_t arena,struct sFtheMain$d42* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d43(gc_t gc,arena_t arena,struct sFtheMain$d43* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d44(gc_t gc,arena_t arena,struct sFtheMain$d44* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d45(gc_t gc,arena_t arena,struct sFtheMain$d45* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d46(gc_t gc,arena_t arena,struct sFtheMain$d46* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d47(gc_t gc,arena_t arena,struct sFtheMain$d47* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d48(gc_t gc,arena_t arena,struct sFtheMain$d48* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d49(gc_t gc,arena_t arena,struct sFtheMain$d49* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d50(gc_t gc,arena_t arena,struct sFtheMain$d50* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d51(gc_t gc,arena_t arena,struct sFtheMain$d51* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d52(gc_t gc,arena_t arena,struct sFtheMain$d52* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d53(gc_t gc,arena_t arena,struct sFtheMain$d53* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d56(gc_t gc,arena_t arena,struct sFtheMain$d56* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d57(gc_t gc,arena_t arena,struct sFtheMain$d57* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d58(gc_t gc,arena_t arena,struct sFtheMain$d58* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d59(gc_t gc,arena_t arena,struct sFtheMain$d59* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d6(gc_t gc,arena_t arena,struct sFtheMain$d6* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d60(gc_t gc,arena_t arena,struct sFtheMain$d60* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d61(gc_t gc,arena_t arena,struct sFtheMain$d61* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d62(gc_t gc,arena_t arena,struct sFtheMain$d62* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d63(gc_t gc,arena_t arena,struct sFtheMain$d63* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d64(gc_t gc,arena_t arena,struct sFtheMain$d64* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d65(gc_t gc,arena_t arena,struct sFtheMain$d65* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d66(gc_t gc,arena_t arena,struct sFtheMain$d66* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d67(gc_t gc,arena_t arena,struct sFtheMain$d67* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d68(gc_t gc,arena_t arena,struct sFtheMain$d68* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d69(gc_t gc,arena_t arena,struct sFtheMain$d69* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d7(gc_t gc,arena_t arena,struct sFtheMain$d7* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d70(gc_t gc,arena_t arena,struct sFtheMain$d70* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d71(gc_t gc,arena_t arena,struct sFtheMain$d71* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d72(gc_t gc,arena_t arena,struct sFtheMain$d72* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d73(gc_t gc,arena_t arena,struct sFtheMain$d73* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d74(gc_t gc,arena_t arena,struct sFtheMain$d74* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d75(gc_t gc,arena_t arena,struct sFtheMain$d75* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d76(gc_t gc,arena_t arena,struct sFtheMain$d76* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d77(gc_t gc,arena_t arena,struct sFtheMain$d77* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d78(gc_t gc,arena_t arena,struct sFtheMain$d78* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d79(gc_t gc,arena_t arena,struct sFtheMain$d79* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d80(gc_t gc,arena_t arena,struct sFtheMain$d80* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d81(gc_t gc,arena_t arena,struct sFtheMain$d81* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d82(gc_t gc,arena_t arena,struct sFtheMain$d82* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d83(gc_t gc,arena_t arena,struct sFtheMain$d83* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d84(gc_t gc,arena_t arena,struct sFtheMain$d84* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d85(gc_t gc,arena_t arena,struct sFtheMain$d85* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d86(gc_t gc,arena_t arena,struct sFtheMain$d86* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d87(gc_t gc,arena_t arena,struct sFtheMain$d87* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d88(gc_t gc,arena_t arena,struct sFtheMain$d88* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d89(gc_t gc,arena_t arena,struct sFtheMain$d89* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d90(gc_t gc,arena_t arena,struct sFtheMain$d90* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d91(gc_t gc,arena_t arena,struct sFtheMain$d91* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d92(gc_t gc,arena_t arena,struct sFtheMain$d92* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d93(gc_t gc,arena_t arena,struct sFtheMain$d93* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d94(gc_t gc,arena_t arena,struct sFtheMain$d94* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d95(gc_t gc,arena_t arena,struct sFtheMain$d95* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d96(gc_t gc,arena_t arena,struct sFtheMain$d96* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d97(gc_t gc,arena_t arena,struct sFtheMain$d97* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d98(gc_t gc,arena_t arena,struct sFtheMain$d98* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d99(gc_t gc,arena_t arena,struct sFtheMain$d99* arg) A_STD A_FALIGNED;
void _amain(void) ;
static wptr_t bRfJhc_Text_Read_readsPrec(gc_t gc,arena_t arena,wptr_t v1469981828,wptr_t v239101394,sptr_t v108956883) A_STD A_MALLOC;
static uint16_t bRfW$__fJhc_Class_Ord_$ee(gc_t gc,arena_t arena,wptr_t v80100368,sptr_t v196335595,sptr_t v153480542) A_STD;
static void b__main(gc_t gc,arena_t arena) A_STD;
static wptr_t bap__1__Jhc_Text_Read_lex$d19u101648(gc_t gc,arena_t arena,wptr_t v3687,sptr_t v3689) A_STD A_MALLOC;
static wptr_t bap__1__Jhc_Text_Read_lex$d23u101636(gc_t gc,arena_t arena,wptr_t v3690,sptr_t v3692) A_STD A_MALLOC;
static wptr_t bap__1__Jhc_Text_Read_readsPrec$d17u101598(gc_t gc,arena_t arena,wptr_t v8335,sptr_t v8338) A_STD A_MALLOC;
static wptr_t bap__1__Jhc_Text_Read_readsPrec$d6u101624(gc_t gc,arena_t arena,wptr_t v3693,sptr_t v3695) A_STD A_MALLOC;
static wptr_t bapply__52652(gc_t gc,arena_t arena,wptr_t v1,sptr_t v2) A_STD A_MALLOC;
static wptr_t fJhc_Basics_$pp(gc_t gc,arena_t arena,wptr_t u1,sptr_t v132,sptr_t v134) A_STD A_MALLOC;
static wptr_t fJhc_Basics_45__go(gc_t gc,arena_t arena,sptr_t v732) A_STD A_MALLOC;
static wptr_t fJhc_Basics_concatMap(gc_t gc,arena_t arena,wptr_t v1001523235,wptr_t v568860709) A_STD A_MALLOC;
static wptr_t fJhc_Basics_concatMap$d2(gc_t gc,arena_t arena,wptr_t v196335304,sptr_t v197291872) A_STD A_MALLOC;
static wptr_t fJhc_IO_putErrLn(gc_t gc,arena_t arena,wptr_t v76) A_STD A_MALLOC;
static wptr_t fJhc_Monad_60__go(gc_t gc,arena_t arena,sptr_t v3371,uintptr_t v194635136) A_STD A_MALLOC;
static wptr_t fJhc_Show_shows(gc_t gc,arena_t arena,sptr_t v209100922,sptr_t v116668568) A_STD A_MALLOC;
static uint16_t fJhc_String_eqUnpackedString(gc_t gc,arena_t arena,uintptr_t v1487151143,sptr_t v1489641507) A_STD;
static wptr_t fJhc_Text_Read_119__isCharName(gc_t gc,arena_t arena,sptr_t v154420608) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_37__optional(gc_t gc,arena_t arena,sptr_t v155049464) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_55__lexString(gc_t gc,arena_t arena,sptr_t v4536) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_77__isSym(gc_t gc,arena_t arena,sptr_t v75583674) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_78__isIdChar(gc_t gc,arena_t arena,sptr_t v194346574) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_80__lexExp(gc_t gc,arena_t arena,sptr_t v4638) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex(gc_t gc,arena_t arena,sptr_t v4514) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d10(gc_t gc,arena_t arena,sptr_t v146663952,wptr_t v94356368) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d11(gc_t gc,arena_t arena,sptr_t v123321940) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d12(gc_t gc,arena_t arena,sptr_t v31637636,sptr_t v260457476) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d13(gc_t gc,arena_t arena,sptr_t v4703652,sptr_t v73786438) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d14(gc_t gc,arena_t arena,sptr_t v4666) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d15(gc_t gc,arena_t arena,sptr_t v33337812,sptr_t v118721818) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d16(gc_t gc,arena_t arena,sptr_t v251806218,sptr_t v132679396) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d17(gc_t gc,arena_t arena,sptr_t v70238678) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d18(gc_t gc,arena_t arena,sptr_t v224424526,sptr_t v62470114) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d19(gc_t gc,arena_t arena,sptr_t v154420602,sptr_t v256943494,sptr_t v73786434,wptr_t v256943492,wptr_t v151167344) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d2(gc_t gc,arena_t arena,sptr_t v220263212,wptr_t v15353778) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d20(gc_t gc,arena_t arena,sptr_t v44000678,sptr_t v215884490,sptr_t v235511034) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d21(gc_t gc,arena_t arena,sptr_t v9330,sptr_t v4664,sptr_t v59150094) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d22(gc_t gc,arena_t arena,sptr_t v3956088,sptr_t v226176096) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d23(gc_t gc,arena_t arena,sptr_t v117603324,wptr_t v194492354,wptr_t v120257690) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d24(gc_t gc,arena_t arena,sptr_t v19667944,sptr_t v235206652,sptr_t v1674606) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d25(gc_t gc,arena_t arena,sptr_t v240515376,sptr_t v145315036,sptr_t v99988810) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d26(gc_t gc,arena_t arena,sptr_t v4660,sptr_t v4662) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d27(gc_t gc,arena_t arena,sptr_t v125735152,sptr_t v80256462) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d28(gc_t gc,arena_t arena,sptr_t v156312468,sptr_t v103925136) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d29(gc_t gc,arena_t arena,sptr_t v73786436,sptr_t v247305780) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d3(gc_t gc,arena_t arena,sptr_t v235511028) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d30(gc_t gc,arena_t arena,sptr_t v4620,sptr_t v90861654) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d31(gc_t gc,arena_t arena,sptr_t v29375122) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d32(gc_t gc,arena_t arena,sptr_t v237919336) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d4(gc_t gc,arena_t arena,sptr_t v182966158) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d5(gc_t gc,arena_t arena,sptr_t v105553374,sptr_t v46454712) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d6(gc_t gc,arena_t arena,sptr_t v13920,sptr_t v163734718) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d7(gc_t gc,arena_t arena,sptr_t v236706538) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d8(gc_t gc,arena_t arena,sptr_t v1780410) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lex$d9(gc_t gc,arena_t arena,sptr_t v120834808) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexDigits(gc_t gc,arena_t arena,sptr_t v51476040) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar(gc_t gc,arena_t arena,sptr_t v4690) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d10(gc_t gc,arena_t arena,sptr_t v18087954) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d11(gc_t gc,arena_t arena,sptr_t v251973248) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d12(gc_t gc,arena_t arena,sptr_t v160744294) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d13(gc_t gc,arena_t arena,sptr_t v202657652) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d14(gc_t gc,arena_t arena,sptr_t v4706) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d15(gc_t gc,arena_t arena,sptr_t v183861074) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d16(gc_t gc,arena_t arena,sptr_t v105734068) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d2(gc_t gc,arena_t arena,sptr_t v242479200) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d3(gc_t gc,arena_t arena,sptr_t v44000686) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d4(gc_t gc,arena_t arena,sptr_t v4728) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d5(gc_t gc,arena_t arena,sptr_t v132127022) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d6(gc_t gc,arena_t arena,sptr_t v109251718) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d7(gc_t gc,arena_t arena,sptr_t v13593612) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d8(gc_t gc,arena_t arena,sptr_t v264446470) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_lexLitChar$d9(gc_t gc,arena_t arena,sptr_t v203039192) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_nonnull(gc_t gc,arena_t arena,wptr_t v80256464,sptr_t v75583676) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_nonnull$d2(gc_t gc,arena_t arena,sptr_t v137248436,wptr_t v119549090) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_nonnull$d3(gc_t gc,arena_t arena,sptr_t v146226746) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_nonnull$d4(gc_t gc,arena_t arena,wptr_t v426379305,sptr_t v429000745) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readDec(gc_t gc,arena_t arena,sptr_t v119549118) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readDec$d2(gc_t gc,arena_t arena,sptr_t v182639128) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readDec$d3(gc_t gc,arena_t arena,sptr_t v107672530) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readDec$d4(gc_t gc,arena_t arena,sptr_t v124005364) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readDec$d5(gc_t gc,arena_t arena,sptr_t v228308044,sptr_t v264254036) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readDec$d6(gc_t gc,arena_t arena,sptr_t v151155888,sptr_t v44725406) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readDec$d7(gc_t gc,arena_t arena,sptr_t v264254038) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec(gc_t gc,arena_t arena,wptr_t v1469980709,wptr_t v239100274,sptr_t v108955762) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d10(gc_t gc,arena_t arena,sptr_t v111142936) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d11(gc_t gc,arena_t arena,sptr_t v2998636) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d12(gc_t gc,arena_t arena,sptr_t v237992582) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d13(gc_t gc,arena_t arena,sptr_t v64932578) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d14(gc_t gc,arena_t arena,sptr_t v199109178) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d15(gc_t gc,arena_t arena,sptr_t v11885916,wptr_t v150560726) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d16(gc_t gc,arena_t arena,sptr_t v8986,sptr_t v86998726) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d17(gc_t gc,arena_t arena,wptr_t v418666,sptr_t v236706540,wptr_t v135303430) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d18(gc_t gc,arena_t arena,sptr_t v78256144) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d19(gc_t gc,arena_t arena,sptr_t v237284568) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d2(gc_t gc,arena_t arena,sptr_t v15858616) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d3(gc_t gc,arena_t arena,sptr_t v258411590) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d4(gc_t gc,arena_t arena,sptr_t v130564416) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d5(gc_t gc,arena_t arena,sptr_t v4458,sptr_t v70380424) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d6(gc_t gc,arena_t arena,sptr_t v165129190,wptr_t v182966160,wptr_t v45539882) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d7(gc_t gc,arena_t arena,sptr_t v214782328) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d8(gc_t gc,arena_t arena,sptr_t v324274215) A_STD A_MALLOC;
static wptr_t fJhc_Text_Read_readsPrec$d9(gc_t gc,arena_t arena,sptr_t v257664008,wptr_t v217646342) A_STD A_MALLOC;
static wptr_t fMain_e(gc_t gc,arena_t arena) A_STD A_MALLOC;
static wptr_t fMain_toDigits(gc_t gc,arena_t arena,wptr_t v224371662) A_STD A_MALLOC;
static wptr_t fNumeric_38__read$tt(gc_t gc,arena_t arena,sptr_t v310380571) A_STD A_MALLOC;
static wptr_t fPrelude_CType_isDigit(gc_t gc,arena_t arena,sptr_t v208364914) A_STD A_MALLOC;
static wptr_t fPrelude_CType_isHexDigit(gc_t gc,arena_t arena,sptr_t v227981058) A_STD A_MALLOC;
static wptr_t fPrelude_CType_isOctDigit(gc_t gc,arena_t arena,sptr_t v56741150) A_STD A_MALLOC;
static wptr_t fR$__fJhc_Basics_$pp(gc_t gc,arena_t arena,sptr_t v242021448,sptr_t v123491440) A_STD A_MALLOC;
static wptr_t fR$__fJhc_Show_11__showl(gc_t gc,arena_t arena,sptr_t v108431528,wptr_t v267777212) A_STD A_MALLOC;
static wptr_t fR$__fMain_1__aux(gc_t gc,arena_t arena,sptr_t v90719986) A_STD A_MALLOC;
static wptr_t fW$__fForeign_C_String_peekCAString(gc_t gc,arena_t arena,uintptr_t v1204683321) A_STD A_MALLOC;
static uint16_t fW$__fInstance$__iJhc_Class_Ord_$se_$efault(gc_t gc,arena_t arena,sptr_t v1050019877,wptr_t v1052379175) A_STD;
static uint16_t fW$__fJhc_Class_Ord_$ee(gc_t gc,arena_t arena,wptr_t v80100080,sptr_t v196335306,wptr_t v153480252) A_STD;
static wptr_t fW$__fJhc_Inst_Show_showWordMax(gc_t gc,arena_t arena,uintmax_t v978199091,sptr_t v981475885) A_STD A_MALLOC;
static struct tup2 fW$__fJhc_List_span(gc_t gc,arena_t arena,wptr_t v278,sptr_t v662) A_STD;
static struct tup1 fW$__fJhc_List_span$d2(gc_t gc,arena_t arena,sptr_t v127754094,sptr_t v100210680) A_STD;
static wptr_t fW$__fJhc_List_span$d3(gc_t gc,arena_t arena,sptr_t v4806,wptr_t v103925132) A_STD A_MALLOC;
static wptr_t fW$__fJhc_List_span$d4(gc_t gc,arena_t arena,sptr_t v827722285) A_STD A_MALLOC;
static wptr_t fW$__fJhc_List_span$d5(gc_t gc,arena_t arena,sptr_t v230320876) A_STD A_MALLOC;
static uint16_t fW$__fJhc_Text_Read_119__isCharName(gc_t gc,arena_t arena,uint32_t v1427776565) A_STD;
static uint16_t fW$__fJhc_Text_Read_77__isSym(gc_t gc,arena_t arena,sptr_t v370018343) A_STD;
static uint16_t fW$__fJhc_Text_Read_78__isIdChar(gc_t gc,arena_t arena,uint32_t v1450189875) A_STD;
static wptr_t fW$__fMain_ratTrans(gc_t gc,arena_t arena,sptr_t v15781990,sptr_t v236341778,uintmax_t v168089166,uintmax_t v38225102,sptr_t v211324750) A_STD A_MALLOC;
static uint32_t fW$__fPrelude_CType_digitToInt(gc_t gc,arena_t arena,uint32_t v2047609395) A_STD;
static uint16_t fW$__fPrelude_CType_isAlpha(gc_t gc,arena_t arena,uint32_t v2024671793) A_STD;
static uint16_t fW$__fPrelude_CType_isAlphaNum(gc_t gc,arena_t arena,uint32_t v2021394995) A_STD;
static uint16_t fW$__fPrelude_CType_isDigit(gc_t gc,arena_t arena,uint32_t v2061765169) A_STD;
static uint16_t fW$__fPrelude_CType_isHexDigit(gc_t gc,arena_t arena,uint32_t v49838044) A_STD;
static wptr_t fW$__fPrelude_CType_isHexDigit$d2(gc_t gc,arena_t arena,uint32_t v2054687283) A_STD A_MALLOC;
static wptr_t fW$__fPrelude_CType_isHexDigit$d3(gc_t gc,arena_t arena,uint32_t v159335782) A_STD A_MALLOC;
static uint16_t fW$__fPrelude_CType_isOctDigit(gc_t gc,arena_t arena,uint32_t v2068318771) A_STD;
static uint16_t fW$__fPrelude_CType_isSpace(gc_t gc,arena_t arena,sptr_t v1261576229) A_STD;
static wptr_t fW$__fR$__fJhc_List_387__f(gc_t gc,arena_t arena,uint32_t v135170746,sptr_t v168294378) A_STD A_MALLOC;
static uint16_t fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc_t gc,arena_t arena,sptr_t v9226,wptr_t v4652) A_STD;
static struct tup1 fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default(gc_t gc,arena_t arena,uintmax_t v20524842,uintmax_t v79605934) A_STD;
static wptr_t fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2(gc_t gc,arena_t arena,uintmax_t v1502880821,uintmax_t v1506288693) A_STD A_MALLOC;
static wptr_t fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3(gc_t gc,arena_t arena,uintmax_t v120087512,uintmax_t v245784000) A_STD A_MALLOC;
static wptr_t fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4(gc_t gc,arena_t arena,sptr_t v165876934) A_STD A_MALLOC;
static wptr_t fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d5(gc_t gc,arena_t arena,uintmax_t v142194674) A_STD A_MALLOC;
static wptr_t fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6(gc_t gc,arena_t arena,sptr_t v108428556) A_STD A_MALLOC;
static wptr_t fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7(gc_t gc,arena_t arena,sptr_t v214782330,uintmax_t v227732182) A_STD A_MALLOC;
static uint16_t fW$__fx130476104(gc_t gc,arena_t arena,uint32_t v1632112673) A_STD;
static uint16_t fW$__fx2971480(gc_t gc,arena_t arena,uint32_t v1423582241) A_STD;
static wptr_t fW$__fx43121472(gc_t gc,arena_t arena,sptr_t v94629386,sptr_t v1513235511) A_STD A_MALLOC;
static uint16_t fW$__fx7909411(gc_t gc,arena_t arena,uint32_t v1425679393) A_STD;
static void ftheMain(gc_t gc,arena_t arena) A_STD;
static wptr_t ftheMain$d10(gc_t gc,arena_t arena,uintmax_t v37789460,wptr_t v60040038,uintmax_t v73700198,uintmax_t v163333524,uintmax_t v180953426,sptr_t v218886262,uintmax_t v254435822,wptr_t v263126040) A_STD A_MALLOC;
static wptr_t ftheMain$d100(gc_t gc,arena_t arena,uintmax_t v143960010,sptr_t v124005366) A_STD A_MALLOC;
static wptr_t ftheMain$d101(gc_t gc,arena_t arena,uintmax_t v187576970,uintmax_t v197827702,uintmax_t v128930122,uintmax_t v194551966,uintmax_t v133549784,wptr_t v11483698,sptr_t v212907558,sptr_t v65086124,wptr_t v110948000) A_STD A_MALLOC;
static wptr_t ftheMain$d102(gc_t gc,arena_t arena,uintmax_t v28009248,uintmax_t v58800110,uintmax_t v75172702,uintmax_t v100615624,uintmax_t v237284570,wptr_t v177337776,sptr_t v24133714,wptr_t v226245508) A_STD A_MALLOC;
static wptr_t ftheMain$d103(gc_t gc,arena_t arena,uintmax_t v142590192,uintmax_t v111346352,sptr_t v94426894) A_STD A_MALLOC;
static wptr_t ftheMain$d104(gc_t gc,arena_t arena,sptr_t v59069482) A_STD A_MALLOC;
static wptr_t ftheMain$d105(gc_t gc,arena_t arena) A_STD A_MALLOC;
static wptr_t ftheMain$d11(gc_t gc,arena_t arena,uintmax_t v62352840,sptr_t v165942926,uintmax_t v46616538) A_STD A_MALLOC;
static wptr_t ftheMain$d12(gc_t gc,arena_t arena,uintmax_t v42118966,sptr_t v151514826) A_STD A_MALLOC;
static wptr_t ftheMain$d13(gc_t gc,arena_t arena,uintmax_t v158253518,sptr_t v218150378,uintmax_t v80007680,sptr_t v102891954,sptr_t v160680478,uintmax_t v267370364) A_STD A_MALLOC;
static wptr_t ftheMain$d14(gc_t gc,arena_t arena,sptr_t v241147974,sptr_t v143113406,sptr_t v1980458) A_STD A_MALLOC;
static wptr_t ftheMain$d15(gc_t gc,arena_t arena,uintmax_t v205779224,sptr_t v76303190,wptr_t v118052050,uintmax_t v46454716,sptr_t v191652910,wptr_t v212944728,sptr_t v240673846,sptr_t v264192728) A_STD A_MALLOC;
static wptr_t ftheMain$d16(gc_t gc,arena_t arena,sptr_t v131690228,sptr_t v243465248,sptr_t v125949672) A_STD A_MALLOC;
static wptr_t ftheMain$d17(gc_t gc,arena_t arena,sptr_t v239100278,sptr_t v159700510,sptr_t v173997446) A_STD A_MALLOC;
static wptr_t ftheMain$d18(gc_t gc,arena_t arena,uintmax_t v51274848,sptr_t v29077244,wptr_t v78939490,uintmax_t v110207574,sptr_t v120834810,wptr_t v196551380,sptr_t v183082878,sptr_t v1780406) A_STD A_MALLOC;
static wptr_t ftheMain$d19(gc_t gc,arena_t arena,sptr_t v2171400,sptr_t v263919152,sptr_t v167139934) A_STD A_MALLOC;
static wptr_t ftheMain$d2(gc_t gc,arena_t arena,uint32_t v187320696,uint32_t v115160440) A_STD A_MALLOC;
static wptr_t ftheMain$d20(gc_t gc,arena_t arena,sptr_t v161788968,sptr_t v145737754,sptr_t v117501958) A_STD A_MALLOC;
static wptr_t ftheMain$d21(gc_t gc,arena_t arena,uintmax_t v141244512,sptr_t v130564414,wptr_t v105527380,wptr_t v153504076,uintmax_t v21055632,sptr_t v15858620,sptr_t v169909354,sptr_t v45052584) A_STD A_MALLOC;
static wptr_t ftheMain$d22(gc_t gc,arena_t arena,sptr_t v223132534,sptr_t v125714784,sptr_t v203991440) A_STD A_MALLOC;
static wptr_t ftheMain$d23(gc_t gc,arena_t arena,sptr_t v223108754,sptr_t v164501550,sptr_t v68911720) A_STD A_MALLOC;
static wptr_t ftheMain$d24(gc_t gc,arena_t arena,uintmax_t v58334288,sptr_t v253791876,wptr_t v125536984,uintmax_t v237992584,wptr_t v186917922,sptr_t v172090968,sptr_t v111142934,sptr_t v202961034) A_STD A_MALLOC;
static wptr_t ftheMain$d25(gc_t gc,arena_t arena,sptr_t v153504074,sptr_t v249570746,sptr_t v263650746) A_STD A_MALLOC;
static wptr_t ftheMain$d26(gc_t gc,arena_t arena,uintmax_t v35878050,sptr_t v195325126) A_STD A_MALLOC;
static wptr_t ftheMain$d27(gc_t gc,arena_t arena,uintmax_t v40090100,uintmax_t v97832272,sptr_t v244592736,uintmax_t v255047276,sptr_t v240508882,sptr_t v185347146) A_STD A_MALLOC;
static wptr_t ftheMain$d28(gc_t gc,arena_t arena,sptr_t v1896400,sptr_t v190594772,sptr_t v176422428) A_STD A_MALLOC;
static wptr_t ftheMain$d29(gc_t gc,arena_t arena,wptr_t v26450574,uintmax_t v128764926,sptr_t v7598848,uintmax_t v123670240,sptr_t v186043006,wptr_t v189036904,sptr_t v267321786,sptr_t v58750240) A_STD A_MALLOC;
static wptr_t ftheMain$d3(gc_t gc,arena_t arena,sptr_t v1509696567,sptr_t v1516774455,sptr_t v1520313399) A_STD A_MALLOC;
static wptr_t ftheMain$d30(gc_t gc,arena_t arena,sptr_t v27092182,sptr_t v205904152,sptr_t v223322624) A_STD A_MALLOC;
static wptr_t ftheMain$d31(gc_t gc,arena_t arena,sptr_t v47625414,sptr_t v167193546,sptr_t v50167690) A_STD A_MALLOC;
static wptr_t ftheMain$d32(gc_t gc,arena_t arena,uintmax_t v238570486,sptr_t v167886986,wptr_t v99676084,uintmax_t v56741148,sptr_t v92400194,wptr_t v186377428,sptr_t v235480816,sptr_t v196970364) A_STD A_MALLOC;
static wptr_t ftheMain$d33(gc_t gc,arena_t arena,sptr_t v32506482,sptr_t v253381940,sptr_t v160021402) A_STD A_MALLOC;
static wptr_t ftheMain$d34(gc_t gc,arena_t arena,sptr_t v29208316,sptr_t v181560322,sptr_t v32158690) A_STD A_MALLOC;
static wptr_t ftheMain$d35(gc_t gc,arena_t arena,wptr_t v7252610,uintmax_t v73700196,sptr_t v218886264,uintmax_t v11751994,sptr_t v241309826,wptr_t v202424670,sptr_t v174020696,sptr_t v245228924) A_STD A_MALLOC;
static wptr_t ftheMain$d36(gc_t gc,arena_t arena,sptr_t v140079098,sptr_t v77402378,sptr_t v73437330) A_STD A_MALLOC;
static wptr_t ftheMain$d37(gc_t gc,arena_t arena,sptr_t v11006260,sptr_t v204742008,sptr_t v95584984) A_STD A_MALLOC;
static wptr_t ftheMain$d38(gc_t gc,arena_t arena,uintmax_t v90105170,sptr_t v100210678,wptr_t v131747560,uintmax_t v212413206,wptr_t v178413712,sptr_t v35624300,sptr_t v207549704,sptr_t v262424426) A_STD A_MALLOC;
static wptr_t ftheMain$d39(gc_t gc,arena_t arena,sptr_t v21280168,sptr_t v216450962,sptr_t v173801154) A_STD A_MALLOC;
static wptr_t ftheMain$d4(gc_t gc,arena_t arena,sptr_t v1609835549,sptr_t v267321788) A_STD A_MALLOC;
static wptr_t ftheMain$d40(gc_t gc,arena_t arena,uintmax_t v148294368,sptr_t v88032712) A_STD A_MALLOC;
static wptr_t ftheMain$d41(gc_t gc,arena_t arena,uintmax_t v71121692,sptr_t v4177722,uintmax_t v247844062,sptr_t v218239112,uintmax_t v251858414,sptr_t v244867476) A_STD A_MALLOC;
static wptr_t ftheMain$d42(gc_t gc,arena_t arena,sptr_t v194402432,sptr_t v194402430,sptr_t v1339532) A_STD A_MALLOC;
static wptr_t ftheMain$d43(gc_t gc,arena_t arena,wptr_t v50432186,uintmax_t v201297312,sptr_t v178901588,wptr_t v143261710,uintmax_t v135594734,sptr_t v212933204,sptr_t v36059414,sptr_t v176934666) A_STD A_MALLOC;
static wptr_t ftheMain$d44(gc_t gc,arena_t arena,sptr_t v76020826,sptr_t v144748910,sptr_t v117752372) A_STD A_MALLOC;
static wptr_t ftheMain$d45(gc_t gc,arena_t arena,sptr_t v12973502,sptr_t v22604480,sptr_t v224988700) A_STD A_MALLOC;
static wptr_t ftheMain$d46(gc_t gc,arena_t arena,uintmax_t v160064800,sptr_t v247340480,uintmax_t v50432182,wptr_t v202526180,sptr_t v143261706,sptr_t v107672532,sptr_t v257529850,wptr_t v268164220) A_STD A_MALLOC;
static wptr_t ftheMain$d47(gc_t gc,arena_t arena,sptr_t v222848750,sptr_t v122214794,sptr_t v61551850) A_STD A_MALLOC;
static wptr_t ftheMain$d48(gc_t gc,arena_t arena,sptr_t v100335388,sptr_t v133026458,sptr_t v77277006) A_STD A_MALLOC;
static wptr_t ftheMain$d49(gc_t gc,arena_t arena,uintmax_t v146854714,sptr_t v69432564,wptr_t v115766314,wptr_t v118138962,uintmax_t v88379832,sptr_t v113838344,sptr_t v267751048,sptr_t v51476038) A_STD A_MALLOC;
static wptr_t ftheMain$d5(gc_t gc,arena_t arena,sptr_t v168294380) A_STD A_MALLOC;
static wptr_t ftheMain$d50(gc_t gc,arena_t arena,sptr_t v99676086,sptr_t v81057818,sptr_t v186377426) A_STD A_MALLOC;
static wptr_t ftheMain$d51(gc_t gc,arena_t arena,sptr_t v133804448,sptr_t v90351748,sptr_t v6503382) A_STD A_MALLOC;
static wptr_t ftheMain$d52(gc_t gc,arena_t arena,uintmax_t v228202152,sptr_t v67338508,wptr_t v97730302,wptr_t v155054262,uintmax_t v232701278,sptr_t v67443750,sptr_t v227078458,sptr_t v68153294) A_STD A_MALLOC;
static wptr_t ftheMain$d53(gc_t gc,arena_t arena,sptr_t v91594902,sptr_t v191240590,sptr_t v243604030) A_STD A_MALLOC;
static wptr_t ftheMain$d54(gc_t gc,arena_t arena,uintmax_t v265780748,sptr_t v202526710) A_STD A_MALLOC;
static wptr_t ftheMain$d55(gc_t gc,arena_t arena,uintmax_t v27187224,uintmax_t v166026142,wptr_t v98700307,uintmax_t v246261760,uintmax_t v212002256,sptr_t v86240096,uintmax_t v206413094,sptr_t v85212620,wptr_t v124940246) A_STD A_MALLOC;
static wptr_t ftheMain$d56(gc_t gc,arena_t arena,uintmax_t v211219934,uintmax_t v76769902,wptr_t v135170750,uintmax_t v145315034,uintmax_t v134427062,wptr_t v168294382,sptr_t v202526176,uintmax_t v235206648) A_STD A_MALLOC;
static wptr_t ftheMain$d57(gc_t gc,arena_t arena,uintmax_t v109658024,sptr_t v122891998,uintmax_t v172338608) A_STD A_MALLOC;
static wptr_t ftheMain$d58(gc_t gc,arena_t arena,uintmax_t v156390956,sptr_t v62866276) A_STD A_MALLOC;
static wptr_t ftheMain$d59(gc_t gc,arena_t arena,uintmax_t v48036060,sptr_t v103985158,uintmax_t v221518978,sptr_t v12973504,sptr_t v152966622,uintmax_t v267892974) A_STD A_MALLOC;
static wptr_t ftheMain$d6(gc_t gc,arena_t arena,sptr_t v254050128) A_STD A_MALLOC;
static wptr_t ftheMain$d60(gc_t gc,arena_t arena,sptr_t v224813030,sptr_t v151514824,sptr_t v253021000) A_STD A_MALLOC;
static wptr_t ftheMain$d61(gc_t gc,arena_t arena,wptr_t v23565124,uintmax_t v268164216,sptr_t v53399310,wptr_t v132127026,uintmax_t v88760326,sptr_t v169337066,sptr_t v243821966,sptr_t v186011614) A_STD A_MALLOC;
static wptr_t ftheMain$d62(gc_t gc,arena_t arena,sptr_t v226286984,sptr_t v85433876,sptr_t v41049686) A_STD A_MALLOC;
static wptr_t ftheMain$d63(gc_t gc,arena_t arena,sptr_t v54193220,sptr_t v187028908,sptr_t v75144258) A_STD A_MALLOC;
static wptr_t ftheMain$d64(gc_t gc,arena_t arena,uintmax_t v30776898,sptr_t v122892000,uintmax_t v264841574,wptr_t v194346578,sptr_t v52515414,wptr_t v230320880,sptr_t v25494360,sptr_t v95073924) A_STD A_MALLOC;
static wptr_t ftheMain$d65(gc_t gc,arena_t arena,sptr_t v131747558,sptr_t v219478860,sptr_t v3576054) A_STD A_MALLOC;
static wptr_t ftheMain$d66(gc_t gc,arena_t arena,sptr_t v91079760,sptr_t v79607518,sptr_t v82965324) A_STD A_MALLOC;
static wptr_t ftheMain$d67(gc_t gc,arena_t arena,wptr_t v15858618,uintmax_t v151167346,sptr_t v24658036,uintmax_t v150886634,wptr_t v169909358,sptr_t v194492356,sptr_t v226176100,sptr_t v240576404) A_STD A_MALLOC;
static wptr_t ftheMain$d68(gc_t gc,arena_t arena,sptr_t v222510914,sptr_t v221098676,sptr_t v194562812) A_STD A_MALLOC;
static wptr_t ftheMain$d69(gc_t gc,arena_t arena,sptr_t v111018028,sptr_t v190688244,sptr_t v228163042) A_STD A_MALLOC;
static wptr_t ftheMain$d7(gc_t gc,arena_t arena) A_STD A_MALLOC;
static wptr_t ftheMain$d70(gc_t gc,arena_t arena,uintmax_t v115766306,sptr_t v118138960,uintmax_t v197085302,wptr_t v196970362,sptr_t v146793348,wptr_t v235480820,sptr_t v198205320,sptr_t v135243418) A_STD A_MALLOC;
static wptr_t ftheMain$d71(gc_t gc,arena_t arena,sptr_t v142763144,sptr_t v168604006,sptr_t v16254244) A_STD A_MALLOC;
static wptr_t ftheMain$d72(gc_t gc,arena_t arena,uintmax_t v79172084,sptr_t v233337134) A_STD A_MALLOC;
static wptr_t ftheMain$d73(gc_t gc,arena_t arena,uintmax_t v177805554,sptr_t v148154794,sptr_t v176065412,uintmax_t v140188292,uintmax_t v158044792,sptr_t v6704986) A_STD A_MALLOC;
static wptr_t ftheMain$d74(gc_t gc,arena_t arena,sptr_t v189794416,sptr_t v242072928,sptr_t v79562122) A_STD A_MALLOC;
static wptr_t ftheMain$d75(gc_t gc,arena_t arena,uintmax_t v59033972,sptr_t v242021444,sptr_t v82003538,uintmax_t v123491438,wptr_t v202657656,sptr_t v56119430,wptr_t v221385244,sptr_t v92909418) A_STD A_MALLOC;
static wptr_t ftheMain$d76(gc_t gc,arena_t arena,sptr_t v68454642,sptr_t v221485828,sptr_t v121824440) A_STD A_MALLOC;
static wptr_t ftheMain$d77(gc_t gc,arena_t arena,sptr_t v70208272,sptr_t v17089572,sptr_t v94909436) A_STD A_MALLOC;
static wptr_t ftheMain$d78(gc_t gc,arena_t arena,wptr_t v23036004,wptr_t v60561606,uintmax_t v177904412,sptr_t v129035594,sptr_t v102549692,uintmax_t v132292954,sptr_t v115557552,sptr_t v44963750) A_STD A_MALLOC;
static wptr_t ftheMain$d79(gc_t gc,arena_t arena,sptr_t v8898200,sptr_t v243827952,sptr_t v166857224) A_STD A_MALLOC;
static wptr_t ftheMain$d8(gc_t gc,arena_t arena,uintmax_t v223424584,sptr_t v23503988) A_STD A_MALLOC;
static wptr_t ftheMain$d80(gc_t gc,arena_t arena,sptr_t v131031422,sptr_t v78937326,sptr_t v195552932) A_STD A_MALLOC;
static wptr_t ftheMain$d81(gc_t gc,arena_t arena,wptr_t v4703650,uintmax_t v44540626,sptr_t v97730300,sptr_t v155054258,wptr_t v154338570,uintmax_t v101519596,sptr_t v129659908,sptr_t v220415142) A_STD A_MALLOC;
static wptr_t ftheMain$d82(gc_t gc,arena_t arena,sptr_t v31577664,sptr_t v230133320,sptr_t v234052162) A_STD A_MALLOC;
static wptr_t ftheMain$d83(gc_t gc,arena_t arena,sptr_t v8056232,sptr_t v251295706,sptr_t v39675364) A_STD A_MALLOC;
static wptr_t ftheMain$d84(gc_t gc,arena_t arena,uintmax_t v255683962,sptr_t v913262,sptr_t v208569442,uintmax_t v243957158,wptr_t v174468706,sptr_t v170030616,wptr_t v231532614,sptr_t v225564906) A_STD A_MALLOC;
static wptr_t ftheMain$d85(gc_t gc,arena_t arena,sptr_t v42368142,sptr_t v101335934,sptr_t v170522258) A_STD A_MALLOC;
static wptr_t ftheMain$d86(gc_t gc,arena_t arena,uintmax_t v13690786,sptr_t v107001064) A_STD A_MALLOC;
static wptr_t ftheMain$d87(gc_t gc,arena_t arena,uintmax_t v141005604,sptr_t v51997480,uintmax_t v261403798,sptr_t v111487810,uintmax_t v173761890,sptr_t v3653046) A_STD A_MALLOC;
static wptr_t ftheMain$d88(gc_t gc,arena_t arena,sptr_t v30877582,sptr_t v88353268,sptr_t v229934424) A_STD A_MALLOC;
static wptr_t ftheMain$d89(gc_t gc,arena_t arena,uintmax_t v196079998,sptr_t v42111264,wptr_t v125929212,uintmax_t v217358908,sptr_t v169786048,wptr_t v218789760,sptr_t v122154544,sptr_t v120254442) A_STD A_MALLOC;
static wptr_t ftheMain$d9(gc_t gc,arena_t arena,uintmax_t v266106780,uintmax_t v206133682,uintmax_t v118052046,uintmax_t v212944726,sptr_t v143119116,wptr_t v240263364,uintmax_t v32685996,sptr_t v124449680,wptr_t v40405754) A_STD A_MALLOC;
static wptr_t ftheMain$d90(gc_t gc,arena_t arena,sptr_t v63275270,sptr_t v65562080,sptr_t v46072008) A_STD A_MALLOC;
static wptr_t ftheMain$d91(gc_t gc,arena_t arena,sptr_t v5097150,sptr_t v160358334,sptr_t v116984016) A_STD A_MALLOC;
static wptr_t ftheMain$d92(gc_t gc,arena_t arena,uintmax_t v66251200,sptr_t v163322718,wptr_t v117945880,uintmax_t v155808982,sptr_t v90955818,wptr_t v172897314,sptr_t v225040670,sptr_t v126919652) A_STD A_MALLOC;
static wptr_t ftheMain$d93(gc_t gc,arena_t arena,sptr_t v39764832,sptr_t v156427568,sptr_t v148389326) A_STD A_MALLOC;
static wptr_t ftheMain$d94(gc_t gc,arena_t arena,sptr_t v17980060,sptr_t v57262136,sptr_t v90351750) A_STD A_MALLOC;
static wptr_t ftheMain$d95(gc_t gc,arena_t arena,wptr_t v20524848,uintmax_t v125929210,sptr_t v82235056,wptr_t v79605940,uintmax_t v227676688,sptr_t v70889122,sptr_t v134677014,sptr_t v98508474) A_STD A_MALLOC;
static wptr_t ftheMain$d96(gc_t gc,arena_t arena,sptr_t v206812774,sptr_t v154762170,sptr_t v130793048) A_STD A_MALLOC;
static wptr_t ftheMain$d97(gc_t gc,arena_t arena,sptr_t v53820784,sptr_t v163603298,sptr_t v9458696) A_STD A_MALLOC;
static wptr_t ftheMain$d98(gc_t gc,arena_t arena,uintmax_t v47792490,sptr_t v10461222,wptr_t v143960016,uintmax_t v43838984,sptr_t v136306590,wptr_t v217646346,sptr_t v74909130,sptr_t v52608294) A_STD A_MALLOC;
static wptr_t ftheMain$d99(gc_t gc,arena_t arena,sptr_t v45108862,sptr_t v189920630,sptr_t v110426252) A_STD A_MALLOC;
struct tup1 {
    sptr_t t0;
    sptr_t t1;
};

struct tup4 {
    sptr_t t0;
    sptr_t t1;
    sptr_t t2;
};

struct tup3 {
    sptr_t t0;
    sptr_t t1;
    sptr_t t2;
    sptr_t t3;
    sptr_t t4;
};

struct tup10 {
    sptr_t t0;
    sptr_t t1;
    sptr_t t4;
    uintmax_t t2;
    uintmax_t t3;
};

struct tup12 {
    sptr_t t2;
    sptr_t t5;
    sptr_t t7;
    sptr_t t8;
    uintmax_t t0;
    uintmax_t t1;
    uintmax_t t3;
    uintmax_t t4;
    uintmax_t t6;
};

struct tup9 {
    sptr_t t4;
    sptr_t t5;
    sptr_t t7;
    sptr_t t8;
    uintmax_t t0;
    uintmax_t t1;
    uintmax_t t2;
    uintmax_t t3;
    uintmax_t t6;
};

struct tup11 {
    sptr_t t5;
    sptr_t t6;
    sptr_t t7;
    sptr_t t8;
    uintmax_t t0;
    uintmax_t t1;
    uintmax_t t2;
    uintmax_t t3;
    uintmax_t t4;
};

struct tup2 {
    wptr_t t0;
    sptr_t t1;
};
/* CAFS */
/* v-1782589455 = (FMain.e)*/
static node_t _g1782589455 = { .head = TO_FPTR(&E__fMain_e) };
#define g1782589455 (MKLAZY_C(&_g1782589455))

/* v-1798842389 = (FtheMain$7)*/
static node_t _g1798842389 = { .head = TO_FPTR(&E__ftheMain$d7) };
#define g1798842389 (MKLAZY_C(&_g1798842389))

/* v-1781016601 = (FtheMain$105)*/
static node_t _g1781016601 = { .head = TO_FPTR(&E__ftheMain$d105) };
#define g1781016601 (MKLAZY_C(&_g1781016601))

/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 160),Left &("CJhc.Prim.Prim.[]")],5) */
static const struct sCJhc_Prim_Prim_$x3a _c5 = {.a1 = (sptr_t)RAW_SET_UF(160), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c5 (TO_SPTR_C(P_WHNF, (sptr_t)&_c5))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 11),Right 5],6) */
static const struct sCJhc_Prim_Prim_$x3a _c6 = {.a1 = (sptr_t)RAW_SET_UF(11), .a2 = c5};
#define c6 (TO_SPTR_C(P_WHNF, (sptr_t)&_c6))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 12),Right 6],7) */
static const struct sCJhc_Prim_Prim_$x3a _c7 = {.a1 = (sptr_t)RAW_SET_UF(12), .a2 = c6};
#define c7 (TO_SPTR_C(P_WHNF, (sptr_t)&_c7))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 13),Right 7],8) */
static const struct sCJhc_Prim_Prim_$x3a _c8 = {.a1 = (sptr_t)RAW_SET_UF(13), .a2 = c7};
#define c8 (TO_SPTR_C(P_WHNF, (sptr_t)&_c8))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 10),Right 8],9) */
static const struct sCJhc_Prim_Prim_$x3a _c9 = {.a1 = (sptr_t)RAW_SET_UF(10), .a2 = c8};
#define c9 (TO_SPTR_C(P_WHNF, (sptr_t)&_c9))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 9),Right 9],10) */
static const struct sCJhc_Prim_Prim_$x3a _c10 = {.a1 = (sptr_t)RAW_SET_UF(9), .a2 = c9};
#define c10 (TO_SPTR_C(P_WHNF, (sptr_t)&_c10))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 32),Right 10],11) */
static const struct sCJhc_Prim_Prim_$x3a _c11 = {.a1 = (sptr_t)RAW_SET_UF(' '), .a2 = c10};
#define c11 (TO_SPTR_C(P_WHNF, (sptr_t)&_c11))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 111),Left &("CJhc.Prim.Prim.[]")],67) */
static const struct sCJhc_Prim_Prim_$x3a _c67 = {.a1 = (sptr_t)RAW_SET_UF('o'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c67 (TO_SPTR_C(P_WHNF, (sptr_t)&_c67))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 100),Right 67],68) */
static const struct sCJhc_Prim_Prim_$x3a _c68 = {.a1 = (sptr_t)RAW_SET_UF('d'), .a2 = c67};
#define c68 (TO_SPTR_C(P_WHNF, (sptr_t)&_c68))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 32),Right 68],69) */
static const struct sCJhc_Prim_Prim_$x3a _c69 = {.a1 = (sptr_t)RAW_SET_UF(' '), .a2 = c68};
#define c69 (TO_SPTR_C(P_WHNF, (sptr_t)&_c69))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 110),Right 69],70) */
static const struct sCJhc_Prim_Prim_$x3a _c70 = {.a1 = (sptr_t)RAW_SET_UF('n'), .a2 = c69};
#define c70 (TO_SPTR_C(P_WHNF, (sptr_t)&_c70))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 105),Right 70],71) */
static const struct sCJhc_Prim_Prim_$x3a _c71 = {.a1 = (sptr_t)RAW_SET_UF('i'), .a2 = c70};
#define c71 (TO_SPTR_C(P_WHNF, (sptr_t)&_c71))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 32),Right 71],72) */
static const struct sCJhc_Prim_Prim_$x3a _c72 = {.a1 = (sptr_t)RAW_SET_UF(' '), .a2 = c71};
#define c72 (TO_SPTR_C(P_WHNF, (sptr_t)&_c72))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 104),Right 72],73) */
static const struct sCJhc_Prim_Prim_$x3a _c73 = {.a1 = (sptr_t)RAW_SET_UF('h'), .a2 = c72};
#define c73 (TO_SPTR_C(P_WHNF, (sptr_t)&_c73))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 99),Right 73],74) */
static const struct sCJhc_Prim_Prim_$x3a _c74 = {.a1 = (sptr_t)RAW_SET_UF('c'), .a2 = c73};
#define c74 (TO_SPTR_C(P_WHNF, (sptr_t)&_c74))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 116),Right 74],75) */
static const struct sCJhc_Prim_Prim_$x3a _c75 = {.a1 = (sptr_t)RAW_SET_UF('t'), .a2 = c74};
#define c75 (TO_SPTR_C(P_WHNF, (sptr_t)&_c75))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 97),Right 75],76) */
static const struct sCJhc_Prim_Prim_$x3a _c76 = {.a1 = (sptr_t)RAW_SET_UF('a'), .a2 = c75};
#define c76 (TO_SPTR_C(P_WHNF, (sptr_t)&_c76))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 109),Right 76],77) */
static const struct sCJhc_Prim_Prim_$x3a _c77 = {.a1 = (sptr_t)RAW_SET_UF('m'), .a2 = c76};
#define c77 (TO_SPTR_C(P_WHNF, (sptr_t)&_c77))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 32),Right 77],78) */
static const struct sCJhc_Prim_Prim_$x3a _c78 = {.a1 = (sptr_t)RAW_SET_UF(' '), .a2 = c77};
#define c78 (TO_SPTR_C(P_WHNF, (sptr_t)&_c78))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 110),Right 78],79) */
static const struct sCJhc_Prim_Prim_$x3a _c79 = {.a1 = (sptr_t)RAW_SET_UF('n'), .a2 = c78};
#define c79 (TO_SPTR_C(P_WHNF, (sptr_t)&_c79))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 114),Right 79],80) */
static const struct sCJhc_Prim_Prim_$x3a _c80 = {.a1 = (sptr_t)RAW_SET_UF('r'), .a2 = c79};
#define c80 (TO_SPTR_C(P_WHNF, (sptr_t)&_c80))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 101),Right 80],81) */
static const struct sCJhc_Prim_Prim_$x3a _c81 = {.a1 = (sptr_t)RAW_SET_UF('e'), .a2 = c80};
#define c81 (TO_SPTR_C(P_WHNF, (sptr_t)&_c81))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 116),Right 81],82) */
static const struct sCJhc_Prim_Prim_$x3a _c82 = {.a1 = (sptr_t)RAW_SET_UF('t'), .a2 = c81};
#define c82 (TO_SPTR_C(P_WHNF, (sptr_t)&_c82))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 116),Right 82],83) */
static const struct sCJhc_Prim_Prim_$x3a _c83 = {.a1 = (sptr_t)RAW_SET_UF('t'), .a2 = c82};
#define c83 (TO_SPTR_C(P_WHNF, (sptr_t)&_c83))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 97),Right 83],84) */
static const struct sCJhc_Prim_Prim_$x3a _c84 = {.a1 = (sptr_t)RAW_SET_UF('a'), .a2 = c83};
#define c84 (TO_SPTR_C(P_WHNF, (sptr_t)&_c84))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 112),Right 84],85) */
static const struct sCJhc_Prim_Prim_$x3a _c85 = {.a1 = (sptr_t)RAW_SET_UF('p'), .a2 = c84};
#define c85 (TO_SPTR_C(P_WHNF, (sptr_t)&_c85))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 32),Right 85],86) */
static const struct sCJhc_Prim_Prim_$x3a _c86 = {.a1 = (sptr_t)RAW_SET_UF(' '), .a2 = c85};
#define c86 (TO_SPTR_C(P_WHNF, (sptr_t)&_c86))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 100),Right 86],87) */
static const struct sCJhc_Prim_Prim_$x3a _c87 = {.a1 = (sptr_t)RAW_SET_UF('d'), .a2 = c86};
#define c87 (TO_SPTR_C(P_WHNF, (sptr_t)&_c87))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 101),Right 87],88) */
static const struct sCJhc_Prim_Prim_$x3a _c88 = {.a1 = (sptr_t)RAW_SET_UF('e'), .a2 = c87};
#define c88 (TO_SPTR_C(P_WHNF, (sptr_t)&_c88))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 108),Right 88],89) */
static const struct sCJhc_Prim_Prim_$x3a _c89 = {.a1 = (sptr_t)RAW_SET_UF('l'), .a2 = c88};
#define c89 (TO_SPTR_C(P_WHNF, (sptr_t)&_c89))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 105),Right 89],90) */
static const struct sCJhc_Prim_Prim_$x3a _c90 = {.a1 = (sptr_t)RAW_SET_UF('i'), .a2 = c89};
#define c90 (TO_SPTR_C(P_WHNF, (sptr_t)&_c90))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 97),Right 90],91) */
static const struct sCJhc_Prim_Prim_$x3a _c91 = {.a1 = (sptr_t)RAW_SET_UF('a'), .a2 = c90};
#define c91 (TO_SPTR_C(P_WHNF, (sptr_t)&_c91))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 102),Right 91],92) */
static const struct sCJhc_Prim_Prim_$x3a _c92 = {.a1 = (sptr_t)RAW_SET_UF('f'), .a2 = c91};
#define c92 (TO_SPTR_C(P_WHNF, (sptr_t)&_c92))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 32),Right 92],93) */
static const struct sCJhc_Prim_Prim_$x3a _c93 = {.a1 = (sptr_t)RAW_SET_UF(' '), .a2 = c92};
#define c93 (TO_SPTR_C(P_WHNF, (sptr_t)&_c93))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 126),Left &("CJhc.Prim.Prim.[]")],12) */
static const struct sCJhc_Prim_Prim_$x3a _c12 = {.a1 = (sptr_t)RAW_SET_UF('~'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c12 (TO_SPTR_C(P_WHNF, (sptr_t)&_c12))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 45),Right 12],13) */
static const struct sCJhc_Prim_Prim_$x3a _c13 = {.a1 = (sptr_t)RAW_SET_UF('-'), .a2 = c12};
#define c13 (TO_SPTR_C(P_WHNF, (sptr_t)&_c13))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 58),Right 13],14) */
static const struct sCJhc_Prim_Prim_$x3a _c14 = {.a1 = (sptr_t)RAW_SET_UF(':'), .a2 = c13};
#define c14 (TO_SPTR_C(P_WHNF, (sptr_t)&_c14))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 124),Right 14],15) */
static const struct sCJhc_Prim_Prim_$x3a _c15 = {.a1 = (sptr_t)RAW_SET_UF('|'), .a2 = c14};
#define c15 (TO_SPTR_C(P_WHNF, (sptr_t)&_c15))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 94),Right 15],16) */
static const struct sCJhc_Prim_Prim_$x3a _c16 = {.a1 = (sptr_t)RAW_SET_UF('^'), .a2 = c15};
#define c16 (TO_SPTR_C(P_WHNF, (sptr_t)&_c16))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 16],17) */
static const struct sCJhc_Prim_Prim_$x3a _c17 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c16};
#define c17 (TO_SPTR_C(P_WHNF, (sptr_t)&_c17))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 63),Right 17],18) */
static const struct sCJhc_Prim_Prim_$x3a _c18 = {.a1 = (sptr_t)RAW_SET_UF('?'), .a2 = c17};
#define c18 (TO_SPTR_C(P_WHNF, (sptr_t)&_c18))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 62),Right 18],19) */
static const struct sCJhc_Prim_Prim_$x3a _c19 = {.a1 = (sptr_t)RAW_SET_UF('>'), .a2 = c18};
#define c19 (TO_SPTR_C(P_WHNF, (sptr_t)&_c19))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 61),Right 19],20) */
static const struct sCJhc_Prim_Prim_$x3a _c20 = {.a1 = (sptr_t)RAW_SET_UF('='), .a2 = c19};
#define c20 (TO_SPTR_C(P_WHNF, (sptr_t)&_c20))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 60),Right 20],21) */
static const struct sCJhc_Prim_Prim_$x3a _c21 = {.a1 = (sptr_t)RAW_SET_UF('<'), .a2 = c20};
#define c21 (TO_SPTR_C(P_WHNF, (sptr_t)&_c21))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 47),Right 21],22) */
static const struct sCJhc_Prim_Prim_$x3a _c22 = {.a1 = (sptr_t)RAW_SET_UF('/'), .a2 = c21};
#define c22 (TO_SPTR_C(P_WHNF, (sptr_t)&_c22))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 46),Right 22],23) */
static const struct sCJhc_Prim_Prim_$x3a _c23 = {.a1 = (sptr_t)RAW_SET_UF('.'), .a2 = c22};
#define c23 (TO_SPTR_C(P_WHNF, (sptr_t)&_c23))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 43),Right 23],24) */
static const struct sCJhc_Prim_Prim_$x3a _c24 = {.a1 = (sptr_t)RAW_SET_UF('+'), .a2 = c23};
#define c24 (TO_SPTR_C(P_WHNF, (sptr_t)&_c24))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 42),Right 24],25) */
static const struct sCJhc_Prim_Prim_$x3a _c25 = {.a1 = (sptr_t)RAW_SET_UF('*'), .a2 = c24};
#define c25 (TO_SPTR_C(P_WHNF, (sptr_t)&_c25))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 38),Right 25],26) */
static const struct sCJhc_Prim_Prim_$x3a _c26 = {.a1 = (sptr_t)RAW_SET_UF('&'), .a2 = c25};
#define c26 (TO_SPTR_C(P_WHNF, (sptr_t)&_c26))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 37),Right 26],27) */
static const struct sCJhc_Prim_Prim_$x3a _c27 = {.a1 = (sptr_t)RAW_SET_UF('%'), .a2 = c26};
#define c27 (TO_SPTR_C(P_WHNF, (sptr_t)&_c27))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 36),Right 27],28) */
static const struct sCJhc_Prim_Prim_$x3a _c28 = {.a1 = (sptr_t)RAW_SET_UF('$'), .a2 = c27};
#define c28 (TO_SPTR_C(P_WHNF, (sptr_t)&_c28))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 35),Right 28],29) */
static const struct sCJhc_Prim_Prim_$x3a _c29 = {.a1 = (sptr_t)RAW_SET_UF('#'), .a2 = c28};
#define c29 (TO_SPTR_C(P_WHNF, (sptr_t)&_c29))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 64),Right 29],30) */
static const struct sCJhc_Prim_Prim_$x3a _c30 = {.a1 = (sptr_t)RAW_SET_UF('@'), .a2 = c29};
#define c30 (TO_SPTR_C(P_WHNF, (sptr_t)&_c30))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 33),Right 30],31) */
static const struct sCJhc_Prim_Prim_$x3a _c31 = {.a1 = (sptr_t)RAW_SET_UF('!'), .a2 = c30};
#define c31 (TO_SPTR_C(P_WHNF, (sptr_t)&_c31))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 34),Left &("CJhc.Prim.Prim.[]")],47) */
static const struct sCJhc_Prim_Prim_$x3a _c47 = {.a1 = (sptr_t)RAW_SET_UF('"'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c47 (TO_SPTR_C(P_WHNF, (sptr_t)&_c47))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 39),Left &("CJhc.Prim.Prim.[]")],33) */
static const struct sCJhc_Prim_Prim_$x3a _c33 = {.a1 = (sptr_t)RAW_SET_UF('\''), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c33 (TO_SPTR_C(P_WHNF, (sptr_t)&_c33))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 34),Right 33],38) */
static const struct sCJhc_Prim_Prim_$x3a _c38 = {.a1 = (sptr_t)RAW_SET_UF('"'), .a2 = c33};
#define c38 (TO_SPTR_C(P_WHNF, (sptr_t)&_c38))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 38),Left &("CJhc.Prim.Prim.[]")],3) */
static const struct sCJhc_Prim_Prim_$x3a _c3 = {.a1 = (sptr_t)RAW_SET_UF('&'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c3 (TO_SPTR_C(P_WHNF, (sptr_t)&_c3))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 96),Left &("CJhc.Prim.Prim.[]")],54) */
static const struct sCJhc_Prim_Prim_$x3a _c54 = {.a1 = (sptr_t)RAW_SET_UF('`'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c54 (TO_SPTR_C(P_WHNF, (sptr_t)&_c54))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 95),Right 54],55) */
static const struct sCJhc_Prim_Prim_$x3a _c55 = {.a1 = (sptr_t)RAW_SET_UF('_'), .a2 = c54};
#define c55 (TO_SPTR_C(P_WHNF, (sptr_t)&_c55))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 125),Right 55],56) */
static const struct sCJhc_Prim_Prim_$x3a _c56 = {.a1 = (sptr_t)RAW_SET_UF('}'), .a2 = c55};
#define c56 (TO_SPTR_C(P_WHNF, (sptr_t)&_c56))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 123),Right 56],57) */
static const struct sCJhc_Prim_Prim_$x3a _c57 = {.a1 = (sptr_t)RAW_SET_UF('{'), .a2 = c56};
#define c57 (TO_SPTR_C(P_WHNF, (sptr_t)&_c57))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 93),Right 57],58) */
static const struct sCJhc_Prim_Prim_$x3a _c58 = {.a1 = (sptr_t)RAW_SET_UF(']'), .a2 = c57};
#define c58 (TO_SPTR_C(P_WHNF, (sptr_t)&_c58))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 91),Right 58],59) */
static const struct sCJhc_Prim_Prim_$x3a _c59 = {.a1 = (sptr_t)RAW_SET_UF('['), .a2 = c58};
#define c59 (TO_SPTR_C(P_WHNF, (sptr_t)&_c59))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 41),Right 59],60) */
static const struct sCJhc_Prim_Prim_$x3a _c60 = {.a1 = (sptr_t)RAW_SET_UF(')'), .a2 = c59};
#define c60 (TO_SPTR_C(P_WHNF, (sptr_t)&_c60))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 40),Right 60],61) */
static const struct sCJhc_Prim_Prim_$x3a _c61 = {.a1 = (sptr_t)RAW_SET_UF('('), .a2 = c60};
#define c61 (TO_SPTR_C(P_WHNF, (sptr_t)&_c61))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 45),Left &("CJhc.Prim.Prim.[]")],48) */
static const struct sCJhc_Prim_Prim_$x3a _c48 = {.a1 = (sptr_t)RAW_SET_UF('-'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c48 (TO_SPTR_C(P_WHNF, (sptr_t)&_c48))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 43),Right 48],49) */
static const struct sCJhc_Prim_Prim_$x3a _c49 = {.a1 = (sptr_t)RAW_SET_UF('+'), .a2 = c48};
#define c49 (TO_SPTR_C(P_WHNF, (sptr_t)&_c49))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 59),Right 61],62) */
static const struct sCJhc_Prim_Prim_$x3a _c62 = {.a1 = (sptr_t)RAW_SET_UF(';'), .a2 = c61};
#define c62 (TO_SPTR_C(P_WHNF, (sptr_t)&_c62))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 44),Right 62],63) */
static const struct sCJhc_Prim_Prim_$x3a _c63 = {.a1 = (sptr_t)RAW_SET_UF(','), .a2 = c62};
#define c63 (TO_SPTR_C(P_WHNF, (sptr_t)&_c63))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 52),Right 93],94) */
static const struct sCJhc_Prim_Prim_$x3a _c94 = {.a1 = (sptr_t)RAW_SET_UF('4'), .a2 = c93};
#define c94 (TO_SPTR_C(P_WHNF, (sptr_t)&_c94))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 49),Right 94],95) */
static const struct sCJhc_Prim_Prim_$x3a _c95 = {.a1 = (sptr_t)RAW_SET_UF('1'), .a2 = c94};
#define c95 (TO_SPTR_C(P_WHNF, (sptr_t)&_c95))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 58),Right 95],96) */
static const struct sCJhc_Prim_Prim_$x3a _c96 = {.a1 = (sptr_t)RAW_SET_UF(':'), .a2 = c95};
#define c96 (TO_SPTR_C(P_WHNF, (sptr_t)&_c96))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 56),Right 96],97) */
static const struct sCJhc_Prim_Prim_$x3a _c97 = {.a1 = (sptr_t)RAW_SET_UF('8'), .a2 = c96};
#define c97 (TO_SPTR_C(P_WHNF, (sptr_t)&_c97))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 52),Right 97],98) */
static const struct sCJhc_Prim_Prim_$x3a _c98 = {.a1 = (sptr_t)RAW_SET_UF('4'), .a2 = c97};
#define c98 (TO_SPTR_C(P_WHNF, (sptr_t)&_c98))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 58),Right 98],99) */
static const struct sCJhc_Prim_Prim_$x3a _c99 = {.a1 = (sptr_t)RAW_SET_UF(':'), .a2 = c98};
#define c99 (TO_SPTR_C(P_WHNF, (sptr_t)&_c99))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 115),Right 99],100) */
static const struct sCJhc_Prim_Prim_$x3a _c100 = {.a1 = (sptr_t)RAW_SET_UF('s'), .a2 = c99};
#define c100 (TO_SPTR_C(P_WHNF, (sptr_t)&_c100))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 104),Right 100],101) */
static const struct sCJhc_Prim_Prim_$x3a _c101 = {.a1 = (sptr_t)RAW_SET_UF('h'), .a2 = c100};
#define c101 (TO_SPTR_C(P_WHNF, (sptr_t)&_c101))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 46),Right 101],102) */
static const struct sCJhc_Prim_Prim_$x3a _c102 = {.a1 = (sptr_t)RAW_SET_UF('.'), .a2 = c101};
#define c102 (TO_SPTR_C(P_WHNF, (sptr_t)&_c102))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 49),Right 102],103) */
static const struct sCJhc_Prim_Prim_$x3a _c103 = {.a1 = (sptr_t)RAW_SET_UF('1'), .a2 = c102};
#define c103 (TO_SPTR_C(P_WHNF, (sptr_t)&_c103))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 101),Right 103],104) */
static const struct sCJhc_Prim_Prim_$x3a _c104 = {.a1 = (sptr_t)RAW_SET_UF('e'), .a2 = c103};
#define c104 (TO_SPTR_C(P_WHNF, (sptr_t)&_c104))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 45),Right 104],105) */
static const struct sCJhc_Prim_Prim_$x3a _c105 = {.a1 = (sptr_t)RAW_SET_UF('-'), .a2 = c104};
#define c105 (TO_SPTR_C(P_WHNF, (sptr_t)&_c105))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 102),Right 105],106) */
static const struct sCJhc_Prim_Prim_$x3a _c106 = {.a1 = (sptr_t)RAW_SET_UF('f'), .a2 = c105};
#define c106 (TO_SPTR_C(P_WHNF, (sptr_t)&_c106))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 111),Right 106],107) */
static const struct sCJhc_Prim_Prim_$x3a _c107 = {.a1 = (sptr_t)RAW_SET_UF('o'), .a2 = c106};
#define c107 (TO_SPTR_C(P_WHNF, (sptr_t)&_c107))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 45),Right 107],108) */
static const struct sCJhc_Prim_Prim_$x3a _c108 = {.a1 = (sptr_t)RAW_SET_UF('-'), .a2 = c107};
#define c108 (TO_SPTR_C(P_WHNF, (sptr_t)&_c108))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Left &("CJhc.Prim.Prim.[]")],50) */
static const struct sCJhc_Prim_Prim_$x3a _c50 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c50 (TO_SPTR_C(P_WHNF, (sptr_t)&_c50))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 93),Left &("CJhc.Prim.Prim.[]")],1) */
static const struct sCJhc_Prim_Prim_$x3a _c1 = {.a1 = (sptr_t)RAW_SET_UF(']'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c1 (TO_SPTR_C(P_WHNF, (sptr_t)&_c1))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 91),Right 1],2) */
static const struct sCJhc_Prim_Prim_$x3a _c2 = {.a1 = (sptr_t)RAW_SET_UF('['), .a2 = c1};
#define c2 (TO_SPTR_C(P_WHNF, (sptr_t)&_c2))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 3],4) */
static const struct sCJhc_Prim_Prim_$x3a _c4 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c3};
#define c4 (TO_SPTR_C(P_WHNF, (sptr_t)&_c4))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 38],39) */
static const struct sCJhc_Prim_Prim_$x3a _c39 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c38};
#define c39 (TO_SPTR_C(P_WHNF, (sptr_t)&_c39))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 95),Right 33],34) */
static const struct sCJhc_Prim_Prim_$x3a _c34 = {.a1 = (sptr_t)RAW_SET_UF('_'), .a2 = c33};
#define c34 (TO_SPTR_C(P_WHNF, (sptr_t)&_c34))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 118),Right 39],40) */
static const struct sCJhc_Prim_Prim_$x3a _c40 = {.a1 = (sptr_t)RAW_SET_UF('v'), .a2 = c39};
#define c40 (TO_SPTR_C(P_WHNF, (sptr_t)&_c40))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 116),Right 40],41) */
static const struct sCJhc_Prim_Prim_$x3a _c41 = {.a1 = (sptr_t)RAW_SET_UF('t'), .a2 = c40};
#define c41 (TO_SPTR_C(P_WHNF, (sptr_t)&_c41))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 114),Right 41],42) */
static const struct sCJhc_Prim_Prim_$x3a _c42 = {.a1 = (sptr_t)RAW_SET_UF('r'), .a2 = c41};
#define c42 (TO_SPTR_C(P_WHNF, (sptr_t)&_c42))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 110),Right 42],43) */
static const struct sCJhc_Prim_Prim_$x3a _c43 = {.a1 = (sptr_t)RAW_SET_UF('n'), .a2 = c42};
#define c43 (TO_SPTR_C(P_WHNF, (sptr_t)&_c43))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 102),Right 43],44) */
static const struct sCJhc_Prim_Prim_$x3a _c44 = {.a1 = (sptr_t)RAW_SET_UF('f'), .a2 = c43};
#define c44 (TO_SPTR_C(P_WHNF, (sptr_t)&_c44))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 98),Right 44],45) */
static const struct sCJhc_Prim_Prim_$x3a _c45 = {.a1 = (sptr_t)RAW_SET_UF('b'), .a2 = c44};
#define c45 (TO_SPTR_C(P_WHNF, (sptr_t)&_c45))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 97),Right 45],46) */
static const struct sCJhc_Prim_Prim_$x3a _c46 = {.a1 = (sptr_t)RAW_SET_UF('a'), .a2 = c45};
#define c46 (TO_SPTR_C(P_WHNF, (sptr_t)&_c46))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 115),Right 108],109) */
static const struct sCJhc_Prim_Prim_$x3a _c109 = {.a1 = (sptr_t)RAW_SET_UF('s'), .a2 = c108};
#define c109 (TO_SPTR_C(P_WHNF, (sptr_t)&_c109))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 116),Right 109],110) */
static const struct sCJhc_Prim_Prim_$x3a _c110 = {.a1 = (sptr_t)RAW_SET_UF('t'), .a2 = c109};
#define c110 (TO_SPTR_C(P_WHNF, (sptr_t)&_c110))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 105),Right 110],111) */
static const struct sCJhc_Prim_Prim_$x3a _c111 = {.a1 = (sptr_t)RAW_SET_UF('i'), .a2 = c110};
#define c111 (TO_SPTR_C(P_WHNF, (sptr_t)&_c111))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 103),Right 111],112) */
static const struct sCJhc_Prim_Prim_$x3a _c112 = {.a1 = (sptr_t)RAW_SET_UF('g'), .a2 = c111};
#define c112 (TO_SPTR_C(P_WHNF, (sptr_t)&_c112))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 105),Right 112],113) */
static const struct sCJhc_Prim_Prim_$x3a _c113 = {.a1 = (sptr_t)RAW_SET_UF('i'), .a2 = c112};
#define c113 (TO_SPTR_C(P_WHNF, (sptr_t)&_c113))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 100),Right 113],114) */
static const struct sCJhc_Prim_Prim_$x3a _c114 = {.a1 = (sptr_t)RAW_SET_UF('d'), .a2 = c113};
#define c114 (TO_SPTR_C(P_WHNF, (sptr_t)&_c114))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 101),Right 50],51) */
static const struct sCJhc_Prim_Prim_$x3a _c51 = {.a1 = (sptr_t)RAW_SET_UF('e'), .a2 = c50};
#define c51 (TO_SPTR_C(P_WHNF, (sptr_t)&_c51))
/* (HcNode CJhc.Prim.Prim.(,) [Left &("CJhc.Prim.Prim.[]"),Left &("CJhc.Prim.Prim.[]")],52) */
static const struct sCJhc_Prim_Prim_$LcR _c52 = {.a1 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c52 (TO_SPTR_C(P_WHNF, (sptr_t)&_c52))
/* (HcNode CJhc.Prim.Prim.: [Right 52,Left &("CJhc.Prim.Prim.[]")],53) */
static const struct sCJhc_Prim_Prim_$x3a _c53 = {.a1 = c52, .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c53 (TO_SPTR_C(P_WHNF, (sptr_t)&_c53))
/* (HcNode CJhc.Type.Basic.Integer [Left 2],64) */
static const struct sCJhc_Type_Basic_Integer _c64 = {.a1 = 2};
#define c64 (TO_SPTR_C(P_WHNF, (sptr_t)&_c64))
/* (HcNode CJhc.Prim.Prim.: [Right 64,Left ni-1798842389],66) */
static const struct sCJhc_Prim_Prim_$x3a _c66 = {.a1 = c64, .a2 = g1798842389};
#define c66 (TO_SPTR_C(P_WHNF, (sptr_t)&_c66))
/* (HcNode CJhc.Type.Basic.Integer [Left -1],36) */
static const struct sCJhc_Type_Basic_Integer _c36 = {.a1 = -1};
#define c36 (TO_SPTR_C(P_WHNF, (sptr_t)&_c36))
/* (HcNode CJhc.Type.Basic.Integer [Left 0],35) */
static const struct sCJhc_Type_Basic_Integer _c35 = {.a1 = 0};
#define c35 (TO_SPTR_C(P_WHNF, (sptr_t)&_c35))
/* (HcNode CJhc.Type.Basic.Integer [Left 1],37) */
static const struct sCJhc_Type_Basic_Integer _c37 = {.a1 = 1};
#define c37 (TO_SPTR_C(P_WHNF, (sptr_t)&_c37))
/* (HcNode CJhc.Type.Basic.Integer [Left 10],65) */
static const struct sCJhc_Type_Basic_Integer _c65 = {.a1 = 10};
#define c65 (TO_SPTR_C(P_WHNF, (sptr_t)&_c65))
/* (HcNode CJhc.Type.Word.Int [Left 0],115) */
static const struct sCJhc_Type_Word_Int _c115 = {.a1 = 0};
#define c115 (TO_SPTR_C(P_WHNF, (sptr_t)&_c115))
/* (HcNode TJhc.Prim.Prim.[] [Left ("TJhc.Type.Basic.Char")],32) */
static const struct sTJhc_Prim_Prim_$BE _c32 = {.what = (what_t)SET_RAW_TAG(TJhc_Prim_Prim_$BE), .a1 = SET_RAW_TAG(TJhc_Type_Basic_Char)};
#define c32 (TO_SPTR_C(P_WHNF, (sptr_t)&_c32))

const void * const nh_stuff[] = {
&_g1782589455, &_g1798842389, &_g1781016601, &_c1, &_c2, &_c3,
&_c4, &_c5, &_c6, &_c7, &_c8, &_c9, &_c10, &_c11, &_c12, &_c13,
&_c14, &_c15, &_c16, &_c17, &_c18, &_c19, &_c20, &_c21, &_c22,
&_c23, &_c24, &_c25, &_c26, &_c27, &_c28, &_c29, &_c30, &_c31,
&_c32, &_c33, &_c34, &_c35, &_c36, &_c37, &_c38, &_c39, &_c40,
&_c41, &_c42, &_c43, &_c44, &_c45, &_c46, &_c47, &_c48, &_c49,
&_c50, &_c51, &_c52, &_c53, &_c54, &_c55, &_c56, &_c57, &_c58,
&_c59, &_c60, &_c61, &_c62, &_c63, &_c64, &_c65, &_c66, &_c67,
&_c68, &_c69, &_c70, &_c71, &_c72, &_c73, &_c74, &_c75, &_c76,
&_c77, &_c78, &_c79, &_c80, &_c81, &_c82, &_c83, &_c84, &_c85,
&_c86, &_c87, &_c88, &_c89, &_c90, &_c91, &_c92, &_c93, &_c94,
&_c95, &_c96, &_c97, &_c98, &_c99, &_c100, &_c101, &_c102, &_c103,
&_c104, &_c105, &_c106, &_c107, &_c108, &_c109, &_c110, &_c111,
&_c112, &_c113, &_c114, &_c115, NULL
};


void 
jhc_hs_init(gc_t gc,arena_t arena)
{
        alloc_public_caches(arena,sizeof(struct s_caches_pub));
        find_cache(&public_caches(arena)->cFR$__fJhc_Basics_$pp,arena,TO_BLOCKS(sizeof(struct sFR$__fJhc_Basics_$pp)),3);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readsPrec$d19,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readsPrec$d19)),2);
        find_cache(&public_caches(arena)->cBap__1__Jhc_Text_Read_readsPrec$d17u101598,arena,TO_BLOCKS(sizeof(struct sBap__1__Jhc_Text_Read_readsPrec$d17u101598)),3);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readsPrec$d13,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readsPrec$d13)),2);
        find_cache(&public_caches(arena)->cP1__Jhc_Text_Read_readsPrec$d5,arena,TO_BLOCKS(sizeof(struct sP1__Jhc_Text_Read_readsPrec$d5)),2);
        find_cache(&public_caches(arena)->cBap__1__Jhc_Text_Read_readsPrec$d6u101624,arena,TO_BLOCKS(sizeof(struct sBap__1__Jhc_Text_Read_readsPrec$d6u101624)),3);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d30,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d30)),3);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d29,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d29)),3);
        find_cache(&public_caches(arena)->cBap__1__Jhc_Text_Read_lex$d23u101636,arena,TO_BLOCKS(sizeof(struct sBap__1__Jhc_Text_Read_lex$d23u101636)),3);
        find_cache(&public_caches(arena)->cBap__1__Jhc_Text_Read_lex$d19u101648,arena,TO_BLOCKS(sizeof(struct sBap__1__Jhc_Text_Read_lex$d19u101648)),3);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d21,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d21)),4);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d20,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d20)),4);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d11,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d11)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d7,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d7)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d6,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d6)),3);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d5,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d5)),3);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d3,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d3)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_nonnull$d3,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_nonnull$d3)),2);
        find_cache(&public_caches(arena)->cFJhc_Basics_concatMap$d2,arena,TO_BLOCKS(sizeof(struct sFJhc_Basics_concatMap$d2)),3);
        find_cache(&public_caches(arena)->cFW$__fJhc_Inst_Show_showWordMax,arena,TO_BLOCKS(sizeof(struct sFW$__fJhc_Inst_Show_showWordMax)),2);
        find_cache(&public_caches(arena)->cP1__theMain$d3,arena,TO_BLOCKS(sizeof(struct sP1__theMain$d3)),3);
        find_cache(&public_caches(arena)->cCJhc_Prim_Prim_$x3a,arena,TO_BLOCKS(sizeof(struct sCJhc_Prim_Prim_$x3a)),2);
        find_cache(&public_caches(arena)->cCJhc_Type_Basic_Integer,arena,TO_BLOCKS(sizeof(struct sCJhc_Type_Basic_Integer)),0);
        find_cache(&public_caches(arena)->cCJhc_Prim_Prim_$LcR,arena,TO_BLOCKS(sizeof(struct sCJhc_Prim_Prim_$LcR)),2);
        find_cache(&public_caches(arena)->cCJhc_Type_Word_Int,arena,TO_BLOCKS(sizeof(struct sCJhc_Type_Word_Int)),0);
        find_cache(&public_caches(arena)->cFW$__fR$__fJhc_List_387__f,arena,TO_BLOCKS(sizeof(struct sFW$__fR$__fJhc_List_387__f)),2);
        find_cache(&public_caches(arena)->cFtheMain$d102,arena,TO_BLOCKS(sizeof(struct sFtheMain$d102)),4);
        find_cache(&public_caches(arena)->cFtheMain$d103,arena,TO_BLOCKS(sizeof(struct sFtheMain$d103)),2);
        find_cache(&public_caches(arena)->cFtheMain$d14,arena,TO_BLOCKS(sizeof(struct sFtheMain$d14)),4);
        find_cache(&public_caches(arena)->cFtheMain$d15,arena,TO_BLOCKS(sizeof(struct sFtheMain$d15)),7);
        find_cache(&public_caches(arena)->cFtheMain$d16,arena,TO_BLOCKS(sizeof(struct sFtheMain$d16)),4);
        find_cache(&public_caches(arena)->cFtheMain$d17,arena,TO_BLOCKS(sizeof(struct sFtheMain$d17)),4);
        find_cache(&public_caches(arena)->cFtheMain$d18,arena,TO_BLOCKS(sizeof(struct sFtheMain$d18)),7);
        find_cache(&public_caches(arena)->cFtheMain$d19,arena,TO_BLOCKS(sizeof(struct sFtheMain$d19)),4);
        find_cache(&public_caches(arena)->cFtheMain$d20,arena,TO_BLOCKS(sizeof(struct sFtheMain$d20)),4);
        find_cache(&public_caches(arena)->cFtheMain$d21,arena,TO_BLOCKS(sizeof(struct sFtheMain$d21)),7);
        find_cache(&public_caches(arena)->cFtheMain$d22,arena,TO_BLOCKS(sizeof(struct sFtheMain$d22)),4);
        find_cache(&public_caches(arena)->cFtheMain$d23,arena,TO_BLOCKS(sizeof(struct sFtheMain$d23)),4);
        find_cache(&public_caches(arena)->cFtheMain$d24,arena,TO_BLOCKS(sizeof(struct sFtheMain$d24)),7);
        find_cache(&public_caches(arena)->cFtheMain$d25,arena,TO_BLOCKS(sizeof(struct sFtheMain$d25)),4);
        find_cache(&public_caches(arena)->cFtheMain$d13,arena,TO_BLOCKS(sizeof(struct sFtheMain$d13)),4);
        find_cache(&public_caches(arena)->cFtheMain$d12,arena,TO_BLOCKS(sizeof(struct sFtheMain$d12)),2);
        find_cache(&public_caches(arena)->cFtheMain$d28,arena,TO_BLOCKS(sizeof(struct sFtheMain$d28)),4);
        find_cache(&public_caches(arena)->cFtheMain$d29,arena,TO_BLOCKS(sizeof(struct sFtheMain$d29)),7);
        find_cache(&public_caches(arena)->cFtheMain$d30,arena,TO_BLOCKS(sizeof(struct sFtheMain$d30)),4);
        find_cache(&public_caches(arena)->cFtheMain$d31,arena,TO_BLOCKS(sizeof(struct sFtheMain$d31)),4);
        find_cache(&public_caches(arena)->cFtheMain$d32,arena,TO_BLOCKS(sizeof(struct sFtheMain$d32)),7);
        find_cache(&public_caches(arena)->cFtheMain$d33,arena,TO_BLOCKS(sizeof(struct sFtheMain$d33)),4);
        find_cache(&public_caches(arena)->cFtheMain$d34,arena,TO_BLOCKS(sizeof(struct sFtheMain$d34)),4);
        find_cache(&public_caches(arena)->cFtheMain$d35,arena,TO_BLOCKS(sizeof(struct sFtheMain$d35)),7);
        find_cache(&public_caches(arena)->cFtheMain$d36,arena,TO_BLOCKS(sizeof(struct sFtheMain$d36)),4);
        find_cache(&public_caches(arena)->cFtheMain$d37,arena,TO_BLOCKS(sizeof(struct sFtheMain$d37)),4);
        find_cache(&public_caches(arena)->cFtheMain$d38,arena,TO_BLOCKS(sizeof(struct sFtheMain$d38)),7);
        find_cache(&public_caches(arena)->cFtheMain$d39,arena,TO_BLOCKS(sizeof(struct sFtheMain$d39)),4);
        find_cache(&public_caches(arena)->cFtheMain$d27,arena,TO_BLOCKS(sizeof(struct sFtheMain$d27)),4);
        find_cache(&public_caches(arena)->cFtheMain$d26,arena,TO_BLOCKS(sizeof(struct sFtheMain$d26)),2);
        find_cache(&public_caches(arena)->cFtheMain$d42,arena,TO_BLOCKS(sizeof(struct sFtheMain$d42)),4);
        find_cache(&public_caches(arena)->cFtheMain$d43,arena,TO_BLOCKS(sizeof(struct sFtheMain$d43)),7);
        find_cache(&public_caches(arena)->cFtheMain$d44,arena,TO_BLOCKS(sizeof(struct sFtheMain$d44)),4);
        find_cache(&public_caches(arena)->cFtheMain$d45,arena,TO_BLOCKS(sizeof(struct sFtheMain$d45)),4);
        find_cache(&public_caches(arena)->cFtheMain$d46,arena,TO_BLOCKS(sizeof(struct sFtheMain$d46)),7);
        find_cache(&public_caches(arena)->cFtheMain$d47,arena,TO_BLOCKS(sizeof(struct sFtheMain$d47)),4);
        find_cache(&public_caches(arena)->cFtheMain$d48,arena,TO_BLOCKS(sizeof(struct sFtheMain$d48)),4);
        find_cache(&public_caches(arena)->cFtheMain$d49,arena,TO_BLOCKS(sizeof(struct sFtheMain$d49)),7);
        find_cache(&public_caches(arena)->cFtheMain$d50,arena,TO_BLOCKS(sizeof(struct sFtheMain$d50)),4);
        find_cache(&public_caches(arena)->cFtheMain$d51,arena,TO_BLOCKS(sizeof(struct sFtheMain$d51)),4);
        find_cache(&public_caches(arena)->cFtheMain$d52,arena,TO_BLOCKS(sizeof(struct sFtheMain$d52)),7);
        find_cache(&public_caches(arena)->cFtheMain$d53,arena,TO_BLOCKS(sizeof(struct sFtheMain$d53)),4);
        find_cache(&public_caches(arena)->cFtheMain$d41,arena,TO_BLOCKS(sizeof(struct sFtheMain$d41)),4);
        find_cache(&public_caches(arena)->cFtheMain$d40,arena,TO_BLOCKS(sizeof(struct sFtheMain$d40)),2);
        find_cache(&public_caches(arena)->cFtheMain$d60,arena,TO_BLOCKS(sizeof(struct sFtheMain$d60)),4);
        find_cache(&public_caches(arena)->cFtheMain$d61,arena,TO_BLOCKS(sizeof(struct sFtheMain$d61)),7);
        find_cache(&public_caches(arena)->cFtheMain$d62,arena,TO_BLOCKS(sizeof(struct sFtheMain$d62)),4);
        find_cache(&public_caches(arena)->cFtheMain$d63,arena,TO_BLOCKS(sizeof(struct sFtheMain$d63)),4);
        find_cache(&public_caches(arena)->cFtheMain$d64,arena,TO_BLOCKS(sizeof(struct sFtheMain$d64)),7);
        find_cache(&public_caches(arena)->cFtheMain$d65,arena,TO_BLOCKS(sizeof(struct sFtheMain$d65)),4);
        find_cache(&public_caches(arena)->cFtheMain$d66,arena,TO_BLOCKS(sizeof(struct sFtheMain$d66)),4);
        find_cache(&public_caches(arena)->cFtheMain$d67,arena,TO_BLOCKS(sizeof(struct sFtheMain$d67)),7);
        find_cache(&public_caches(arena)->cFtheMain$d68,arena,TO_BLOCKS(sizeof(struct sFtheMain$d68)),4);
        find_cache(&public_caches(arena)->cFtheMain$d69,arena,TO_BLOCKS(sizeof(struct sFtheMain$d69)),4);
        find_cache(&public_caches(arena)->cFtheMain$d70,arena,TO_BLOCKS(sizeof(struct sFtheMain$d70)),7);
        find_cache(&public_caches(arena)->cFtheMain$d71,arena,TO_BLOCKS(sizeof(struct sFtheMain$d71)),4);
        find_cache(&public_caches(arena)->cFtheMain$d59,arena,TO_BLOCKS(sizeof(struct sFtheMain$d59)),4);
        find_cache(&public_caches(arena)->cFtheMain$d58,arena,TO_BLOCKS(sizeof(struct sFtheMain$d58)),2);
        find_cache(&public_caches(arena)->cFtheMain$d74,arena,TO_BLOCKS(sizeof(struct sFtheMain$d74)),4);
        find_cache(&public_caches(arena)->cFtheMain$d75,arena,TO_BLOCKS(sizeof(struct sFtheMain$d75)),7);
        find_cache(&public_caches(arena)->cFtheMain$d76,arena,TO_BLOCKS(sizeof(struct sFtheMain$d76)),4);
        find_cache(&public_caches(arena)->cFtheMain$d77,arena,TO_BLOCKS(sizeof(struct sFtheMain$d77)),4);
        find_cache(&public_caches(arena)->cFtheMain$d78,arena,TO_BLOCKS(sizeof(struct sFtheMain$d78)),7);
        find_cache(&public_caches(arena)->cFtheMain$d79,arena,TO_BLOCKS(sizeof(struct sFtheMain$d79)),4);
        find_cache(&public_caches(arena)->cFtheMain$d80,arena,TO_BLOCKS(sizeof(struct sFtheMain$d80)),4);
        find_cache(&public_caches(arena)->cFtheMain$d81,arena,TO_BLOCKS(sizeof(struct sFtheMain$d81)),7);
        find_cache(&public_caches(arena)->cFtheMain$d82,arena,TO_BLOCKS(sizeof(struct sFtheMain$d82)),4);
        find_cache(&public_caches(arena)->cFtheMain$d83,arena,TO_BLOCKS(sizeof(struct sFtheMain$d83)),4);
        find_cache(&public_caches(arena)->cFtheMain$d84,arena,TO_BLOCKS(sizeof(struct sFtheMain$d84)),7);
        find_cache(&public_caches(arena)->cFtheMain$d85,arena,TO_BLOCKS(sizeof(struct sFtheMain$d85)),4);
        find_cache(&public_caches(arena)->cFtheMain$d73,arena,TO_BLOCKS(sizeof(struct sFtheMain$d73)),4);
        find_cache(&public_caches(arena)->cFtheMain$d72,arena,TO_BLOCKS(sizeof(struct sFtheMain$d72)),2);
        find_cache(&public_caches(arena)->cFtheMain$d88,arena,TO_BLOCKS(sizeof(struct sFtheMain$d88)),4);
        find_cache(&public_caches(arena)->cFtheMain$d89,arena,TO_BLOCKS(sizeof(struct sFtheMain$d89)),7);
        find_cache(&public_caches(arena)->cFtheMain$d90,arena,TO_BLOCKS(sizeof(struct sFtheMain$d90)),4);
        find_cache(&public_caches(arena)->cFtheMain$d91,arena,TO_BLOCKS(sizeof(struct sFtheMain$d91)),4);
        find_cache(&public_caches(arena)->cFtheMain$d92,arena,TO_BLOCKS(sizeof(struct sFtheMain$d92)),7);
        find_cache(&public_caches(arena)->cFtheMain$d93,arena,TO_BLOCKS(sizeof(struct sFtheMain$d93)),4);
        find_cache(&public_caches(arena)->cFtheMain$d94,arena,TO_BLOCKS(sizeof(struct sFtheMain$d94)),4);
        find_cache(&public_caches(arena)->cFtheMain$d95,arena,TO_BLOCKS(sizeof(struct sFtheMain$d95)),7);
        find_cache(&public_caches(arena)->cFtheMain$d96,arena,TO_BLOCKS(sizeof(struct sFtheMain$d96)),4);
        find_cache(&public_caches(arena)->cFtheMain$d97,arena,TO_BLOCKS(sizeof(struct sFtheMain$d97)),4);
        find_cache(&public_caches(arena)->cFtheMain$d98,arena,TO_BLOCKS(sizeof(struct sFtheMain$d98)),7);
        find_cache(&public_caches(arena)->cFtheMain$d99,arena,TO_BLOCKS(sizeof(struct sFtheMain$d99)),4);
        find_cache(&public_caches(arena)->cFtheMain$d87,arena,TO_BLOCKS(sizeof(struct sFtheMain$d87)),4);
        find_cache(&public_caches(arena)->cFtheMain$d86,arena,TO_BLOCKS(sizeof(struct sFtheMain$d86)),2);
        find_cache(&public_caches(arena)->cFtheMain$d56,arena,TO_BLOCKS(sizeof(struct sFtheMain$d56)),4);
        find_cache(&public_caches(arena)->cFtheMain$d57,arena,TO_BLOCKS(sizeof(struct sFtheMain$d57)),2);
        find_cache(&public_caches(arena)->cFtheMain$d10,arena,TO_BLOCKS(sizeof(struct sFtheMain$d10)),4);
        find_cache(&public_caches(arena)->cFtheMain$d11,arena,TO_BLOCKS(sizeof(struct sFtheMain$d11)),2);
        find_cache(&public_caches(arena)->cFR$__fMain_1__aux,arena,TO_BLOCKS(sizeof(struct sFR$__fMain_1__aux)),2);
        find_cache(&public_caches(arena)->cFtheMain$d6,arena,TO_BLOCKS(sizeof(struct sFtheMain$d6)),2);
        find_cache(&public_caches(arena)->cFJhc_Show_shows,arena,TO_BLOCKS(sizeof(struct sFJhc_Show_shows)),3);
        find_cache(&public_caches(arena)->cFR$__fJhc_Show_11__showl,arena,TO_BLOCKS(sizeof(struct sFR$__fJhc_Show_11__showl)),3);
        find_cache(&public_caches(arena)->cP1__theMain$d4,arena,TO_BLOCKS(sizeof(struct sP1__theMain$d4)),2);
        find_cache(&public_caches(arena)->cP2__theMain$d3,arena,TO_BLOCKS(sizeof(struct sP2__theMain$d3)),2);
        find_cache(&public_caches(arena)->cFtheMain$d2,arena,TO_BLOCKS(sizeof(struct sFtheMain$d2)),1);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readsPrec$d10,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readsPrec$d10)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readsPrec$d12,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readsPrec$d12)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readsPrec$d11,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readsPrec$d11)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readsPrec$d2,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readsPrec$d2)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readsPrec$d4,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readsPrec$d4)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readsPrec$d3,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readsPrec$d3)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d28,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d28)),3);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d27,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d27)),3);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d25,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d25)),4);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d24,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d24)),4);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d16,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d16)),3);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d15,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d15)),3);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d13,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d13)),3);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d12,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d12)),3);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d8,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d8)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d9,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d9)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readsPrec$d18,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readsPrec$d18)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readsPrec$d14,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readsPrec$d14)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readsPrec$d8,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readsPrec$d8)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d14,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d14)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d17,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d17)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d32,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d32)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d4,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d4)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lexLitChar$d4,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lexLitChar$d4)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lexLitChar$d6,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lexLitChar$d6)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lexLitChar$d7,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lexLitChar$d7)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lexLitChar$d9,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lexLitChar$d9)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lexLitChar$d10,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lexLitChar$d10)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lexLitChar$d12,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lexLitChar$d12)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lexLitChar$d13,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lexLitChar$d13)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lexLitChar$d14,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lexLitChar$d14)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lexLitChar$d15,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lexLitChar$d15)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lexLitChar$d16,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lexLitChar$d16)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lexLitChar$d2,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lexLitChar$d2)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lexLitChar$d3,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lexLitChar$d3)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readDec$d5,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readDec$d5)),3);
        find_cache(&public_caches(arena)->cP1__Jhc_Text_Read_lex$d18,arena,TO_BLOCKS(sizeof(struct sP1__Jhc_Text_Read_lex$d18)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readsPrec$d7,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readsPrec$d7)),2);
        find_cache(&public_caches(arena)->cP1__Jhc_Text_Read_lex$d22,arena,TO_BLOCKS(sizeof(struct sP1__Jhc_Text_Read_lex$d22)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d31,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d31)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_lex$d26,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_lex$d26)),3);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readDec$d3,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readDec$d3)),2);
        find_cache(&public_caches(arena)->cFJhc_Basics_45__go,arena,TO_BLOCKS(sizeof(struct sFJhc_Basics_45__go)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readDec$d2,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readDec$d2)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readDec$d7,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readDec$d7)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_readDec$d4,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_readDec$d4)),2);
        find_cache(&public_caches(arena)->cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7)),2);
        find_cache(&public_caches(arena)->cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6)),2);
        find_cache(&public_caches(arena)->cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4)),2);
        find_cache(&public_caches(arena)->cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3)),1);
        find_cache(&public_caches(arena)->cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2)),1);
        find_cache(&public_caches(arena)->cFJhc_Basics_$pp,arena,TO_BLOCKS(sizeof(struct sFJhc_Basics_$pp)),4);
        find_cache(&public_caches(arena)->cFtheMain$d104,arena,TO_BLOCKS(sizeof(struct sFtheMain$d104)),2);
        find_cache(&public_caches(arena)->cFW$__fJhc_List_span$d5,arena,TO_BLOCKS(sizeof(struct sFW$__fJhc_List_span$d5)),2);
        find_cache(&public_caches(arena)->cFW$__fJhc_List_span$d4,arena,TO_BLOCKS(sizeof(struct sFW$__fJhc_List_span$d4)),2);
        find_cache(&public_caches(arena)->cFW$__fJhc_List_span$d3,arena,TO_BLOCKS(sizeof(struct sFW$__fJhc_List_span$d3)),3);
        find_cache(&public_caches(arena)->cP1__W$__fJhc_List_span$d2,arena,TO_BLOCKS(sizeof(struct sP1__W$__fJhc_List_span$d2)),2);
        find_cache(&public_caches(arena)->cFJhc_Text_Read_nonnull$d4,arena,TO_BLOCKS(sizeof(struct sFJhc_Text_Read_nonnull$d4)),3);
        find_cache(&public_caches(arena)->cP1__Jhc_Text_Read_readsPrec$d16,arena,TO_BLOCKS(sizeof(struct sP1__Jhc_Text_Read_readsPrec$d16)),2);
}

static wptr_t A_STD A_FALIGNED
E__bap__1__Jhc_Text_Read_lex$d19u101648(gc_t gc,arena_t arena,struct sBap__1__Jhc_Text_Read_lex$d19u101648* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = bap__1__Jhc_Text_Read_lex$d19u101648(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__bap__1__Jhc_Text_Read_lex$d23u101636(gc_t gc,arena_t arena,struct sBap__1__Jhc_Text_Read_lex$d23u101636* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = bap__1__Jhc_Text_Read_lex$d23u101636(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__bap__1__Jhc_Text_Read_readsPrec$d17u101598(gc_t gc,arena_t arena,struct sBap__1__Jhc_Text_Read_readsPrec$d17u101598* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = bap__1__Jhc_Text_Read_readsPrec$d17u101598(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__bap__1__Jhc_Text_Read_readsPrec$d6u101624(gc_t gc,arena_t arena,struct sBap__1__Jhc_Text_Read_readsPrec$d6u101624* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = bap__1__Jhc_Text_Read_readsPrec$d6u101624(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Basics_$pp(gc_t gc,arena_t arena,struct sFJhc_Basics_$pp* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Basics_$pp(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Basics_45__go(gc_t gc,arena_t arena,struct sFJhc_Basics_45__go* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Basics_45__go(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Basics_concatMap$d2(gc_t gc,arena_t arena,struct sFJhc_Basics_concatMap$d2* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Basics_concatMap$d2(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Show_shows(gc_t gc,arena_t arena,struct sFJhc_Show_shows* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Show_shows(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d11(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d11* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d11(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d12(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d12* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d12(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d13(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d13* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d13(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d14(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d14* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d14(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d15(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d15* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d15(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d16(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d16* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d16(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d17(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d17* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d17(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d20(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d20* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d20(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d21(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d21* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d21(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d24(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d24* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d24(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d25(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d25* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d25(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d26(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d26* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d26(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d27(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d27* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d27(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d28(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d28* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d28(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d29(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d29* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d29(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d3(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d3* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d3(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d30(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d30* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d30(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d31(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d31* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d31(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d32(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d32* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d32(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d4(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d4* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d4(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d5(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d5* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d5(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d6(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d6* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d6(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d7(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d7* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d7(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d8(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d8* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d8(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lex$d9(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lex$d9* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lex$d9(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lexLitChar$d10(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d10* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lexLitChar$d10(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lexLitChar$d12(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d12* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lexLitChar$d12(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lexLitChar$d13(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d13* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lexLitChar$d13(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lexLitChar$d14(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d14* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lexLitChar$d14(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lexLitChar$d15(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d15* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lexLitChar$d15(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lexLitChar$d16(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d16* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lexLitChar$d16(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lexLitChar$d2(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d2* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lexLitChar$d2(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lexLitChar$d3(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d3* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lexLitChar$d3(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lexLitChar$d4(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d4* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lexLitChar$d4(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lexLitChar$d6(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d6* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lexLitChar$d6(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lexLitChar$d7(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d7* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lexLitChar$d7(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_lexLitChar$d9(gc_t gc,arena_t arena,struct sFJhc_Text_Read_lexLitChar$d9* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_lexLitChar$d9(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_nonnull$d3(gc_t gc,arena_t arena,struct sFJhc_Text_Read_nonnull$d3* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_nonnull$d3(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_nonnull$d4(gc_t gc,arena_t arena,struct sFJhc_Text_Read_nonnull$d4* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_nonnull$d4(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readDec$d2(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readDec$d2* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readDec$d2(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readDec$d3(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readDec$d3* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readDec$d3(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readDec$d4(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readDec$d4* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readDec$d4(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readDec$d5(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readDec$d5* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readDec$d5(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readDec$d7(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readDec$d7* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readDec$d7(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readsPrec$d10(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d10* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readsPrec$d10(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readsPrec$d11(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d11* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readsPrec$d11(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readsPrec$d12(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d12* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readsPrec$d12(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readsPrec$d13(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d13* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readsPrec$d13(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readsPrec$d14(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d14* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readsPrec$d14(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readsPrec$d18(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d18* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readsPrec$d18(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readsPrec$d19(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d19* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readsPrec$d19(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readsPrec$d2(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d2* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readsPrec$d2(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readsPrec$d3(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d3* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readsPrec$d3(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readsPrec$d4(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d4* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readsPrec$d4(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readsPrec$d7(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d7* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readsPrec$d7(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Text_Read_readsPrec$d8(gc_t gc,arena_t arena,struct sFJhc_Text_Read_readsPrec$d8* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Text_Read_readsPrec$d8(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fMain_e(gc_t gc,arena_t arena,struct sFMain_e* arg)
{
        wptr_t r;
        r = fMain_e(gc,arena);
        update(arg,r);
        gc_add_root(gc,arena,(sptr_t)r);
        return r;
}

static wptr_t A_STD A_FALIGNED
E__fR$__fJhc_Basics_$pp(gc_t gc,arena_t arena,struct sFR$__fJhc_Basics_$pp* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fR$__fJhc_Basics_$pp(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fR$__fJhc_Show_11__showl(gc_t gc,arena_t arena,struct sFR$__fJhc_Show_11__showl* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fR$__fJhc_Show_11__showl(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fR$__fMain_1__aux(gc_t gc,arena_t arena,struct sFR$__fMain_1__aux* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fR$__fMain_1__aux(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fJhc_Inst_Show_showWordMax(gc_t gc,arena_t arena,struct sFW$__fJhc_Inst_Show_showWordMax* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fJhc_Inst_Show_showWordMax(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fJhc_List_span$d3(gc_t gc,arena_t arena,struct sFW$__fJhc_List_span$d3* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fJhc_List_span$d3(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fJhc_List_span$d4(gc_t gc,arena_t arena,struct sFW$__fJhc_List_span$d4* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fJhc_List_span$d4(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fJhc_List_span$d5(gc_t gc,arena_t arena,struct sFW$__fJhc_List_span$d5* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fJhc_List_span$d5(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fR$__fJhc_List_387__f(gc_t gc,arena_t arena,struct sFW$__fR$__fJhc_List_387__f* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fR$__fJhc_List_387__f(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2(gc_t gc,arena_t arena,struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3(gc_t gc,arena_t arena,struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4(gc_t gc,arena_t arena,struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6(gc_t gc,arena_t arena,struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7(gc_t gc,arena_t arena,struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d10(gc_t gc,arena_t arena,struct sFtheMain$d10* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d10(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d102(gc_t gc,arena_t arena,struct sFtheMain$d102* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d102(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d103(gc_t gc,arena_t arena,struct sFtheMain$d103* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d103(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d104(gc_t gc,arena_t arena,struct sFtheMain$d104* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d104(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d105(gc_t gc,arena_t arena,struct sFtheMain$d105* arg)
{
        wptr_t r;
        r = ftheMain$d105(gc,arena);
        update(arg,r);
        gc_add_root(gc,arena,(sptr_t)r);
        return r;
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d11(gc_t gc,arena_t arena,struct sFtheMain$d11* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d11(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d12(gc_t gc,arena_t arena,struct sFtheMain$d12* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d12(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d13(gc_t gc,arena_t arena,struct sFtheMain$d13* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d13(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d14(gc_t gc,arena_t arena,struct sFtheMain$d14* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d14(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d15(gc_t gc,arena_t arena,struct sFtheMain$d15* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d15(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d16(gc_t gc,arena_t arena,struct sFtheMain$d16* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d16(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d17(gc_t gc,arena_t arena,struct sFtheMain$d17* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d17(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d18(gc_t gc,arena_t arena,struct sFtheMain$d18* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d18(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d19(gc_t gc,arena_t arena,struct sFtheMain$d19* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d19(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d2(gc_t gc,arena_t arena,struct sFtheMain$d2* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d2(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d20(gc_t gc,arena_t arena,struct sFtheMain$d20* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d20(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d21(gc_t gc,arena_t arena,struct sFtheMain$d21* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d21(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d22(gc_t gc,arena_t arena,struct sFtheMain$d22* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d22(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d23(gc_t gc,arena_t arena,struct sFtheMain$d23* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d23(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d24(gc_t gc,arena_t arena,struct sFtheMain$d24* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d24(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d25(gc_t gc,arena_t arena,struct sFtheMain$d25* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d25(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d26(gc_t gc,arena_t arena,struct sFtheMain$d26* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d26(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d27(gc_t gc,arena_t arena,struct sFtheMain$d27* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d27(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d28(gc_t gc,arena_t arena,struct sFtheMain$d28* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d28(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d29(gc_t gc,arena_t arena,struct sFtheMain$d29* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d29(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d30(gc_t gc,arena_t arena,struct sFtheMain$d30* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d30(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d31(gc_t gc,arena_t arena,struct sFtheMain$d31* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d31(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d32(gc_t gc,arena_t arena,struct sFtheMain$d32* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d32(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d33(gc_t gc,arena_t arena,struct sFtheMain$d33* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d33(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d34(gc_t gc,arena_t arena,struct sFtheMain$d34* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d34(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d35(gc_t gc,arena_t arena,struct sFtheMain$d35* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d35(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d36(gc_t gc,arena_t arena,struct sFtheMain$d36* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d36(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d37(gc_t gc,arena_t arena,struct sFtheMain$d37* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d37(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d38(gc_t gc,arena_t arena,struct sFtheMain$d38* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d38(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d39(gc_t gc,arena_t arena,struct sFtheMain$d39* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d39(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d40(gc_t gc,arena_t arena,struct sFtheMain$d40* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d40(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d41(gc_t gc,arena_t arena,struct sFtheMain$d41* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d41(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d42(gc_t gc,arena_t arena,struct sFtheMain$d42* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d42(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d43(gc_t gc,arena_t arena,struct sFtheMain$d43* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d43(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d44(gc_t gc,arena_t arena,struct sFtheMain$d44* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d44(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d45(gc_t gc,arena_t arena,struct sFtheMain$d45* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d45(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d46(gc_t gc,arena_t arena,struct sFtheMain$d46* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d46(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d47(gc_t gc,arena_t arena,struct sFtheMain$d47* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d47(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d48(gc_t gc,arena_t arena,struct sFtheMain$d48* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d48(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d49(gc_t gc,arena_t arena,struct sFtheMain$d49* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d49(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d50(gc_t gc,arena_t arena,struct sFtheMain$d50* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d50(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d51(gc_t gc,arena_t arena,struct sFtheMain$d51* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d51(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d52(gc_t gc,arena_t arena,struct sFtheMain$d52* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d52(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d53(gc_t gc,arena_t arena,struct sFtheMain$d53* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d53(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d56(gc_t gc,arena_t arena,struct sFtheMain$d56* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d56(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d57(gc_t gc,arena_t arena,struct sFtheMain$d57* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d57(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d58(gc_t gc,arena_t arena,struct sFtheMain$d58* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d58(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d59(gc_t gc,arena_t arena,struct sFtheMain$d59* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d59(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d6(gc_t gc,arena_t arena,struct sFtheMain$d6* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d6(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d60(gc_t gc,arena_t arena,struct sFtheMain$d60* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d60(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d61(gc_t gc,arena_t arena,struct sFtheMain$d61* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d61(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d62(gc_t gc,arena_t arena,struct sFtheMain$d62* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d62(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d63(gc_t gc,arena_t arena,struct sFtheMain$d63* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d63(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d64(gc_t gc,arena_t arena,struct sFtheMain$d64* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d64(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d65(gc_t gc,arena_t arena,struct sFtheMain$d65* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d65(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d66(gc_t gc,arena_t arena,struct sFtheMain$d66* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d66(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d67(gc_t gc,arena_t arena,struct sFtheMain$d67* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d67(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d68(gc_t gc,arena_t arena,struct sFtheMain$d68* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d68(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d69(gc_t gc,arena_t arena,struct sFtheMain$d69* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d69(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d7(gc_t gc,arena_t arena,struct sFtheMain$d7* arg)
{
        wptr_t r;
        r = ftheMain$d7(gc,arena);
        update(arg,r);
        gc_add_root(gc,arena,(sptr_t)r);
        return r;
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d70(gc_t gc,arena_t arena,struct sFtheMain$d70* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d70(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d71(gc_t gc,arena_t arena,struct sFtheMain$d71* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d71(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d72(gc_t gc,arena_t arena,struct sFtheMain$d72* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d72(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d73(gc_t gc,arena_t arena,struct sFtheMain$d73* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d73(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d74(gc_t gc,arena_t arena,struct sFtheMain$d74* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d74(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d75(gc_t gc,arena_t arena,struct sFtheMain$d75* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d75(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d76(gc_t gc,arena_t arena,struct sFtheMain$d76* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d76(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d77(gc_t gc,arena_t arena,struct sFtheMain$d77* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d77(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d78(gc_t gc,arena_t arena,struct sFtheMain$d78* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d78(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d79(gc_t gc,arena_t arena,struct sFtheMain$d79* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d79(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d80(gc_t gc,arena_t arena,struct sFtheMain$d80* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d80(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d81(gc_t gc,arena_t arena,struct sFtheMain$d81* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d81(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d82(gc_t gc,arena_t arena,struct sFtheMain$d82* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d82(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d83(gc_t gc,arena_t arena,struct sFtheMain$d83* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d83(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d84(gc_t gc,arena_t arena,struct sFtheMain$d84* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d84(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d85(gc_t gc,arena_t arena,struct sFtheMain$d85* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d85(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d86(gc_t gc,arena_t arena,struct sFtheMain$d86* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d86(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d87(gc_t gc,arena_t arena,struct sFtheMain$d87* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d87(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d88(gc_t gc,arena_t arena,struct sFtheMain$d88* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d88(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d89(gc_t gc,arena_t arena,struct sFtheMain$d89* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d89(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d90(gc_t gc,arena_t arena,struct sFtheMain$d90* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d90(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d91(gc_t gc,arena_t arena,struct sFtheMain$d91* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d91(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d92(gc_t gc,arena_t arena,struct sFtheMain$d92* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d92(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d93(gc_t gc,arena_t arena,struct sFtheMain$d93* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d93(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d94(gc_t gc,arena_t arena,struct sFtheMain$d94* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d94(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d95(gc_t gc,arena_t arena,struct sFtheMain$d95* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d95(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d96(gc_t gc,arena_t arena,struct sFtheMain$d96* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d96(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d97(gc_t gc,arena_t arena,struct sFtheMain$d97* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d97(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d98(gc_t gc,arena_t arena,struct sFtheMain$d98* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d98(gc,arena,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7,arg->a8);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d99(gc_t gc,arena_t arena,struct sFtheMain$d99* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d99(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

void 
_amain(void)
{
        arena_t arena;
        gc_t gc;
        gc = NULL;
        arena = NULL;
        jhc_alloc_init(&gc,&arena);
        jhc_hs_init(gc,arena);
        b__main(gc,arena);
        jhc_alloc_fini(gc,arena);
}

static wptr_t A_STD A_MALLOC
bRfJhc_Text_Read_readsPrec(gc_t gc,arena_t arena,wptr_t v1469981828,wptr_t v239101394,sptr_t v108956883)
{
        if (SET_RAW_TAG(TJhc_Type_Word_Int) == v1469981828) {
            wptr_t v100846;
            v100846 = bRfJhc_Text_Read_readsPrec(gc,arena,SET_RAW_TAG(TJhc_Type_Basic_Integer),v239101394,v108956883);
            sptr_t v215445110 = demote(v100846);
            return fJhc_Text_Read_readsPrec$d4(gc,arena,v215445110);
        } else {
            /* ("TJhc.Type.Basic.Integer") */
            return fJhc_Text_Read_37__optional(gc,arena,v108956883);
        }
}

static uint16_t A_STD
bRfW$__fJhc_Class_Ord_$ee(gc_t gc,arena_t arena,wptr_t v80100368,sptr_t v196335595,sptr_t v153480542)
{
        switch (FETCH_TAG(v80100368)) {
        case TJhc_Prim_Prim_$BE:
            {   sptr_t v215884494;
                sptr_t v44000684;
                v44000684 = v196335595;
                v215884494 = v153480542;
                fW$__fR$__fInstance$__iJhc_Class_Ord_$ee_$hc_Prim_Prim_$BEu2:;
                {   {   gc_frame0(gc,1,v215884494);
                        wptr_t v101342 = eval(gc,arena,v44000684);
                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101342) {
                            wptr_t v101348 = eval(gc,arena,v215884494);
                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101348) {
                                return 1;
                            } else {
                                /* ("CJhc.Prim.Prim.:" ni0 ni0) */
                                return 0;
                            }
                        } else {
                            sptr_t v1028;
                            sptr_t v601;
                            /* ("CJhc.Prim.Prim.:" ni601 ni1028) */
                            v601 = ((struct sCJhc_Prim_Prim_$x3a*)v101342)->a1;
                            v1028 = ((struct sCJhc_Prim_Prim_$x3a*)v101342)->a2;
                            {   gc_frame0(gc,2,v601,v1028);
                                wptr_t v101344 = eval(gc,arena,v215884494);
                                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101344) {
                                    return 0;
                                } else {
                                    sptr_t v184;
                                    sptr_t v608;
                                    /* ("CJhc.Prim.Prim.:" ni608 ni184) */
                                    v608 = ((struct sCJhc_Prim_Prim_$x3a*)v101344)->a1;
                                    v184 = ((struct sCJhc_Prim_Prim_$x3a*)v101344)->a2;
                                    {   uint16_t v101346;
                                        gc_frame0(gc,1,v184);
                                        v101346 = bRfW$__fJhc_Class_Ord_$ee(gc,arena,SET_RAW_TAG(TJhc_Type_Basic_Char),v601,v608);
                                        if (0 == v101346) {
                                            return 0;
                                        } else {
                                            /* 1 */
                                            assert(1 == v101346);
                                            v44000684 = v1028;
                                            v215884494 = v184;
                                            goto fW$__fR$__fInstance$__iJhc_Class_Ord_$ee_$hc_Prim_Prim_$BEu2;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        case TJhc_Type_Basic_Char:
            {   {   gc_frame0(gc,1,v153480542);
                    wptr_t v101350 = eval(gc,arena,v196335595);
                    {   uint32_t v124940240;
                        gc_frame0(gc,1,v101350);
                        v124940240 = ((uint32_t)RAW_GET_UF(v101350));
                        wptr_t v101352 = eval(gc,arena,v153480542);
                        {   uint32_t v110947994;
                            gc_frame0(gc,1,v101352);
                            v110947994 = ((uint32_t)RAW_GET_UF(v101352));
                            return v124940240 == v110947994;
                        }
                    }
                }
            }
            break;
        case TJhc_Type_Basic_Integer:
            {   {   gc_frame0(gc,1,v153480542);
                    wptr_t v101354 = eval(gc,arena,v196335595);
                    {   uintmax_t v68216834;
                        gc_frame0(gc,1,v101354);
                        v68216834 = ((struct sCJhc_Type_Basic_Integer*)v101354)->a1;
                        wptr_t v101356 = eval(gc,arena,v153480542);
                        {   uintmax_t v80100078;
                            gc_frame0(gc,1,v101356);
                            v80100078 = ((struct sCJhc_Type_Basic_Integer*)v101356)->a1;
                            return v68216834 == v80100078;
                        }
                    }
                }
            }
            break;
        case TJhc_Type_C_CChar:
            {   {   gc_frame0(gc,1,v153480542);
                    wptr_t v101358 = eval(gc,arena,v196335595);
                    {   uint8_t v10527824;
                        gc_frame0(gc,1,v101358);
                        v10527824 = ((uint8_t)RAW_GET_UF(v101358));
                        wptr_t v101360 = eval(gc,arena,v153480542);
                        {   uint8_t v253468962;
                            gc_frame0(gc,1,v101360);
                            v253468962 = ((uint8_t)RAW_GET_UF(v101360));
                            return v10527824 == v253468962;
                        }
                    }
                }
            }
            break;
        default: jhc_case_fell_off(__LINE__);
        }
}

static void A_STD
b__main(gc_t gc,arena_t arena)
{
        return ftheMain(gc,arena);
}

static wptr_t A_STD A_MALLOC
bap__1__Jhc_Text_Read_lex$d19u101648(gc_t gc,arena_t arena,wptr_t v3687,sptr_t v3689)
{
        {   sptr_t v9262;
            gc_frame0(gc,2,v3687,v3689);
            v9262 = ((struct sP1__Jhc_Text_Read_lex$d18*)v3687)->a1;
            return fJhc_Text_Read_lex$d18(gc,arena,v9262,v3689);
        }
}

static wptr_t A_STD A_MALLOC
bap__1__Jhc_Text_Read_lex$d23u101636(gc_t gc,arena_t arena,wptr_t v3690,sptr_t v3692)
{
        {   sptr_t v9270;
            gc_frame0(gc,2,v3690,v3692);
            v9270 = ((struct sP1__Jhc_Text_Read_lex$d22*)v3690)->a1;
            return fJhc_Text_Read_lex$d22(gc,arena,v9270,v3692);
        }
}

static wptr_t A_STD A_MALLOC
bap__1__Jhc_Text_Read_readsPrec$d17u101598(gc_t gc,arena_t arena,wptr_t v8335,sptr_t v8338)
{
        {   sptr_t v4644;
            gc_frame0(gc,2,v8335,v8338);
            v4644 = ((struct sP1__Jhc_Text_Read_readsPrec$d16*)v8335)->a1;
            return fJhc_Text_Read_readsPrec$d16(gc,arena,v4644,v8338);
        }
}

static wptr_t A_STD A_MALLOC
bap__1__Jhc_Text_Read_readsPrec$d6u101624(gc_t gc,arena_t arena,wptr_t v3693,sptr_t v3695)
{
        {   sptr_t v4640;
            gc_frame0(gc,2,v3693,v3695);
            v4640 = ((struct sP1__Jhc_Text_Read_readsPrec$d5*)v3693)->a1;
            return fJhc_Text_Read_readsPrec$d5(gc,arena,v4640,v3695);
        }
}

static wptr_t A_STD A_MALLOC
bapply__52652(gc_t gc,arena_t arena,wptr_t v1,sptr_t v2)
{
        switch (FETCH_TAG(v1)) {
        case P1__Jhc_Text_Read_readsPrec$d16:
            {   sptr_t v3;
                v3 = ((struct sP1__Jhc_Text_Read_readsPrec$d16*)v1)->a1;
                return fJhc_Text_Read_readsPrec$d16(gc,arena,v3,v2);
            }
            break;
        case P1__Jhc_Text_Read_77__isSym:
            {   return fJhc_Text_Read_77__isSym(gc,arena,v2);
            }
            break;
        case P1__Jhc_Text_Read_78__isIdChar:
            {   return fJhc_Text_Read_78__isIdChar(gc,arena,v2);
            }
            break;
        case P1__Prelude_CType_isHexDigit:
            {   return fPrelude_CType_isHexDigit(gc,arena,v2);
            }
            break;
        case P1__Jhc_Text_Read_lex$d22:
            {   sptr_t v7;
                v7 = ((struct sP1__Jhc_Text_Read_lex$d22*)v1)->a1;
                return fJhc_Text_Read_lex$d22(gc,arena,v7,v2);
            }
            break;
        case P1__Jhc_Text_Read_lex$d18:
            {   sptr_t v8;
                v8 = ((struct sP1__Jhc_Text_Read_lex$d18*)v1)->a1;
                return fJhc_Text_Read_lex$d18(gc,arena,v8,v2);
            }
            break;
        case P1__Prelude_CType_isDigit:
            {   return fPrelude_CType_isDigit(gc,arena,v2);
            }
            break;
        case P1__Prelude_CType_isOctDigit:
            {   return fPrelude_CType_isOctDigit(gc,arena,v2);
            }
            break;
        case P1__Jhc_Text_Read_lexLitChar$d5:
            {   return fJhc_Text_Read_lexLitChar$d5(gc,arena,v2);
            }
            break;
        case P1__Jhc_Text_Read_lexLitChar$d8:
            {   return fJhc_Text_Read_lexLitChar$d8(gc,arena,v2);
            }
            break;
        case P1__Jhc_Text_Read_lexLitChar$d11:
            {   return fJhc_Text_Read_lexLitChar$d11(gc,arena,v2);
            }
            break;
        case P1__Jhc_Text_Read_119__isCharName:
            {   return fJhc_Text_Read_119__isCharName(gc,arena,v2);
            }
            break;
        case P2__theMain$d3:
            {   sptr_t v9;
                v9 = ((struct sP2__theMain$d3*)v1)->a1;
                {   gc_frame0(gc,2,v2,v9);
                    wptr_t x4 = s_alloc(gc,arena,public_caches(arena)->cP1__theMain$d3);
                    SET_MEM_TAG((struct sP1__theMain$d3*)x4,P1__theMain$d3);
                    ((struct sP1__theMain$d3*)x4)->a1 = v9;
                    ((struct sP1__theMain$d3*)x4)->a2 = v2;
                    return x4;
                }
            }
            break;
        case P1__theMain$d4:
            {   sptr_t v10;
                v10 = ((struct sP1__theMain$d4*)v1)->a1;
                return ftheMain$d4(gc,arena,v10,v2);
            }
            break;
        case P1__theMain$d5:
            {   return ftheMain$d5(gc,arena,v2);
            }
            break;
        case P1__theMain$d3:
            {   sptr_t v11;
                sptr_t v4;
                v11 = ((struct sP1__theMain$d3*)v1)->a1;
                v4 = ((struct sP1__theMain$d3*)v1)->a2;
                return ftheMain$d3(gc,arena,v11,v4,v2);
            }
            break;
        case P1__Jhc_Text_Read_readsPrec$d5:
            {   sptr_t v13;
                v13 = ((struct sP1__Jhc_Text_Read_readsPrec$d5*)v1)->a1;
                return fJhc_Text_Read_readsPrec$d5(gc,arena,v13,v2);
            }
            break;
        default: jhc_case_fell_off(__LINE__);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Basics_$pp(gc_t gc,arena_t arena,wptr_t u1,sptr_t v132,sptr_t v134)
{
        return fR$__fJhc_Basics_$pp(gc,arena,v132,v134);
}

static wptr_t A_STD A_MALLOC
fJhc_Basics_45__go(gc_t gc,arena_t arena,sptr_t v732)
{
        wptr_t v101250 = eval(gc,arena,v732);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101250) {
            return v101250;
        } else {
            sptr_t v134159168;
            sptr_t v32;
            /* ("CJhc.Prim.Prim.:" ni134159168 ni32) */
            v134159168 = ((struct sCJhc_Prim_Prim_$x3a*)v101250)->a1;
            v32 = ((struct sCJhc_Prim_Prim_$x3a*)v101250)->a2;
            {   gc_frame0(gc,2,v32,v134159168);
                sptr_t x106 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Basics_45__go);
                ((struct sFJhc_Basics_45__go*)x106)->head = TO_FPTR(&E__fJhc_Basics_45__go);
                ((struct sFJhc_Basics_45__go*)x106)->a1 = v32;
                sptr_t v190704146 = MKLAZY(x106);
                {   gc_frame0(gc,1,v190704146);
                    sptr_t x107 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readDec$d3);
                    ((struct sFJhc_Text_Read_readDec$d3*)x107)->head = TO_FPTR(&E__fJhc_Text_Read_readDec$d3);
                    ((struct sFJhc_Text_Read_readDec$d3*)x107)->a1 = v134159168;
                    sptr_t v138100244 = MKLAZY(x107);
                    {   gc_frame0(gc,1,v138100244);
                        wptr_t x108 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x108)->a1 = v138100244;
                        ((struct sCJhc_Prim_Prim_$x3a*)x108)->a2 = v190704146;
                        return x108;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Basics_concatMap(gc_t gc,arena_t arena,wptr_t v1001523235,wptr_t v568860709)
{
        sptr_t v568865312 = demote(v568860709);
        return fJhc_Basics_concatMap$d2(gc,arena,v1001523235,v568865312);
}

static wptr_t A_STD A_MALLOC
fJhc_Basics_concatMap$d2(gc_t gc,arena_t arena,wptr_t v196335304,sptr_t v197291872)
{
        {   gc_frame0(gc,1,v196335304);
            wptr_t v101684 = eval(gc,arena,v197291872);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101684) {
                return v101684;
            } else {
                sptr_t v9314;
                sptr_t v97730298;
                /* ("CJhc.Prim.Prim.:" ni97730298 ni9314) */
                v97730298 = ((struct sCJhc_Prim_Prim_$x3a*)v101684)->a1;
                v9314 = ((struct sCJhc_Prim_Prim_$x3a*)v101684)->a2;
                {   wptr_t v101686;
                    gc_frame0(gc,1,v9314);
                    v101686 = bapply__52652(gc,arena,v196335304,v97730298);
                    sptr_t v8884580 = demote(v101686);
                    {   gc_frame0(gc,1,v8884580);
                        sptr_t x50 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Basics_concatMap$d2);
                        ((struct sFJhc_Basics_concatMap$d2*)x50)->head = TO_FPTR(&E__fJhc_Basics_concatMap$d2);
                        ((struct sFJhc_Basics_concatMap$d2*)x50)->a1 = v196335304;
                        ((struct sFJhc_Basics_concatMap$d2*)x50)->a2 = v9314;
                        sptr_t v159620722 = MKLAZY(x50);
                        return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v8884580,v159620722);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_IO_putErrLn(gc_t gc,arena_t arena,wptr_t v76)
{
        sptr_t v90861650;
        sptr_t v4345 = demote(v76);
        v90861650 = v4345;
        fR$__fJhc_IO_putErrLn__86:;
        {   wptr_t v101318 = eval(gc,arena,v90861650);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101318) {
                jhc_utf8_putchar((int)10);
                return SET_RAW_TAG(CJhc_Prim_Prim_$LR);
            } else {
                sptr_t v637;
                sptr_t v640;
                /* ("CJhc.Prim.Prim.:" ni637 ni640) */
                v637 = ((struct sCJhc_Prim_Prim_$x3a*)v101318)->a1;
                v640 = ((struct sCJhc_Prim_Prim_$x3a*)v101318)->a2;
                {   gc_frame0(gc,1,v640);
                    wptr_t v101320 = eval(gc,arena,v637);
                    {   uint32_t v59069480;
                        gc_frame0(gc,1,v101320);
                        v59069480 = ((uint32_t)RAW_GET_UF(v101320));
                        uint32_t v205779218 = v59069480;
                        jhc_utf8_putchar((int)v205779218);
                        v90861650 = v640;
                        goto fR$__fJhc_IO_putErrLn__86;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Monad_60__go(gc_t gc,arena_t arena,sptr_t v3371,uintptr_t v194635136)
{
        wptr_t v100774 = eval(gc,arena,v3371);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100774) {
            return v100774;
        } else {
            sptr_t v54193218;
            sptr_t v7950;
            /* ("CJhc.Prim.Prim.:" ni54193218 ni7950) */
            v54193218 = ((struct sCJhc_Prim_Prim_$x3a*)v100774)->a1;
            v7950 = ((struct sCJhc_Prim_Prim_$x3a*)v100774)->a2;
            {   gc_frame0(gc,1,v7950);
                wptr_t v100776 = eval(gc,arena,v54193218);
                {   wptr_t v36;
                    uint32_t v75828518;
                    gc_frame0(gc,1,v100776);
                    v75828518 = ((struct sCJhc_Type_Word_Int*)v100776)->a1;
                    uint32_t v209623822 = (v75828518 * sizeof(uintptr_t));
                    uintptr_t v227981062 = ((intptr_t)((int32_t)v209623822));
                    uintptr_t v105553384 = (v194635136 + v227981062);
                    uintptr_t v124940242 = *((uintptr_t *)(v105553384));
                    v36 = fW$__fForeign_C_String_peekCAString(gc,arena,v124940242);
                    sptr_t v123670246 = demote(v36);
                    {   wptr_t v38;
                        gc_frame0(gc,1,v123670246);
                        v38 = fJhc_Monad_60__go(gc,arena,v7950,v194635136);
                        sptr_t v117740414 = demote(v38);
                        {   gc_frame0(gc,1,v117740414);
                            wptr_t x3 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x3)->a1 = v123670246;
                            ((struct sCJhc_Prim_Prim_$x3a*)x3)->a2 = v117740414;
                            return x3;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Show_shows(gc_t gc,arena_t arena,sptr_t v209100922,sptr_t v116668568)
{
        {   gc_frame0(gc,1,v116668568);
            wptr_t v101714 = eval(gc,arena,v209100922);
            {   uintmax_t v251973246;
                gc_frame0(gc,1,v101714);
                v251973246 = ((struct sCJhc_Type_Basic_Integer*)v101714)->a1;
                uint16_t v101716 = (((intmax_t)0) > ((intmax_t)v251973246));
                if (0 == v101716) {
                    return fW$__fJhc_Inst_Show_showWordMax(gc,arena,v251973246,v116668568);
                } else {
                    /* 1 */
                    assert(1 == v101716);
                    uintmax_t v18755252 = (-((intmax_t)v251973246));
                    sptr_t x9 = s_alloc(gc,arena,public_caches(arena)->cFW$__fJhc_Inst_Show_showWordMax);
                    ((struct sFW$__fJhc_Inst_Show_showWordMax*)x9)->head = TO_FPTR(&E__fW$__fJhc_Inst_Show_showWordMax);
                    ((struct sFW$__fJhc_Inst_Show_showWordMax*)x9)->a1 = v18755252;
                    ((struct sFW$__fJhc_Inst_Show_showWordMax*)x9)->a2 = v116668568;
                    sptr_t v237930474 = MKLAZY(x9);
                    {   gc_frame0(gc,1,v237930474);
                        wptr_t x10 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x10)->a1 = ((sptr_t)RAW_SET_UF('-'));
                        ((struct sCJhc_Prim_Prim_$x3a*)x10)->a2 = v237930474;
                        return x10;
                    }
                }
            }
        }
}

static uint16_t A_STD
fJhc_String_eqUnpackedString(gc_t gc,arena_t arena,uintptr_t v1487151143,sptr_t v1489641507)
{
        sptr_t v178901586;
        uintptr_t v201297314;
        v201297314 = v1487151143;
        v178901586 = v1489641507;
        fJhc_String_17__f__54:;
        {   wptr_t v101562 = eval(gc,arena,v178901586);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101562) {
                uint32_t v101568 = *((uint8_t *)(v201297314));
                if (0 == v101568) {
                    return 1;
                } else {
                    return 0;
                }
            } else {
                sptr_t v249;
                sptr_t v4587;
                /* ("CJhc.Prim.Prim.:" ni249 ni4587) */
                v249 = ((struct sCJhc_Prim_Prim_$x3a*)v101562)->a1;
                v4587 = ((struct sCJhc_Prim_Prim_$x3a*)v101562)->a2;
                {   gc_frame0(gc,1,v4587);
                    wptr_t v101564 = eval(gc,arena,v249);
                    {   uint32_t v355;
                        gc_frame0(gc,1,v101564);
                        v355 = ((uint32_t)RAW_GET_UF(v101564));
                        uint32_t v30 = *((uint8_t *)(v201297314));
                        if (0 == v30) {
                            return 0;
                        } else {
                            uint16_t v101566 = (v30 == v355);
                            switch (v101566) {
                            case 0:
                                {   return 0;
                                }
                                break;
                            case 1:
                                {   uintptr_t v152804596 = (1 + v201297314);
                                    v201297314 = v152804596;
                                    v178901586 = v4587;
                                    goto fJhc_String_17__f__54;
                                }
                                break;
                            default:
                                {   jhc_error("No Match in Case expression at lib/jhc/Jhc/String.hs:36:16");
                                    return (uint16_t)0;
                                }
                            break;
                            }
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_119__isCharName(gc_t gc,arena_t arena,sptr_t v154420608)
{
        wptr_t v101042 = eval(gc,arena,v154420608);
        {   uint16_t v260457474;
            uint32_t v62470120;
            gc_frame0(gc,1,v101042);
            v62470120 = ((uint32_t)RAW_GET_UF(v101042));
            v260457474 = fW$__fJhc_Text_Read_119__isCharName(gc,arena,v62470120);
            return RAW_SET_UF(v260457474);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_37__optional(gc_t gc,arena_t arena,sptr_t v155049464)
{
        {   wptr_t v100868;
            gc_frame0(gc,1,v155049464);
            v100868 = fNumeric_38__read$tt(gc,arena,v155049464);
            sptr_t v94356370 = demote(v100868);
            {   wptr_t v100872;
                gc_frame0(gc,1,v94356370);
                sptr_t x250 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readsPrec$d8);
                ((struct sFJhc_Text_Read_readsPrec$d8*)x250)->head = TO_FPTR(&E__fJhc_Text_Read_readsPrec$d8);
                ((struct sFJhc_Text_Read_readsPrec$d8*)x250)->a1 = v155049464;
                sptr_t v156390958 = MKLAZY(x250);
                v100872 = fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v94356370,v156390958);
                sptr_t v68319418 = demote(v100872);
                {   gc_frame0(gc,1,v68319418);
                    sptr_t x251 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readsPrec$d14);
                    ((struct sFJhc_Text_Read_readsPrec$d14*)x251)->head = TO_FPTR(&E__fJhc_Text_Read_readsPrec$d14);
                    ((struct sFJhc_Text_Read_readsPrec$d14*)x251)->a1 = v155049464;
                    sptr_t v103876252 = MKLAZY(x251);
                    return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v68319418,v103876252);
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_55__lexString(gc_t gc,arena_t arena,sptr_t v4536)
{
        {   gc_frame0(gc,1,v4536);
            wptr_t v100934 = eval(gc,arena,v4536);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100934) {
                wptr_t v100960;
                v100960 = fJhc_Text_Read_lexLitChar(gc,arena,v4536);
                sptr_t v124940232 = demote(v100960);
                return fJhc_Text_Read_lex$d7(gc,arena,v124940232);
            } else {
                sptr_t v4550;
                sptr_t v4552;
                /* ("CJhc.Prim.Prim.:" ni4550 ni4552) */
                v4550 = ((struct sCJhc_Prim_Prim_$x3a*)v100934)->a1;
                v4552 = ((struct sCJhc_Prim_Prim_$x3a*)v100934)->a2;
                {   gc_frame0(gc,1,v4552);
                    wptr_t v100936 = eval(gc,arena,v4550);
                    {   uint32_t v4554;
                        gc_frame0(gc,1,v100936);
                        v4554 = ((uint32_t)RAW_GET_UF(v100936));
                        switch (v4554) {
                        case 34:
                            {   wptr_t x178 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                                ((struct sCJhc_Prim_Prim_$LcR*)x178)->a1 = c47;
                                ((struct sCJhc_Prim_Prim_$LcR*)x178)->a2 = v4552;
                                wptr_t v877 = x178;
                                sptr_t v170587866 = demote(v877);
                                {   gc_frame0(gc,1,v170587866);
                                    wptr_t x179 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                    ((struct sCJhc_Prim_Prim_$x3a*)x179)->a1 = v170587866;
                                    ((struct sCJhc_Prim_Prim_$x3a*)x179)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                    return x179;
                                }
                            }
                            break;
                        default:
                            {   wptr_t v4562;
                                uint32_t v165129192;
                                v165129192 = v4554;
                                if (92 == v165129192) {
                                    wptr_t v100938 = eval(gc,arena,v4552);
                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100938) {
                                        v4562 = fJhc_Text_Read_lexLitChar(gc,arena,v4536);
                                    } else {
                                        sptr_t v4574;
                                        sptr_t v4576;
                                        /* ("CJhc.Prim.Prim.:" ni4574 ni4576) */
                                        v4574 = ((struct sCJhc_Prim_Prim_$x3a*)v100938)->a1;
                                        v4576 = ((struct sCJhc_Prim_Prim_$x3a*)v100938)->a2;
                                        {   gc_frame0(gc,2,v4574,v4576);
                                            wptr_t v100940 = eval(gc,arena,v4574);
                                            {   uint32_t v4580;
                                                gc_frame0(gc,1,v100940);
                                                v4580 = ((uint32_t)RAW_GET_UF(v100940));
                                                if (38 == v4580) {
                                                    wptr_t x180 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                                                    ((struct sCJhc_Prim_Prim_$LcR*)x180)->a1 = c4;
                                                    ((struct sCJhc_Prim_Prim_$LcR*)x180)->a2 = v4576;
                                                    wptr_t v887 = x180;
                                                    sptr_t v115981788 = demote(v887);
                                                    {   gc_frame0(gc,1,v115981788);
                                                        wptr_t x181 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                        ((struct sCJhc_Prim_Prim_$x3a*)x181)->a1 = v115981788;
                                                        ((struct sCJhc_Prim_Prim_$x3a*)x181)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                        v4562 = x181;
                                                    }
                                                } else {
                                                    uint16_t v100942;
                                                    v100942 = fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v4574,PROMOTE(c11));
                                                    if (0 == v100942) {
                                                        v4562 = fJhc_Text_Read_lexLitChar(gc,arena,v4536);
                                                    } else {
                                                        /* 1 */
                                                        assert(1 == v100942);
                                                        sptr_t x182 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d4);
                                                        ((struct sFJhc_Text_Read_lex$d4*)x182)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d4);
                                                        ((struct sFJhc_Text_Read_lex$d4*)x182)->a1 = v4576;
                                                        sptr_t v134000984 = MKLAZY(x182);
                                                        {   gc_frame0(gc,1,v134000984);
                                                            wptr_t x183 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                            ((struct sCJhc_Prim_Prim_$x3a*)x183)->a1 = v134000984;
                                                            ((struct sCJhc_Prim_Prim_$x3a*)x183)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                            wptr_t v4689 = x183;
                                                            sptr_t v242887862 = demote(v4689);
                                                            v4562 = fJhc_Text_Read_lex$d3(gc,arena,v242887862);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    v4562 = fJhc_Text_Read_lexLitChar(gc,arena,v4536);
                                }
                                sptr_t v5370 = demote(v4562);
                                return fJhc_Text_Read_lex$d7(gc,arena,v5370);
                            }
                        break;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_77__isSym(gc_t gc,arena_t arena,sptr_t v75583674)
{
        uint16_t v103925134;
        v103925134 = fW$__fJhc_Text_Read_77__isSym(gc,arena,v75583674);
        return RAW_SET_UF(v103925134);
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_78__isIdChar(gc_t gc,arena_t arena,sptr_t v194346574)
{
        wptr_t v101322 = eval(gc,arena,v194346574);
        {   uint16_t v1217242;
            uint32_t v247305778;
            gc_frame0(gc,1,v101322);
            v247305778 = ((uint32_t)RAW_GET_UF(v101322));
            v1217242 = fW$__fJhc_Text_Read_78__isIdChar(gc,arena,v247305778);
            return RAW_SET_UF(v1217242);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_80__lexExp(gc_t gc,arena_t arena,sptr_t v4638)
{
        {   gc_frame0(gc,1,v4638);
            wptr_t v101208 = eval(gc,arena,v4638);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101208) {
                wptr_t x213 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                ((struct sCJhc_Prim_Prim_$LcR*)x213)->a1 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                ((struct sCJhc_Prim_Prim_$LcR*)x213)->a2 = v4638;
                wptr_t v2219 = x213;
                sptr_t v135243420 = demote(v2219);
                {   gc_frame0(gc,1,v135243420);
                    wptr_t x214 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x214)->a1 = v135243420;
                    ((struct sCJhc_Prim_Prim_$x3a*)x214)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                    return x214;
                }
            } else {
                sptr_t v177337778;
                sptr_t v226245504;
                /* ("CJhc.Prim.Prim.:" ni226245504 ni177337778) */
                v226245504 = ((struct sCJhc_Prim_Prim_$x3a*)v101208)->a1;
                v177337778 = ((struct sCJhc_Prim_Prim_$x3a*)v101208)->a2;
                {   uint16_t v101210;
                    gc_frame0(gc,2,v177337778,v226245504);
                    v101210 = fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v226245504,PROMOTE(c51));
                    if (0 == v101210) {
                        wptr_t x215 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                        ((struct sCJhc_Prim_Prim_$LcR*)x215)->a1 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                        ((struct sCJhc_Prim_Prim_$LcR*)x215)->a2 = v4638;
                        wptr_t v2215 = x215;
                        sptr_t v242339378 = demote(v2215);
                        {   gc_frame0(gc,1,v242339378);
                            wptr_t x216 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x216)->a1 = v242339378;
                            ((struct sCJhc_Prim_Prim_$x3a*)x216)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                            return x216;
                        }
                    } else {
                        wptr_t v101212;
                        /* 1 */
                        assert(1 == v101210);
                        wptr_t x217 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x217)->a1 = v177337778;
                        ((struct sCJhc_Prim_Prim_$x3a*)x217)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                        wptr_t v2200 = x217;
                        sptr_t v92282730 = demote(v2200);
                        v101212 = fJhc_Text_Read_lex$d22(gc,arena,v226245504,v92282730);
                        sptr_t v39110756 = demote(v101212);
                        {   gc_frame0(gc,1,v39110756);
                            sptr_t x218 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d26);
                            ((struct sFJhc_Text_Read_lex$d26*)x218)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d26);
                            ((struct sFJhc_Text_Read_lex$d26*)x218)->a1 = v226245504;
                            ((struct sFJhc_Text_Read_lex$d26*)x218)->a2 = v177337778;
                            sptr_t v231840956 = MKLAZY(x218);
                            return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v39110756,v231840956);
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex(gc_t gc,arena_t arena,sptr_t v4514)
{
        sptr_t v202526178;
        v202526178 = v4514;
        fR$__fJhc_Text_Read_lex__223:;
        {   wptr_t v100902 = eval(gc,arena,v202526178);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100902) {
                return PROMOTE(c53);
            } else {
                sptr_t v131743040;
                sptr_t v47086272;
                /* ("CJhc.Prim.Prim.:" ni47086272 ni131743040) */
                v47086272 = ((struct sCJhc_Prim_Prim_$x3a*)v100902)->a1;
                v131743040 = ((struct sCJhc_Prim_Prim_$x3a*)v100902)->a2;
                {   uint16_t v100904;
                    gc_frame0(gc,2,v47086272,v131743040);
                    v100904 = fW$__fPrelude_CType_isSpace(gc,arena,v47086272);
                    if (0 == v100904) {
                        wptr_t v100914 = eval(gc,arena,v47086272);
                        {   uint32_t v4670;
                            gc_frame0(gc,1,v100914);
                            v4670 = ((uint32_t)RAW_GET_UF(v100914));
                            switch (v4670) {
                            case 34:
                                {   wptr_t v100916;
                                    v100916 = fJhc_Text_Read_55__lexString(gc,arena,v131743040);
                                    sptr_t v27382892 = demote(v100916);
                                    return fJhc_Text_Read_lex$d9(gc,arena,v27382892);
                                }
                                break;
                            case 39:
                                {   wptr_t v100920;
                                    v100920 = fJhc_Text_Read_lexLitChar(gc,arena,v131743040);
                                    sptr_t v49662112 = demote(v100920);
                                    return fJhc_Text_Read_lex$d11(gc,arena,v49662112);
                                }
                                break;
                            default:
                                {   uint16_t v100924;
                                    v100924 = fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v47086272,PROMOTE(c63));
                                    if (0 == v100924) {
                                        uint16_t v100926;
                                        v100926 = fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v47086272,PROMOTE(c31));
                                        if (0 == v100926) {
                                            uint16_t v100928;
                                            v100928 = fW$__fPrelude_CType_isAlpha(gc,arena,v4670);
                                            if (0 == v100928) {
                                                uint16_t v100930 = (48 <= v4670);
                                                if (0 == v100930) {
                                                    return SET_RAW_TAG(CJhc_Prim_Prim_$BE);
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v100930);
                                                    uint16_t v100932 = (57 >= v4670);
                                                    if (0 == v100932) {
                                                        return SET_RAW_TAG(CJhc_Prim_Prim_$BE);
                                                    } else {
                                                        /* 1 */
                                                        assert(1 == v100932);
                                                        sptr_t x224 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d32);
                                                        ((struct sFJhc_Text_Read_lex$d32*)x224)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d32);
                                                        ((struct sFJhc_Text_Read_lex$d32*)x224)->a1 = v131743040;
                                                        sptr_t v26936198 = MKLAZY(x224);
                                                        {   gc_frame0(gc,1,v26936198);
                                                            wptr_t x225 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                            ((struct sCJhc_Prim_Prim_$x3a*)x225)->a1 = v26936198;
                                                            ((struct sCJhc_Prim_Prim_$x3a*)x225)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                            wptr_t v1141 = x225;
                                                            sptr_t v1923798 = demote(v1141);
                                                            return fJhc_Text_Read_lex$d18(gc,arena,v47086272,v1923798);
                                                        }
                                                    }
                                                }
                                            } else {
                                                /* 1 */
                                                assert(1 == v100928);
                                                sptr_t x226 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d17);
                                                ((struct sFJhc_Text_Read_lex$d17*)x226)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d17);
                                                ((struct sFJhc_Text_Read_lex$d17*)x226)->a1 = v131743040;
                                                sptr_t v264841572 = MKLAZY(x226);
                                                {   gc_frame0(gc,1,v264841572);
                                                    wptr_t x227 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                    ((struct sCJhc_Prim_Prim_$x3a*)x227)->a1 = v264841572;
                                                    ((struct sCJhc_Prim_Prim_$x3a*)x227)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                    wptr_t v4665 = x227;
                                                    sptr_t v19684942 = demote(v4665);
                                                    return fJhc_Text_Read_lex$d15(gc,arena,v47086272,v19684942);
                                                }
                                            }
                                        } else {
                                            /* 1 */
                                            assert(1 == v100926);
                                            sptr_t x228 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d14);
                                            ((struct sFJhc_Text_Read_lex$d14*)x228)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d14);
                                            ((struct sFJhc_Text_Read_lex$d14*)x228)->a1 = v131743040;
                                            sptr_t v67189508 = MKLAZY(x228);
                                            {   gc_frame0(gc,1,v67189508);
                                                wptr_t x229 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                ((struct sCJhc_Prim_Prim_$x3a*)x229)->a1 = v67189508;
                                                ((struct sCJhc_Prim_Prim_$x3a*)x229)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                wptr_t v1132 = x229;
                                                sptr_t v258494828 = demote(v1132);
                                                return fJhc_Text_Read_lex$d12(gc,arena,v47086272,v258494828);
                                            }
                                        }
                                    } else {
                                        /* 1 */
                                        assert(1 == v100924);
                                        wptr_t x230 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                        ((struct sCJhc_Prim_Prim_$x3a*)x230)->a1 = v47086272;
                                        ((struct sCJhc_Prim_Prim_$x3a*)x230)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                        wptr_t v1126 = x230;
                                        sptr_t v20481468 = demote(v1126);
                                        {   gc_frame0(gc,1,v20481468);
                                            wptr_t x231 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                                            ((struct sCJhc_Prim_Prim_$LcR*)x231)->a1 = v20481468;
                                            ((struct sCJhc_Prim_Prim_$LcR*)x231)->a2 = v131743040;
                                            wptr_t v1128 = x231;
                                            sptr_t v234021788 = demote(v1128);
                                            {   gc_frame0(gc,1,v234021788);
                                                wptr_t x232 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                ((struct sCJhc_Prim_Prim_$x3a*)x232)->a1 = v234021788;
                                                ((struct sCJhc_Prim_Prim_$x3a*)x232)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                return x232;
                                            }
                                        }
                                    }
                                }
                            break;
                            }
                        }
                    } else {
                        wptr_t v100906;
                        sptr_t v138865114;
                        /* 1 */
                        assert(1 == v100904);
                        v138865114 = v131743040;
                        fR$__fJhc_List_dropWhile__233:;
                        {   wptr_t v100910 = eval(gc,arena,v138865114);
                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100910) {
                                v100906 = v100910;
                            } else {
                                sptr_t v274;
                                sptr_t v276;
                                /* ("CJhc.Prim.Prim.:" ni274 ni276) */
                                v274 = ((struct sCJhc_Prim_Prim_$x3a*)v100910)->a1;
                                v276 = ((struct sCJhc_Prim_Prim_$x3a*)v100910)->a2;
                                {   uint16_t v100912;
                                    gc_frame0(gc,2,v274,v276);
                                    v100912 = fW$__fPrelude_CType_isSpace(gc,arena,v274);
                                    if (0 == v100912) {
                                        wptr_t x234 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                        ((struct sCJhc_Prim_Prim_$x3a*)x234)->a1 = v274;
                                        ((struct sCJhc_Prim_Prim_$x3a*)x234)->a2 = v276;
                                        v100906 = x234;
                                    } else {
                                        /* 1 */
                                        assert(1 == v100912);
                                        v138865114 = v276;
                                        goto fR$__fJhc_List_dropWhile__233;
                                    }
                                }
                            }
                        }
                        sptr_t v148300464 = demote(v100906);
                        v202526178 = v148300464;
                        goto fR$__fJhc_Text_Read_lex__223;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d10(gc_t gc,arena_t arena,sptr_t v146663952,wptr_t v94356368)
{
        sptr_t v94360728 = demote(v94356368);
        {   gc_frame0(gc,2,v94360728,v146663952);
            sptr_t x78 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d11);
            ((struct sFJhc_Text_Read_lex$d11*)x78)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d11);
            ((struct sFJhc_Text_Read_lex$d11*)x78)->a1 = v146663952;
            sptr_t v62866270 = MKLAZY(x78);
            return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v94360728,v62866270);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d11(gc_t gc,arena_t arena,sptr_t v123321940)
{
        wptr_t v101362 = eval(gc,arena,v123321940);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101362) {
            return v101362;
        } else {
            sptr_t v202456474;
            sptr_t v88032708;
            /* ("CJhc.Prim.Prim.:" ni88032708 ni202456474) */
            v88032708 = ((struct sCJhc_Prim_Prim_$x3a*)v101362)->a1;
            v202456474 = ((struct sCJhc_Prim_Prim_$x3a*)v101362)->a2;
            {   gc_frame0(gc,1,v202456474);
                wptr_t v101364 = eval(gc,arena,v88032708);
                {   sptr_t v4522;
                    sptr_t v4524;
                    gc_frame0(gc,1,v101364);
                    v4522 = ((struct sCJhc_Prim_Prim_$LcR*)v101364)->a1;
                    v4524 = ((struct sCJhc_Prim_Prim_$LcR*)v101364)->a2;
                    {   sptr_t v330;
                        sptr_t v332;
                        struct tup1 x73;
                        gc_frame0(gc,1,v4522);
                        wptr_t v101370 = eval(gc,arena,v4524);
                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101370) {
                            x73.t0 = v202456474;
                            x73.t1 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                        } else {
                            sptr_t v4526;
                            sptr_t v4528;
                            /* ("CJhc.Prim.Prim.:" ni4526 ni4528) */
                            v4526 = ((struct sCJhc_Prim_Prim_$x3a*)v101370)->a1;
                            v4528 = ((struct sCJhc_Prim_Prim_$x3a*)v101370)->a2;
                            {   gc_frame0(gc,1,v4528);
                                wptr_t v101372 = eval(gc,arena,v4526);
                                {   uint32_t v4530;
                                    gc_frame0(gc,1,v101372);
                                    v4530 = ((uint32_t)RAW_GET_UF(v101372));
                                    if (39 == v4530) {
                                        uint16_t v101374;
                                        v101374 = fW$__fInstance$__iJhc_Class_Ord_$se_$efault(gc,arena,v4522,PROMOTE(c33));
                                        if (0 == v101374) {
                                            x73.t0 = v202456474;
                                            x73.t1 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                        } else {
                                            /* 1 */
                                            assert(1 == v101374);
                                            sptr_t x74 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Basics_$pp);
                                            ((struct sFJhc_Basics_$pp*)x74)->head = TO_FPTR(&E__fJhc_Basics_$pp);
                                            ((struct sFJhc_Basics_$pp*)x74)->a1 = SET_RAW_TAG($_hole);
                                            ((struct sFJhc_Basics_$pp*)x74)->a2 = v4522;
                                            ((struct sFJhc_Basics_$pp*)x74)->a3 = c33;
                                            sptr_t v29821312 = MKLAZY(x74);
                                            {   gc_frame0(gc,1,v29821312);
                                                wptr_t x75 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                ((struct sCJhc_Prim_Prim_$x3a*)x75)->a1 = ((sptr_t)RAW_SET_UF('\''));
                                                ((struct sCJhc_Prim_Prim_$x3a*)x75)->a2 = v29821312;
                                                wptr_t v4761 = x75;
                                                sptr_t v220258512 = demote(v4761);
                                                {   gc_frame0(gc,1,v220258512);
                                                    wptr_t x76 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                                                    ((struct sCJhc_Prim_Prim_$LcR*)x76)->a1 = v220258512;
                                                    ((struct sCJhc_Prim_Prim_$LcR*)x76)->a2 = v4528;
                                                    wptr_t v853 = x76;
                                                    sptr_t v244190184 = demote(v853);
                                                    {   gc_frame0(gc,1,v244190184);
                                                        wptr_t x77 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                        ((struct sCJhc_Prim_Prim_$x3a*)x77)->a1 = v244190184;
                                                        ((struct sCJhc_Prim_Prim_$x3a*)x77)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                        wptr_t v379 = x77;
                                                        sptr_t v216085098 = demote(v379);
                                                        x73.t0 = v202456474;
                                                        x73.t1 = v216085098;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        x73.t0 = v202456474;
                                        x73.t1 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                    }
                                }
                            }
                        }
                        v330 = x73.t0;
                        v332 = x73.t1;
                        wptr_t v4399 = promote(v332);
                        return fJhc_Text_Read_lex$d10(gc,arena,v330,v4399);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d12(gc_t gc,arena_t arena,sptr_t v31637636,sptr_t v260457476)
{
        {   gc_frame0(gc,1,v31637636);
            wptr_t v100820 = eval(gc,arena,v260457476);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100820) {
                return v100820;
            } else {
                sptr_t v112417156;
                sptr_t v98167652;
                /* ("CJhc.Prim.Prim.:" ni112417156 ni98167652) */
                v112417156 = ((struct sCJhc_Prim_Prim_$x3a*)v100820)->a1;
                v98167652 = ((struct sCJhc_Prim_Prim_$x3a*)v100820)->a2;
                {   gc_frame0(gc,2,v98167652,v112417156);
                    sptr_t x192 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d12);
                    ((struct sFJhc_Text_Read_lex$d12*)x192)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d12);
                    ((struct sFJhc_Text_Read_lex$d12*)x192)->a1 = v31637636;
                    ((struct sFJhc_Text_Read_lex$d12*)x192)->a2 = v98167652;
                    sptr_t v166168408 = MKLAZY(x192);
                    {   gc_frame0(gc,1,v166168408);
                        sptr_t x193 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d13);
                        ((struct sFJhc_Text_Read_lex$d13*)x193)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d13);
                        ((struct sFJhc_Text_Read_lex$d13*)x193)->a1 = v31637636;
                        ((struct sFJhc_Text_Read_lex$d13*)x193)->a2 = v112417156;
                        sptr_t v23565122 = MKLAZY(x193);
                        {   gc_frame0(gc,1,v23565122);
                            wptr_t x194 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x194)->a1 = v23565122;
                            ((struct sCJhc_Prim_Prim_$x3a*)x194)->a2 = v166168408;
                            return x194;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d13(gc_t gc,arena_t arena,sptr_t v4703652,sptr_t v73786438)
{
        {   gc_frame0(gc,1,v4703652);
            wptr_t v100822 = eval(gc,arena,v73786438);
            {   sptr_t v126919650;
                sptr_t v219128852;
                gc_frame0(gc,1,v100822);
                v126919650 = ((struct sCJhc_Prim_Prim_$LcR*)v100822)->a1;
                v219128852 = ((struct sCJhc_Prim_Prim_$LcR*)v100822)->a2;
                {   gc_frame0(gc,2,v126919650,v219128852);
                    wptr_t x190 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x190)->a1 = v4703652;
                    ((struct sCJhc_Prim_Prim_$x3a*)x190)->a2 = v126919650;
                    wptr_t v3566 = x190;
                    sptr_t v102952076 = demote(v3566);
                    {   gc_frame0(gc,1,v102952076);
                        wptr_t x191 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                        ((struct sCJhc_Prim_Prim_$LcR*)x191)->a1 = v102952076;
                        ((struct sCJhc_Prim_Prim_$LcR*)x191)->a2 = v219128852;
                        return x191;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d14(gc_t gc,arena_t arena,sptr_t v4666)
{
        wptr_t v4473;
        sptr_t v4475;
        struct tup2 x67;
        x67 = fW$__fJhc_List_span(gc,arena,SET_RAW_TAG(P1__Jhc_Text_Read_77__isSym),v4666);
        v4473 = x67.t0;
        v4475 = x67.t1;
        sptr_t v4477 = demote(v4473);
        {   gc_frame0(gc,2,v4475,v4477);
            wptr_t x68 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
            ((struct sCJhc_Prim_Prim_$LcR*)x68)->a1 = v4477;
            ((struct sCJhc_Prim_Prim_$LcR*)x68)->a2 = v4475;
            return x68;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d15(gc_t gc,arena_t arena,sptr_t v33337812,sptr_t v118721818)
{
        {   gc_frame0(gc,1,v33337812);
            wptr_t v100816 = eval(gc,arena,v118721818);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100816) {
                return v100816;
            } else {
                sptr_t v242159982;
                sptr_t v80926652;
                /* ("CJhc.Prim.Prim.:" ni80926652 ni242159982) */
                v80926652 = ((struct sCJhc_Prim_Prim_$x3a*)v100816)->a1;
                v242159982 = ((struct sCJhc_Prim_Prim_$x3a*)v100816)->a2;
                {   gc_frame0(gc,2,v80926652,v242159982);
                    sptr_t x197 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d15);
                    ((struct sFJhc_Text_Read_lex$d15*)x197)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d15);
                    ((struct sFJhc_Text_Read_lex$d15*)x197)->a1 = v33337812;
                    ((struct sFJhc_Text_Read_lex$d15*)x197)->a2 = v242159982;
                    sptr_t v215350922 = MKLAZY(x197);
                    {   gc_frame0(gc,1,v215350922);
                        sptr_t x198 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d16);
                        ((struct sFJhc_Text_Read_lex$d16*)x198)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d16);
                        ((struct sFJhc_Text_Read_lex$d16*)x198)->a1 = v33337812;
                        ((struct sFJhc_Text_Read_lex$d16*)x198)->a2 = v80926652;
                        sptr_t v59642632 = MKLAZY(x198);
                        {   gc_frame0(gc,1,v59642632);
                            wptr_t x199 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x199)->a1 = v59642632;
                            ((struct sCJhc_Prim_Prim_$x3a*)x199)->a2 = v215350922;
                            return x199;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d16(gc_t gc,arena_t arena,sptr_t v251806218,sptr_t v132679396)
{
        {   gc_frame0(gc,1,v251806218);
            wptr_t v100818 = eval(gc,arena,v132679396);
            {   sptr_t v214169464;
                sptr_t v98508472;
                gc_frame0(gc,1,v100818);
                v98508472 = ((struct sCJhc_Prim_Prim_$LcR*)v100818)->a1;
                v214169464 = ((struct sCJhc_Prim_Prim_$LcR*)v100818)->a2;
                {   gc_frame0(gc,2,v98508472,v214169464);
                    wptr_t x195 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x195)->a1 = v251806218;
                    ((struct sCJhc_Prim_Prim_$x3a*)x195)->a2 = v98508472;
                    wptr_t v957 = x195;
                    sptr_t v242443208 = demote(v957);
                    {   gc_frame0(gc,1,v242443208);
                        wptr_t x196 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                        ((struct sCJhc_Prim_Prim_$LcR*)x196)->a1 = v242443208;
                        ((struct sCJhc_Prim_Prim_$LcR*)x196)->a2 = v214169464;
                        return x196;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d17(gc_t gc,arena_t arena,sptr_t v70238678)
{
        wptr_t v4286;
        sptr_t v4288;
        struct tup2 x84;
        x84 = fW$__fJhc_List_span(gc,arena,SET_RAW_TAG(P1__Jhc_Text_Read_78__isIdChar),v70238678);
        v4286 = x84.t0;
        v4288 = x84.t1;
        sptr_t v4290 = demote(v4286);
        {   gc_frame0(gc,2,v4288,v4290);
            wptr_t x85 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
            ((struct sCJhc_Prim_Prim_$LcR*)x85)->a1 = v4290;
            ((struct sCJhc_Prim_Prim_$LcR*)x85)->a2 = v4288;
            return x85;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d18(gc_t gc,arena_t arena,sptr_t v224424526,sptr_t v62470114)
{
        {   gc_frame0(gc,1,v224424526);
            wptr_t v101096 = eval(gc,arena,v62470114);
            {   gc_frame0(gc,1,v101096);
                wptr_t x220 = s_alloc(gc,arena,public_caches(arena)->cP1__Jhc_Text_Read_lex$d18);
                SET_MEM_TAG((struct sP1__Jhc_Text_Read_lex$d18*)x220,P1__Jhc_Text_Read_lex$d18);
                ((struct sP1__Jhc_Text_Read_lex$d18*)x220)->a1 = v224424526;
                wptr_t v4598 = x220;
                sptr_t v54193222 = demote(v4598);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101096) {
                    return v101096;
                } else {
                    sptr_t v157205388;
                    sptr_t v52608292;
                    /* ("CJhc.Prim.Prim.:" ni52608292 ni157205388) */
                    v52608292 = ((struct sCJhc_Prim_Prim_$x3a*)v101096)->a1;
                    v157205388 = ((struct sCJhc_Prim_Prim_$x3a*)v101096)->a2;
                    {   gc_frame0(gc,2,v54193222,v157205388);
                        wptr_t v101098 = eval(gc,arena,v52608292);
                        {   sptr_t v215130358;
                            sptr_t v4600;
                            gc_frame0(gc,1,v101098);
                            v215130358 = ((struct sCJhc_Prim_Prim_$LcR*)v101098)->a1;
                            v4600 = ((struct sCJhc_Prim_Prim_$LcR*)v101098)->a2;
                            {   sptr_t v3587;
                                sptr_t v3589;
                                sptr_t v4541;
                                sptr_t v4544;
                                sptr_t v4547;
                                struct tup3 x221;
                                gc_frame0(gc,2,v4600,v215130358);
                                wptr_t v101104 = eval(gc,arena,v4600);
                                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101104) {
                                    wptr_t v101150;
                                    v101150 = fJhc_Text_Read_80__lexExp(gc,arena,v4600);
                                    sptr_t v216085096 = demote(v101150);
                                    x221.t0 = v215130358;
                                    x221.t1 = v224424526;
                                    x221.t2 = v157205388;
                                    x221.t3 = v54193222;
                                    x221.t4 = v216085096;
                                } else {
                                    sptr_t v4628;
                                    sptr_t v4630;
                                    /* ("CJhc.Prim.Prim.:" ni4628 ni4630) */
                                    v4628 = ((struct sCJhc_Prim_Prim_$x3a*)v101104)->a1;
                                    v4630 = ((struct sCJhc_Prim_Prim_$x3a*)v101104)->a2;
                                    {   gc_frame0(gc,1,v4630);
                                        wptr_t v101106 = eval(gc,arena,v4628);
                                        {   uint32_t v4636;
                                            gc_frame0(gc,1,v101106);
                                            v4636 = ((uint32_t)RAW_GET_UF(v101106));
                                            if (46 == v4636) {
                                                wptr_t v101108 = eval(gc,arena,v4630);
                                                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101108) {
                                                    wptr_t v101138;
                                                    v101138 = fJhc_Text_Read_80__lexExp(gc,arena,v4600);
                                                    sptr_t v418668 = demote(v101138);
                                                    x221.t0 = v215130358;
                                                    x221.t1 = v224424526;
                                                    x221.t2 = v157205388;
                                                    x221.t3 = v54193222;
                                                    x221.t4 = v418668;
                                                } else {
                                                    sptr_t v4632;
                                                    sptr_t v4634;
                                                    /* ("CJhc.Prim.Prim.:" ni4632 ni4634) */
                                                    v4632 = ((struct sCJhc_Prim_Prim_$x3a*)v101108)->a1;
                                                    v4634 = ((struct sCJhc_Prim_Prim_$x3a*)v101108)->a2;
                                                    {   gc_frame0(gc,2,v4632,v4634);
                                                        wptr_t v101110 = eval(gc,arena,v4632);
                                                        {   uint32_t v172329328;
                                                            gc_frame0(gc,1,v101110);
                                                            v172329328 = ((uint32_t)RAW_GET_UF(v101110));
                                                            uint16_t v101112 = (48 <= v172329328);
                                                            if (0 == v101112) {
                                                                wptr_t v101114;
                                                                v101114 = fJhc_Text_Read_80__lexExp(gc,arena,v4600);
                                                                sptr_t v115160454 = demote(v101114);
                                                                x221.t0 = v215130358;
                                                                x221.t1 = v224424526;
                                                                x221.t2 = v157205388;
                                                                x221.t3 = v54193222;
                                                                x221.t4 = v115160454;
                                                            } else {
                                                                /* 1 */
                                                                assert(1 == v101112);
                                                                uint16_t v101120 = (57 >= v172329328);
                                                                if (0 == v101120) {
                                                                    wptr_t v101132;
                                                                    v101132 = fJhc_Text_Read_80__lexExp(gc,arena,v4600);
                                                                    sptr_t v249143450 = demote(v101132);
                                                                    x221.t0 = v215130358;
                                                                    x221.t1 = v224424526;
                                                                    x221.t2 = v157205388;
                                                                    x221.t3 = v54193222;
                                                                    x221.t4 = v249143450;
                                                                } else {
                                                                    wptr_t v101122;
                                                                    wptr_t v101126;
                                                                    /* 1 */
                                                                    assert(1 == v101120);
                                                                    wptr_t x222 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x222)->a1 = v4632;
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x222)->a2 = v4634;
                                                                    wptr_t v4649 = x222;
                                                                    sptr_t v263738426 = demote(v4649);
                                                                    v101122 = fJhc_Text_Read_nonnull(gc,arena,SET_RAW_TAG(P1__Prelude_CType_isDigit),v263738426);
                                                                    sptr_t v238019176 = demote(v101122);
                                                                    v101126 = fJhc_Text_Read_lex$d31(gc,arena,v238019176);
                                                                    sptr_t v990230 = demote(v101126);
                                                                    x221.t0 = v215130358;
                                                                    x221.t1 = v224424526;
                                                                    x221.t2 = v157205388;
                                                                    x221.t3 = v54193222;
                                                                    x221.t4 = v990230;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                wptr_t v101144;
                                                v101144 = fJhc_Text_Read_80__lexExp(gc,arena,v4600);
                                                sptr_t v11885914 = demote(v101144);
                                                x221.t0 = v215130358;
                                                x221.t1 = v224424526;
                                                x221.t2 = v157205388;
                                                x221.t3 = v54193222;
                                                x221.t4 = v11885914;
                                            }
                                        }
                                    }
                                }
                                v4541 = x221.t0;
                                v4544 = x221.t1;
                                v4547 = x221.t2;
                                v3587 = x221.t3;
                                v3589 = x221.t4;
                                wptr_t v7184 = promote(v3587);
                                wptr_t v3596 = promote(v3589);
                                return fJhc_Text_Read_lex$d19(gc,arena,v4541,v4544,v4547,v7184,v3596);
                            }
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d19(gc_t gc,arena_t arena,sptr_t v154420602,sptr_t v256943494,sptr_t v73786434,wptr_t v256943492,wptr_t v151167344)
{
        sptr_t v151172047 = demote(v151167344);
        {   wptr_t v101644;
            gc_frame0(gc,2,v73786434,v256943492);
            v101644 = fJhc_Text_Read_lex$d20(gc,arena,v154420602,v256943494,v151172047);
            sptr_t v98167654 = demote(v101644);
            {   gc_frame0(gc,1,v98167654);
                sptr_t x36 = s_alloc(gc,arena,public_caches(arena)->cBap__1__Jhc_Text_Read_lex$d19u101648);
                ((struct sBap__1__Jhc_Text_Read_lex$d19u101648*)x36)->head = TO_FPTR(&E__bap__1__Jhc_Text_Read_lex$d19u101648);
                ((struct sBap__1__Jhc_Text_Read_lex$d19u101648*)x36)->a1 = v256943492;
                ((struct sBap__1__Jhc_Text_Read_lex$d19u101648*)x36)->a2 = v73786434;
                sptr_t v166168410 = MKLAZY(x36);
                return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v98167654,v166168410);
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d2(gc_t gc,arena_t arena,sptr_t v220263212,wptr_t v15353778)
{
        sptr_t v15358449 = demote(v15353778);
        {   gc_frame0(gc,2,v15358449,v220263212);
            sptr_t x42 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d3);
            ((struct sFJhc_Text_Read_lex$d3*)x42)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d3);
            ((struct sFJhc_Text_Read_lex$d3*)x42)->a1 = v220263212;
            sptr_t v227732184 = MKLAZY(x42);
            return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v15358449,v227732184);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d20(gc_t gc,arena_t arena,sptr_t v44000678,sptr_t v215884490,sptr_t v235511034)
{
        {   gc_frame0(gc,2,v44000678,v215884490);
            wptr_t v101652 = eval(gc,arena,v235511034);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101652) {
                return v101652;
            } else {
                sptr_t v117740412;
                sptr_t v29821322;
                /* ("CJhc.Prim.Prim.:" ni117740412 ni29821322) */
                v117740412 = ((struct sCJhc_Prim_Prim_$x3a*)v101652)->a1;
                v29821322 = ((struct sCJhc_Prim_Prim_$x3a*)v101652)->a2;
                {   gc_frame0(gc,2,v29821322,v117740412);
                    sptr_t x33 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d20);
                    ((struct sFJhc_Text_Read_lex$d20*)x33)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d20);
                    ((struct sFJhc_Text_Read_lex$d20*)x33)->a1 = v44000678;
                    ((struct sFJhc_Text_Read_lex$d20*)x33)->a2 = v215884490;
                    ((struct sFJhc_Text_Read_lex$d20*)x33)->a3 = v29821322;
                    sptr_t v52590400 = MKLAZY(x33);
                    {   gc_frame0(gc,1,v52590400);
                        sptr_t x34 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d21);
                        ((struct sFJhc_Text_Read_lex$d21*)x34)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d21);
                        ((struct sFJhc_Text_Read_lex$d21*)x34)->a1 = v44000678;
                        ((struct sFJhc_Text_Read_lex$d21*)x34)->a2 = v215884490;
                        ((struct sFJhc_Text_Read_lex$d21*)x34)->a3 = v117740412;
                        sptr_t v119514824 = MKLAZY(x34);
                        {   gc_frame0(gc,1,v119514824);
                            wptr_t x35 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x35)->a1 = v119514824;
                            ((struct sCJhc_Prim_Prim_$x3a*)x35)->a2 = v52590400;
                            return x35;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d21(gc_t gc,arena_t arena,sptr_t v9330,sptr_t v4664,sptr_t v59150094)
{
        {   gc_frame0(gc,2,v4664,v9330);
            wptr_t v101654 = eval(gc,arena,v59150094);
            {   sptr_t v110207572;
                sptr_t v120834806;
                gc_frame0(gc,1,v101654);
                v110207572 = ((struct sCJhc_Prim_Prim_$LcR*)v101654)->a1;
                v120834806 = ((struct sCJhc_Prim_Prim_$LcR*)v101654)->a2;
                {   gc_frame0(gc,2,v110207572,v120834806);
                    sptr_t x30 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Basics_$pp);
                    ((struct sFJhc_Basics_$pp*)x30)->head = TO_FPTR(&E__fJhc_Basics_$pp);
                    ((struct sFJhc_Basics_$pp*)x30)->a1 = SET_RAW_TAG($_hole);
                    ((struct sFJhc_Basics_$pp*)x30)->a2 = v9330;
                    ((struct sFJhc_Basics_$pp*)x30)->a3 = v110207572;
                    sptr_t v129083900 = MKLAZY(x30);
                    {   gc_frame0(gc,1,v129083900);
                        wptr_t x31 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x31)->a1 = v4664;
                        ((struct sCJhc_Prim_Prim_$x3a*)x31)->a2 = v129083900;
                        wptr_t v106 = x31;
                        sptr_t v183082880 = demote(v106);
                        {   gc_frame0(gc,1,v183082880);
                            wptr_t x32 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                            ((struct sCJhc_Prim_Prim_$LcR*)x32)->a1 = v183082880;
                            ((struct sCJhc_Prim_Prim_$LcR*)x32)->a2 = v120834806;
                            return x32;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d22(gc_t gc,arena_t arena,sptr_t v3956088,sptr_t v226176096)
{
        {   gc_frame0(gc,1,v3956088);
            wptr_t v101172 = eval(gc,arena,v226176096);
            {   gc_frame0(gc,1,v101172);
                wptr_t x206 = s_alloc(gc,arena,public_caches(arena)->cP1__Jhc_Text_Read_lex$d22);
                SET_MEM_TAG((struct sP1__Jhc_Text_Read_lex$d22*)x206,P1__Jhc_Text_Read_lex$d22);
                ((struct sP1__Jhc_Text_Read_lex$d22*)x206)->a1 = v3956088;
                wptr_t v8305 = x206;
                sptr_t v246624244 = demote(v8305);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101172) {
                    return v101172;
                } else {
                    sptr_t v240576406;
                    sptr_t v76483310;
                    /* ("CJhc.Prim.Prim.:" ni240576406 ni76483310) */
                    v240576406 = ((struct sCJhc_Prim_Prim_$x3a*)v101172)->a1;
                    v76483310 = ((struct sCJhc_Prim_Prim_$x3a*)v101172)->a2;
                    {   sptr_t v5429;
                        sptr_t v875;
                        sptr_t v879;
                        struct tup4 x207;
                        gc_frame0(gc,2,v76483310,v246624244);
                        wptr_t v101178 = eval(gc,arena,v240576406);
                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101178) {
                            x207.t0 = v76483310;
                            x207.t1 = v246624244;
                            x207.t2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                        } else {
                            sptr_t v4648;
                            sptr_t v7222;
                            /* ("CJhc.Prim.Prim.:" ni4648 ni7222) */
                            v4648 = ((struct sCJhc_Prim_Prim_$x3a*)v101178)->a1;
                            v7222 = ((struct sCJhc_Prim_Prim_$x3a*)v101178)->a2;
                            {   uint16_t v101180;
                                gc_frame0(gc,2,v4648,v7222);
                                v101180 = fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v4648,PROMOTE(c49));
                                if (0 == v101180) {
                                    x207.t0 = v76483310;
                                    x207.t1 = v246624244;
                                    x207.t2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                } else {
                                    wptr_t v101182;
                                    wptr_t v101186;
                                    /* 1 */
                                    assert(1 == v101180);
                                    v101182 = fJhc_Text_Read_lexDigits(gc,arena,v7222);
                                    sptr_t v161570930 = demote(v101182);
                                    v101186 = fJhc_Text_Read_lex$d24(gc,arena,v4648,v3956088,v161570930);
                                    sptr_t v146793350 = demote(v101186);
                                    x207.t0 = v76483310;
                                    x207.t1 = v246624244;
                                    x207.t2 = v146793350;
                                }
                            }
                        }
                        v875 = x207.t0;
                        v5429 = x207.t1;
                        v879 = x207.t2;
                        wptr_t v7366 = promote(v5429);
                        wptr_t v3686 = promote(v879);
                        return fJhc_Text_Read_lex$d23(gc,arena,v875,v7366,v3686);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d23(gc_t gc,arena_t arena,sptr_t v117603324,wptr_t v194492354,wptr_t v120257690)
{
        sptr_t v120262438 = demote(v120257690);
        {   gc_frame0(gc,3,v117603324,v120262438,v194492354);
            sptr_t x29 = s_alloc(gc,arena,public_caches(arena)->cBap__1__Jhc_Text_Read_lex$d23u101636);
            ((struct sBap__1__Jhc_Text_Read_lex$d23u101636*)x29)->head = TO_FPTR(&E__bap__1__Jhc_Text_Read_lex$d23u101636);
            ((struct sBap__1__Jhc_Text_Read_lex$d23u101636*)x29)->a1 = v194492354;
            ((struct sBap__1__Jhc_Text_Read_lex$d23u101636*)x29)->a2 = v117603324;
            sptr_t v118138956 = MKLAZY(x29);
            return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v120262438,v118138956);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d24(gc_t gc,arena_t arena,sptr_t v19667944,sptr_t v235206652,sptr_t v1674606)
{
        {   gc_frame0(gc,2,v19667944,v235206652);
            wptr_t v100812 = eval(gc,arena,v1674606);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100812) {
                return v100812;
            } else {
                sptr_t v205680838;
                sptr_t v251973250;
                /* ("CJhc.Prim.Prim.:" ni205680838 ni251973250) */
                v205680838 = ((struct sCJhc_Prim_Prim_$x3a*)v100812)->a1;
                v251973250 = ((struct sCJhc_Prim_Prim_$x3a*)v100812)->a2;
                {   gc_frame0(gc,2,v205680838,v251973250);
                    sptr_t x203 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d24);
                    ((struct sFJhc_Text_Read_lex$d24*)x203)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d24);
                    ((struct sFJhc_Text_Read_lex$d24*)x203)->a1 = v19667944;
                    ((struct sFJhc_Text_Read_lex$d24*)x203)->a2 = v235206652;
                    ((struct sFJhc_Text_Read_lex$d24*)x203)->a3 = v251973250;
                    sptr_t v108955766 = MKLAZY(x203);
                    {   gc_frame0(gc,1,v108955766);
                        sptr_t x204 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d25);
                        ((struct sFJhc_Text_Read_lex$d25*)x204)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d25);
                        ((struct sFJhc_Text_Read_lex$d25*)x204)->a1 = v19667944;
                        ((struct sFJhc_Text_Read_lex$d25*)x204)->a2 = v235206652;
                        ((struct sFJhc_Text_Read_lex$d25*)x204)->a3 = v205680838;
                        sptr_t v4696 = MKLAZY(x204);
                        {   gc_frame0(gc,1,v4696);
                            wptr_t x205 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x205)->a1 = v4696;
                            ((struct sCJhc_Prim_Prim_$x3a*)x205)->a2 = v108955766;
                            return x205;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d25(gc_t gc,arena_t arena,sptr_t v240515376,sptr_t v145315036,sptr_t v99988810)
{
        {   gc_frame0(gc,2,v145315036,v240515376);
            wptr_t v100814 = eval(gc,arena,v99988810);
            {   sptr_t v205779220;
                sptr_t v46454710;
                gc_frame0(gc,1,v100814);
                v205779220 = ((struct sCJhc_Prim_Prim_$LcR*)v100814)->a1;
                v46454710 = ((struct sCJhc_Prim_Prim_$LcR*)v100814)->a2;
                {   gc_frame0(gc,2,v46454710,v205779220);
                    wptr_t x200 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x200)->a1 = v240515376;
                    ((struct sCJhc_Prim_Prim_$x3a*)x200)->a2 = v205779220;
                    wptr_t v4678 = x200;
                    sptr_t v64371558 = demote(v4678);
                    {   gc_frame0(gc,1,v64371558);
                        wptr_t x201 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x201)->a1 = v145315036;
                        ((struct sCJhc_Prim_Prim_$x3a*)x201)->a2 = v64371558;
                        wptr_t v4682 = x201;
                        sptr_t v240673848 = demote(v4682);
                        {   gc_frame0(gc,1,v240673848);
                            wptr_t x202 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                            ((struct sCJhc_Prim_Prim_$LcR*)x202)->a1 = v240673848;
                            ((struct sCJhc_Prim_Prim_$LcR*)x202)->a2 = v46454710;
                            return x202;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d26(gc_t gc,arena_t arena,sptr_t v4660,sptr_t v4662)
{
        {   wptr_t v101216;
            gc_frame0(gc,1,v4660);
            v101216 = fJhc_Text_Read_lexDigits(gc,arena,v4662);
            sptr_t v198205318 = demote(v101216);
            return fJhc_Text_Read_lex$d27(gc,arena,v4660,v198205318);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d27(gc_t gc,arena_t arena,sptr_t v125735152,sptr_t v80256462)
{
        {   gc_frame0(gc,1,v125735152);
            wptr_t v100808 = eval(gc,arena,v80256462);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100808) {
                return v100808;
            } else {
                sptr_t v181754692;
                sptr_t v19172380;
                /* ("CJhc.Prim.Prim.:" ni19172380 ni181754692) */
                v19172380 = ((struct sCJhc_Prim_Prim_$x3a*)v100808)->a1;
                v181754692 = ((struct sCJhc_Prim_Prim_$x3a*)v100808)->a2;
                {   gc_frame0(gc,2,v19172380,v181754692);
                    sptr_t x210 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d27);
                    ((struct sFJhc_Text_Read_lex$d27*)x210)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d27);
                    ((struct sFJhc_Text_Read_lex$d27*)x210)->a1 = v125735152;
                    ((struct sFJhc_Text_Read_lex$d27*)x210)->a2 = v181754692;
                    sptr_t v230320878 = MKLAZY(x210);
                    {   gc_frame0(gc,1,v230320878);
                        sptr_t x211 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d28);
                        ((struct sFJhc_Text_Read_lex$d28*)x211)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d28);
                        ((struct sFJhc_Text_Read_lex$d28*)x211)->a1 = v125735152;
                        ((struct sFJhc_Text_Read_lex$d28*)x211)->a2 = v19172380;
                        sptr_t v194346576 = MKLAZY(x211);
                        {   gc_frame0(gc,1,v194346576);
                            wptr_t x212 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x212)->a1 = v194346576;
                            ((struct sCJhc_Prim_Prim_$x3a*)x212)->a2 = v230320878;
                            return x212;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d28(gc_t gc,arena_t arena,sptr_t v156312468,sptr_t v103925136)
{
        {   gc_frame0(gc,1,v156312468);
            wptr_t v100810 = eval(gc,arena,v103925136);
            {   sptr_t v105553378;
                sptr_t v61835124;
                gc_frame0(gc,1,v100810);
                v105553378 = ((struct sCJhc_Prim_Prim_$LcR*)v100810)->a1;
                v61835124 = ((struct sCJhc_Prim_Prim_$LcR*)v100810)->a2;
                {   gc_frame0(gc,2,v61835124,v105553378);
                    wptr_t x208 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x208)->a1 = v156312468;
                    ((struct sCJhc_Prim_Prim_$x3a*)x208)->a2 = v105553378;
                    wptr_t v8318 = x208;
                    sptr_t v264254032 = demote(v8318);
                    {   gc_frame0(gc,1,v264254032);
                        wptr_t x209 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                        ((struct sCJhc_Prim_Prim_$LcR*)x209)->a1 = v264254032;
                        ((struct sCJhc_Prim_Prim_$LcR*)x209)->a2 = v61835124;
                        return x209;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d29(gc_t gc,arena_t arena,sptr_t v73786436,sptr_t v247305780)
{
        {   gc_frame0(gc,1,v73786436);
            wptr_t v101628 = eval(gc,arena,v247305780);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101628) {
                return v101628;
            } else {
                sptr_t v166168412;
                sptr_t v201839444;
                /* ("CJhc.Prim.Prim.:" ni166168412 ni201839444) */
                v166168412 = ((struct sCJhc_Prim_Prim_$x3a*)v101628)->a1;
                v201839444 = ((struct sCJhc_Prim_Prim_$x3a*)v101628)->a2;
                {   gc_frame0(gc,2,v166168412,v201839444);
                    sptr_t x26 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d29);
                    ((struct sFJhc_Text_Read_lex$d29*)x26)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d29);
                    ((struct sFJhc_Text_Read_lex$d29*)x26)->a1 = v73786436;
                    ((struct sFJhc_Text_Read_lex$d29*)x26)->a2 = v201839444;
                    sptr_t v137643144 = MKLAZY(x26);
                    {   gc_frame0(gc,1,v137643144);
                        sptr_t x27 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d30);
                        ((struct sFJhc_Text_Read_lex$d30*)x27)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d30);
                        ((struct sFJhc_Text_Read_lex$d30*)x27)->a1 = v73786436;
                        ((struct sFJhc_Text_Read_lex$d30*)x27)->a2 = v166168412;
                        sptr_t v59069484 = MKLAZY(x27);
                        {   gc_frame0(gc,1,v59069484);
                            wptr_t x28 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x28)->a1 = v59069484;
                            ((struct sCJhc_Prim_Prim_$x3a*)x28)->a2 = v137643144;
                            return x28;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d3(gc_t gc,arena_t arena,sptr_t v235511028)
{
        wptr_t v101702 = eval(gc,arena,v235511028);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101702) {
            return v101702;
        } else {
            sptr_t v29821314;
            sptr_t v59150086;
            /* ("CJhc.Prim.Prim.:" ni59150086 ni29821314) */
            v59150086 = ((struct sCJhc_Prim_Prim_$x3a*)v101702)->a1;
            v29821314 = ((struct sCJhc_Prim_Prim_$x3a*)v101702)->a2;
            {   sptr_t v293;
                sptr_t v4813;
                struct tup1 x43;
                gc_frame0(gc,1,v29821314);
                wptr_t v101708 = eval(gc,arena,v59150086);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101708) {
                    x43.t0 = v29821314;
                    x43.t1 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                } else {
                    sptr_t v4560;
                    sptr_t v9218;
                    /* ("CJhc.Prim.Prim.:" ni4560 ni9218) */
                    v4560 = ((struct sCJhc_Prim_Prim_$x3a*)v101708)->a1;
                    v9218 = ((struct sCJhc_Prim_Prim_$x3a*)v101708)->a2;
                    {   gc_frame0(gc,1,v9218);
                        wptr_t v101710 = eval(gc,arena,v4560);
                        {   uint32_t v4564;
                            gc_frame0(gc,1,v101710);
                            v4564 = ((uint32_t)RAW_GET_UF(v101710));
                            if (92 == v4564) {
                                wptr_t x44 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                                ((struct sCJhc_Prim_Prim_$LcR*)x44)->a1 = c4;
                                ((struct sCJhc_Prim_Prim_$LcR*)x44)->a2 = v9218;
                                wptr_t v161 = x44;
                                sptr_t v203556108 = demote(v161);
                                {   gc_frame0(gc,1,v203556108);
                                    wptr_t x45 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                    ((struct sCJhc_Prim_Prim_$x3a*)x45)->a1 = v203556108;
                                    ((struct sCJhc_Prim_Prim_$x3a*)x45)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                    wptr_t v163 = x45;
                                    sptr_t v153819166 = demote(v163);
                                    x43.t0 = v29821314;
                                    x43.t1 = v153819166;
                                }
                            } else {
                                x43.t0 = v29821314;
                                x43.t1 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                            }
                        }
                    }
                }
                v293 = x43.t0;
                v4813 = x43.t1;
                wptr_t v9338 = promote(v4813);
                return fJhc_Text_Read_lex$d2(gc,arena,v293,v9338);
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d30(gc_t gc,arena_t arena,sptr_t v4620,sptr_t v90861654)
{
        {   gc_frame0(gc,1,v4620);
            wptr_t v101630 = eval(gc,arena,v90861654);
            {   sptr_t v130564412;
                sptr_t v21055636;
                gc_frame0(gc,1,v101630);
                v130564412 = ((struct sCJhc_Prim_Prim_$LcR*)v101630)->a1;
                v21055636 = ((struct sCJhc_Prim_Prim_$LcR*)v101630)->a2;
                {   gc_frame0(gc,2,v21055636,v130564412);
                    sptr_t x23 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Basics_$pp);
                    ((struct sFJhc_Basics_$pp*)x23)->head = TO_FPTR(&E__fJhc_Basics_$pp);
                    ((struct sFJhc_Basics_$pp*)x23)->a1 = SET_RAW_TAG($_hole);
                    ((struct sFJhc_Basics_$pp*)x23)->a2 = v4620;
                    ((struct sFJhc_Basics_$pp*)x23)->a3 = v130564412;
                    sptr_t v173512186 = MKLAZY(x23);
                    {   gc_frame0(gc,1,v173512186);
                        wptr_t x24 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x24)->a1 = ((sptr_t)RAW_SET_UF('.'));
                        ((struct sCJhc_Prim_Prim_$x3a*)x24)->a2 = v173512186;
                        wptr_t v196 = x24;
                        sptr_t v15858614 = demote(v196);
                        {   gc_frame0(gc,1,v15858614);
                            wptr_t x25 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                            ((struct sCJhc_Prim_Prim_$LcR*)x25)->a1 = v15858614;
                            ((struct sCJhc_Prim_Prim_$LcR*)x25)->a2 = v21055636;
                            return x25;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d31(gc_t gc,arena_t arena,sptr_t v29375122)
{
        wptr_t v101196 = eval(gc,arena,v29375122);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101196) {
            return v101196;
        } else {
            sptr_t v117945876;
            sptr_t v243292918;
            /* ("CJhc.Prim.Prim.:" ni117945876 ni243292918) */
            v117945876 = ((struct sCJhc_Prim_Prim_$x3a*)v101196)->a1;
            v243292918 = ((struct sCJhc_Prim_Prim_$x3a*)v101196)->a2;
            {   gc_frame0(gc,1,v243292918);
                wptr_t v101198 = eval(gc,arena,v117945876);
                {   sptr_t v131605202;
                    sptr_t v4622;
                    gc_frame0(gc,1,v101198);
                    v131605202 = ((struct sCJhc_Prim_Prim_$LcR*)v101198)->a1;
                    v4622 = ((struct sCJhc_Prim_Prim_$LcR*)v101198)->a2;
                    {   wptr_t v101200;
                        wptr_t v101204;
                        gc_frame0(gc,1,v131605202);
                        v101200 = fJhc_Text_Read_80__lexExp(gc,arena,v4622);
                        sptr_t v147619200 = demote(v101200);
                        v101204 = fJhc_Text_Read_lex$d29(gc,arena,v131605202,v147619200);
                        sptr_t v243821962 = demote(v101204);
                        {   gc_frame0(gc,1,v243821962);
                            sptr_t x219 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d31);
                            ((struct sFJhc_Text_Read_lex$d31*)x219)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d31);
                            ((struct sFJhc_Text_Read_lex$d31*)x219)->a1 = v243292918;
                            sptr_t v154420600 = MKLAZY(x219);
                            return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v243821962,v154420600);
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d32(gc_t gc,arena_t arena,sptr_t v237919336)
{
        wptr_t v4040;
        sptr_t v4042;
        struct tup2 x120;
        x120 = fW$__fJhc_List_span(gc,arena,SET_RAW_TAG(P1__Prelude_CType_isDigit),v237919336);
        v4040 = x120.t0;
        v4042 = x120.t1;
        sptr_t v4044 = demote(v4040);
        {   gc_frame0(gc,2,v4042,v4044);
            wptr_t x121 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
            ((struct sCJhc_Prim_Prim_$LcR*)x121)->a1 = v4044;
            ((struct sCJhc_Prim_Prim_$LcR*)x121)->a2 = v4042;
            return x121;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d4(gc_t gc,arena_t arena,sptr_t v182966158)
{
        sptr_t v182966358;
        v182966358 = v182966158;
        bRfJhc_Text_Read_lex$d4u52:;
        {   wptr_t v101570 = eval(gc,arena,v182966358);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101570) {
                return v101570;
            } else {
                sptr_t v132679388;
                sptr_t v242159976;
                /* ("CJhc.Prim.Prim.:" ni132679388 ni242159976) */
                v132679388 = ((struct sCJhc_Prim_Prim_$x3a*)v101570)->a1;
                v242159976 = ((struct sCJhc_Prim_Prim_$x3a*)v101570)->a2;
                {   uint16_t v101572;
                    gc_frame0(gc,2,v132679388,v242159976);
                    v101572 = fW$__fPrelude_CType_isSpace(gc,arena,v132679388);
                    if (0 == v101572) {
                        wptr_t x53 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x53)->a1 = v132679388;
                        ((struct sCJhc_Prim_Prim_$x3a*)x53)->a2 = v242159976;
                        return x53;
                    } else {
                        /* 1 */
                        assert(1 == v101572);
                        v182966358 = v242159976;
                        goto bRfJhc_Text_Read_lex$d4u52;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d5(gc_t gc,arena_t arena,sptr_t v105553374,sptr_t v46454712)
{
        {   gc_frame0(gc,1,v105553374);
            wptr_t v101672 = eval(gc,arena,v46454712);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101672) {
                return v101672;
            } else {
                sptr_t v109152422;
                sptr_t v264254030;
                /* ("CJhc.Prim.Prim.:" ni264254030 ni109152422) */
                v264254030 = ((struct sCJhc_Prim_Prim_$x3a*)v101672)->a1;
                v109152422 = ((struct sCJhc_Prim_Prim_$x3a*)v101672)->a2;
                {   gc_frame0(gc,2,v109152422,v264254030);
                    sptr_t x39 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d5);
                    ((struct sFJhc_Text_Read_lex$d5*)x39)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d5);
                    ((struct sFJhc_Text_Read_lex$d5*)x39)->a1 = v105553374;
                    ((struct sFJhc_Text_Read_lex$d5*)x39)->a2 = v109152422;
                    sptr_t v124235150 = MKLAZY(x39);
                    {   gc_frame0(gc,1,v124235150);
                        sptr_t x40 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d6);
                        ((struct sFJhc_Text_Read_lex$d6*)x40)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d6);
                        ((struct sFJhc_Text_Read_lex$d6*)x40)->a1 = v105553374;
                        ((struct sFJhc_Text_Read_lex$d6*)x40)->a2 = v264254030;
                        sptr_t v51274846 = MKLAZY(x40);
                        {   gc_frame0(gc,1,v51274846);
                            wptr_t x41 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x41)->a1 = v51274846;
                            ((struct sCJhc_Prim_Prim_$x3a*)x41)->a2 = v124235150;
                            return x41;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d6(gc_t gc,arena_t arena,sptr_t v13920,sptr_t v163734718)
{
        {   gc_frame0(gc,1,v13920);
            wptr_t v101674 = eval(gc,arena,v163734718);
            {   sptr_t v253791878;
                sptr_t v58334284;
                gc_frame0(gc,1,v101674);
                v58334284 = ((struct sCJhc_Prim_Prim_$LcR*)v101674)->a1;
                v253791878 = ((struct sCJhc_Prim_Prim_$LcR*)v101674)->a2;
                {   gc_frame0(gc,2,v58334284,v253791878);
                    sptr_t x37 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Basics_$pp);
                    ((struct sFJhc_Basics_$pp*)x37)->head = TO_FPTR(&E__fJhc_Basics_$pp);
                    ((struct sFJhc_Basics_$pp*)x37)->a1 = SET_RAW_TAG($_hole);
                    ((struct sFJhc_Basics_$pp*)x37)->a2 = v13920;
                    ((struct sFJhc_Basics_$pp*)x37)->a3 = v58334284;
                    sptr_t v237992580 = MKLAZY(x37);
                    {   gc_frame0(gc,1,v237992580);
                        wptr_t x38 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                        ((struct sCJhc_Prim_Prim_$LcR*)x38)->a1 = v237992580;
                        ((struct sCJhc_Prim_Prim_$LcR*)x38)->a2 = v253791878;
                        return x38;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d7(gc_t gc,arena_t arena,sptr_t v236706538)
{
        wptr_t v101660 = eval(gc,arena,v236706538);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101660) {
            return v101660;
        } else {
            sptr_t v135303428;
            sptr_t v70238674;
            /* ("CJhc.Prim.Prim.:" ni70238674 ni135303428) */
            v70238674 = ((struct sCJhc_Prim_Prim_$x3a*)v101660)->a1;
            v135303428 = ((struct sCJhc_Prim_Prim_$x3a*)v101660)->a2;
            {   gc_frame0(gc,1,v135303428);
                wptr_t v101662 = eval(gc,arena,v70238674);
                {   sptr_t v228308040;
                    sptr_t v4546;
                    gc_frame0(gc,1,v101662);
                    v228308040 = ((struct sCJhc_Prim_Prim_$LcR*)v101662)->a1;
                    v4546 = ((struct sCJhc_Prim_Prim_$LcR*)v101662)->a2;
                    {   wptr_t v101664;
                        wptr_t v101668;
                        gc_frame0(gc,1,v228308040);
                        v101664 = fJhc_Text_Read_55__lexString(gc,arena,v4546);
                        sptr_t v117238656 = demote(v101664);
                        v101668 = fJhc_Text_Read_lex$d5(gc,arena,v228308040,v117238656);
                        sptr_t v120087508 = demote(v101668);
                        {   gc_frame0(gc,1,v120087508);
                            sptr_t x184 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d7);
                            ((struct sFJhc_Text_Read_lex$d7*)x184)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d7);
                            ((struct sFJhc_Text_Read_lex$d7*)x184)->a1 = v135303428;
                            sptr_t v245783994 = MKLAZY(x184);
                            return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v120087508,v245783994);
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d8(gc_t gc,arena_t arena,sptr_t v1780410)
{
        wptr_t v100826 = eval(gc,arena,v1780410);
        {   sptr_t v151514822;
            sptr_t v45539880;
            gc_frame0(gc,1,v100826);
            v151514822 = ((struct sCJhc_Prim_Prim_$LcR*)v100826)->a1;
            v45539880 = ((struct sCJhc_Prim_Prim_$LcR*)v100826)->a2;
            {   gc_frame0(gc,2,v45539880,v151514822);
                wptr_t x185 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                ((struct sCJhc_Prim_Prim_$x3a*)x185)->a1 = ((sptr_t)RAW_SET_UF('"'));
                ((struct sCJhc_Prim_Prim_$x3a*)x185)->a2 = v151514822;
                wptr_t v926 = x185;
                sptr_t v35878052 = demote(v926);
                {   gc_frame0(gc,1,v35878052);
                    wptr_t x186 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                    ((struct sCJhc_Prim_Prim_$LcR*)x186)->a1 = v35878052;
                    ((struct sCJhc_Prim_Prim_$LcR*)x186)->a2 = v45539880;
                    return x186;
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lex$d9(gc_t gc,arena_t arena,sptr_t v120834808)
{
        wptr_t v100824 = eval(gc,arena,v120834808);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100824) {
            return v100824;
        } else {
            sptr_t v154338574;
            sptr_t v158113100;
            /* ("CJhc.Prim.Prim.:" ni154338574 ni158113100) */
            v154338574 = ((struct sCJhc_Prim_Prim_$x3a*)v100824)->a1;
            v158113100 = ((struct sCJhc_Prim_Prim_$x3a*)v100824)->a2;
            {   gc_frame0(gc,2,v154338574,v158113100);
                sptr_t x187 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d9);
                ((struct sFJhc_Text_Read_lex$d9*)x187)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d9);
                ((struct sFJhc_Text_Read_lex$d9*)x187)->a1 = v158113100;
                sptr_t v238502454 = MKLAZY(x187);
                {   gc_frame0(gc,1,v238502454);
                    sptr_t x188 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lex$d8);
                    ((struct sFJhc_Text_Read_lex$d8*)x188)->head = TO_FPTR(&E__fJhc_Text_Read_lex$d8);
                    ((struct sFJhc_Text_Read_lex$d8*)x188)->a1 = v154338574;
                    sptr_t v66102162 = MKLAZY(x188);
                    {   gc_frame0(gc,1,v66102162);
                        wptr_t x189 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x189)->a1 = v66102162;
                        ((struct sCJhc_Prim_Prim_$x3a*)x189)->a2 = v238502454;
                        return x189;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexDigits(gc_t gc,arena_t arena,sptr_t v51476040)
{
        return fJhc_Text_Read_nonnull(gc,arena,SET_RAW_TAG(P1__Prelude_CType_isDigit),v51476040);
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar(gc_t gc,arena_t arena,sptr_t v4690)
{
        wptr_t v100964 = eval(gc,arena,v4690);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100964) {
            return v100964;
        } else {
            sptr_t v130625164;
            sptr_t v4726;
            /* ("CJhc.Prim.Prim.:" ni4726 ni130625164) */
            v4726 = ((struct sCJhc_Prim_Prim_$x3a*)v100964)->a1;
            v130625164 = ((struct sCJhc_Prim_Prim_$x3a*)v100964)->a2;
            {   gc_frame0(gc,2,v4726,v130625164);
                wptr_t v100966 = eval(gc,arena,v4726);
                {   uint32_t v4732;
                    gc_frame0(gc,1,v100966);
                    v4732 = ((uint32_t)RAW_GET_UF(v100966));
                    if (92 == v4732) {
                        wptr_t v4596;
                        wptr_t v100968 = eval(gc,arena,v130625164);
                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100968) {
                            v4596 = v100968;
                        } else {
                            sptr_t v164349960;
                            sptr_t v4704;
                            /* ("CJhc.Prim.Prim.:" ni4704 ni164349960) */
                            v4704 = ((struct sCJhc_Prim_Prim_$x3a*)v100968)->a1;
                            v164349960 = ((struct sCJhc_Prim_Prim_$x3a*)v100968)->a2;
                            {   uint16_t v100970;
                                gc_frame0(gc,2,v4704,v164349960);
                                v100970 = fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v4704,PROMOTE(c46));
                                if (0 == v100970) {
                                    wptr_t v100972 = eval(gc,arena,v4704);
                                    {   uint32_t v4714;
                                        gc_frame0(gc,1,v100972);
                                        v4714 = ((uint32_t)RAW_GET_UF(v100972));
                                        switch (v4714) {
                                        case 94:
                                            {   wptr_t v100974 = eval(gc,arena,v164349960);
                                                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100974) {
                                                    uint16_t v720;
                                                    uint16_t v101010 = (48 <= v4714);
                                                    if (0 == v101010) {
                                                        v720 = 0;
                                                    } else {
                                                        /* 1 */
                                                        assert(1 == v101010);
                                                        v720 = (57 >= v4714);
                                                    }
                                                    if (0 == v720) {
                                                        uint16_t v101020 = (65 <= v4714);
                                                        if (0 == v101020) {
                                                            v4596 = SET_RAW_TAG(CJhc_Prim_Prim_$BE);
                                                        } else {
                                                            /* 1 */
                                                            assert(1 == v101020);
                                                            uint16_t v101022 = (90 >= v4714);
                                                            if (0 == v101022) {
                                                                v4596 = SET_RAW_TAG(CJhc_Prim_Prim_$BE);
                                                            } else {
                                                                /* 1 */
                                                                assert(1 == v101022);
                                                                sptr_t x148 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lexLitChar$d12);
                                                                ((struct sFJhc_Text_Read_lexLitChar$d12*)x148)->head = TO_FPTR(&E__fJhc_Text_Read_lexLitChar$d12);
                                                                ((struct sFJhc_Text_Read_lexLitChar$d12*)x148)->a1 = v130625164;
                                                                sptr_t v71920772 = MKLAZY(x148);
                                                                {   gc_frame0(gc,1,v71920772);
                                                                    wptr_t x149 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x149)->a1 = v71920772;
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x149)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                                    v4596 = x149;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        /* 1 */
                                                        assert(1 == v720);
                                                        sptr_t x150 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lexLitChar$d10);
                                                        ((struct sFJhc_Text_Read_lexLitChar$d10*)x150)->head = TO_FPTR(&E__fJhc_Text_Read_lexLitChar$d10);
                                                        ((struct sFJhc_Text_Read_lexLitChar$d10*)x150)->a1 = v130625164;
                                                        sptr_t v52515412 = MKLAZY(x150);
                                                        {   gc_frame0(gc,1,v52515412);
                                                            wptr_t x151 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                            ((struct sCJhc_Prim_Prim_$x3a*)x151)->a1 = v52515412;
                                                            ((struct sCJhc_Prim_Prim_$x3a*)x151)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                            v4596 = x151;
                                                        }
                                                    }
                                                } else {
                                                    sptr_t v4712;
                                                    sptr_t v8532;
                                                    /* ("CJhc.Prim.Prim.:" ni8532 ni4712) */
                                                    v8532 = ((struct sCJhc_Prim_Prim_$x3a*)v100974)->a1;
                                                    v4712 = ((struct sCJhc_Prim_Prim_$x3a*)v100974)->a2;
                                                    {   gc_frame0(gc,2,v4712,v8532);
                                                        wptr_t v100976 = eval(gc,arena,v8532);
                                                        {   uint32_t v227981060;
                                                            gc_frame0(gc,1,v100976);
                                                            v227981060 = ((uint32_t)RAW_GET_UF(v100976));
                                                            uint16_t v100978 = (64 <= v227981060);
                                                            if (0 == v100978) {
                                                                uint16_t v699;
                                                                uint16_t v100980 = (48 <= v4714);
                                                                if (0 == v100980) {
                                                                    v699 = 0;
                                                                } else {
                                                                    /* 1 */
                                                                    assert(1 == v100980);
                                                                    v699 = (57 >= v4714);
                                                                }
                                                                if (0 == v699) {
                                                                    uint16_t v100990 = (65 <= v4714);
                                                                    if (0 == v100990) {
                                                                        v4596 = SET_RAW_TAG(CJhc_Prim_Prim_$BE);
                                                                    } else {
                                                                        /* 1 */
                                                                        assert(1 == v100990);
                                                                        uint16_t v100992 = (90 >= v4714);
                                                                        if (0 == v100992) {
                                                                            v4596 = SET_RAW_TAG(CJhc_Prim_Prim_$BE);
                                                                        } else {
                                                                            /* 1 */
                                                                            assert(1 == v100992);
                                                                            sptr_t x152 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lexLitChar$d6);
                                                                            ((struct sFJhc_Text_Read_lexLitChar$d6*)x152)->head = TO_FPTR(&E__fJhc_Text_Read_lexLitChar$d6);
                                                                            ((struct sFJhc_Text_Read_lexLitChar$d6*)x152)->a1 = v130625164;
                                                                            sptr_t v211219936 = MKLAZY(x152);
                                                                            {   gc_frame0(gc,1,v211219936);
                                                                                wptr_t x153 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                                ((struct sCJhc_Prim_Prim_$x3a*)x153)->a1 = v211219936;
                                                                                ((struct sCJhc_Prim_Prim_$x3a*)x153)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                                                v4596 = x153;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    /* 1 */
                                                                    assert(1 == v699);
                                                                    sptr_t x154 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lexLitChar$d4);
                                                                    ((struct sFJhc_Text_Read_lexLitChar$d4*)x154)->head = TO_FPTR(&E__fJhc_Text_Read_lexLitChar$d4);
                                                                    ((struct sFJhc_Text_Read_lexLitChar$d4*)x154)->a1 = v130625164;
                                                                    sptr_t v67443748 = MKLAZY(x154);
                                                                    {   gc_frame0(gc,1,v67443748);
                                                                        wptr_t x155 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                        ((struct sCJhc_Prim_Prim_$x3a*)x155)->a1 = v67443748;
                                                                        ((struct sCJhc_Prim_Prim_$x3a*)x155)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                                        v4596 = x155;
                                                                    }
                                                                }
                                                            } else {
                                                                /* 1 */
                                                                assert(1 == v100978);
                                                                uint16_t v100994 = (95 >= v227981060);
                                                                if (0 == v100994) {
                                                                    uint16_t v713;
                                                                    uint16_t v100996 = (48 <= v4714);
                                                                    if (0 == v100996) {
                                                                        v713 = 0;
                                                                    } else {
                                                                        /* 1 */
                                                                        assert(1 == v100996);
                                                                        v713 = (57 >= v4714);
                                                                    }
                                                                    if (0 == v713) {
                                                                        uint16_t v101006 = (65 <= v4714);
                                                                        if (0 == v101006) {
                                                                            v4596 = SET_RAW_TAG(CJhc_Prim_Prim_$BE);
                                                                        } else {
                                                                            /* 1 */
                                                                            assert(1 == v101006);
                                                                            uint16_t v101008 = (90 >= v4714);
                                                                            if (0 == v101008) {
                                                                                v4596 = SET_RAW_TAG(CJhc_Prim_Prim_$BE);
                                                                            } else {
                                                                                /* 1 */
                                                                                assert(1 == v101008);
                                                                                sptr_t x156 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lexLitChar$d9);
                                                                                ((struct sFJhc_Text_Read_lexLitChar$d9*)x156)->head = TO_FPTR(&E__fJhc_Text_Read_lexLitChar$d9);
                                                                                ((struct sFJhc_Text_Read_lexLitChar$d9*)x156)->a1 = v130625164;
                                                                                sptr_t v73786432 = MKLAZY(x156);
                                                                                {   gc_frame0(gc,1,v73786432);
                                                                                    wptr_t x157 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x157)->a1 = v73786432;
                                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x157)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                                                    v4596 = x157;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        /* 1 */
                                                                        assert(1 == v713);
                                                                        sptr_t x158 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lexLitChar$d7);
                                                                        ((struct sFJhc_Text_Read_lexLitChar$d7*)x158)->head = TO_FPTR(&E__fJhc_Text_Read_lexLitChar$d7);
                                                                        ((struct sFJhc_Text_Read_lexLitChar$d7*)x158)->a1 = v130625164;
                                                                        sptr_t v117740410 = MKLAZY(x158);
                                                                        {   gc_frame0(gc,1,v117740410);
                                                                            wptr_t x159 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                            ((struct sCJhc_Prim_Prim_$x3a*)x159)->a1 = v117740410;
                                                                            ((struct sCJhc_Prim_Prim_$x3a*)x159)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                                            v4596 = x159;
                                                                        }
                                                                    }
                                                                } else {
                                                                    /* 1 */
                                                                    assert(1 == v100994);
                                                                    wptr_t x160 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x160)->a1 = v8532;
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x160)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                                    wptr_t v813 = x160;
                                                                    sptr_t v13171858 = demote(v813);
                                                                    {   gc_frame0(gc,1,v13171858);
                                                                        wptr_t x161 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                        ((struct sCJhc_Prim_Prim_$x3a*)x161)->a1 = ((sptr_t)RAW_SET_UF('^'));
                                                                        ((struct sCJhc_Prim_Prim_$x3a*)x161)->a2 = v13171858;
                                                                        wptr_t v815 = x161;
                                                                        sptr_t v72415012 = demote(v815);
                                                                        {   gc_frame0(gc,1,v72415012);
                                                                            wptr_t x162 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                                                                            ((struct sCJhc_Prim_Prim_$LcR*)x162)->a1 = v72415012;
                                                                            ((struct sCJhc_Prim_Prim_$LcR*)x162)->a2 = v4712;
                                                                            wptr_t v817 = x162;
                                                                            sptr_t v9731404 = demote(v817);
                                                                            {   gc_frame0(gc,1,v9731404);
                                                                                wptr_t x163 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                                ((struct sCJhc_Prim_Prim_$x3a*)x163)->a1 = v9731404;
                                                                                ((struct sCJhc_Prim_Prim_$x3a*)x163)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                                                v4596 = x163;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            break;
                                        case 111:
                                            {   sptr_t x164 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lexLitChar$d13);
                                                ((struct sFJhc_Text_Read_lexLitChar$d13*)x164)->head = TO_FPTR(&E__fJhc_Text_Read_lexLitChar$d13);
                                                ((struct sFJhc_Text_Read_lexLitChar$d13*)x164)->a1 = v164349960;
                                                sptr_t v240576408 = MKLAZY(x164);
                                                {   gc_frame0(gc,1,v240576408);
                                                    wptr_t x165 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                    ((struct sCJhc_Prim_Prim_$x3a*)x165)->a1 = v240576408;
                                                    ((struct sCJhc_Prim_Prim_$x3a*)x165)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                    v4596 = x165;
                                                }
                                            }
                                            break;
                                        case 120:
                                            {   sptr_t x166 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lexLitChar$d14);
                                                ((struct sFJhc_Text_Read_lexLitChar$d14*)x166)->head = TO_FPTR(&E__fJhc_Text_Read_lexLitChar$d14);
                                                ((struct sFJhc_Text_Read_lexLitChar$d14*)x166)->a1 = v164349960;
                                                sptr_t v118138958 = MKLAZY(x166);
                                                {   gc_frame0(gc,1,v118138958);
                                                    wptr_t x167 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                    ((struct sCJhc_Prim_Prim_$x3a*)x167)->a1 = v118138958;
                                                    ((struct sCJhc_Prim_Prim_$x3a*)x167)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                    v4596 = x167;
                                                }
                                            }
                                            break;
                                        default:
                                            {   uint16_t v729;
                                                uint16_t v101024 = (48 <= v4714);
                                                if (0 == v101024) {
                                                    v729 = 0;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v101024);
                                                    v729 = (57 >= v4714);
                                                }
                                                if (0 == v729) {
                                                    uint16_t v101034 = (65 <= v4714);
                                                    if (0 == v101034) {
                                                        v4596 = SET_RAW_TAG(CJhc_Prim_Prim_$BE);
                                                    } else {
                                                        /* 1 */
                                                        assert(1 == v101034);
                                                        uint16_t v101036 = (90 >= v4714);
                                                        if (0 == v101036) {
                                                            v4596 = SET_RAW_TAG(CJhc_Prim_Prim_$BE);
                                                        } else {
                                                            /* 1 */
                                                            assert(1 == v101036);
                                                            sptr_t x168 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lexLitChar$d16);
                                                            ((struct sFJhc_Text_Read_lexLitChar$d16*)x168)->head = TO_FPTR(&E__fJhc_Text_Read_lexLitChar$d16);
                                                            ((struct sFJhc_Text_Read_lexLitChar$d16*)x168)->a1 = v130625164;
                                                            sptr_t v100847230 = MKLAZY(x168);
                                                            {   gc_frame0(gc,1,v100847230);
                                                                wptr_t x169 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x169)->a1 = v100847230;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x169)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                                v4596 = x169;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v729);
                                                    sptr_t x170 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lexLitChar$d15);
                                                    ((struct sFJhc_Text_Read_lexLitChar$d15*)x170)->head = TO_FPTR(&E__fJhc_Text_Read_lexLitChar$d15);
                                                    ((struct sFJhc_Text_Read_lexLitChar$d15*)x170)->a1 = v130625164;
                                                    sptr_t v106204034 = MKLAZY(x170);
                                                    {   gc_frame0(gc,1,v106204034);
                                                        wptr_t x171 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                        ((struct sCJhc_Prim_Prim_$x3a*)x171)->a1 = v106204034;
                                                        ((struct sCJhc_Prim_Prim_$x3a*)x171)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                                        v4596 = x171;
                                                    }
                                                }
                                            }
                                        break;
                                        }
                                    }
                                } else {
                                    /* 1 */
                                    assert(1 == v100970);
                                    wptr_t x172 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                    ((struct sCJhc_Prim_Prim_$x3a*)x172)->a1 = v4704;
                                    ((struct sCJhc_Prim_Prim_$x3a*)x172)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                    wptr_t v784 = x172;
                                    sptr_t v186449402 = demote(v784);
                                    {   gc_frame0(gc,1,v186449402);
                                        wptr_t x173 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                                        ((struct sCJhc_Prim_Prim_$LcR*)x173)->a1 = v186449402;
                                        ((struct sCJhc_Prim_Prim_$LcR*)x173)->a2 = v164349960;
                                        wptr_t v786 = x173;
                                        sptr_t v48890006 = demote(v786);
                                        {   gc_frame0(gc,1,v48890006);
                                            wptr_t x174 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                            ((struct sCJhc_Prim_Prim_$x3a*)x174)->a1 = v48890006;
                                            ((struct sCJhc_Prim_Prim_$x3a*)x174)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                            v4596 = x174;
                                        }
                                    }
                                }
                            }
                        }
                        sptr_t v753 = demote(v4596);
                        return fJhc_Text_Read_lexLitChar$d3(gc,arena,v753);
                    } else {
                        wptr_t x175 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x175)->a1 = v4726;
                        ((struct sCJhc_Prim_Prim_$x3a*)x175)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                        wptr_t v4729 = x175;
                        sptr_t v204811666 = demote(v4729);
                        {   gc_frame0(gc,1,v204811666);
                            wptr_t x176 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                            ((struct sCJhc_Prim_Prim_$LcR*)x176)->a1 = v204811666;
                            ((struct sCJhc_Prim_Prim_$LcR*)x176)->a2 = v130625164;
                            wptr_t v4733 = x176;
                            sptr_t v44604078 = demote(v4733);
                            {   gc_frame0(gc,1,v44604078);
                                wptr_t x177 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                ((struct sCJhc_Prim_Prim_$x3a*)x177)->a1 = v44604078;
                                ((struct sCJhc_Prim_Prim_$x3a*)x177)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                return x177;
                            }
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d10(gc_t gc,arena_t arena,sptr_t v18087954)
{
        wptr_t v4058;
        sptr_t v4060;
        struct tup2 x116;
        x116 = fW$__fJhc_List_span(gc,arena,SET_RAW_TAG(P1__Prelude_CType_isDigit),v18087954);
        v4058 = x116.t0;
        v4060 = x116.t1;
        sptr_t v4062 = demote(v4058);
        {   gc_frame0(gc,2,v4060,v4062);
            wptr_t x117 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
            ((struct sCJhc_Prim_Prim_$LcR*)x117)->a1 = v4062;
            ((struct sCJhc_Prim_Prim_$LcR*)x117)->a2 = v4060;
            return x117;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d11(gc_t gc,arena_t arena,sptr_t v251973248)
{
        wptr_t v101052 = eval(gc,arena,v251973248);
        {   uint16_t v194508210;
            uint32_t v3903;
            gc_frame0(gc,1,v101052);
            v3903 = ((uint32_t)RAW_GET_UF(v101052));
            v194508210 = fW$__fx7909411(gc,arena,v3903);
            return RAW_SET_UF(v194508210);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d12(gc_t gc,arena_t arena,sptr_t v160744294)
{
        wptr_t v3891;
        sptr_t v3893;
        struct tup2 x144;
        x144 = fW$__fJhc_List_span(gc,arena,SET_RAW_TAG(P1__Jhc_Text_Read_lexLitChar$d11),v160744294);
        v3891 = x144.t0;
        v3893 = x144.t1;
        sptr_t v3895 = demote(v3891);
        {   gc_frame0(gc,2,v3893,v3895);
            wptr_t x145 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
            ((struct sCJhc_Prim_Prim_$LcR*)x145)->a1 = v3895;
            ((struct sCJhc_Prim_Prim_$LcR*)x145)->a2 = v3893;
            return x145;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d13(gc_t gc,arena_t arena,sptr_t v202657652)
{
        sptr_t v3959;
        wptr_t v7913;
        struct tup2 x132;
        x132 = fW$__fJhc_List_span(gc,arena,SET_RAW_TAG(P1__Prelude_CType_isOctDigit),v202657652);
        v7913 = x132.t0;
        v3959 = x132.t1;
        sptr_t v3961 = demote(v7913);
        {   gc_frame0(gc,2,v3959,v3961);
            wptr_t x133 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
            ((struct sCJhc_Prim_Prim_$x3a*)x133)->a1 = ((sptr_t)RAW_SET_UF('o'));
            ((struct sCJhc_Prim_Prim_$x3a*)x133)->a2 = v3961;
            wptr_t v703 = x133;
            sptr_t v115766310 = demote(v703);
            {   gc_frame0(gc,1,v115766310);
                wptr_t x134 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                ((struct sCJhc_Prim_Prim_$LcR*)x134)->a1 = v115766310;
                ((struct sCJhc_Prim_Prim_$LcR*)x134)->a2 = v3959;
                return x134;
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d14(gc_t gc,arena_t arena,sptr_t v4706)
{
        wptr_t v4091;
        sptr_t v4093;
        struct tup2 x109;
        x109 = fW$__fJhc_List_span(gc,arena,SET_RAW_TAG(P1__Prelude_CType_isHexDigit),v4706);
        v4091 = x109.t0;
        v4093 = x109.t1;
        sptr_t v4095 = demote(v4091);
        {   gc_frame0(gc,2,v4093,v4095);
            wptr_t x110 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
            ((struct sCJhc_Prim_Prim_$x3a*)x110)->a1 = ((sptr_t)RAW_SET_UF('x'));
            ((struct sCJhc_Prim_Prim_$x3a*)x110)->a2 = v4095;
            wptr_t v617 = x110;
            sptr_t v260457468 = demote(v617);
            {   gc_frame0(gc,1,v260457468);
                wptr_t x111 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                ((struct sCJhc_Prim_Prim_$LcR*)x111)->a1 = v260457468;
                ((struct sCJhc_Prim_Prim_$LcR*)x111)->a2 = v4093;
                return x111;
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d15(gc_t gc,arena_t arena,sptr_t v183861074)
{
        wptr_t v4049;
        sptr_t v8100;
        struct tup2 x118;
        x118 = fW$__fJhc_List_span(gc,arena,SET_RAW_TAG(P1__Prelude_CType_isDigit),v183861074);
        v4049 = x118.t0;
        v8100 = x118.t1;
        sptr_t v4053 = demote(v4049);
        {   gc_frame0(gc,2,v4053,v8100);
            wptr_t x119 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
            ((struct sCJhc_Prim_Prim_$LcR*)x119)->a1 = v4053;
            ((struct sCJhc_Prim_Prim_$LcR*)x119)->a2 = v8100;
            return x119;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d16(gc_t gc,arena_t arena,sptr_t v105734068)
{
        wptr_t v3873;
        sptr_t v7748;
        struct tup2 x146;
        x146 = fW$__fJhc_List_span(gc,arena,SET_RAW_TAG(P1__Jhc_Text_Read_119__isCharName),v105734068);
        v3873 = x146.t0;
        v7748 = x146.t1;
        sptr_t v3877 = demote(v3873);
        {   gc_frame0(gc,2,v3877,v7748);
            wptr_t x147 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
            ((struct sCJhc_Prim_Prim_$LcR*)x147)->a1 = v3877;
            ((struct sCJhc_Prim_Prim_$LcR*)x147)->a2 = v7748;
            return x147;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d2(gc_t gc,arena_t arena,sptr_t v242479200)
{
        wptr_t v101084 = eval(gc,arena,v242479200);
        {   sptr_t v146854718;
            sptr_t v69432562;
            gc_frame0(gc,1,v101084);
            v146854718 = ((struct sCJhc_Prim_Prim_$LcR*)v101084)->a1;
            v69432562 = ((struct sCJhc_Prim_Prim_$LcR*)v101084)->a2;
            {   gc_frame0(gc,2,v69432562,v146854718);
                wptr_t x135 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                ((struct sCJhc_Prim_Prim_$x3a*)x135)->a1 = ((sptr_t)RAW_SET_UF('\\'));
                ((struct sCJhc_Prim_Prim_$x3a*)x135)->a2 = v146854718;
                wptr_t v8610 = x135;
                sptr_t v88379836 = demote(v8610);
                {   gc_frame0(gc,1,v88379836);
                    wptr_t x136 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                    ((struct sCJhc_Prim_Prim_$LcR*)x136)->a1 = v88379836;
                    ((struct sCJhc_Prim_Prim_$LcR*)x136)->a2 = v69432562;
                    return x136;
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d3(gc_t gc,arena_t arena,sptr_t v44000686)
{
        wptr_t v101082 = eval(gc,arena,v44000686);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101082) {
            return v101082;
        } else {
            sptr_t v117740416;
            sptr_t v172394828;
            /* ("CJhc.Prim.Prim.:" ni172394828 ni117740416) */
            v172394828 = ((struct sCJhc_Prim_Prim_$x3a*)v101082)->a1;
            v117740416 = ((struct sCJhc_Prim_Prim_$x3a*)v101082)->a2;
            {   gc_frame0(gc,2,v117740416,v172394828);
                sptr_t x137 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lexLitChar$d3);
                ((struct sFJhc_Text_Read_lexLitChar$d3*)x137)->head = TO_FPTR(&E__fJhc_Text_Read_lexLitChar$d3);
                ((struct sFJhc_Text_Read_lexLitChar$d3*)x137)->a1 = v117740416;
                sptr_t v154420606 = MKLAZY(x137);
                {   gc_frame0(gc,1,v154420606);
                    sptr_t x138 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_lexLitChar$d2);
                    ((struct sFJhc_Text_Read_lexLitChar$d2*)x138)->head = TO_FPTR(&E__fJhc_Text_Read_lexLitChar$d2);
                    ((struct sFJhc_Text_Read_lexLitChar$d2*)x138)->a1 = v172394828;
                    sptr_t v256943496 = MKLAZY(x138);
                    {   gc_frame0(gc,1,v256943496);
                        wptr_t x139 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x139)->a1 = v256943496;
                        ((struct sCJhc_Prim_Prim_$x3a*)x139)->a2 = v154420606;
                        return x139;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d4(gc_t gc,arena_t arena,sptr_t v4728)
{
        wptr_t v4076;
        sptr_t v4078;
        struct tup2 x112;
        x112 = fW$__fJhc_List_span(gc,arena,SET_RAW_TAG(P1__Prelude_CType_isDigit),v4728);
        v4076 = x112.t0;
        v4078 = x112.t1;
        sptr_t v4080 = demote(v4076);
        {   gc_frame0(gc,2,v4078,v4080);
            wptr_t x113 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
            ((struct sCJhc_Prim_Prim_$LcR*)x113)->a1 = v4080;
            ((struct sCJhc_Prim_Prim_$LcR*)x113)->a2 = v4078;
            return x113;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d5(gc_t gc,arena_t arena,sptr_t v132127022)
{
        wptr_t v101072 = eval(gc,arena,v132127022);
        {   uint16_t v132679394;
            uint32_t v239029642;
            gc_frame0(gc,1,v101072);
            v239029642 = ((uint32_t)RAW_GET_UF(v101072));
            v132679394 = fW$__fx2971480(gc,arena,v239029642);
            return RAW_SET_UF(v132679394);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d6(gc_t gc,arena_t arena,sptr_t v109251718)
{
        wptr_t v3927;
        sptr_t v3929;
        struct tup2 x140;
        x140 = fW$__fJhc_List_span(gc,arena,SET_RAW_TAG(P1__Jhc_Text_Read_lexLitChar$d5),v109251718);
        v3927 = x140.t0;
        v3929 = x140.t1;
        sptr_t v3931 = demote(v3927);
        {   gc_frame0(gc,2,v3929,v3931);
            wptr_t x141 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
            ((struct sCJhc_Prim_Prim_$LcR*)x141)->a1 = v3931;
            ((struct sCJhc_Prim_Prim_$LcR*)x141)->a2 = v3929;
            return x141;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d7(gc_t gc,arena_t arena,sptr_t v13593612)
{
        wptr_t v4067;
        sptr_t v4069;
        struct tup2 x114;
        x114 = fW$__fJhc_List_span(gc,arena,SET_RAW_TAG(P1__Prelude_CType_isDigit),v13593612);
        v4067 = x114.t0;
        v4069 = x114.t1;
        sptr_t v4071 = demote(v4067);
        {   gc_frame0(gc,2,v4069,v4071);
            wptr_t x115 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
            ((struct sCJhc_Prim_Prim_$LcR*)x115)->a1 = v4071;
            ((struct sCJhc_Prim_Prim_$LcR*)x115)->a2 = v4069;
            return x115;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d8(gc_t gc,arena_t arena,sptr_t v264446470)
{
        wptr_t v101062 = eval(gc,arena,v264446470);
        {   uint32_t v29821320;
            uint16_t v52590398;
            gc_frame0(gc,1,v101062);
            v29821320 = ((uint32_t)RAW_GET_UF(v101062));
            v52590398 = fW$__fx130476104(gc,arena,v29821320);
            return RAW_SET_UF(v52590398);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_lexLitChar$d9(gc_t gc,arena_t arena,sptr_t v203039192)
{
        wptr_t v3909;
        sptr_t v3911;
        struct tup2 x142;
        x142 = fW$__fJhc_List_span(gc,arena,SET_RAW_TAG(P1__Jhc_Text_Read_lexLitChar$d8),v203039192);
        v3909 = x142.t0;
        v3911 = x142.t1;
        sptr_t v3913 = demote(v3909);
        {   gc_frame0(gc,2,v3911,v3913);
            wptr_t x143 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
            ((struct sCJhc_Prim_Prim_$LcR*)x143)->a1 = v3913;
            ((struct sCJhc_Prim_Prim_$LcR*)x143)->a2 = v3911;
            return x143;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_nonnull(gc_t gc,arena_t arena,wptr_t v80256464,sptr_t v75583676)
{
        {   gc_frame0(gc,2,v75583676,v80256464);
            sptr_t x71 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_nonnull$d4);
            ((struct sFJhc_Text_Read_nonnull$d4*)x71)->head = TO_FPTR(&E__fJhc_Text_Read_nonnull$d4);
            ((struct sFJhc_Text_Read_nonnull$d4*)x71)->a1 = v80256464;
            ((struct sFJhc_Text_Read_nonnull$d4*)x71)->a2 = v75583676;
            sptr_t v150442644 = MKLAZY(x71);
            {   gc_frame0(gc,1,v150442644);
                wptr_t x72 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                ((struct sCJhc_Prim_Prim_$x3a*)x72)->a1 = v150442644;
                ((struct sCJhc_Prim_Prim_$x3a*)x72)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                wptr_t v313 = x72;
                sptr_t v45668668 = demote(v313);
                return fJhc_Text_Read_nonnull$d3(gc,arena,v45668668);
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_nonnull$d2(gc_t gc,arena_t arena,sptr_t v137248436,wptr_t v119549090)
{
        sptr_t v119553734 = demote(v119549090);
        {   gc_frame0(gc,2,v119553734,v137248436);
            sptr_t x46 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_nonnull$d3);
            ((struct sFJhc_Text_Read_nonnull$d3*)x46)->head = TO_FPTR(&E__fJhc_Text_Read_nonnull$d3);
            ((struct sFJhc_Text_Read_nonnull$d3*)x46)->a1 = v137248436;
            sptr_t v82174980 = MKLAZY(x46);
            return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v119553734,v82174980);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_nonnull$d3(gc_t gc,arena_t arena,sptr_t v146226746)
{
        wptr_t v101692 = eval(gc,arena,v146226746);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101692) {
            return v101692;
        } else {
            sptr_t v101519594;
            sptr_t v129659906;
            /* ("CJhc.Prim.Prim.:" ni101519594 ni129659906) */
            v101519594 = ((struct sCJhc_Prim_Prim_$x3a*)v101692)->a1;
            v129659906 = ((struct sCJhc_Prim_Prim_$x3a*)v101692)->a2;
            {   gc_frame0(gc,1,v129659906);
                wptr_t v101694 = eval(gc,arena,v101519594);
                {   sptr_t v4758;
                    sptr_t v4760;
                    gc_frame0(gc,1,v101694);
                    v4758 = ((struct sCJhc_Prim_Prim_$LcR*)v101694)->a1;
                    v4760 = ((struct sCJhc_Prim_Prim_$LcR*)v101694)->a2;
                    {   sptr_t v412;
                        sptr_t v4805;
                        struct tup1 x47;
                        gc_frame0(gc,2,v4758,v4760);
                        wptr_t v101700 = eval(gc,arena,v4758);
                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101700) {
                            x47.t0 = v129659906;
                            x47.t1 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                        } else {
                            /* ("CJhc.Prim.Prim.:" ni0 ni0) */
                            wptr_t x48 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                            ((struct sCJhc_Prim_Prim_$LcR*)x48)->a1 = v4758;
                            ((struct sCJhc_Prim_Prim_$LcR*)x48)->a2 = v4760;
                            wptr_t v429 = x48;
                            sptr_t v84556756 = demote(v429);
                            {   gc_frame0(gc,1,v84556756);
                                wptr_t x49 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                ((struct sCJhc_Prim_Prim_$x3a*)x49)->a1 = v84556756;
                                ((struct sCJhc_Prim_Prim_$x3a*)x49)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                wptr_t v433 = x49;
                                sptr_t v14053568 = demote(v433);
                                x47.t0 = v129659906;
                                x47.t1 = v14053568;
                            }
                        }
                        v412 = x47.t0;
                        v4805 = x47.t1;
                        wptr_t v4643 = promote(v4805);
                        return fJhc_Text_Read_nonnull$d2(gc,arena,v412,v4643);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_nonnull$d4(gc_t gc,arena_t arena,wptr_t v426379305,sptr_t v429000745)
{
        wptr_t v4464;
        sptr_t v8930;
        struct tup2 x69;
        x69 = fW$__fJhc_List_span(gc,arena,v426379305,v429000745);
        v4464 = x69.t0;
        v8930 = x69.t1;
        sptr_t v4468 = demote(v4464);
        {   gc_frame0(gc,2,v4468,v8930);
            wptr_t x70 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
            ((struct sCJhc_Prim_Prim_$LcR*)x70)->a1 = v4468;
            ((struct sCJhc_Prim_Prim_$LcR*)x70)->a2 = v8930;
            return x70;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readDec(gc_t gc,arena_t arena,sptr_t v119549118)
{
        wptr_t v101168;
        v101168 = fJhc_Text_Read_nonnull(gc,arena,SET_RAW_TAG(P1__Prelude_CType_isDigit),v119549118);
        sptr_t v130700866 = demote(v101168);
        return fJhc_Text_Read_readDec$d7(gc,arena,v130700866);
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readDec$d2(gc_t gc,arena_t arena,sptr_t v182639128)
{
        wptr_t v101284 = eval(gc,arena,v182639128);
        {   sptr_t v246712080;
            sptr_t v27090756;
            gc_frame0(gc,1,v101284);
            v27090756 = ((struct sCJhc_Prim_Prim_$LcR*)v101284)->a1;
            v246712080 = ((struct sCJhc_Prim_Prim_$LcR*)v101284)->a2;
            {   gc_frame0(gc,2,v27090756,v246712080);
                sptr_t x126 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readDec$d4);
                ((struct sFJhc_Text_Read_readDec$d4*)x126)->head = TO_FPTR(&E__fJhc_Text_Read_readDec$d4);
                ((struct sFJhc_Text_Read_readDec$d4*)x126)->a1 = v27090756;
                sptr_t v202837484 = MKLAZY(x126);
                {   gc_frame0(gc,1,v202837484);
                    wptr_t x127 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                    ((struct sCJhc_Prim_Prim_$LcR*)x127)->a1 = v202837484;
                    ((struct sCJhc_Prim_Prim_$LcR*)x127)->a2 = v246712080;
                    return x127;
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readDec$d3(gc_t gc,arena_t arena,sptr_t v107672530)
{
        wptr_t v101252 = eval(gc,arena,v107672530);
        {   uint32_t v209623816;
            uint32_t v220263216;
            gc_frame0(gc,1,v101252);
            v220263216 = ((uint32_t)RAW_GET_UF(v101252));
            v209623816 = fW$__fPrelude_CType_digitToInt(gc,arena,v220263216);
            uintmax_t v105553380 = ((intmax_t)((int32_t)v209623816));
            wptr_t x105 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
            ((struct sCJhc_Type_Basic_Integer*)x105)->a1 = v105553380;
            return x105;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readDec$d4(gc_t gc,arena_t arena,sptr_t v124005364)
{
        wptr_t v101286;
        sptr_t v4591;
        sptr_t v583;
        struct tup1 x125;
        v101286 = fJhc_Basics_45__go(gc,arena,v124005364);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101286) {
            jhc_error("Prelude.error: Prelude.foldl1: empty list");
        } else {
            sptr_t v105553382;
            sptr_t v227981066;
            /* ("CJhc.Prim.Prim.:" ni227981066 ni105553382) */
            v227981066 = ((struct sCJhc_Prim_Prim_$x3a*)v101286)->a1;
            v105553382 = ((struct sCJhc_Prim_Prim_$x3a*)v101286)->a2;
            x125.t0 = v227981066;
            x125.t1 = v105553382;
        }
        v583 = x125.t0;
        v4591 = x125.t1;
        return fJhc_Text_Read_readDec$d6(gc,arena,v583,v4591);
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readDec$d5(gc_t gc,arena_t arena,sptr_t v228308044,sptr_t v264254036)
{
        {   gc_frame0(gc,1,v228308044);
            wptr_t v101092 = eval(gc,arena,v264254036);
            {   gc_frame0(gc,1,v101092);
                wptr_t v101094 = eval(gc,arena,v228308044);
                {   uintmax_t v108955760;
                    uintmax_t v132679390;
                    gc_frame0(gc,1,v101094);
                    v132679390 = ((struct sCJhc_Type_Basic_Integer*)v101092)->a1;
                    uintmax_t v59642626 = (10 * v132679390);
                    v108955760 = ((struct sCJhc_Type_Basic_Integer*)v101094)->a1;
                    uintmax_t v829 = (v59642626 + v108955760);
                    wptr_t x122 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                    ((struct sCJhc_Type_Basic_Integer*)x122)->a1 = v829;
                    return x122;
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readDec$d6(gc_t gc,arena_t arena,sptr_t v151155888,sptr_t v44725406)
{
        sptr_t v151156475;
        sptr_t v44725994;
        v151156475 = v151155888;
        v44725994 = v44725406;
        bRfJhc_Text_Read_readDec$d6u123:;
        {   {   gc_frame0(gc,1,v151156475);
                wptr_t v101090 = eval(gc,arena,v44725994);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101090) {
                    return eval(gc,arena,v151156475);
                } else {
                    sptr_t v119285250;
                    sptr_t v196385512;
                    /* ("CJhc.Prim.Prim.:" ni196385512 ni119285250) */
                    v196385512 = ((struct sCJhc_Prim_Prim_$x3a*)v101090)->a1;
                    v119285250 = ((struct sCJhc_Prim_Prim_$x3a*)v101090)->a2;
                    {   gc_frame0(gc,2,v119285250,v196385512);
                        sptr_t x124 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readDec$d5);
                        ((struct sFJhc_Text_Read_readDec$d5*)x124)->head = TO_FPTR(&E__fJhc_Text_Read_readDec$d5);
                        ((struct sFJhc_Text_Read_readDec$d5*)x124)->a1 = v196385512;
                        ((struct sFJhc_Text_Read_readDec$d5*)x124)->a2 = v151156475;
                        sptr_t v135370996 = MKLAZY(x124);
                        v151156475 = v135370996;
                        v44725994 = v119285250;
                        goto bRfJhc_Text_Read_readDec$d6u123;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readDec$d7(gc_t gc,arena_t arena,sptr_t v264254038)
{
        wptr_t v101282 = eval(gc,arena,v264254038);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101282) {
            return v101282;
        } else {
            sptr_t v147864900;
            sptr_t v228308048;
            /* ("CJhc.Prim.Prim.:" ni147864900 ni228308048) */
            v147864900 = ((struct sCJhc_Prim_Prim_$x3a*)v101282)->a1;
            v228308048 = ((struct sCJhc_Prim_Prim_$x3a*)v101282)->a2;
            {   gc_frame0(gc,2,v147864900,v228308048);
                sptr_t x128 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readDec$d7);
                ((struct sFJhc_Text_Read_readDec$d7*)x128)->head = TO_FPTR(&E__fJhc_Text_Read_readDec$d7);
                ((struct sFJhc_Text_Read_readDec$d7*)x128)->a1 = v228308048;
                sptr_t v119285254 = MKLAZY(x128);
                {   gc_frame0(gc,1,v119285254);
                    sptr_t x129 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readDec$d2);
                    ((struct sFJhc_Text_Read_readDec$d2*)x129)->head = TO_FPTR(&E__fJhc_Text_Read_readDec$d2);
                    ((struct sFJhc_Text_Read_readDec$d2*)x129)->a1 = v147864900;
                    sptr_t v135370992 = MKLAZY(x129);
                    {   gc_frame0(gc,1,v135370992);
                        wptr_t x130 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x130)->a1 = v135370992;
                        ((struct sCJhc_Prim_Prim_$x3a*)x130)->a2 = v119285254;
                        return x130;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec(gc_t gc,arena_t arena,wptr_t v1469980709,wptr_t v239100274,sptr_t v108955762)
{
        return bRfJhc_Text_Read_readsPrec(gc,arena,v1469980709,v239100274,v108955762);
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d10(gc_t gc,arena_t arena,sptr_t v111142936)
{
        wptr_t v100798 = eval(gc,arena,v111142936);
        {   sptr_t v128764928;
            sptr_t v204090790;
            gc_frame0(gc,1,v100798);
            v204090790 = ((struct sCJhc_Prim_Prim_$LcR*)v100798)->a1;
            v128764928 = ((struct sCJhc_Prim_Prim_$LcR*)v100798)->a2;
            {   gc_frame0(gc,2,v128764928,v204090790);
                sptr_t x243 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readsPrec$d11);
                ((struct sFJhc_Text_Read_readsPrec$d11*)x243)->head = TO_FPTR(&E__fJhc_Text_Read_readsPrec$d11);
                ((struct sFJhc_Text_Read_readsPrec$d11*)x243)->a1 = v204090790;
                sptr_t v7598850 = MKLAZY(x243);
                {   gc_frame0(gc,1,v7598850);
                    wptr_t x244 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                    ((struct sCJhc_Prim_Prim_$LcR*)x244)->a1 = v7598850;
                    ((struct sCJhc_Prim_Prim_$LcR*)x244)->a2 = v128764928;
                    return x244;
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d11(gc_t gc,arena_t arena,sptr_t v2998636)
{
        wptr_t v100800 = eval(gc,arena,v2998636);
        {   uintmax_t v187526660;
            gc_frame0(gc,1,v100800);
            v187526660 = ((struct sCJhc_Type_Basic_Integer*)v100800)->a1;
            uintmax_t v58334286 = (-((intmax_t)v187526660));
            wptr_t x242 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
            ((struct sCJhc_Type_Basic_Integer*)x242)->a1 = v58334286;
            return x242;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d12(gc_t gc,arena_t arena,sptr_t v237992582)
{
        wptr_t v100796 = eval(gc,arena,v237992582);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100796) {
            return v100796;
        } else {
            sptr_t v202961036;
            sptr_t v266112370;
            /* ("CJhc.Prim.Prim.:" ni266112370 ni202961036) */
            v266112370 = ((struct sCJhc_Prim_Prim_$x3a*)v100796)->a1;
            v202961036 = ((struct sCJhc_Prim_Prim_$x3a*)v100796)->a2;
            {   gc_frame0(gc,2,v202961036,v266112370);
                sptr_t x245 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readsPrec$d12);
                ((struct sFJhc_Text_Read_readsPrec$d12*)x245)->head = TO_FPTR(&E__fJhc_Text_Read_readsPrec$d12);
                ((struct sFJhc_Text_Read_readsPrec$d12*)x245)->a1 = v202961036;
                sptr_t v220594018 = MKLAZY(x245);
                {   gc_frame0(gc,1,v220594018);
                    sptr_t x246 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readsPrec$d10);
                    ((struct sFJhc_Text_Read_readsPrec$d10*)x246)->head = TO_FPTR(&E__fJhc_Text_Read_readsPrec$d10);
                    ((struct sFJhc_Text_Read_readsPrec$d10*)x246)->a1 = v266112370;
                    sptr_t v89450798 = MKLAZY(x246);
                    {   gc_frame0(gc,1,v89450798);
                        wptr_t x247 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x247)->a1 = v89450798;
                        ((struct sCJhc_Prim_Prim_$x3a*)x247)->a2 = v220594018;
                        return x247;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d13(gc_t gc,arena_t arena,sptr_t v64932578)
{
        wptr_t v100880 = eval(gc,arena,v64932578);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100880) {
            return v100880;
        } else {
            sptr_t v16106292;
            sptr_t v233337132;
            /* ("CJhc.Prim.Prim.:" ni233337132 ni16106292) */
            v233337132 = ((struct sCJhc_Prim_Prim_$x3a*)v100880)->a1;
            v16106292 = ((struct sCJhc_Prim_Prim_$x3a*)v100880)->a2;
            {   gc_frame0(gc,1,v16106292);
                wptr_t v100882 = eval(gc,arena,v233337132);
                {   sptr_t v4444;
                    sptr_t v4446;
                    gc_frame0(gc,1,v100882);
                    v4444 = ((struct sCJhc_Prim_Prim_$LcR*)v100882)->a1;
                    v4446 = ((struct sCJhc_Prim_Prim_$LcR*)v100882)->a2;
                    {   sptr_t v4498;
                        sptr_t v7939;
                        uint16_t v100888;
                        struct tup1 x248;
                        gc_frame0(gc,1,v4446);
                        v100888 = fJhc_String_eqUnpackedString(gc,arena,(uintptr_t)"-",v4444);
                        if (0 == v100888) {
                            x248.t0 = v16106292;
                            x248.t1 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                        } else {
                            wptr_t v100890;
                            wptr_t v100894;
                            /* 1 */
                            assert(1 == v100888);
                            v100890 = fNumeric_38__read$tt(gc,arena,v4446);
                            sptr_t v124005362 = demote(v100890);
                            v100894 = fJhc_Text_Read_readsPrec$d12(gc,arena,v124005362);
                            sptr_t v202837486 = demote(v100894);
                            x248.t0 = v16106292;
                            x248.t1 = v202837486;
                        }
                        v4498 = x248.t0;
                        v7939 = x248.t1;
                        wptr_t v3443 = promote(v7939);
                        return fJhc_Text_Read_readsPrec$d9(gc,arena,v4498,v3443);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d14(gc_t gc,arena_t arena,sptr_t v199109178)
{
        wptr_t v100828;
        v100828 = fJhc_Text_Read_lex(gc,arena,v199109178);
        sptr_t v80776082 = demote(v100828);
        return fJhc_Text_Read_readsPrec$d19(gc,arena,v80776082);
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d15(gc_t gc,arena_t arena,sptr_t v11885916,wptr_t v150560726)
{
        sptr_t v150564097 = demote(v150560726);
        {   gc_frame0(gc,2,v11885916,v150564097);
            sptr_t x253 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readsPrec$d19);
            ((struct sFJhc_Text_Read_readsPrec$d19*)x253)->head = TO_FPTR(&E__fJhc_Text_Read_readsPrec$d19);
            ((struct sFJhc_Text_Read_readsPrec$d19*)x253)->a1 = v11885916;
            sptr_t v117945874 = MKLAZY(x253);
            return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v150564097,v117945874);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d16(gc_t gc,arena_t arena,sptr_t v8986,sptr_t v86998726)
{
        {   gc_frame0(gc,1,v8986);
            wptr_t v101548 = eval(gc,arena,v86998726);
            {   gc_frame0(gc,1,v101548);
                wptr_t x55 = s_alloc(gc,arena,public_caches(arena)->cP1__Jhc_Text_Read_readsPrec$d16);
                SET_MEM_TAG((struct sP1__Jhc_Text_Read_readsPrec$d16*)x55,P1__Jhc_Text_Read_readsPrec$d16);
                ((struct sP1__Jhc_Text_Read_readsPrec$d16*)x55)->a1 = v8986;
                wptr_t v581 = x55;
                sptr_t v251973242 = demote(v581);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101548) {
                    return v101548;
                } else {
                    sptr_t v232493420;
                    sptr_t v4747;
                    /* ("CJhc.Prim.Prim.:" ni232493420 ni4747) */
                    v232493420 = ((struct sCJhc_Prim_Prim_$x3a*)v101548)->a1;
                    v4747 = ((struct sCJhc_Prim_Prim_$x3a*)v101548)->a2;
                    {   gc_frame0(gc,2,v4747,v251973242);
                        wptr_t v101550 = eval(gc,arena,v232493420);
                        {   sptr_t v8988;
                            sptr_t v8991;
                            gc_frame0(gc,1,v101550);
                            v8988 = ((struct sCJhc_Prim_Prim_$LcR*)v101550)->a1;
                            v8991 = ((struct sCJhc_Prim_Prim_$LcR*)v101550)->a2;
                            {   sptr_t v234;
                                sptr_t v236;
                                sptr_t v238;
                                uint16_t v101556;
                                struct tup4 x56;
                                gc_frame0(gc,1,v8991);
                                v101556 = fJhc_String_eqUnpackedString(gc,arena,(uintptr_t)")",v8988);
                                if (0 == v101556) {
                                    x56.t0 = v251973242;
                                    x56.t1 = v4747;
                                    x56.t2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                } else {
                                    /* 1 */
                                    assert(1 == v101556);
                                    wptr_t x57 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                                    ((struct sCJhc_Prim_Prim_$LcR*)x57)->a1 = v8986;
                                    ((struct sCJhc_Prim_Prim_$LcR*)x57)->a2 = v8991;
                                    wptr_t v604 = x57;
                                    sptr_t v253212876 = demote(v604);
                                    {   gc_frame0(gc,1,v253212876);
                                        wptr_t x58 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                        ((struct sCJhc_Prim_Prim_$x3a*)x58)->a1 = v253212876;
                                        ((struct sCJhc_Prim_Prim_$x3a*)x58)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                        wptr_t v268 = x58;
                                        sptr_t v257664006 = demote(v268);
                                        x56.t0 = v251973242;
                                        x56.t1 = v4747;
                                        x56.t2 = v257664006;
                                    }
                                }
                                v234 = x56.t0;
                                v236 = x56.t1;
                                v238 = x56.t2;
                                wptr_t v4540 = promote(v234);
                                wptr_t v4543 = promote(v238);
                                return fJhc_Text_Read_readsPrec$d17(gc,arena,v4540,v236,v4543);
                            }
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d17(gc_t gc,arena_t arena,wptr_t v418666,sptr_t v236706540,wptr_t v135303430)
{
        sptr_t v135308251 = demote(v135303430);
        {   gc_frame0(gc,3,v418666,v135308251,v236706540);
            sptr_t x17 = s_alloc(gc,arena,public_caches(arena)->cBap__1__Jhc_Text_Read_readsPrec$d17u101598);
            ((struct sBap__1__Jhc_Text_Read_readsPrec$d17u101598*)x17)->head = TO_FPTR(&E__bap__1__Jhc_Text_Read_readsPrec$d17u101598);
            ((struct sBap__1__Jhc_Text_Read_readsPrec$d17u101598*)x17)->a1 = v418666;
            ((struct sBap__1__Jhc_Text_Read_readsPrec$d17u101598*)x17)->a2 = v236706540;
            sptr_t v120087510 = MKLAZY(x17);
            return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v135308251,v120087510);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d18(gc_t gc,arena_t arena,sptr_t v78256144)
{
        wptr_t v100832 = eval(gc,arena,v78256144);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100832) {
            return v100832;
        } else {
            sptr_t v243821964;
            sptr_t v990232;
            /* ("CJhc.Prim.Prim.:" ni243821964 ni990232) */
            v243821964 = ((struct sCJhc_Prim_Prim_$x3a*)v100832)->a1;
            v990232 = ((struct sCJhc_Prim_Prim_$x3a*)v100832)->a2;
            {   gc_frame0(gc,1,v990232);
                wptr_t v100834 = eval(gc,arena,v243821964);
                {   sptr_t v261247684;
                    sptr_t v4472;
                    gc_frame0(gc,1,v100834);
                    v261247684 = ((struct sCJhc_Prim_Prim_$LcR*)v100834)->a1;
                    v4472 = ((struct sCJhc_Prim_Prim_$LcR*)v100834)->a2;
                    {   wptr_t v100836;
                        wptr_t v100840;
                        gc_frame0(gc,1,v261247684);
                        v100836 = fJhc_Text_Read_lex(gc,arena,v4472);
                        sptr_t v266579792 = demote(v100836);
                        v100840 = fJhc_Text_Read_readsPrec$d16(gc,arena,v261247684,v266579792);
                        sptr_t v245783996 = demote(v100840);
                        {   gc_frame0(gc,1,v245783996);
                            sptr_t x235 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readsPrec$d18);
                            ((struct sFJhc_Text_Read_readsPrec$d18*)x235)->head = TO_FPTR(&E__fJhc_Text_Read_readsPrec$d18);
                            ((struct sFJhc_Text_Read_readsPrec$d18*)x235)->a1 = v990232;
                            sptr_t v206629276 = MKLAZY(x235);
                            return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v245783996,v206629276);
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d19(gc_t gc,arena_t arena,sptr_t v237284568)
{
        wptr_t v100850 = eval(gc,arena,v237284568);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100850) {
            return v100850;
        } else {
            sptr_t v31176422;
            sptr_t v48578440;
            /* ("CJhc.Prim.Prim.:" ni31176422 ni48578440) */
            v31176422 = ((struct sCJhc_Prim_Prim_$x3a*)v100850)->a1;
            v48578440 = ((struct sCJhc_Prim_Prim_$x3a*)v100850)->a2;
            {   gc_frame0(gc,1,v48578440);
                wptr_t v100852 = eval(gc,arena,v31176422);
                {   sptr_t v4476;
                    sptr_t v4478;
                    gc_frame0(gc,1,v100852);
                    v4476 = ((struct sCJhc_Prim_Prim_$LcR*)v100852)->a1;
                    v4478 = ((struct sCJhc_Prim_Prim_$LcR*)v100852)->a2;
                    {   sptr_t v1093;
                        sptr_t v1095;
                        uint16_t v100858;
                        struct tup1 x252;
                        gc_frame0(gc,1,v4478);
                        v100858 = fJhc_String_eqUnpackedString(gc,arena,(uintptr_t)"(",v4476);
                        if (0 == v100858) {
                            x252.t0 = v48578440;
                            x252.t1 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                        } else {
                            wptr_t v100860;
                            wptr_t v100864;
                            /* 1 */
                            assert(1 == v100858);
                            v100860 = fJhc_Text_Read_37__optional(gc,arena,v4478);
                            sptr_t v34339572 = demote(v100860);
                            v100864 = fJhc_Text_Read_readsPrec$d18(gc,arena,v34339572);
                            sptr_t v192968708 = demote(v100864);
                            x252.t0 = v48578440;
                            x252.t1 = v192968708;
                        }
                        v1093 = x252.t0;
                        v1095 = x252.t1;
                        wptr_t v3397 = promote(v1095);
                        return fJhc_Text_Read_readsPrec$d15(gc,arena,v1093,v3397);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d2(gc_t gc,arena_t arena,sptr_t v15858616)
{
        wptr_t v100804 = eval(gc,arena,v15858616);
        {   sptr_t v221098674;
            sptr_t v42056686;
            gc_frame0(gc,1,v100804);
            v221098674 = ((struct sCJhc_Prim_Prim_$LcR*)v100804)->a1;
            v42056686 = ((struct sCJhc_Prim_Prim_$LcR*)v100804)->a2;
            {   gc_frame0(gc,2,v42056686,v221098674);
                sptr_t x237 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readsPrec$d3);
                ((struct sFJhc_Text_Read_readsPrec$d3*)x237)->head = TO_FPTR(&E__fJhc_Text_Read_readsPrec$d3);
                ((struct sFJhc_Text_Read_readsPrec$d3*)x237)->a1 = v221098674;
                sptr_t v87539958 = MKLAZY(x237);
                {   gc_frame0(gc,1,v87539958);
                    wptr_t x238 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                    ((struct sCJhc_Prim_Prim_$LcR*)x238)->a1 = v87539958;
                    ((struct sCJhc_Prim_Prim_$LcR*)x238)->a2 = v42056686;
                    return x238;
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d3(gc_t gc,arena_t arena,sptr_t v258411590)
{
        wptr_t v100806 = eval(gc,arena,v258411590);
        {   uintmax_t v181366146;
            gc_frame0(gc,1,v100806);
            v181366146 = ((struct sCJhc_Type_Basic_Integer*)v100806)->a1;
            uint32_t v187074508 = ((uint32_t)v181366146);
            wptr_t x236 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Word_Int);
            ((struct sCJhc_Type_Word_Int*)x236)->a1 = v187074508;
            return x236;
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d4(gc_t gc,arena_t arena,sptr_t v130564416)
{
        wptr_t v100802 = eval(gc,arena,v130564416);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100802) {
            return v100802;
        } else {
            sptr_t v169909356;
            sptr_t v248387720;
            /* ("CJhc.Prim.Prim.:" ni248387720 ni169909356) */
            v248387720 = ((struct sCJhc_Prim_Prim_$x3a*)v100802)->a1;
            v169909356 = ((struct sCJhc_Prim_Prim_$x3a*)v100802)->a2;
            {   gc_frame0(gc,2,v169909356,v248387720);
                sptr_t x239 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readsPrec$d4);
                ((struct sFJhc_Text_Read_readsPrec$d4*)x239)->head = TO_FPTR(&E__fJhc_Text_Read_readsPrec$d4);
                ((struct sFJhc_Text_Read_readsPrec$d4*)x239)->a1 = v169909356;
                sptr_t v45052588 = MKLAZY(x239);
                {   gc_frame0(gc,1,v45052588);
                    sptr_t x240 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readsPrec$d2);
                    ((struct sFJhc_Text_Read_readsPrec$d2*)x240)->head = TO_FPTR(&E__fJhc_Text_Read_readsPrec$d2);
                    ((struct sFJhc_Text_Read_readsPrec$d2*)x240)->a1 = v248387720;
                    sptr_t v80275162 = MKLAZY(x240);
                    {   gc_frame0(gc,1,v80275162);
                        wptr_t x241 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x241)->a1 = v80275162;
                        ((struct sCJhc_Prim_Prim_$x3a*)x241)->a2 = v45052588;
                        return x241;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d5(gc_t gc,arena_t arena,sptr_t v4458,sptr_t v70380424)
{
        {   gc_frame0(gc,1,v4458);
            wptr_t v101606 = eval(gc,arena,v70380424);
            {   gc_frame0(gc,1,v101606);
                wptr_t x19 = s_alloc(gc,arena,public_caches(arena)->cP1__Jhc_Text_Read_readsPrec$d5);
                SET_MEM_TAG((struct sP1__Jhc_Text_Read_readsPrec$d5*)x19,P1__Jhc_Text_Read_readsPrec$d5);
                ((struct sP1__Jhc_Text_Read_readsPrec$d5*)x19)->a1 = v4458;
                wptr_t v4837 = x19;
                sptr_t v132127014 = demote(v4837);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101606) {
                    return v101606;
                } else {
                    sptr_t v23503990;
                    sptr_t v239029634;
                    /* ("CJhc.Prim.Prim.:" ni23503990 ni239029634) */
                    v23503990 = ((struct sCJhc_Prim_Prim_$x3a*)v101606)->a1;
                    v239029634 = ((struct sCJhc_Prim_Prim_$x3a*)v101606)->a2;
                    {   gc_frame0(gc,2,v132127014,v239029634);
                        wptr_t v101608 = eval(gc,arena,v23503990);
                        {   sptr_t v14024;
                            sptr_t v9240;
                            gc_frame0(gc,1,v101608);
                            v14024 = ((struct sCJhc_Prim_Prim_$LcR*)v101608)->a1;
                            v9240 = ((struct sCJhc_Prim_Prim_$LcR*)v101608)->a2;
                            {   sptr_t v131;
                                sptr_t v165;
                                sptr_t v4801;
                                struct tup4 x20;
                                gc_frame0(gc,1,v14024);
                                wptr_t v101614 = eval(gc,arena,v9240);
                                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101614) {
                                    wptr_t x21 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                                    ((struct sCJhc_Prim_Prim_$LcR*)x21)->a1 = v14024;
                                    ((struct sCJhc_Prim_Prim_$LcR*)x21)->a2 = v4458;
                                    wptr_t v69 = x21;
                                    sptr_t v108472298 = demote(v69);
                                    {   gc_frame0(gc,1,v108472298);
                                        wptr_t x22 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                        ((struct sCJhc_Prim_Prim_$x3a*)x22)->a1 = v108472298;
                                        ((struct sCJhc_Prim_Prim_$x3a*)x22)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                        wptr_t v4863 = x22;
                                        sptr_t v148294370 = demote(v4863);
                                        x20.t0 = v239029634;
                                        x20.t1 = v132127014;
                                        x20.t2 = v148294370;
                                    }
                                } else {
                                    /* ("CJhc.Prim.Prim.:" ni0 ni0) */
                                    x20.t0 = v239029634;
                                    x20.t1 = v132127014;
                                    x20.t2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                                }
                                v131 = x20.t0;
                                v165 = x20.t1;
                                v4801 = x20.t2;
                                wptr_t v9606 = promote(v165);
                                wptr_t v9609 = promote(v4801);
                                return fJhc_Text_Read_readsPrec$d6(gc,arena,v131,v9606,v9609);
                            }
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d6(gc_t gc,arena_t arena,sptr_t v165129190,wptr_t v182966160,wptr_t v45539882)
{
        sptr_t v45544690 = demote(v45539882);
        {   gc_frame0(gc,3,v45544690,v165129190,v182966160);
            sptr_t x18 = s_alloc(gc,arena,public_caches(arena)->cBap__1__Jhc_Text_Read_readsPrec$d6u101624);
            ((struct sBap__1__Jhc_Text_Read_readsPrec$d6u101624*)x18)->head = TO_FPTR(&E__bap__1__Jhc_Text_Read_readsPrec$d6u101624);
            ((struct sBap__1__Jhc_Text_Read_readsPrec$d6u101624*)x18)->a1 = v182966160;
            ((struct sBap__1__Jhc_Text_Read_readsPrec$d6u101624*)x18)->a2 = v165129190;
            sptr_t v195325128 = MKLAZY(x18);
            return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v45544690,v195325128);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d7(gc_t gc,arena_t arena,sptr_t v214782328)
{
        wptr_t v101156 = eval(gc,arena,v214782328);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101156) {
            return v101156;
        } else {
            sptr_t v20524844;
            sptr_t v81094102;
            /* ("CJhc.Prim.Prim.:" ni81094102 ni20524844) */
            v81094102 = ((struct sCJhc_Prim_Prim_$x3a*)v101156)->a1;
            v20524844 = ((struct sCJhc_Prim_Prim_$x3a*)v101156)->a2;
            {   gc_frame0(gc,1,v20524844);
                wptr_t v101158 = eval(gc,arena,v81094102);
                {   sptr_t v258071182;
                    sptr_t v4456;
                    gc_frame0(gc,1,v101158);
                    v4456 = ((struct sCJhc_Prim_Prim_$LcR*)v101158)->a1;
                    v258071182 = ((struct sCJhc_Prim_Prim_$LcR*)v101158)->a2;
                    {   wptr_t v101160;
                        wptr_t v101164;
                        gc_frame0(gc,1,v258071182);
                        v101160 = fJhc_Text_Read_readDec(gc,arena,v4456);
                        sptr_t v202562792 = demote(v101160);
                        v101164 = fJhc_Text_Read_readsPrec$d5(gc,arena,v258071182,v202562792);
                        sptr_t v265780750 = demote(v101164);
                        {   gc_frame0(gc,1,v265780750);
                            sptr_t x131 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readsPrec$d7);
                            ((struct sFJhc_Text_Read_readsPrec$d7*)x131)->head = TO_FPTR(&E__fJhc_Text_Read_readsPrec$d7);
                            ((struct sFJhc_Text_Read_readsPrec$d7*)x131)->a1 = v20524844;
                            sptr_t v202526708 = MKLAZY(x131);
                            return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v265780750,v202526708);
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d8(gc_t gc,arena_t arena,sptr_t v324274215)
{
        wptr_t v100876;
        v100876 = fJhc_Text_Read_lex(gc,arena,v324274215);
        sptr_t v62866272 = demote(v100876);
        return fJhc_Text_Read_readsPrec$d13(gc,arena,v62866272);
}

static wptr_t A_STD A_MALLOC
fJhc_Text_Read_readsPrec$d9(gc_t gc,arena_t arena,sptr_t v257664008,wptr_t v217646342)
{
        sptr_t v217649759 = demote(v217646342);
        {   gc_frame0(gc,2,v217649759,v257664008);
            sptr_t x249 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Text_Read_readsPrec$d13);
            ((struct sFJhc_Text_Read_readsPrec$d13*)x249)->head = TO_FPTR(&E__fJhc_Text_Read_readsPrec$d13);
            ((struct sFJhc_Text_Read_readsPrec$d13*)x249)->a1 = v257664008;
            sptr_t v143960012 = MKLAZY(x249);
            return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),v217649759,v143960012);
        }
}

static wptr_t A_STD A_MALLOC
fMain_e(gc_t gc,arena_t arena)
{
        return fMain_toDigits(gc,arena,PROMOTE(c66));
}

static wptr_t A_STD A_MALLOC
fMain_toDigits(gc_t gc,arena_t arena,wptr_t v224371662)
{
        sptr_t v3353;
        sptr_t v3355;
        struct tup1 x546;
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v224371662) {
            jhc_error("digits-of-e1.hs:42:17: Unmatched pattern");
        } else {
            sptr_t v171612948;
            sptr_t v219145900;
            /* ("CJhc.Prim.Prim.:" ni219145900 ni171612948) */
            v219145900 = ((struct sCJhc_Prim_Prim_$x3a*)v224371662)->a1;
            v171612948 = ((struct sCJhc_Prim_Prim_$x3a*)v224371662)->a2;
            {   gc_frame0(gc,2,v171612948,v219145900);
                sptr_t x547 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d104);
                ((struct sFtheMain$d104*)x547)->head = TO_FPTR(&E__ftheMain$d104);
                ((struct sFtheMain$d104*)x547)->a1 = v171612948;
                sptr_t v208944070 = MKLAZY(x547);
                x546.t0 = v219145900;
                x546.t1 = v208944070;
            }
        }
        v3353 = x546.t0;
        v3355 = x546.t1;
        {   gc_frame0(gc,2,v3353,v3355);
            wptr_t x548 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
            ((struct sCJhc_Prim_Prim_$x3a*)x548)->a1 = v3353;
            ((struct sCJhc_Prim_Prim_$x3a*)x548)->a2 = v3355;
            return x548;
        }
}

static wptr_t A_STD A_MALLOC
fNumeric_38__read$tt(gc_t gc,arena_t arena,sptr_t v310380571)
{
        wptr_t v100898;
        v100898 = fJhc_Text_Read_lex(gc,arena,v310380571);
        sptr_t v178799746 = demote(v100898);
        return fJhc_Text_Read_readsPrec$d7(gc,arena,v178799746);
}

static wptr_t A_STD A_MALLOC
fPrelude_CType_isDigit(gc_t gc,arena_t arena,sptr_t v208364914)
{
        wptr_t v101220 = eval(gc,arena,v208364914);
        {   uint32_t v22769942;
            uint16_t v90105168;
            gc_frame0(gc,1,v101220);
            v22769942 = ((uint32_t)RAW_GET_UF(v101220));
            v90105168 = fW$__fPrelude_CType_isDigit(gc,arena,v22769942);
            return RAW_SET_UF(v90105168);
        }
}

static wptr_t A_STD A_MALLOC
fPrelude_CType_isHexDigit(gc_t gc,arena_t arena,sptr_t v227981058)
{
        wptr_t v101224 = eval(gc,arena,v227981058);
        {   uint16_t v167886982;
            uint32_t v238570484;
            gc_frame0(gc,1,v101224);
            v238570484 = ((uint32_t)RAW_GET_UF(v101224));
            v167886982 = fW$__fPrelude_CType_isHexDigit(gc,arena,v238570484);
            return RAW_SET_UF(v167886982);
        }
}

static wptr_t A_STD A_MALLOC
fPrelude_CType_isOctDigit(gc_t gc,arena_t arena,sptr_t v56741150)
{
        wptr_t v101086 = eval(gc,arena,v56741150);
        {   uint16_t v196970360;
            uint32_t v235480818;
            gc_frame0(gc,1,v101086);
            v235480818 = ((uint32_t)RAW_GET_UF(v101086));
            v196970360 = fW$__fPrelude_CType_isOctDigit(gc,arena,v235480818);
            return RAW_SET_UF(v196970360);
        }
}

static wptr_t A_STD A_MALLOC
fR$__fJhc_Basics_$pp(gc_t gc,arena_t arena,sptr_t v242021448,sptr_t v123491440)
{
        {   gc_frame0(gc,1,v123491440);
            wptr_t v101588 = eval(gc,arena,v242021448);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101588) {
                return eval(gc,arena,v123491440);
            } else {
                sptr_t v136;
                sptr_t v138;
                /* ("CJhc.Prim.Prim.:" ni136 ni138) */
                v136 = ((struct sCJhc_Prim_Prim_$x3a*)v101588)->a1;
                v138 = ((struct sCJhc_Prim_Prim_$x3a*)v101588)->a2;
                {   gc_frame0(gc,2,v136,v138);
                    sptr_t x15 = s_alloc(gc,arena,public_caches(arena)->cFR$__fJhc_Basics_$pp);
                    ((struct sFR$__fJhc_Basics_$pp*)x15)->head = TO_FPTR(&E__fR$__fJhc_Basics_$pp);
                    ((struct sFR$__fJhc_Basics_$pp*)x15)->a1 = v138;
                    ((struct sFR$__fJhc_Basics_$pp*)x15)->a2 = v123491440;
                    sptr_t v99125570 = MKLAZY(x15);
                    {   gc_frame0(gc,1,v99125570);
                        wptr_t x16 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x16)->a1 = v136;
                        ((struct sCJhc_Prim_Prim_$x3a*)x16)->a2 = v99125570;
                        return x16;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fR$__fJhc_Show_11__showl(gc_t gc,arena_t arena,sptr_t v108431528,wptr_t v267777212)
{
        sptr_t v267782060 = demote(v267777212);
        {   sptr_t v4862;
            sptr_t v71;
            struct tup1 x11;
            gc_frame0(gc,2,v267777212,v267782060);
            wptr_t v101712 = eval(gc,arena,v108431528);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101712) {
                x11.t0 = ((sptr_t)RAW_SET_UF(']'));
                x11.t1 = v267782060;
            } else {
                sptr_t v115557550;
                sptr_t v44963748;
                /* ("CJhc.Prim.Prim.:" ni115557550 ni44963748) */
                v115557550 = ((struct sCJhc_Prim_Prim_$x3a*)v101712)->a1;
                v44963748 = ((struct sCJhc_Prim_Prim_$x3a*)v101712)->a2;
                {   gc_frame0(gc,2,v44963748,v115557550);
                    sptr_t x12 = s_alloc(gc,arena,public_caches(arena)->cFR$__fJhc_Show_11__showl);
                    ((struct sFR$__fJhc_Show_11__showl*)x12)->head = TO_FPTR(&E__fR$__fJhc_Show_11__showl);
                    ((struct sFR$__fJhc_Show_11__showl*)x12)->a1 = v44963748;
                    ((struct sFR$__fJhc_Show_11__showl*)x12)->a2 = v267777212;
                    sptr_t v218304844 = MKLAZY(x12);
                    {   gc_frame0(gc,1,v218304844);
                        sptr_t x13 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Show_shows);
                        ((struct sFJhc_Show_shows*)x13)->head = TO_FPTR(&E__fJhc_Show_shows);
                        ((struct sFJhc_Show_shows*)x13)->a1 = v115557550;
                        ((struct sFJhc_Show_shows*)x13)->a2 = v218304844;
                        sptr_t v42970046 = MKLAZY(x13);
                        x11.t0 = ((sptr_t)RAW_SET_UF(','));
                        x11.t1 = v42970046;
                    }
                }
            }
            v71 = x11.t0;
            v4862 = x11.t1;
            {   gc_frame0(gc,2,v71,v4862);
                wptr_t x14 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                ((struct sCJhc_Prim_Prim_$x3a*)x14)->a1 = v71;
                ((struct sCJhc_Prim_Prim_$x3a*)x14)->a2 = v4862;
                return x14;
            }
        }
}

static wptr_t A_STD A_MALLOC
fR$__fMain_1__aux(gc_t gc,arena_t arena,sptr_t v90719986)
{
        {   gc_frame0(gc,1,v90719986);
            sptr_t x261 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d6);
            ((struct sFtheMain$d6*)x261)->head = TO_FPTR(&E__ftheMain$d6);
            ((struct sFtheMain$d6*)x261)->a1 = v90719986;
            sptr_t v6223040 = MKLAZY(x261);
            {   gc_frame0(gc,1,v6223040);
                sptr_t x262 = s_alloc(gc,arena,public_caches(arena)->cFR$__fMain_1__aux);
                ((struct sFR$__fMain_1__aux*)x262)->head = TO_FPTR(&E__fR$__fMain_1__aux);
                ((struct sFR$__fMain_1__aux*)x262)->a1 = v6223040;
                sptr_t v262286734 = MKLAZY(x262);
                {   gc_frame0(gc,1,v262286734);
                    wptr_t x263 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x263)->a1 = c37;
                    ((struct sCJhc_Prim_Prim_$x3a*)x263)->a2 = v262286734;
                    wptr_t v1303 = x263;
                    sptr_t v210617780 = demote(v1303);
                    {   gc_frame0(gc,1,v210617780);
                        wptr_t x264 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x264)->a1 = v90719986;
                        ((struct sCJhc_Prim_Prim_$x3a*)x264)->a2 = v210617780;
                        wptr_t v1305 = x264;
                        sptr_t v52430826 = demote(v1305);
                        {   gc_frame0(gc,1,v52430826);
                            wptr_t x265 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x265)->a1 = c37;
                            ((struct sCJhc_Prim_Prim_$x3a*)x265)->a2 = v52430826;
                            return x265;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fForeign_C_String_peekCAString(gc_t gc,arena_t arena,uintptr_t v1204683321)
{
        wptr_t v4311;
        uint32_t v109251716;
        v109251716 = 0;
        fW$__fForeign_Marshal_Array_139__loop__79:;
        {   wptr_t x80 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Word_Int);
            ((struct sCJhc_Type_Word_Int*)x80)->a1 = v109251716;
            wptr_t v409 = x80;
            sptr_t v203039188 = demote(v409);
            uint32_t v183528704 = (v109251716 * sizeof(uint8_t));
            uintptr_t v24018030 = ((intptr_t)((int32_t)v183528704));
            uintptr_t v131605198 = (v1204683321 + v24018030);
            uint8_t v40405752 = *((uint8_t *)(v131605198));
            {   sptr_t v4328;
                uint16_t v101384;
                gc_frame0(gc,1,v203039188);
                wptr_t v415 = RAW_SET_UF(v40405752);
                sptr_t v71423084 = demote(v415);
                v101384 = fW$__fJhc_Class_Ord_$ee(gc,arena,SET_RAW_TAG(TJhc_Type_C_CChar),v71423084,RAW_SET_UF(0));
                if (0 == v101384) {
                    wptr_t v4327;
                    uint32_t v7189558 = (1 + v109251716);
                    v109251716 = v7189558;
                    goto fW$__fForeign_Marshal_Array_139__loop__79;
                } else {
                    /* 1 */
                    assert(1 == v101384);
                    v4328 = v203039188;
                }
                v4311 = promote(v4328);
            }
        }
        {   uint32_t v33463332;
            gc_frame0(gc,1,v4311);
            v33463332 = ((struct sCJhc_Type_Word_Int*)v4311)->a1;
            uint16_t v101380 = (((int32_t)0) >= ((int32_t)v33463332));
            if (0 == v101380) {
                wptr_t v51501788;
                uint32_t v160744290;
                uint32_t v201977842 = (v33463332 - 1);
                v51501788 = SET_RAW_TAG(CJhc_Prim_Prim_$BE);
                v160744290 = v201977842;
                fW$__fForeign_C_String_7__loop__81:;
                {   sptr_t v51506127 = demote(v51501788);
                    uint32_t v124940248 = (v160744290 * sizeof(uint8_t));
                    uintptr_t v216085102 = ((intptr_t)((int32_t)v124940248));
                    uintptr_t v110947998 = (v1204683321 + v216085102);
                    uint8_t v194635144 = *((uint8_t *)(v110947998));
                    uint32_t v106329928 = ((uint32_t)v194635144);
                    {   gc_frame0(gc,1,v51506127);
                        wptr_t v401 = RAW_SET_UF(v106329928);
                        sptr_t v169951676 = demote(v401);
                        uint16_t v101382 = (((int32_t)0) >= ((int32_t)v160744290));
                        if (0 == v101382) {
                            uint32_t v133141036 = (v160744290 - 1);
                            {   gc_frame0(gc,1,v169951676);
                                wptr_t x82 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                ((struct sCJhc_Prim_Prim_$x3a*)x82)->a1 = v169951676;
                                ((struct sCJhc_Prim_Prim_$x3a*)x82)->a2 = v51506127;
                                wptr_t v406 = x82;
                                v51501788 = v406;
                                v160744290 = v133141036;
                                goto fW$__fForeign_C_String_7__loop__81;
                            }
                        } else {
                            /* 1 */
                            assert(1 == v101382);
                            {   gc_frame0(gc,1,v169951676);
                                wptr_t x83 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                ((struct sCJhc_Prim_Prim_$x3a*)x83)->a1 = v169951676;
                                ((struct sCJhc_Prim_Prim_$x3a*)x83)->a2 = v51506127;
                                return x83;
                            }
                        }
                    }
                }
            } else {
                /* 1 */
                assert(1 == v101380);
                return SET_RAW_TAG(CJhc_Prim_Prim_$BE);
            }
        }
}

static uint16_t A_STD
fW$__fInstance$__iJhc_Class_Ord_$se_$efault(gc_t gc,arena_t arena,sptr_t v1050019877,wptr_t v1052379175)
{
        uint16_t v101376;
        v101376 = fW$__fJhc_Class_Ord_$ee(gc,arena,PROMOTE(c32),v1050019877,v1052379175);
        if (0 == v101376) {
            return 1;
        } else {
            /* 1 */
            assert(1 == v101376);
            return 0;
        }
}

static uint16_t A_STD
fW$__fJhc_Class_Ord_$ee(gc_t gc,arena_t arena,wptr_t v80100080,sptr_t v196335306,wptr_t v153480252)
{
        sptr_t v153484661 = demote(v153480252);
        return bRfW$__fJhc_Class_Ord_$ee(gc,arena,v80100080,v196335306,v153484661);
}

static wptr_t A_STD A_MALLOC
fW$__fJhc_Inst_Show_showWordMax(gc_t gc,arena_t arena,uintmax_t v978199091,sptr_t v981475885)
{
        sptr_t v124449676;
        uintmax_t v32685992;
        v32685992 = v978199091;
        v124449676 = v981475885;
        fW$__fR$__fJhc_Inst_Show_showWordMax__6:;
        {   uintmax_t v264446468 = (v32685992 / 10);
            uintmax_t v23565126 = (v32685992 % 10);
            uint32_t v59642628 = ((uint32_t)v23565126);
            uint32_t v15399282 = (48 + v59642628);
            uint32_t v259979048 = v15399282;
            {   gc_frame0(gc,1,v124449676);
                wptr_t v13201 = RAW_SET_UF(v259979048);
                sptr_t v45108860 = demote(v13201);
                if (0 == v264446468) {
                    {   gc_frame0(gc,1,v45108860);
                        wptr_t x7 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x7)->a1 = v45108860;
                        ((struct sCJhc_Prim_Prim_$x3a*)x7)->a2 = v124449676;
                        return x7;
                    }
                } else {
                    {   gc_frame0(gc,1,v45108860);
                        wptr_t x8 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x8)->a1 = v45108860;
                        ((struct sCJhc_Prim_Prim_$x3a*)x8)->a2 = v124449676;
                        wptr_t v14 = x8;
                        sptr_t v984359471 = demote(v14);
                        v32685992 = v264446468;
                        v124449676 = v984359471;
                        goto fW$__fR$__fJhc_Inst_Show_showWordMax__6;
                    }
                }
            }
        }
}

static struct tup2 A_STD
fW$__fJhc_List_span(gc_t gc,arena_t arena,wptr_t v278,sptr_t v662)
{
        sptr_t v4483;
        sptr_t v8961;
        struct tup2 _t5;
        struct tup1 x66;
        sptr_t v4757 = demote(v278);
        x66 = fW$__fJhc_List_span$d2(gc,arena,v4757,v662);
        v8961 = x66.t0;
        v4483 = x66.t1;
        wptr_t v4485 = promote(v8961);
        return (_t5.t0 = v4485,_t5.t1 = v4483,_t5);
}

static struct tup1 A_STD
fW$__fJhc_List_span$d2(gc_t gc,arena_t arena,sptr_t v127754094,sptr_t v100210680)
{
        {   gc_frame0(gc,1,v127754094);
            wptr_t v101536 = eval(gc,arena,v100210680);
            {   gc_frame0(gc,1,v101536);
                wptr_t x61 = s_alloc(gc,arena,public_caches(arena)->cP1__W$__fJhc_List_span$d2);
                SET_MEM_TAG((struct sP1__W$__fJhc_List_span$d2*)x61,P1__W$__fJhc_List_span$d2);
                ((struct sP1__W$__fJhc_List_span$d2*)x61)->a1 = v127754094;
                wptr_t v287 = x61;
                sptr_t v75583672 = demote(v101536);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101536) {
                    struct tup1 _t6;
                    return (_t6.t0 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)),_t6.t1 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)),_t6);
                } else {
                    sptr_t v1217238;
                    sptr_t v9272;
                    /* ("CJhc.Prim.Prim.:" ni9272 ni1217238) */
                    v9272 = ((struct sCJhc_Prim_Prim_$x3a*)v101536)->a1;
                    v1217238 = ((struct sCJhc_Prim_Prim_$x3a*)v101536)->a2;
                    wptr_t v101540 = promote(v127754094);
                    {   wptr_t v101538;
                        gc_frame0(gc,4,v287,v9272,v1217238,v75583672);
                        v101538 = bapply__52652(gc,arena,v101540,v9272);
                        {   uint16_t v284;
                            gc_frame0(gc,1,v101538);
                            v284 = ((uint16_t)RAW_GET_UF(v101538));
                            if (0 == v284) {
                                struct tup1 _t7;
                                return (_t7.t0 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)),_t7.t1 = v75583672,_t7);
                            } else {
                                /* 1 */
                                assert(1 == v284);
                                sptr_t x62 = s_alloc(gc,arena,public_caches(arena)->cFW$__fJhc_List_span$d3);
                                ((struct sFW$__fJhc_List_span$d3*)x62)->head = TO_FPTR(&E__fW$__fJhc_List_span$d3);
                                ((struct sFW$__fJhc_List_span$d3*)x62)->a1 = v1217238;
                                ((struct sFW$__fJhc_List_span$d3*)x62)->a2 = v287;
                                sptr_t v201839440 = MKLAZY(x62);
                                {   gc_frame0(gc,1,v201839440);
                                    sptr_t x63 = s_alloc(gc,arena,public_caches(arena)->cFW$__fJhc_List_span$d4);
                                    ((struct sFW$__fJhc_List_span$d4*)x63)->head = TO_FPTR(&E__fW$__fJhc_List_span$d4);
                                    ((struct sFW$__fJhc_List_span$d4*)x63)->a1 = v201839440;
                                    sptr_t v1259479073 = MKLAZY(x63);
                                    {   gc_frame0(gc,1,v1259479073);
                                        wptr_t x64 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                        ((struct sCJhc_Prim_Prim_$x3a*)x64)->a1 = v9272;
                                        ((struct sCJhc_Prim_Prim_$x3a*)x64)->a2 = v1259479073;
                                        wptr_t v4797 = x64;
                                        sptr_t v35624302 = demote(v4797);
                                        {   struct tup1 _t8;
                                            gc_frame0(gc,1,v35624302);
                                            sptr_t x65 = s_alloc(gc,arena,public_caches(arena)->cFW$__fJhc_List_span$d5);
                                            ((struct sFW$__fJhc_List_span$d5*)x65)->head = TO_FPTR(&E__fW$__fJhc_List_span$d5);
                                            ((struct sFW$__fJhc_List_span$d5*)x65)->a1 = v201839440;
                                            sptr_t v207549708 = MKLAZY(x65);
                                            return (_t8.t0 = v35624302,_t8.t1 = v207549708,_t8);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fJhc_List_span$d3(gc_t gc,arena_t arena,sptr_t v4806,wptr_t v103925132)
{
        {   sptr_t v48379472;
            sptr_t v48379474;
            sptr_t v708;
            struct tup1 x59;
            gc_frame0(gc,2,v4806,v103925132);
            v708 = ((struct sP1__W$__fJhc_List_span$d2*)v103925132)->a1;
            x59 = fW$__fJhc_List_span$d2(gc,arena,v708,v4806);
            v48379472 = x59.t0;
            v48379474 = x59.t1;
            {   gc_frame0(gc,2,v48379472,v48379474);
                wptr_t x60 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LcR);
                ((struct sCJhc_Prim_Prim_$LcR*)x60)->a1 = v48379472;
                ((struct sCJhc_Prim_Prim_$LcR*)x60)->a2 = v48379474;
                return x60;
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fJhc_List_span$d4(gc_t gc,arena_t arena,sptr_t v827722285)
{
        wptr_t v101544 = eval(gc,arena,v827722285);
        {   sptr_t v286;
            gc_frame0(gc,1,v101544);
            v286 = ((struct sCJhc_Prim_Prim_$LcR*)v101544)->a1;
            return eval(gc,arena,v286);
        }
}

static wptr_t A_STD A_MALLOC
fW$__fJhc_List_span$d5(gc_t gc,arena_t arena,sptr_t v230320876)
{
        wptr_t v101542 = eval(gc,arena,v230320876);
        {   sptr_t v9302;
            gc_frame0(gc,1,v101542);
            v9302 = ((struct sCJhc_Prim_Prim_$LcR*)v101542)->a2;
            return eval(gc,arena,v9302);
        }
}

static uint16_t A_STD
fW$__fJhc_Text_Read_119__isCharName(gc_t gc,arena_t arena,uint32_t v1427776565)
{
        uint16_t v101044 = (65 <= v1427776565);
        if (0 == v101044) {
            uint16_t v101046 = (48 <= v1427776565);
            if (0 == v101046) {
                return 0;
            } else {
                /* 1 */
                assert(1 == v101046);
                return 57 >= v1427776565;
            }
        } else {
            /* 1 */
            assert(1 == v101044);
            uint16_t v101048 = (90 >= v1427776565);
            if (0 == v101048) {
                uint16_t v101050 = (48 <= v1427776565);
                if (0 == v101050) {
                    return 0;
                } else {
                    /* 1 */
                    assert(1 == v101050);
                    return 57 >= v1427776565;
                }
            } else {
                /* 1 */
                assert(1 == v101048);
                return 1;
            }
        }
}

static uint16_t A_STD
fW$__fJhc_Text_Read_77__isSym(gc_t gc,arena_t arena,sptr_t v370018343)
{
        return fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v370018343,PROMOTE(c31));
}

static uint16_t A_STD
fW$__fJhc_Text_Read_78__isIdChar(gc_t gc,arena_t arena,uint32_t v1450189875)
{
        uint16_t v101324;
        v101324 = fW$__fPrelude_CType_isAlphaNum(gc,arena,v1450189875);
        wptr_t v428 = RAW_SET_UF(v1450189875);
        sptr_t v379717671 = demote(v428);
        if (0 == v101324) {
            return fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v379717671,PROMOTE(c34));
        } else {
            /* 1 */
            assert(1 == v101324);
            return 1;
        }
}

static wptr_t A_STD A_MALLOC
fW$__fMain_ratTrans(gc_t gc,arena_t arena,sptr_t v15781990,sptr_t v236341778,uintmax_t v168089166,uintmax_t v38225102,sptr_t v211324750)
{
        sptr_t v15783869;
        sptr_t v211326633;
        sptr_t v236343658;
        uintmax_t v168091047;
        uintmax_t v38226984;
        v15783869 = v15781990;
        v236343658 = v236341778;
        v168091047 = v168089166;
        v38226984 = v38225102;
        v211326633 = v211324750;
        bRfW$__fMain_ratTrans__323:;
        {   if (0 == v168091047) {
                if (0 == v38226984) {
                    uintmax_t v139424748 = (v168091047 + v38226984);
                    {   wptr_t v100012;
                        gc_frame0(gc,3,v15783869,v211326633,v236343658);
                        v100012 = ftheMain$d8(gc,arena,v38226984,v236343658);
                        {   uintmax_t v68216826;
                            gc_frame0(gc,1,v100012);
                            v68216826 = ((struct sCJhc_Type_Basic_Integer*)v100012)->a1;
                            wptr_t x324 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                            ((struct sCJhc_Type_Basic_Integer*)x324)->a1 = v68216826;
                            wptr_t v2183 = x324;
                            sptr_t v194635138 = demote(v2183);
                            uintmax_t v92144796 = (v139424748 * v68216826);
                            {   gc_frame0(gc,1,v194635138);
                                wptr_t v100014 = eval(gc,arena,v15783869);
                                {   uintmax_t v235469708;
                                    gc_frame0(gc,1,v100014);
                                    v235469708 = ((struct sCJhc_Type_Basic_Integer*)v100014)->a1;
                                    wptr_t v100016 = eval(gc,arena,v236343658);
                                    {   sptr_t v1884;
                                        sptr_t v1886;
                                        sptr_t v1906;
                                        sptr_t v934;
                                        uintmax_t v163828304;
                                        uintmax_t v1876;
                                        uintmax_t v1878;
                                        uintmax_t v1880;
                                        uintmax_t v1882;
                                        uintmax_t v932;
                                        struct tup9 x325;
                                        gc_frame0(gc,1,v100016);
                                        v163828304 = ((struct sCJhc_Type_Basic_Integer*)v100016)->a1;
                                        uintmax_t v40375256 = (v235469708 + v163828304);
                                        uint16_t v100022 = (((intmax_t)v92144796) <= ((intmax_t)v40375256));
                                        if (0 == v100022) {
                                            x325.t0 = v163828304;
                                            x325.t1 = v38226984;
                                            x325.t2 = v168091047;
                                            x325.t3 = v68216826;
                                            x325.t4 = v211326633;
                                            x325.t5 = v194635138;
                                            x325.t6 = v235469708;
                                            x325.t7 = v236343658;
                                            x325.t8 = ((sptr_t)RAW_SET_UF(0));
                                        } else {
                                            /* 1 */
                                            assert(1 == v100022);
                                            uintmax_t v194069116 = (v168091047 + v38226984);
                                            uintmax_t v113523488 = (v194069116 * v68216826);
                                            uintmax_t v203205456 = (v168091047 + v38226984);
                                            uintmax_t v222019400 = (v113523488 + v203205456);
                                            uintmax_t v267211114 = (v235469708 + v163828304);
                                            uint16_t v27042142 = (((intmax_t)v222019400) > ((intmax_t)v267211114));
                                            wptr_t v2202 = RAW_SET_UF(v27042142);
                                            sptr_t v29375124 = demote(v2202);
                                            x325.t0 = v163828304;
                                            x325.t1 = v38226984;
                                            x325.t2 = v168091047;
                                            x325.t3 = v68216826;
                                            x325.t4 = v211326633;
                                            x325.t5 = v194635138;
                                            x325.t6 = v235469708;
                                            x325.t7 = v236343658;
                                            x325.t8 = v29375124;
                                        }
                                        v1876 = x325.t0;
                                        v1878 = x325.t1;
                                        v1880 = x325.t2;
                                        v1882 = x325.t3;
                                        v1884 = x325.t4;
                                        v1886 = x325.t5;
                                        v932 = x325.t6;
                                        v934 = x325.t7;
                                        v1906 = x325.t8;
                                        wptr_t v2817 = promote(v1886);
                                        wptr_t v947 = promote(v1906);
                                        return ftheMain$d9(gc,arena,v1876,v1878,v1880,v1882,v1884,v2817,v932,v934,v947);
                                    }
                                }
                            }
                        }
                    }
                } else {
                    uint16_t v100028 = (((intmax_t)0) < ((intmax_t)v38226984));
                    if (0 == v100028) {
                        uintmax_t v41073646 = (v168091047 + v38226984);
                        {   gc_frame0(gc,3,v15783869,v211326633,v236343658);
                            sptr_t x326 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d26);
                            ((struct sFtheMain$d26*)x326)->head = TO_FPTR(&E__ftheMain$d26);
                            ((struct sFtheMain$d26*)x326)->a1 = v38226984;
                            ((struct sFtheMain$d26*)x326)->a2 = v236343658;
                            sptr_t v17980062 = MKLAZY(x326);
                            {   gc_frame0(gc,1,v17980062);
                                sptr_t x327 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d27);
                                ((struct sFtheMain$d27*)x327)->head = TO_FPTR(&E__ftheMain$d27);
                                ((struct sFtheMain$d27*)x327)->a1 = v41073646;
                                ((struct sFtheMain$d27*)x327)->a2 = v38226984;
                                ((struct sFtheMain$d27*)x327)->a3 = v15783869;
                                ((struct sFtheMain$d27*)x327)->a4 = v168091047;
                                ((struct sFtheMain$d27*)x327)->a5 = v17980062;
                                ((struct sFtheMain$d27*)x327)->a6 = v236343658;
                                sptr_t v149431282 = MKLAZY(x327);
                                uint16_t v100084 = (((intmax_t)0) > ((intmax_t)v168091047));
                                if (0 == v100084) {
                                    uint16_t v100112 = (((intmax_t)0) > ((intmax_t)v38226984));
                                    if (0 == v100112) {
                                        uint16_t v100126 = (((intmax_t)v168091047) < ((intmax_t)v38226984));
                                        if (0 == v100126) {
                                            sptr_t v2151;
                                            sptr_t v2153;
                                            sptr_t v4313;
                                            uintmax_t v2155;
                                            uintmax_t v2157;
                                            struct tup10 x328;
                                            wptr_t v100128 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100128) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v237033304;
                                                sptr_t v34344206;
                                                /* ("CJhc.Prim.Prim.:" ni34344206 ni237033304) */
                                                v34344206 = ((struct sCJhc_Prim_Prim_$x3a*)v100128)->a1;
                                                v237033304 = ((struct sCJhc_Prim_Prim_$x3a*)v100128)->a2;
                                                {   gc_frame0(gc,2,v34344206,v237033304);
                                                    sptr_t x329 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d37);
                                                    ((struct sFtheMain$d37*)x329)->head = TO_FPTR(&E__ftheMain$d37);
                                                    ((struct sFtheMain$d37*)x329)->a1 = v34344206;
                                                    ((struct sFtheMain$d37*)x329)->a2 = v15783869;
                                                    ((struct sFtheMain$d37*)x329)->a3 = v236343658;
                                                    sptr_t v41049684 = MKLAZY(x329);
                                                    {   gc_frame0(gc,1,v41049684);
                                                        wptr_t v100130 = eval(gc,arena,v34344206);
                                                        {   uintmax_t v10314746;
                                                            gc_frame0(gc,1,v100130);
                                                            v10314746 = ((struct sCJhc_Type_Basic_Integer*)v100130)->a1;
                                                            uintmax_t v211810214 = (v10314746 * v38226984);
                                                            uintmax_t v72308796 = (v168091047 + v211810214);
                                                            x328.t0 = v236343658;
                                                            x328.t1 = v41049684;
                                                            x328.t2 = v38226984;
                                                            x328.t3 = v72308796;
                                                            x328.t4 = v237033304;
                                                        }
                                                    }
                                                }
                                            }
                                            v2151 = x328.t0;
                                            v2153 = x328.t1;
                                            v2155 = x328.t2;
                                            v2157 = x328.t3;
                                            v4313 = x328.t4;
                                            v15783869 = v2151;
                                            v236343658 = v2153;
                                            v168091047 = v2155;
                                            v38226984 = v2157;
                                            v211326633 = v4313;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100126);
                                            wptr_t v100132 = eval(gc,arena,v149431282);
                                            {   uint16_t v92216338;
                                                gc_frame0(gc,1,v100132);
                                                v92216338 = ((uint16_t)RAW_GET_UF(v100132));
                                                if (0 == v92216338) {
                                                    sptr_t v2171;
                                                    sptr_t v2173;
                                                    sptr_t v2179;
                                                    uintmax_t v2175;
                                                    uintmax_t v2177;
                                                    struct tup10 x330;
                                                    wptr_t v100134 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100134) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v157453992;
                                                        sptr_t v219624238;
                                                        /* ("CJhc.Prim.Prim.:" ni157453992 ni219624238) */
                                                        v157453992 = ((struct sCJhc_Prim_Prim_$x3a*)v100134)->a1;
                                                        v219624238 = ((struct sCJhc_Prim_Prim_$x3a*)v100134)->a2;
                                                        {   gc_frame0(gc,2,v157453992,v219624238);
                                                            sptr_t x331 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d39);
                                                            ((struct sFtheMain$d39*)x331)->head = TO_FPTR(&E__ftheMain$d39);
                                                            ((struct sFtheMain$d39*)x331)->a1 = v157453992;
                                                            ((struct sFtheMain$d39*)x331)->a2 = v15783869;
                                                            ((struct sFtheMain$d39*)x331)->a3 = v236343658;
                                                            sptr_t v84237934 = MKLAZY(x331);
                                                            {   gc_frame0(gc,1,v84237934);
                                                                wptr_t v100136 = eval(gc,arena,v157453992);
                                                                {   uintmax_t v199953934;
                                                                    gc_frame0(gc,1,v100136);
                                                                    v199953934 = ((struct sCJhc_Type_Basic_Integer*)v100136)->a1;
                                                                    uintmax_t v195597138 = (v199953934 * v38226984);
                                                                    uintmax_t v202512534 = (v168091047 + v195597138);
                                                                    x330.t0 = v236343658;
                                                                    x330.t1 = v84237934;
                                                                    x330.t2 = v38226984;
                                                                    x330.t3 = v202512534;
                                                                    x330.t4 = v219624238;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v2171 = x330.t0;
                                                    v2173 = x330.t1;
                                                    v2175 = x330.t2;
                                                    v2177 = x330.t3;
                                                    v2179 = x330.t4;
                                                    v15783869 = v2171;
                                                    v236343658 = v2173;
                                                    v168091047 = v2175;
                                                    v38226984 = v2177;
                                                    v211326633 = v2179;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v92216338);
                                                    wptr_t x332 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x332)->a1 = v168091047;
                                                    wptr_t v5151 = x332;
                                                    {   gc_frame0(gc,1,v5151);
                                                        wptr_t x333 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x333)->a1 = v38226984;
                                                        wptr_t v5154 = x333;
                                                        {   gc_frame0(gc,1,v5154);
                                                            sptr_t x334 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d38);
                                                            ((struct sFtheMain$d38*)x334)->head = TO_FPTR(&E__ftheMain$d38);
                                                            ((struct sFtheMain$d38*)x334)->a1 = v38226984;
                                                            ((struct sFtheMain$d38*)x334)->a2 = v15783869;
                                                            ((struct sFtheMain$d38*)x334)->a3 = v5154;
                                                            ((struct sFtheMain$d38*)x334)->a4 = v168091047;
                                                            ((struct sFtheMain$d38*)x334)->a5 = v5151;
                                                            ((struct sFtheMain$d38*)x334)->a6 = v17980062;
                                                            ((struct sFtheMain$d38*)x334)->a7 = v211326633;
                                                            ((struct sFtheMain$d38*)x334)->a8 = v236343658;
                                                            sptr_t v55571210 = MKLAZY(x334);
                                                            {   gc_frame0(gc,1,v55571210);
                                                                wptr_t x335 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x335)->a1 = v17980062;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x335)->a2 = v55571210;
                                                                return x335;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        /* 1 */
                                        assert(1 == v100112);
                                        uintmax_t v9039054 = (-((intmax_t)v38226984));
                                        uint16_t v100114 = (((intmax_t)v168091047) < ((intmax_t)v9039054));
                                        if (0 == v100114) {
                                            sptr_t v2119;
                                            sptr_t v2125;
                                            sptr_t v3464;
                                            uintmax_t v2121;
                                            uintmax_t v2123;
                                            struct tup10 x336;
                                            wptr_t v100116 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100116) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v136409470;
                                                sptr_t v59221148;
                                                /* ("CJhc.Prim.Prim.:" ni136409470 ni59221148) */
                                                v136409470 = ((struct sCJhc_Prim_Prim_$x3a*)v100116)->a1;
                                                v59221148 = ((struct sCJhc_Prim_Prim_$x3a*)v100116)->a2;
                                                {   gc_frame0(gc,2,v59221148,v136409470);
                                                    sptr_t x337 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d34);
                                                    ((struct sFtheMain$d34*)x337)->head = TO_FPTR(&E__ftheMain$d34);
                                                    ((struct sFtheMain$d34*)x337)->a1 = v15783869;
                                                    ((struct sFtheMain$d34*)x337)->a2 = v136409470;
                                                    ((struct sFtheMain$d34*)x337)->a3 = v236343658;
                                                    sptr_t v166026144 = MKLAZY(x337);
                                                    {   gc_frame0(gc,1,v166026144);
                                                        wptr_t v100118 = eval(gc,arena,v136409470);
                                                        {   uintmax_t v138367248;
                                                            gc_frame0(gc,1,v100118);
                                                            v138367248 = ((struct sCJhc_Type_Basic_Integer*)v100118)->a1;
                                                            uintmax_t v18150050 = (v138367248 * v38226984);
                                                            uintmax_t v135941152 = (v168091047 + v18150050);
                                                            x336.t0 = v236343658;
                                                            x336.t1 = v166026144;
                                                            x336.t2 = v38226984;
                                                            x336.t3 = v135941152;
                                                            x336.t4 = v59221148;
                                                        }
                                                    }
                                                }
                                            }
                                            v3464 = x336.t0;
                                            v2119 = x336.t1;
                                            v2121 = x336.t2;
                                            v2123 = x336.t3;
                                            v2125 = x336.t4;
                                            v15783869 = v3464;
                                            v236343658 = v2119;
                                            v168091047 = v2121;
                                            v38226984 = v2123;
                                            v211326633 = v2125;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100114);
                                            wptr_t v100120 = eval(gc,arena,v149431282);
                                            {   uint16_t v106306180;
                                                gc_frame0(gc,1,v100120);
                                                v106306180 = ((uint16_t)RAW_GET_UF(v100120));
                                                if (0 == v106306180) {
                                                    sptr_t v2137;
                                                    sptr_t v2139;
                                                    sptr_t v2145;
                                                    uintmax_t v2141;
                                                    uintmax_t v2143;
                                                    struct tup10 x338;
                                                    wptr_t v100122 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100122) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v167142358;
                                                        sptr_t v263778096;
                                                        /* ("CJhc.Prim.Prim.:" ni263778096 ni167142358) */
                                                        v263778096 = ((struct sCJhc_Prim_Prim_$x3a*)v100122)->a1;
                                                        v167142358 = ((struct sCJhc_Prim_Prim_$x3a*)v100122)->a2;
                                                        {   gc_frame0(gc,2,v167142358,v263778096);
                                                            sptr_t x339 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d36);
                                                            ((struct sFtheMain$d36*)x339)->head = TO_FPTR(&E__ftheMain$d36);
                                                            ((struct sFtheMain$d36*)x339)->a1 = v15783869;
                                                            ((struct sFtheMain$d36*)x339)->a2 = v263778096;
                                                            ((struct sFtheMain$d36*)x339)->a3 = v236343658;
                                                            sptr_t v169473702 = MKLAZY(x339);
                                                            {   gc_frame0(gc,1,v169473702);
                                                                wptr_t v100124 = eval(gc,arena,v263778096);
                                                                {   uintmax_t v74395712;
                                                                    gc_frame0(gc,1,v100124);
                                                                    v74395712 = ((struct sCJhc_Type_Basic_Integer*)v100124)->a1;
                                                                    uintmax_t v116322916 = (v74395712 * v38226984);
                                                                    uintmax_t v48981560 = (v168091047 + v116322916);
                                                                    x338.t0 = v236343658;
                                                                    x338.t1 = v169473702;
                                                                    x338.t2 = v38226984;
                                                                    x338.t3 = v48981560;
                                                                    x338.t4 = v167142358;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v2137 = x338.t0;
                                                    v2139 = x338.t1;
                                                    v2141 = x338.t2;
                                                    v2143 = x338.t3;
                                                    v2145 = x338.t4;
                                                    v15783869 = v2137;
                                                    v236343658 = v2139;
                                                    v168091047 = v2141;
                                                    v38226984 = v2143;
                                                    v211326633 = v2145;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v106306180);
                                                    wptr_t x340 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x340)->a1 = v168091047;
                                                    wptr_t v2412 = x340;
                                                    {   gc_frame0(gc,1,v2412);
                                                        wptr_t x341 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x341)->a1 = v38226984;
                                                        wptr_t v2414 = x341;
                                                        {   gc_frame0(gc,1,v2414);
                                                            sptr_t x342 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d35);
                                                            ((struct sFtheMain$d35*)x342)->head = TO_FPTR(&E__ftheMain$d35);
                                                            ((struct sFtheMain$d35*)x342)->a1 = v2412;
                                                            ((struct sFtheMain$d35*)x342)->a2 = v38226984;
                                                            ((struct sFtheMain$d35*)x342)->a3 = v15783869;
                                                            ((struct sFtheMain$d35*)x342)->a4 = v168091047;
                                                            ((struct sFtheMain$d35*)x342)->a5 = v17980062;
                                                            ((struct sFtheMain$d35*)x342)->a6 = v2414;
                                                            ((struct sFtheMain$d35*)x342)->a7 = v211326633;
                                                            ((struct sFtheMain$d35*)x342)->a8 = v236343658;
                                                            sptr_t v241943148 = MKLAZY(x342);
                                                            {   gc_frame0(gc,1,v241943148);
                                                                wptr_t x343 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x343)->a1 = v17980062;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x343)->a2 = v241943148;
                                                                return x343;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    /* 1 */
                                    assert(1 == v100084);
                                    uintmax_t v126087194 = (-((intmax_t)v168091047));
                                    uint16_t v100086 = (((intmax_t)0) > ((intmax_t)v38226984));
                                    if (0 == v100086) {
                                        uint16_t v100100 = (((intmax_t)v126087194) < ((intmax_t)v38226984));
                                        if (0 == v100100) {
                                            sptr_t v2081;
                                            sptr_t v2083;
                                            sptr_t v2089;
                                            uintmax_t v2085;
                                            uintmax_t v2087;
                                            struct tup10 x344;
                                            wptr_t v100102 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100102) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v206591320;
                                                sptr_t v234052572;
                                                /* ("CJhc.Prim.Prim.:" ni234052572 ni206591320) */
                                                v234052572 = ((struct sCJhc_Prim_Prim_$x3a*)v100102)->a1;
                                                v206591320 = ((struct sCJhc_Prim_Prim_$x3a*)v100102)->a2;
                                                {   gc_frame0(gc,2,v206591320,v234052572);
                                                    sptr_t x345 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d31);
                                                    ((struct sFtheMain$d31*)x345)->head = TO_FPTR(&E__ftheMain$d31);
                                                    ((struct sFtheMain$d31*)x345)->a1 = v234052572;
                                                    ((struct sFtheMain$d31*)x345)->a2 = v15783869;
                                                    ((struct sFtheMain$d31*)x345)->a3 = v236343658;
                                                    sptr_t v52993244 = MKLAZY(x345);
                                                    {   gc_frame0(gc,1,v52993244);
                                                        wptr_t v100104 = eval(gc,arena,v234052572);
                                                        {   uintmax_t v108734694;
                                                            gc_frame0(gc,1,v100104);
                                                            v108734694 = ((struct sCJhc_Type_Basic_Integer*)v100104)->a1;
                                                            uintmax_t v211234550 = (v108734694 * v38226984);
                                                            uintmax_t v244736276 = (v168091047 + v211234550);
                                                            x344.t0 = v236343658;
                                                            x344.t1 = v52993244;
                                                            x344.t2 = v38226984;
                                                            x344.t3 = v244736276;
                                                            x344.t4 = v206591320;
                                                        }
                                                    }
                                                }
                                            }
                                            v2081 = x344.t0;
                                            v2083 = x344.t1;
                                            v2085 = x344.t2;
                                            v2087 = x344.t3;
                                            v2089 = x344.t4;
                                            v15783869 = v2081;
                                            v236343658 = v2083;
                                            v168091047 = v2085;
                                            v38226984 = v2087;
                                            v211326633 = v2089;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100100);
                                            wptr_t v100106 = eval(gc,arena,v149431282);
                                            {   uint16_t v236135984;
                                                gc_frame0(gc,1,v100106);
                                                v236135984 = ((uint16_t)RAW_GET_UF(v100106));
                                                if (0 == v236135984) {
                                                    sptr_t v2101;
                                                    sptr_t v2103;
                                                    sptr_t v2109;
                                                    uintmax_t v2105;
                                                    uintmax_t v3433;
                                                    struct tup10 x346;
                                                    wptr_t v100108 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100108) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v250008790;
                                                        sptr_t v256237318;
                                                        /* ("CJhc.Prim.Prim.:" ni256237318 ni250008790) */
                                                        v256237318 = ((struct sCJhc_Prim_Prim_$x3a*)v100108)->a1;
                                                        v250008790 = ((struct sCJhc_Prim_Prim_$x3a*)v100108)->a2;
                                                        {   gc_frame0(gc,2,v250008790,v256237318);
                                                            sptr_t x347 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d33);
                                                            ((struct sFtheMain$d33*)x347)->head = TO_FPTR(&E__ftheMain$d33);
                                                            ((struct sFtheMain$d33*)x347)->a1 = v15783869;
                                                            ((struct sFtheMain$d33*)x347)->a2 = v256237318;
                                                            ((struct sFtheMain$d33*)x347)->a3 = v236343658;
                                                            sptr_t v91594900 = MKLAZY(x347);
                                                            {   gc_frame0(gc,1,v91594900);
                                                                wptr_t v100110 = eval(gc,arena,v256237318);
                                                                {   uintmax_t v202503956;
                                                                    gc_frame0(gc,1,v100110);
                                                                    v202503956 = ((struct sCJhc_Type_Basic_Integer*)v100110)->a1;
                                                                    uintmax_t v222882556 = (v202503956 * v38226984);
                                                                    uintmax_t v32509638 = (v168091047 + v222882556);
                                                                    x346.t0 = v236343658;
                                                                    x346.t1 = v91594900;
                                                                    x346.t2 = v38226984;
                                                                    x346.t3 = v32509638;
                                                                    x346.t4 = v250008790;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v2101 = x346.t0;
                                                    v2103 = x346.t1;
                                                    v2105 = x346.t2;
                                                    v3433 = x346.t3;
                                                    v2109 = x346.t4;
                                                    v15783869 = v2101;
                                                    v236343658 = v2103;
                                                    v168091047 = v2105;
                                                    v38226984 = v3433;
                                                    v211326633 = v2109;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v236135984);
                                                    wptr_t x348 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x348)->a1 = v168091047;
                                                    wptr_t v2381 = x348;
                                                    {   gc_frame0(gc,1,v2381);
                                                        wptr_t x349 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x349)->a1 = v38226984;
                                                        wptr_t v4980 = x349;
                                                        {   gc_frame0(gc,1,v4980);
                                                            sptr_t x350 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d32);
                                                            ((struct sFtheMain$d32*)x350)->head = TO_FPTR(&E__ftheMain$d32);
                                                            ((struct sFtheMain$d32*)x350)->a1 = v38226984;
                                                            ((struct sFtheMain$d32*)x350)->a2 = v15783869;
                                                            ((struct sFtheMain$d32*)x350)->a3 = v2381;
                                                            ((struct sFtheMain$d32*)x350)->a4 = v168091047;
                                                            ((struct sFtheMain$d32*)x350)->a5 = v17980062;
                                                            ((struct sFtheMain$d32*)x350)->a6 = v4980;
                                                            ((struct sFtheMain$d32*)x350)->a7 = v211326633;
                                                            ((struct sFtheMain$d32*)x350)->a8 = v236343658;
                                                            sptr_t v25489516 = MKLAZY(x350);
                                                            {   gc_frame0(gc,1,v25489516);
                                                                wptr_t x351 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x351)->a1 = v17980062;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x351)->a2 = v25489516;
                                                                return x351;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        /* 1 */
                                        assert(1 == v100086);
                                        uintmax_t v217939276 = (-((intmax_t)v38226984));
                                        uint16_t v100088 = (((intmax_t)v126087194) < ((intmax_t)v217939276));
                                        if (0 == v100088) {
                                            sptr_t v2047;
                                            sptr_t v2049;
                                            sptr_t v2055;
                                            uintmax_t v2051;
                                            uintmax_t v2053;
                                            struct tup10 x352;
                                            wptr_t v100090 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100090) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v127219944;
                                                sptr_t v161241144;
                                                /* ("CJhc.Prim.Prim.:" ni161241144 ni127219944) */
                                                v161241144 = ((struct sCJhc_Prim_Prim_$x3a*)v100090)->a1;
                                                v127219944 = ((struct sCJhc_Prim_Prim_$x3a*)v100090)->a2;
                                                {   gc_frame0(gc,2,v127219944,v161241144);
                                                    sptr_t x353 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d28);
                                                    ((struct sFtheMain$d28*)x353)->head = TO_FPTR(&E__ftheMain$d28);
                                                    ((struct sFtheMain$d28*)x353)->a1 = v15783869;
                                                    ((struct sFtheMain$d28*)x353)->a2 = v161241144;
                                                    ((struct sFtheMain$d28*)x353)->a3 = v236343658;
                                                    sptr_t v22171046 = MKLAZY(x353);
                                                    {   gc_frame0(gc,1,v22171046);
                                                        wptr_t v100092 = eval(gc,arena,v161241144);
                                                        {   uintmax_t v95956276;
                                                            gc_frame0(gc,1,v100092);
                                                            v95956276 = ((struct sCJhc_Type_Basic_Integer*)v100092)->a1;
                                                            uintmax_t v51595260 = (v95956276 * v38226984);
                                                            uintmax_t v93822472 = (v168091047 + v51595260);
                                                            x352.t0 = v236343658;
                                                            x352.t1 = v22171046;
                                                            x352.t2 = v38226984;
                                                            x352.t3 = v93822472;
                                                            x352.t4 = v127219944;
                                                        }
                                                    }
                                                }
                                            }
                                            v2047 = x352.t0;
                                            v2049 = x352.t1;
                                            v2051 = x352.t2;
                                            v2053 = x352.t3;
                                            v2055 = x352.t4;
                                            v15783869 = v2047;
                                            v236343658 = v2049;
                                            v168091047 = v2051;
                                            v38226984 = v2053;
                                            v211326633 = v2055;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100088);
                                            wptr_t v100094 = eval(gc,arena,v149431282);
                                            {   uint16_t v160934324;
                                                gc_frame0(gc,1,v100094);
                                                v160934324 = ((uint16_t)RAW_GET_UF(v100094));
                                                if (0 == v160934324) {
                                                    sptr_t v2067;
                                                    sptr_t v2069;
                                                    sptr_t v2075;
                                                    uintmax_t v2071;
                                                    uintmax_t v2073;
                                                    struct tup10 x354;
                                                    wptr_t v100096 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100096) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v107868946;
                                                        sptr_t v134416084;
                                                        /* ("CJhc.Prim.Prim.:" ni107868946 ni134416084) */
                                                        v107868946 = ((struct sCJhc_Prim_Prim_$x3a*)v100096)->a1;
                                                        v134416084 = ((struct sCJhc_Prim_Prim_$x3a*)v100096)->a2;
                                                        {   gc_frame0(gc,2,v107868946,v134416084);
                                                            sptr_t x355 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d30);
                                                            ((struct sFtheMain$d30*)x355)->head = TO_FPTR(&E__ftheMain$d30);
                                                            ((struct sFtheMain$d30*)x355)->a1 = v107868946;
                                                            ((struct sFtheMain$d30*)x355)->a2 = v15783869;
                                                            ((struct sFtheMain$d30*)x355)->a3 = v236343658;
                                                            sptr_t v112839542 = MKLAZY(x355);
                                                            {   gc_frame0(gc,1,v112839542);
                                                                wptr_t v100098 = eval(gc,arena,v107868946);
                                                                {   uintmax_t v118576710;
                                                                    gc_frame0(gc,1,v100098);
                                                                    v118576710 = ((struct sCJhc_Type_Basic_Integer*)v100098)->a1;
                                                                    uintmax_t v82066380 = (v118576710 * v38226984);
                                                                    uintmax_t v2827650 = (v168091047 + v82066380);
                                                                    x354.t0 = v236343658;
                                                                    x354.t1 = v112839542;
                                                                    x354.t2 = v38226984;
                                                                    x354.t3 = v2827650;
                                                                    x354.t4 = v134416084;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v2067 = x354.t0;
                                                    v2069 = x354.t1;
                                                    v2071 = x354.t2;
                                                    v2073 = x354.t3;
                                                    v2075 = x354.t4;
                                                    v15783869 = v2067;
                                                    v236343658 = v2069;
                                                    v168091047 = v2071;
                                                    v38226984 = v2073;
                                                    v211326633 = v2075;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v160934324);
                                                    wptr_t x356 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x356)->a1 = v168091047;
                                                    wptr_t v2352 = x356;
                                                    {   gc_frame0(gc,1,v2352);
                                                        wptr_t x357 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x357)->a1 = v38226984;
                                                        wptr_t v2354 = x357;
                                                        {   gc_frame0(gc,1,v2354);
                                                            sptr_t x358 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d29);
                                                            ((struct sFtheMain$d29*)x358)->head = TO_FPTR(&E__ftheMain$d29);
                                                            ((struct sFtheMain$d29*)x358)->a1 = v2354;
                                                            ((struct sFtheMain$d29*)x358)->a2 = v38226984;
                                                            ((struct sFtheMain$d29*)x358)->a3 = v15783869;
                                                            ((struct sFtheMain$d29*)x358)->a4 = v168091047;
                                                            ((struct sFtheMain$d29*)x358)->a5 = v17980062;
                                                            ((struct sFtheMain$d29*)x358)->a6 = v2352;
                                                            ((struct sFtheMain$d29*)x358)->a7 = v211326633;
                                                            ((struct sFtheMain$d29*)x358)->a8 = v236343658;
                                                            sptr_t v96143156 = MKLAZY(x358);
                                                            {   gc_frame0(gc,1,v96143156);
                                                                wptr_t x359 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x359)->a1 = v17980062;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x359)->a2 = v96143156;
                                                                return x359;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        /* 1 */
                        assert(1 == v100028);
                        uintmax_t v251899342 = (v168091047 + v38226984);
                        {   gc_frame0(gc,3,v15783869,v211326633,v236343658);
                            sptr_t x360 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d12);
                            ((struct sFtheMain$d12*)x360)->head = TO_FPTR(&E__ftheMain$d12);
                            ((struct sFtheMain$d12*)x360)->a1 = v38226984;
                            ((struct sFtheMain$d12*)x360)->a2 = v236343658;
                            sptr_t v65888628 = MKLAZY(x360);
                            {   gc_frame0(gc,1,v65888628);
                                sptr_t x361 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d13);
                                ((struct sFtheMain$d13*)x361)->head = TO_FPTR(&E__ftheMain$d13);
                                ((struct sFtheMain$d13*)x361)->a1 = v38226984;
                                ((struct sFtheMain$d13*)x361)->a2 = v15783869;
                                ((struct sFtheMain$d13*)x361)->a3 = v168091047;
                                ((struct sFtheMain$d13*)x361)->a4 = v65888628;
                                ((struct sFtheMain$d13*)x361)->a5 = v236343658;
                                ((struct sFtheMain$d13*)x361)->a6 = v251899342;
                                sptr_t v180754230 = MKLAZY(x361);
                                uint16_t v100030 = (((intmax_t)0) > ((intmax_t)v168091047));
                                if (0 == v100030) {
                                    uint16_t v100058 = (((intmax_t)0) > ((intmax_t)v38226984));
                                    if (0 == v100058) {
                                        uint16_t v100072 = (((intmax_t)v168091047) < ((intmax_t)v38226984));
                                        if (0 == v100072) {
                                            sptr_t v2006;
                                            sptr_t v2008;
                                            sptr_t v2014;
                                            uintmax_t v2010;
                                            uintmax_t v2012;
                                            struct tup10 x362;
                                            wptr_t v100074 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100074) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v159177516;
                                                sptr_t v191973366;
                                                /* ("CJhc.Prim.Prim.:" ni159177516 ni191973366) */
                                                v159177516 = ((struct sCJhc_Prim_Prim_$x3a*)v100074)->a1;
                                                v191973366 = ((struct sCJhc_Prim_Prim_$x3a*)v100074)->a2;
                                                {   gc_frame0(gc,2,v159177516,v191973366);
                                                    sptr_t x363 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d23);
                                                    ((struct sFtheMain$d23*)x363)->head = TO_FPTR(&E__ftheMain$d23);
                                                    ((struct sFtheMain$d23*)x363)->a1 = v15783869;
                                                    ((struct sFtheMain$d23*)x363)->a2 = v159177516;
                                                    ((struct sFtheMain$d23*)x363)->a3 = v236343658;
                                                    sptr_t v205904154 = MKLAZY(x363);
                                                    {   gc_frame0(gc,1,v205904154);
                                                        wptr_t v100076 = eval(gc,arena,v159177516);
                                                        {   uintmax_t v205159266;
                                                            gc_frame0(gc,1,v100076);
                                                            v205159266 = ((struct sCJhc_Type_Basic_Integer*)v100076)->a1;
                                                            uintmax_t v129548382 = (v205159266 * v38226984);
                                                            uintmax_t v164571870 = (v168091047 + v129548382);
                                                            x362.t0 = v236343658;
                                                            x362.t1 = v205904154;
                                                            x362.t2 = v38226984;
                                                            x362.t3 = v164571870;
                                                            x362.t4 = v191973366;
                                                        }
                                                    }
                                                }
                                            }
                                            v2006 = x362.t0;
                                            v2008 = x362.t1;
                                            v2010 = x362.t2;
                                            v2012 = x362.t3;
                                            v2014 = x362.t4;
                                            v15783869 = v2006;
                                            v236343658 = v2008;
                                            v168091047 = v2010;
                                            v38226984 = v2012;
                                            v211326633 = v2014;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100072);
                                            wptr_t v100078 = eval(gc,arena,v180754230);
                                            {   uint16_t v101613132;
                                                gc_frame0(gc,1,v100078);
                                                v101613132 = ((uint16_t)RAW_GET_UF(v100078));
                                                if (0 == v101613132) {
                                                    sptr_t v2026;
                                                    sptr_t v2028;
                                                    sptr_t v2034;
                                                    uintmax_t v2030;
                                                    uintmax_t v2032;
                                                    struct tup10 x364;
                                                    wptr_t v100080 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100080) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v139547422;
                                                        sptr_t v76245138;
                                                        /* ("CJhc.Prim.Prim.:" ni139547422 ni76245138) */
                                                        v139547422 = ((struct sCJhc_Prim_Prim_$x3a*)v100080)->a1;
                                                        v76245138 = ((struct sCJhc_Prim_Prim_$x3a*)v100080)->a2;
                                                        {   gc_frame0(gc,2,v76245138,v139547422);
                                                            sptr_t x365 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d25);
                                                            ((struct sFtheMain$d25*)x365)->head = TO_FPTR(&E__ftheMain$d25);
                                                            ((struct sFtheMain$d25*)x365)->a1 = v15783869;
                                                            ((struct sFtheMain$d25*)x365)->a2 = v139547422;
                                                            ((struct sFtheMain$d25*)x365)->a3 = v236343658;
                                                            sptr_t v197016944 = MKLAZY(x365);
                                                            {   gc_frame0(gc,1,v197016944);
                                                                wptr_t v100082 = eval(gc,arena,v139547422);
                                                                {   uintmax_t v238799086;
                                                                    gc_frame0(gc,1,v100082);
                                                                    v238799086 = ((struct sCJhc_Type_Basic_Integer*)v100082)->a1;
                                                                    uintmax_t v30342482 = (v238799086 * v38226984);
                                                                    uintmax_t v142941288 = (v168091047 + v30342482);
                                                                    x364.t0 = v236343658;
                                                                    x364.t1 = v197016944;
                                                                    x364.t2 = v38226984;
                                                                    x364.t3 = v142941288;
                                                                    x364.t4 = v76245138;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v2026 = x364.t0;
                                                    v2028 = x364.t1;
                                                    v2030 = x364.t2;
                                                    v2032 = x364.t3;
                                                    v2034 = x364.t4;
                                                    v15783869 = v2026;
                                                    v236343658 = v2028;
                                                    v168091047 = v2030;
                                                    v38226984 = v2032;
                                                    v211326633 = v2034;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v101613132);
                                                    wptr_t x366 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x366)->a1 = v168091047;
                                                    wptr_t v4785 = x366;
                                                    {   gc_frame0(gc,1,v4785);
                                                        wptr_t x367 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x367)->a1 = v38226984;
                                                        wptr_t v4788 = x367;
                                                        {   gc_frame0(gc,1,v4788);
                                                            sptr_t x368 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d24);
                                                            ((struct sFtheMain$d24*)x368)->head = TO_FPTR(&E__ftheMain$d24);
                                                            ((struct sFtheMain$d24*)x368)->a1 = v38226984;
                                                            ((struct sFtheMain$d24*)x368)->a2 = v15783869;
                                                            ((struct sFtheMain$d24*)x368)->a3 = v4788;
                                                            ((struct sFtheMain$d24*)x368)->a4 = v168091047;
                                                            ((struct sFtheMain$d24*)x368)->a5 = v4785;
                                                            ((struct sFtheMain$d24*)x368)->a6 = v65888628;
                                                            ((struct sFtheMain$d24*)x368)->a7 = v211326633;
                                                            ((struct sFtheMain$d24*)x368)->a8 = v236343658;
                                                            sptr_t v82147292 = MKLAZY(x368);
                                                            {   gc_frame0(gc,1,v82147292);
                                                                wptr_t x369 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x369)->a1 = v65888628;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x369)->a2 = v82147292;
                                                                return x369;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        /* 1 */
                                        assert(1 == v100058);
                                        uintmax_t v72831732 = (-((intmax_t)v38226984));
                                        uint16_t v100060 = (((intmax_t)v168091047) < ((intmax_t)v72831732));
                                        if (0 == v100060) {
                                            sptr_t v1972;
                                            sptr_t v1974;
                                            sptr_t v1980;
                                            uintmax_t v1976;
                                            uintmax_t v1978;
                                            struct tup10 x370;
                                            wptr_t v100062 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100062) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v26937506;
                                                sptr_t v33617546;
                                                /* ("CJhc.Prim.Prim.:" ni33617546 ni26937506) */
                                                v33617546 = ((struct sCJhc_Prim_Prim_$x3a*)v100062)->a1;
                                                v26937506 = ((struct sCJhc_Prim_Prim_$x3a*)v100062)->a2;
                                                {   gc_frame0(gc,2,v26937506,v33617546);
                                                    sptr_t x371 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d20);
                                                    ((struct sFtheMain$d20*)x371)->head = TO_FPTR(&E__ftheMain$d20);
                                                    ((struct sFtheMain$d20*)x371)->a1 = v15783869;
                                                    ((struct sFtheMain$d20*)x371)->a2 = v33617546;
                                                    ((struct sFtheMain$d20*)x371)->a3 = v236343658;
                                                    sptr_t v203991442 = MKLAZY(x371);
                                                    {   gc_frame0(gc,1,v203991442);
                                                        wptr_t v100064 = eval(gc,arena,v33617546);
                                                        {   uintmax_t v159630080;
                                                            gc_frame0(gc,1,v100064);
                                                            v159630080 = ((struct sCJhc_Type_Basic_Integer*)v100064)->a1;
                                                            uintmax_t v49994604 = (v159630080 * v38226984);
                                                            uintmax_t v66222662 = (v168091047 + v49994604);
                                                            x370.t0 = v236343658;
                                                            x370.t1 = v203991442;
                                                            x370.t2 = v38226984;
                                                            x370.t3 = v66222662;
                                                            x370.t4 = v26937506;
                                                        }
                                                    }
                                                }
                                            }
                                            v1972 = x370.t0;
                                            v1974 = x370.t1;
                                            v1976 = x370.t2;
                                            v1978 = x370.t3;
                                            v1980 = x370.t4;
                                            v15783869 = v1972;
                                            v236343658 = v1974;
                                            v168091047 = v1976;
                                            v38226984 = v1978;
                                            v211326633 = v1980;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100060);
                                            wptr_t v100066 = eval(gc,arena,v180754230);
                                            {   uint16_t v22697322;
                                                gc_frame0(gc,1,v100066);
                                                v22697322 = ((uint16_t)RAW_GET_UF(v100066));
                                                if (0 == v22697322) {
                                                    sptr_t v1994;
                                                    sptr_t v2000;
                                                    sptr_t v3120;
                                                    uintmax_t v1996;
                                                    uintmax_t v1998;
                                                    struct tup10 x372;
                                                    wptr_t v100068 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100068) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v147060712;
                                                        sptr_t v42735440;
                                                        /* ("CJhc.Prim.Prim.:" ni147060712 ni42735440) */
                                                        v147060712 = ((struct sCJhc_Prim_Prim_$x3a*)v100068)->a1;
                                                        v42735440 = ((struct sCJhc_Prim_Prim_$x3a*)v100068)->a2;
                                                        {   gc_frame0(gc,2,v42735440,v147060712);
                                                            sptr_t x373 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d22);
                                                            ((struct sFtheMain$d22*)x373)->head = TO_FPTR(&E__ftheMain$d22);
                                                            ((struct sFtheMain$d22*)x373)->a1 = v15783869;
                                                            ((struct sFtheMain$d22*)x373)->a2 = v147060712;
                                                            ((struct sFtheMain$d22*)x373)->a3 = v236343658;
                                                            sptr_t v185347148 = MKLAZY(x373);
                                                            {   gc_frame0(gc,1,v185347148);
                                                                wptr_t v100070 = eval(gc,arena,v147060712);
                                                                {   uintmax_t v18814600;
                                                                    gc_frame0(gc,1,v100070);
                                                                    v18814600 = ((struct sCJhc_Type_Basic_Integer*)v100070)->a1;
                                                                    uintmax_t v222975198 = (v18814600 * v38226984);
                                                                    uintmax_t v197350506 = (v168091047 + v222975198);
                                                                    x372.t0 = v236343658;
                                                                    x372.t1 = v185347148;
                                                                    x372.t2 = v38226984;
                                                                    x372.t3 = v197350506;
                                                                    x372.t4 = v42735440;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v3120 = x372.t0;
                                                    v1994 = x372.t1;
                                                    v1996 = x372.t2;
                                                    v1998 = x372.t3;
                                                    v2000 = x372.t4;
                                                    v15783869 = v3120;
                                                    v236343658 = v1994;
                                                    v168091047 = v1996;
                                                    v38226984 = v1998;
                                                    v211326633 = v2000;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v22697322);
                                                    wptr_t x374 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x374)->a1 = v168091047;
                                                    wptr_t v2287 = x374;
                                                    {   gc_frame0(gc,1,v2287);
                                                        wptr_t x375 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x375)->a1 = v38226984;
                                                        wptr_t v2289 = x375;
                                                        {   gc_frame0(gc,1,v2289);
                                                            sptr_t x376 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d21);
                                                            ((struct sFtheMain$d21*)x376)->head = TO_FPTR(&E__ftheMain$d21);
                                                            ((struct sFtheMain$d21*)x376)->a1 = v38226984;
                                                            ((struct sFtheMain$d21*)x376)->a2 = v15783869;
                                                            ((struct sFtheMain$d21*)x376)->a3 = v2287;
                                                            ((struct sFtheMain$d21*)x376)->a4 = v2289;
                                                            ((struct sFtheMain$d21*)x376)->a5 = v168091047;
                                                            ((struct sFtheMain$d21*)x376)->a6 = v65888628;
                                                            ((struct sFtheMain$d21*)x376)->a7 = v211326633;
                                                            ((struct sFtheMain$d21*)x376)->a8 = v236343658;
                                                            sptr_t v213888046 = MKLAZY(x376);
                                                            {   gc_frame0(gc,1,v213888046);
                                                                wptr_t x377 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x377)->a1 = v65888628;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x377)->a2 = v213888046;
                                                                return x377;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    /* 1 */
                                    assert(1 == v100030);
                                    uintmax_t v238709550 = (-((intmax_t)v168091047));
                                    uint16_t v100032 = (((intmax_t)0) > ((intmax_t)v38226984));
                                    if (0 == v100032) {
                                        uint16_t v100046 = (((intmax_t)v238709550) < ((intmax_t)v38226984));
                                        if (0 == v100046) {
                                            sptr_t v1936;
                                            sptr_t v1938;
                                            sptr_t v1944;
                                            uintmax_t v1940;
                                            uintmax_t v1942;
                                            struct tup10 x378;
                                            wptr_t v100048 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100048) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v18683940;
                                                sptr_t v55947646;
                                                /* ("CJhc.Prim.Prim.:" ni18683940 ni55947646) */
                                                v18683940 = ((struct sCJhc_Prim_Prim_$x3a*)v100048)->a1;
                                                v55947646 = ((struct sCJhc_Prim_Prim_$x3a*)v100048)->a2;
                                                {   gc_frame0(gc,2,v18683940,v55947646);
                                                    sptr_t x379 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d17);
                                                    ((struct sFtheMain$d17*)x379)->head = TO_FPTR(&E__ftheMain$d17);
                                                    ((struct sFtheMain$d17*)x379)->a1 = v15783869;
                                                    ((struct sFtheMain$d17*)x379)->a2 = v18683940;
                                                    ((struct sFtheMain$d17*)x379)->a3 = v236343658;
                                                    sptr_t v173581228 = MKLAZY(x379);
                                                    {   gc_frame0(gc,1,v173581228);
                                                        wptr_t v100050 = eval(gc,arena,v18683940);
                                                        {   uintmax_t v103726042;
                                                            gc_frame0(gc,1,v100050);
                                                            v103726042 = ((struct sCJhc_Type_Basic_Integer*)v100050)->a1;
                                                            uintmax_t v212800854 = (v103726042 * v38226984);
                                                            uintmax_t v145150410 = (v168091047 + v212800854);
                                                            x378.t0 = v236343658;
                                                            x378.t1 = v173581228;
                                                            x378.t2 = v38226984;
                                                            x378.t3 = v145150410;
                                                            x378.t4 = v55947646;
                                                        }
                                                    }
                                                }
                                            }
                                            v1936 = x378.t0;
                                            v1938 = x378.t1;
                                            v1940 = x378.t2;
                                            v1942 = x378.t3;
                                            v1944 = x378.t4;
                                            v15783869 = v1936;
                                            v236343658 = v1938;
                                            v168091047 = v1940;
                                            v38226984 = v1942;
                                            v211326633 = v1944;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100046);
                                            wptr_t v100052 = eval(gc,arena,v180754230);
                                            {   uint16_t v106077952;
                                                gc_frame0(gc,1,v100052);
                                                v106077952 = ((uint16_t)RAW_GET_UF(v100052));
                                                if (0 == v106077952) {
                                                    sptr_t v1956;
                                                    sptr_t v1958;
                                                    sptr_t v1964;
                                                    uintmax_t v1960;
                                                    uintmax_t v1962;
                                                    struct tup10 x380;
                                                    wptr_t v100054 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100054) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v208785772;
                                                        sptr_t v47772876;
                                                        /* ("CJhc.Prim.Prim.:" ni208785772 ni47772876) */
                                                        v208785772 = ((struct sCJhc_Prim_Prim_$x3a*)v100054)->a1;
                                                        v47772876 = ((struct sCJhc_Prim_Prim_$x3a*)v100054)->a2;
                                                        {   gc_frame0(gc,2,v47772876,v208785772);
                                                            sptr_t x381 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d19);
                                                            ((struct sFtheMain$d19*)x381)->head = TO_FPTR(&E__ftheMain$d19);
                                                            ((struct sFtheMain$d19*)x381)->a1 = v15783869;
                                                            ((struct sFtheMain$d19*)x381)->a2 = v208785772;
                                                            ((struct sFtheMain$d19*)x381)->a3 = v236343658;
                                                            sptr_t v7431716 = MKLAZY(x381);
                                                            {   gc_frame0(gc,1,v7431716);
                                                                wptr_t v100056 = eval(gc,arena,v208785772);
                                                                {   uintmax_t v239059692;
                                                                    gc_frame0(gc,1,v100056);
                                                                    v239059692 = ((struct sCJhc_Type_Basic_Integer*)v100056)->a1;
                                                                    uintmax_t v41846226 = (v239059692 * v38226984);
                                                                    uintmax_t v58663590 = (v168091047 + v41846226);
                                                                    x380.t0 = v236343658;
                                                                    x380.t1 = v7431716;
                                                                    x380.t2 = v38226984;
                                                                    x380.t3 = v58663590;
                                                                    x380.t4 = v47772876;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v1956 = x380.t0;
                                                    v1958 = x380.t1;
                                                    v1960 = x380.t2;
                                                    v1962 = x380.t3;
                                                    v1964 = x380.t4;
                                                    v15783869 = v1956;
                                                    v236343658 = v1958;
                                                    v168091047 = v1960;
                                                    v38226984 = v1962;
                                                    v211326633 = v1964;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v106077952);
                                                    wptr_t x382 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x382)->a1 = v168091047;
                                                    wptr_t v4611 = x382;
                                                    {   gc_frame0(gc,1,v4611);
                                                        wptr_t x383 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x383)->a1 = v38226984;
                                                        wptr_t v4614 = x383;
                                                        {   gc_frame0(gc,1,v4614);
                                                            sptr_t x384 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d18);
                                                            ((struct sFtheMain$d18*)x384)->head = TO_FPTR(&E__ftheMain$d18);
                                                            ((struct sFtheMain$d18*)x384)->a1 = v38226984;
                                                            ((struct sFtheMain$d18*)x384)->a2 = v15783869;
                                                            ((struct sFtheMain$d18*)x384)->a3 = v4614;
                                                            ((struct sFtheMain$d18*)x384)->a4 = v168091047;
                                                            ((struct sFtheMain$d18*)x384)->a5 = v65888628;
                                                            ((struct sFtheMain$d18*)x384)->a6 = v4611;
                                                            ((struct sFtheMain$d18*)x384)->a7 = v211326633;
                                                            ((struct sFtheMain$d18*)x384)->a8 = v236343658;
                                                            sptr_t v223426110 = MKLAZY(x384);
                                                            {   gc_frame0(gc,1,v223426110);
                                                                wptr_t x385 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x385)->a1 = v65888628;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x385)->a2 = v223426110;
                                                                return x385;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        /* 1 */
                                        assert(1 == v100032);
                                        uintmax_t v148694400 = (-((intmax_t)v38226984));
                                        uint16_t v100034 = (((intmax_t)v238709550) < ((intmax_t)v148694400));
                                        if (0 == v100034) {
                                            sptr_t v1902;
                                            sptr_t v1904;
                                            sptr_t v1910;
                                            uintmax_t v1908;
                                            uintmax_t v3825;
                                            struct tup10 x386;
                                            wptr_t v100036 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100036) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v112481742;
                                                sptr_t v76689498;
                                                /* ("CJhc.Prim.Prim.:" ni112481742 ni76689498) */
                                                v112481742 = ((struct sCJhc_Prim_Prim_$x3a*)v100036)->a1;
                                                v76689498 = ((struct sCJhc_Prim_Prim_$x3a*)v100036)->a2;
                                                {   gc_frame0(gc,2,v76689498,v112481742);
                                                    sptr_t x387 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d14);
                                                    ((struct sFtheMain$d14*)x387)->head = TO_FPTR(&E__ftheMain$d14);
                                                    ((struct sFtheMain$d14*)x387)->a1 = v15783869;
                                                    ((struct sFtheMain$d14*)x387)->a2 = v112481742;
                                                    ((struct sFtheMain$d14*)x387)->a3 = v236343658;
                                                    sptr_t v190688246 = MKLAZY(x387);
                                                    {   gc_frame0(gc,1,v190688246);
                                                        wptr_t v100038 = eval(gc,arena,v112481742);
                                                        {   uintmax_t v221758346;
                                                            gc_frame0(gc,1,v100038);
                                                            v221758346 = ((struct sCJhc_Type_Basic_Integer*)v100038)->a1;
                                                            uintmax_t v132286450 = (v221758346 * v38226984);
                                                            uintmax_t v169735676 = (v168091047 + v132286450);
                                                            x386.t0 = v236343658;
                                                            x386.t1 = v190688246;
                                                            x386.t2 = v38226984;
                                                            x386.t3 = v169735676;
                                                            x386.t4 = v76689498;
                                                        }
                                                    }
                                                }
                                            }
                                            v1902 = x386.t0;
                                            v1904 = x386.t1;
                                            v3825 = x386.t2;
                                            v1908 = x386.t3;
                                            v1910 = x386.t4;
                                            v15783869 = v1902;
                                            v236343658 = v1904;
                                            v168091047 = v3825;
                                            v38226984 = v1908;
                                            v211326633 = v1910;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100034);
                                            wptr_t v100040 = eval(gc,arena,v180754230);
                                            {   uint16_t v16048694;
                                                gc_frame0(gc,1,v100040);
                                                v16048694 = ((uint16_t)RAW_GET_UF(v100040));
                                                if (0 == v16048694) {
                                                    sptr_t v1922;
                                                    sptr_t v1924;
                                                    sptr_t v1930;
                                                    uintmax_t v1926;
                                                    uintmax_t v1928;
                                                    struct tup10 x388;
                                                    wptr_t v100042 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100042) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v166939656;
                                                        sptr_t v204193220;
                                                        /* ("CJhc.Prim.Prim.:" ni204193220 ni166939656) */
                                                        v204193220 = ((struct sCJhc_Prim_Prim_$x3a*)v100042)->a1;
                                                        v166939656 = ((struct sCJhc_Prim_Prim_$x3a*)v100042)->a2;
                                                        {   gc_frame0(gc,2,v166939656,v204193220);
                                                            sptr_t x389 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d16);
                                                            ((struct sFtheMain$d16*)x389)->head = TO_FPTR(&E__ftheMain$d16);
                                                            ((struct sFtheMain$d16*)x389)->a1 = v15783869;
                                                            ((struct sFtheMain$d16*)x389)->a2 = v204193220;
                                                            ((struct sFtheMain$d16*)x389)->a3 = v236343658;
                                                            sptr_t v64465062 = MKLAZY(x389);
                                                            {   gc_frame0(gc,1,v64465062);
                                                                wptr_t v100044 = eval(gc,arena,v204193220);
                                                                {   uintmax_t v35692202;
                                                                    gc_frame0(gc,1,v100044);
                                                                    v35692202 = ((struct sCJhc_Type_Basic_Integer*)v100044)->a1;
                                                                    uintmax_t v122445896 = (v35692202 * v38226984);
                                                                    uintmax_t v193275354 = (v168091047 + v122445896);
                                                                    x388.t0 = v236343658;
                                                                    x388.t1 = v64465062;
                                                                    x388.t2 = v38226984;
                                                                    x388.t3 = v193275354;
                                                                    x388.t4 = v166939656;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v1922 = x388.t0;
                                                    v1924 = x388.t1;
                                                    v1926 = x388.t2;
                                                    v1928 = x388.t3;
                                                    v1930 = x388.t4;
                                                    v15783869 = v1922;
                                                    v236343658 = v1924;
                                                    v168091047 = v1926;
                                                    v38226984 = v1928;
                                                    v211326633 = v1930;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v16048694);
                                                    wptr_t x390 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x390)->a1 = v168091047;
                                                    wptr_t v2227 = x390;
                                                    {   gc_frame0(gc,1,v2227);
                                                        wptr_t x391 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x391)->a1 = v38226984;
                                                        wptr_t v2229 = x391;
                                                        {   gc_frame0(gc,1,v2229);
                                                            sptr_t x392 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d15);
                                                            ((struct sFtheMain$d15*)x392)->head = TO_FPTR(&E__ftheMain$d15);
                                                            ((struct sFtheMain$d15*)x392)->a1 = v38226984;
                                                            ((struct sFtheMain$d15*)x392)->a2 = v15783869;
                                                            ((struct sFtheMain$d15*)x392)->a3 = v2227;
                                                            ((struct sFtheMain$d15*)x392)->a4 = v168091047;
                                                            ((struct sFtheMain$d15*)x392)->a5 = v65888628;
                                                            ((struct sFtheMain$d15*)x392)->a6 = v2229;
                                                            ((struct sFtheMain$d15*)x392)->a7 = v211326633;
                                                            ((struct sFtheMain$d15*)x392)->a8 = v236343658;
                                                            sptr_t v54479492 = MKLAZY(x392);
                                                            {   gc_frame0(gc,1,v54479492);
                                                                wptr_t x393 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x393)->a1 = v65888628;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x393)->a2 = v54479492;
                                                                return x393;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                uint16_t v100138 = (((intmax_t)0) < ((intmax_t)v168091047));
                if (0 == v100138) {
                    if (0 == v38226984) {
                        uintmax_t v173749922 = (v168091047 + v38226984);
                        {   gc_frame0(gc,3,v15783869,v211326633,v236343658);
                            sptr_t x394 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d72);
                            ((struct sFtheMain$d72*)x394)->head = TO_FPTR(&E__ftheMain$d72);
                            ((struct sFtheMain$d72*)x394)->a1 = v38226984;
                            ((struct sFtheMain$d72*)x394)->a2 = v236343658;
                            sptr_t v63275272 = MKLAZY(x394);
                            {   gc_frame0(gc,1,v63275272);
                                sptr_t x395 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d73);
                                ((struct sFtheMain$d73*)x395)->head = TO_FPTR(&E__ftheMain$d73);
                                ((struct sFtheMain$d73*)x395)->a1 = v38226984;
                                ((struct sFtheMain$d73*)x395)->a2 = v15783869;
                                ((struct sFtheMain$d73*)x395)->a3 = v63275272;
                                ((struct sFtheMain$d73*)x395)->a4 = v173749922;
                                ((struct sFtheMain$d73*)x395)->a5 = v168091047;
                                ((struct sFtheMain$d73*)x395)->a6 = v236343658;
                                sptr_t v225145568 = MKLAZY(x395);
                                uint16_t v100266 = (((intmax_t)0) > ((intmax_t)v168091047));
                                if (0 == v100266) {
                                    uint16_t v100294 = (((intmax_t)0) > ((intmax_t)v38226984));
                                    if (0 == v100294) {
                                        uint16_t v100308 = (((intmax_t)v168091047) < ((intmax_t)v38226984));
                                        if (0 == v100308) {
                                            sptr_t v2618;
                                            sptr_t v2620;
                                            sptr_t v4854;
                                            uintmax_t v2622;
                                            uintmax_t v6094;
                                            struct tup10 x396;
                                            wptr_t v100310 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100310) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v153539804;
                                                sptr_t v154103238;
                                                /* ("CJhc.Prim.Prim.:" ni153539804 ni154103238) */
                                                v153539804 = ((struct sCJhc_Prim_Prim_$x3a*)v100310)->a1;
                                                v154103238 = ((struct sCJhc_Prim_Prim_$x3a*)v100310)->a2;
                                                {   gc_frame0(gc,2,v153539804,v154103238);
                                                    sptr_t x397 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d83);
                                                    ((struct sFtheMain$d83*)x397)->head = TO_FPTR(&E__ftheMain$d83);
                                                    ((struct sFtheMain$d83*)x397)->a1 = v153539804;
                                                    ((struct sFtheMain$d83*)x397)->a2 = v15783869;
                                                    ((struct sFtheMain$d83*)x397)->a3 = v236343658;
                                                    sptr_t v76769906 = MKLAZY(x397);
                                                    {   gc_frame0(gc,1,v76769906);
                                                        wptr_t v100312 = eval(gc,arena,v153539804);
                                                        {   uintmax_t v217011150;
                                                            gc_frame0(gc,1,v100312);
                                                            v217011150 = ((struct sCJhc_Type_Basic_Integer*)v100312)->a1;
                                                            uintmax_t v98285550 = (v217011150 * v38226984);
                                                            uintmax_t v162770336 = (v168091047 + v98285550);
                                                            x396.t0 = v236343658;
                                                            x396.t1 = v76769906;
                                                            x396.t2 = v38226984;
                                                            x396.t3 = v162770336;
                                                            x396.t4 = v154103238;
                                                        }
                                                    }
                                                }
                                            }
                                            v2618 = x396.t0;
                                            v2620 = x396.t1;
                                            v2622 = x396.t2;
                                            v6094 = x396.t3;
                                            v4854 = x396.t4;
                                            v15783869 = v2618;
                                            v236343658 = v2620;
                                            v168091047 = v2622;
                                            v38226984 = v6094;
                                            v211326633 = v4854;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100308);
                                            wptr_t v100314 = eval(gc,arena,v225145568);
                                            {   uint16_t v132985884;
                                                gc_frame0(gc,1,v100314);
                                                v132985884 = ((uint16_t)RAW_GET_UF(v100314));
                                                if (0 == v132985884) {
                                                    sptr_t v2638;
                                                    sptr_t v2640;
                                                    sptr_t v2646;
                                                    uintmax_t v2642;
                                                    uintmax_t v2644;
                                                    struct tup10 x398;
                                                    wptr_t v100316 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100316) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v106329930;
                                                        sptr_t v52668044;
                                                        /* ("CJhc.Prim.Prim.:" ni106329930 ni52668044) */
                                                        v106329930 = ((struct sCJhc_Prim_Prim_$x3a*)v100316)->a1;
                                                        v52668044 = ((struct sCJhc_Prim_Prim_$x3a*)v100316)->a2;
                                                        {   gc_frame0(gc,2,v52668044,v106329930);
                                                            sptr_t x399 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d85);
                                                            ((struct sFtheMain$d85*)x399)->head = TO_FPTR(&E__ftheMain$d85);
                                                            ((struct sFtheMain$d85*)x399)->a1 = v106329930;
                                                            ((struct sFtheMain$d85*)x399)->a2 = v15783869;
                                                            ((struct sFtheMain$d85*)x399)->a3 = v236343658;
                                                            sptr_t v246982876 = MKLAZY(x399);
                                                            {   gc_frame0(gc,1,v246982876);
                                                                wptr_t v100318 = eval(gc,arena,v106329930);
                                                                {   uintmax_t v206553136;
                                                                    gc_frame0(gc,1,v100318);
                                                                    v206553136 = ((struct sCJhc_Type_Basic_Integer*)v100318)->a1;
                                                                    uintmax_t v148359678 = (v206553136 * v38226984);
                                                                    uintmax_t v213994778 = (v168091047 + v148359678);
                                                                    x398.t0 = v236343658;
                                                                    x398.t1 = v246982876;
                                                                    x398.t2 = v38226984;
                                                                    x398.t3 = v213994778;
                                                                    x398.t4 = v52668044;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v2638 = x398.t0;
                                                    v2640 = x398.t1;
                                                    v2642 = x398.t2;
                                                    v2644 = x398.t3;
                                                    v2646 = x398.t4;
                                                    v15783869 = v2638;
                                                    v236343658 = v2640;
                                                    v168091047 = v2642;
                                                    v38226984 = v2644;
                                                    v211326633 = v2646;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v132985884);
                                                    wptr_t x400 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x400)->a1 = v168091047;
                                                    wptr_t v2845 = x400;
                                                    {   gc_frame0(gc,1,v2845);
                                                        wptr_t x401 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x401)->a1 = v38226984;
                                                        wptr_t v2847 = x401;
                                                        {   gc_frame0(gc,1,v2847);
                                                            sptr_t x402 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d84);
                                                            ((struct sFtheMain$d84*)x402)->head = TO_FPTR(&E__ftheMain$d84);
                                                            ((struct sFtheMain$d84*)x402)->a1 = v38226984;
                                                            ((struct sFtheMain$d84*)x402)->a2 = v15783869;
                                                            ((struct sFtheMain$d84*)x402)->a3 = v63275272;
                                                            ((struct sFtheMain$d84*)x402)->a4 = v168091047;
                                                            ((struct sFtheMain$d84*)x402)->a5 = v2847;
                                                            ((struct sFtheMain$d84*)x402)->a6 = v211326633;
                                                            ((struct sFtheMain$d84*)x402)->a7 = v2845;
                                                            ((struct sFtheMain$d84*)x402)->a8 = v236343658;
                                                            sptr_t v224116838 = MKLAZY(x402);
                                                            {   gc_frame0(gc,1,v224116838);
                                                                wptr_t x403 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x403)->a1 = v63275272;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x403)->a2 = v224116838;
                                                                return x403;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        /* 1 */
                                        assert(1 == v100294);
                                        uintmax_t v155163336 = (-((intmax_t)v38226984));
                                        uint16_t v100296 = (((intmax_t)v168091047) < ((intmax_t)v155163336));
                                        if (0 == v100296) {
                                            sptr_t v2584;
                                            sptr_t v2586;
                                            sptr_t v6007;
                                            uintmax_t v2588;
                                            uintmax_t v6004;
                                            struct tup10 x404;
                                            wptr_t v100298 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100298) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v196665220;
                                                sptr_t v201225246;
                                                /* ("CJhc.Prim.Prim.:" ni201225246 ni196665220) */
                                                v201225246 = ((struct sCJhc_Prim_Prim_$x3a*)v100298)->a1;
                                                v196665220 = ((struct sCJhc_Prim_Prim_$x3a*)v100298)->a2;
                                                {   gc_frame0(gc,2,v196665220,v201225246);
                                                    sptr_t x405 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d80);
                                                    ((struct sFtheMain$d80*)x405)->head = TO_FPTR(&E__ftheMain$d80);
                                                    ((struct sFtheMain$d80*)x405)->a1 = v15783869;
                                                    ((struct sFtheMain$d80*)x405)->a2 = v201225246;
                                                    ((struct sFtheMain$d80*)x405)->a3 = v236343658;
                                                    sptr_t v79607516 = MKLAZY(x405);
                                                    {   gc_frame0(gc,1,v79607516);
                                                        wptr_t v100300 = eval(gc,arena,v201225246);
                                                        {   uintmax_t v11387876;
                                                            gc_frame0(gc,1,v100300);
                                                            v11387876 = ((struct sCJhc_Type_Basic_Integer*)v100300)->a1;
                                                            uintmax_t v149161536 = (v11387876 * v38226984);
                                                            uintmax_t v181366144 = (v168091047 + v149161536);
                                                            x404.t0 = v236343658;
                                                            x404.t1 = v79607516;
                                                            x404.t2 = v38226984;
                                                            x404.t3 = v181366144;
                                                            x404.t4 = v196665220;
                                                        }
                                                    }
                                                }
                                            }
                                            v2584 = x404.t0;
                                            v2586 = x404.t1;
                                            v2588 = x404.t2;
                                            v6004 = x404.t3;
                                            v6007 = x404.t4;
                                            v15783869 = v2584;
                                            v236343658 = v2586;
                                            v168091047 = v2588;
                                            v38226984 = v6004;
                                            v211326633 = v6007;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100296);
                                            wptr_t v100302 = eval(gc,arena,v225145568);
                                            {   uint16_t v116610126;
                                                gc_frame0(gc,1,v100302);
                                                v116610126 = ((uint16_t)RAW_GET_UF(v100302));
                                                if (0 == v116610126) {
                                                    sptr_t v2604;
                                                    sptr_t v2606;
                                                    sptr_t v2612;
                                                    uintmax_t v2610;
                                                    uintmax_t v5213;
                                                    struct tup10 x406;
                                                    wptr_t v100304 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100304) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v214892892;
                                                        sptr_t v244419942;
                                                        /* ("CJhc.Prim.Prim.:" ni214892892 ni244419942) */
                                                        v214892892 = ((struct sCJhc_Prim_Prim_$x3a*)v100304)->a1;
                                                        v244419942 = ((struct sCJhc_Prim_Prim_$x3a*)v100304)->a2;
                                                        {   gc_frame0(gc,2,v214892892,v244419942);
                                                            sptr_t x407 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d82);
                                                            ((struct sFtheMain$d82*)x407)->head = TO_FPTR(&E__ftheMain$d82);
                                                            ((struct sFtheMain$d82*)x407)->a1 = v15783869;
                                                            ((struct sFtheMain$d82*)x407)->a2 = v214892892;
                                                            ((struct sFtheMain$d82*)x407)->a3 = v236343658;
                                                            sptr_t v219876440 = MKLAZY(x407);
                                                            {   gc_frame0(gc,1,v219876440);
                                                                wptr_t v100306 = eval(gc,arena,v214892892);
                                                                {   uintmax_t v84194486;
                                                                    gc_frame0(gc,1,v100306);
                                                                    v84194486 = ((struct sCJhc_Type_Basic_Integer*)v100306)->a1;
                                                                    uintmax_t v43282132 = (v84194486 * v38226984);
                                                                    uintmax_t v111405800 = (v168091047 + v43282132);
                                                                    x406.t0 = v236343658;
                                                                    x406.t1 = v219876440;
                                                                    x406.t2 = v38226984;
                                                                    x406.t3 = v111405800;
                                                                    x406.t4 = v244419942;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v2604 = x406.t0;
                                                    v2606 = x406.t1;
                                                    v5213 = x406.t2;
                                                    v2610 = x406.t3;
                                                    v2612 = x406.t4;
                                                    v15783869 = v2604;
                                                    v236343658 = v2606;
                                                    v168091047 = v5213;
                                                    v38226984 = v2610;
                                                    v211326633 = v2612;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v116610126);
                                                    wptr_t x408 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x408)->a1 = v168091047;
                                                    wptr_t v2816 = x408;
                                                    {   gc_frame0(gc,1,v2816);
                                                        wptr_t x409 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x409)->a1 = v38226984;
                                                        wptr_t v2818 = x409;
                                                        {   gc_frame0(gc,1,v2818);
                                                            sptr_t x410 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d81);
                                                            ((struct sFtheMain$d81*)x410)->head = TO_FPTR(&E__ftheMain$d81);
                                                            ((struct sFtheMain$d81*)x410)->a1 = v2818;
                                                            ((struct sFtheMain$d81*)x410)->a2 = v38226984;
                                                            ((struct sFtheMain$d81*)x410)->a3 = v15783869;
                                                            ((struct sFtheMain$d81*)x410)->a4 = v63275272;
                                                            ((struct sFtheMain$d81*)x410)->a5 = v2816;
                                                            ((struct sFtheMain$d81*)x410)->a6 = v168091047;
                                                            ((struct sFtheMain$d81*)x410)->a7 = v211326633;
                                                            ((struct sFtheMain$d81*)x410)->a8 = v236343658;
                                                            sptr_t v86963658 = MKLAZY(x410);
                                                            {   gc_frame0(gc,1,v86963658);
                                                                wptr_t x411 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x411)->a1 = v63275272;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x411)->a2 = v86963658;
                                                                return x411;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    /* 1 */
                                    assert(1 == v100266);
                                    uintmax_t v262287602 = (-((intmax_t)v168091047));
                                    uint16_t v100268 = (((intmax_t)0) > ((intmax_t)v38226984));
                                    if (0 == v100268) {
                                        uint16_t v100282 = (((intmax_t)v262287602) < ((intmax_t)v38226984));
                                        if (0 == v100282) {
                                            sptr_t v2548;
                                            sptr_t v2550;
                                            sptr_t v2556;
                                            uintmax_t v2552;
                                            uintmax_t v2554;
                                            struct tup10 x412;
                                            wptr_t v100284 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100284) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v113387896;
                                                sptr_t v229668136;
                                                /* ("CJhc.Prim.Prim.:" ni229668136 ni113387896) */
                                                v229668136 = ((struct sCJhc_Prim_Prim_$x3a*)v100284)->a1;
                                                v113387896 = ((struct sCJhc_Prim_Prim_$x3a*)v100284)->a2;
                                                {   gc_frame0(gc,2,v113387896,v229668136);
                                                    sptr_t x413 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d77);
                                                    ((struct sFtheMain$d77*)x413)->head = TO_FPTR(&E__ftheMain$d77);
                                                    ((struct sFtheMain$d77*)x413)->a1 = v229668136;
                                                    ((struct sFtheMain$d77*)x413)->a2 = v15783869;
                                                    ((struct sFtheMain$d77*)x413)->a3 = v236343658;
                                                    sptr_t v204720534 = MKLAZY(x413);
                                                    {   gc_frame0(gc,1,v204720534);
                                                        wptr_t v100286 = eval(gc,arena,v229668136);
                                                        {   uintmax_t v250262368;
                                                            gc_frame0(gc,1,v100286);
                                                            v250262368 = ((struct sCJhc_Type_Basic_Integer*)v100286)->a1;
                                                            uintmax_t v180889444 = (v250262368 * v38226984);
                                                            uintmax_t v90999848 = (v168091047 + v180889444);
                                                            x412.t0 = v236343658;
                                                            x412.t1 = v204720534;
                                                            x412.t2 = v38226984;
                                                            x412.t3 = v90999848;
                                                            x412.t4 = v113387896;
                                                        }
                                                    }
                                                }
                                            }
                                            v2548 = x412.t0;
                                            v2550 = x412.t1;
                                            v2552 = x412.t2;
                                            v2554 = x412.t3;
                                            v2556 = x412.t4;
                                            v15783869 = v2548;
                                            v236343658 = v2550;
                                            v168091047 = v2552;
                                            v38226984 = v2554;
                                            v211326633 = v2556;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100282);
                                            wptr_t v100288 = eval(gc,arena,v225145568);
                                            {   uint16_t v6646424;
                                                gc_frame0(gc,1,v100288);
                                                v6646424 = ((uint16_t)RAW_GET_UF(v100288));
                                                if (0 == v6646424) {
                                                    sptr_t v5135;
                                                    sptr_t v5138;
                                                    sptr_t v5967;
                                                    uintmax_t v5961;
                                                    uintmax_t v5964;
                                                    struct tup10 x414;
                                                    wptr_t v100290 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100290) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v182346360;
                                                        sptr_t v43800772;
                                                        /* ("CJhc.Prim.Prim.:" ni43800772 ni182346360) */
                                                        v43800772 = ((struct sCJhc_Prim_Prim_$x3a*)v100290)->a1;
                                                        v182346360 = ((struct sCJhc_Prim_Prim_$x3a*)v100290)->a2;
                                                        {   gc_frame0(gc,2,v43800772,v182346360);
                                                            sptr_t x415 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d79);
                                                            ((struct sFtheMain$d79*)x415)->head = TO_FPTR(&E__ftheMain$d79);
                                                            ((struct sFtheMain$d79*)x415)->a1 = v15783869;
                                                            ((struct sFtheMain$d79*)x415)->a2 = v43800772;
                                                            ((struct sFtheMain$d79*)x415)->a3 = v236343658;
                                                            sptr_t v28631072 = MKLAZY(x415);
                                                            {   gc_frame0(gc,1,v28631072);
                                                                wptr_t v100292 = eval(gc,arena,v43800772);
                                                                {   uintmax_t v158064916;
                                                                    gc_frame0(gc,1,v100292);
                                                                    v158064916 = ((struct sCJhc_Type_Basic_Integer*)v100292)->a1;
                                                                    uintmax_t v260156720 = (v158064916 * v38226984);
                                                                    uintmax_t v113159568 = (v168091047 + v260156720);
                                                                    x414.t0 = v236343658;
                                                                    x414.t1 = v28631072;
                                                                    x414.t2 = v38226984;
                                                                    x414.t3 = v113159568;
                                                                    x414.t4 = v182346360;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v5135 = x414.t0;
                                                    v5138 = x414.t1;
                                                    v5961 = x414.t2;
                                                    v5964 = x414.t3;
                                                    v5967 = x414.t4;
                                                    v15783869 = v5135;
                                                    v236343658 = v5138;
                                                    v168091047 = v5961;
                                                    v38226984 = v5964;
                                                    v211326633 = v5967;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v6646424);
                                                    wptr_t x416 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x416)->a1 = v168091047;
                                                    wptr_t v6150 = x416;
                                                    {   gc_frame0(gc,1,v6150);
                                                        wptr_t x417 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x417)->a1 = v38226984;
                                                        wptr_t v2787 = x417;
                                                        {   gc_frame0(gc,1,v2787);
                                                            sptr_t x418 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d78);
                                                            ((struct sFtheMain$d78*)x418)->head = TO_FPTR(&E__ftheMain$d78);
                                                            ((struct sFtheMain$d78*)x418)->a1 = v2787;
                                                            ((struct sFtheMain$d78*)x418)->a2 = v6150;
                                                            ((struct sFtheMain$d78*)x418)->a3 = v38226984;
                                                            ((struct sFtheMain$d78*)x418)->a4 = v15783869;
                                                            ((struct sFtheMain$d78*)x418)->a5 = v63275272;
                                                            ((struct sFtheMain$d78*)x418)->a6 = v168091047;
                                                            ((struct sFtheMain$d78*)x418)->a7 = v211326633;
                                                            ((struct sFtheMain$d78*)x418)->a8 = v236343658;
                                                            sptr_t v103994958 = MKLAZY(x418);
                                                            {   gc_frame0(gc,1,v103994958);
                                                                wptr_t x419 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x419)->a1 = v63275272;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x419)->a2 = v103994958;
                                                                return x419;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        /* 1 */
                                        assert(1 == v100268);
                                        uintmax_t v114239376 = (-((intmax_t)v38226984));
                                        uint16_t v100270 = (((intmax_t)v262287602) < ((intmax_t)v114239376));
                                        if (0 == v100270) {
                                            sptr_t v2522;
                                            sptr_t v5811;
                                            sptr_t v5814;
                                            uintmax_t v2518;
                                            uintmax_t v2520;
                                            struct tup10 x420;
                                            wptr_t v100272 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100272) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v126636820;
                                                sptr_t v160540508;
                                                /* ("CJhc.Prim.Prim.:" ni160540508 ni126636820) */
                                                v160540508 = ((struct sCJhc_Prim_Prim_$x3a*)v100272)->a1;
                                                v126636820 = ((struct sCJhc_Prim_Prim_$x3a*)v100272)->a2;
                                                {   gc_frame0(gc,2,v126636820,v160540508);
                                                    sptr_t x421 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d74);
                                                    ((struct sFtheMain$d74*)x421)->head = TO_FPTR(&E__ftheMain$d74);
                                                    ((struct sFtheMain$d74*)x421)->a1 = v15783869;
                                                    ((struct sFtheMain$d74*)x421)->a2 = v160540508;
                                                    ((struct sFtheMain$d74*)x421)->a3 = v236343658;
                                                    sptr_t v88439514 = MKLAZY(x421);
                                                    {   gc_frame0(gc,1,v88439514);
                                                        wptr_t v100274 = eval(gc,arena,v160540508);
                                                        {   uintmax_t v180425908;
                                                            gc_frame0(gc,1,v100274);
                                                            v180425908 = ((struct sCJhc_Type_Basic_Integer*)v100274)->a1;
                                                            uintmax_t v249473224 = (v180425908 * v38226984);
                                                            uintmax_t v7088584 = (v168091047 + v249473224);
                                                            x420.t0 = v236343658;
                                                            x420.t1 = v88439514;
                                                            x420.t2 = v38226984;
                                                            x420.t3 = v7088584;
                                                            x420.t4 = v126636820;
                                                        }
                                                    }
                                                }
                                            }
                                            v5811 = x420.t0;
                                            v5814 = x420.t1;
                                            v2518 = x420.t2;
                                            v2520 = x420.t3;
                                            v2522 = x420.t4;
                                            v15783869 = v5811;
                                            v236343658 = v5814;
                                            v168091047 = v2518;
                                            v38226984 = v2520;
                                            v211326633 = v2522;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100270);
                                            wptr_t v100276 = eval(gc,arena,v225145568);
                                            {   uint16_t v32697380;
                                                gc_frame0(gc,1,v100276);
                                                v32697380 = ((uint16_t)RAW_GET_UF(v100276));
                                                if (0 == v32697380) {
                                                    sptr_t v5865;
                                                    sptr_t v5868;
                                                    sptr_t v5877;
                                                    uintmax_t v5871;
                                                    uintmax_t v5874;
                                                    struct tup10 x422;
                                                    wptr_t v100278 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100278) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v152063830;
                                                        sptr_t v9192484;
                                                        /* ("CJhc.Prim.Prim.:" ni152063830 ni9192484) */
                                                        v152063830 = ((struct sCJhc_Prim_Prim_$x3a*)v100278)->a1;
                                                        v9192484 = ((struct sCJhc_Prim_Prim_$x3a*)v100278)->a2;
                                                        {   gc_frame0(gc,2,v9192484,v152063830);
                                                            sptr_t x423 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d76);
                                                            ((struct sFtheMain$d76*)x423)->head = TO_FPTR(&E__ftheMain$d76);
                                                            ((struct sFtheMain$d76*)x423)->a1 = v152063830;
                                                            ((struct sFtheMain$d76*)x423)->a2 = v15783869;
                                                            ((struct sFtheMain$d76*)x423)->a3 = v236343658;
                                                            sptr_t v251243814 = MKLAZY(x423);
                                                            {   gc_frame0(gc,1,v251243814);
                                                                wptr_t v100280 = eval(gc,arena,v152063830);
                                                                {   uintmax_t v63155322;
                                                                    gc_frame0(gc,1,v100280);
                                                                    v63155322 = ((struct sCJhc_Type_Basic_Integer*)v100280)->a1;
                                                                    uintmax_t v238149078 = (v63155322 * v38226984);
                                                                    uintmax_t v11874232 = (v168091047 + v238149078);
                                                                    x422.t0 = v236343658;
                                                                    x422.t1 = v251243814;
                                                                    x422.t2 = v38226984;
                                                                    x422.t3 = v11874232;
                                                                    x422.t4 = v9192484;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v5865 = x422.t0;
                                                    v5868 = x422.t1;
                                                    v5871 = x422.t2;
                                                    v5874 = x422.t3;
                                                    v5877 = x422.t4;
                                                    v15783869 = v5865;
                                                    v236343658 = v5868;
                                                    v168091047 = v5871;
                                                    v38226984 = v5874;
                                                    v211326633 = v5877;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v32697380);
                                                    wptr_t x424 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x424)->a1 = v168091047;
                                                    wptr_t v2756 = x424;
                                                    {   gc_frame0(gc,1,v2756);
                                                        wptr_t x425 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x425)->a1 = v38226984;
                                                        wptr_t v2758 = x425;
                                                        {   gc_frame0(gc,1,v2758);
                                                            sptr_t x426 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d75);
                                                            ((struct sFtheMain$d75*)x426)->head = TO_FPTR(&E__ftheMain$d75);
                                                            ((struct sFtheMain$d75*)x426)->a1 = v38226984;
                                                            ((struct sFtheMain$d75*)x426)->a2 = v15783869;
                                                            ((struct sFtheMain$d75*)x426)->a3 = v63275272;
                                                            ((struct sFtheMain$d75*)x426)->a4 = v168091047;
                                                            ((struct sFtheMain$d75*)x426)->a5 = v2756;
                                                            ((struct sFtheMain$d75*)x426)->a6 = v211326633;
                                                            ((struct sFtheMain$d75*)x426)->a7 = v2758;
                                                            ((struct sFtheMain$d75*)x426)->a8 = v236343658;
                                                            sptr_t v62155322 = MKLAZY(x426);
                                                            {   gc_frame0(gc,1,v62155322);
                                                                wptr_t x427 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x427)->a1 = v63275272;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x427)->a2 = v62155322;
                                                                return x427;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        uint16_t v100320 = (((intmax_t)0) < ((intmax_t)v38226984));
                        if (0 == v100320) {
                            uintmax_t v258866034 = (v168091047 + v38226984);
                            {   wptr_t v100376;
                                gc_frame0(gc,3,v15783869,v211326633,v236343658);
                                v100376 = ftheMain$d100(gc,arena,v38226984,v236343658);
                                {   uintmax_t v110947986;
                                    gc_frame0(gc,1,v100376);
                                    v110947986 = ((struct sCJhc_Type_Basic_Integer*)v100376)->a1;
                                    wptr_t x428 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                    ((struct sCJhc_Type_Basic_Integer*)x428)->a1 = v110947986;
                                    wptr_t v6750 = x428;
                                    sptr_t v29534746 = demote(v6750);
                                    uintmax_t v10420018 = (v258866034 * v110947986);
                                    {   gc_frame0(gc,1,v29534746);
                                        wptr_t v100378 = eval(gc,arena,v15783869);
                                        {   uintmax_t v129782902;
                                            gc_frame0(gc,1,v100378);
                                            v129782902 = ((struct sCJhc_Type_Basic_Integer*)v100378)->a1;
                                            wptr_t v100380 = eval(gc,arena,v236343658);
                                            {   sptr_t v2826;
                                                sptr_t v6601;
                                                sptr_t v6604;
                                                sptr_t v6607;
                                                uintmax_t v2810;
                                                uintmax_t v2812;
                                                uintmax_t v2814;
                                                uintmax_t v42639378;
                                                uintmax_t v5628;
                                                uintmax_t v5631;
                                                struct tup11 x429;
                                                gc_frame0(gc,1,v100380);
                                                v42639378 = ((struct sCJhc_Type_Basic_Integer*)v100380)->a1;
                                                uintmax_t v246200936 = (v129782902 + v42639378);
                                                uint16_t v100386 = (((intmax_t)v10420018) <= ((intmax_t)v246200936));
                                                if (0 == v100386) {
                                                    x429.t0 = v42639378;
                                                    x429.t1 = v38226984;
                                                    x429.t2 = v129782902;
                                                    x429.t3 = v110947986;
                                                    x429.t4 = v168091047;
                                                    x429.t5 = v29534746;
                                                    x429.t6 = v211326633;
                                                    x429.t7 = v236343658;
                                                    x429.t8 = ((sptr_t)RAW_SET_UF(0));
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v100386);
                                                    uintmax_t v74995938 = (v168091047 + v38226984);
                                                    uintmax_t v233872816 = (v74995938 * v110947986);
                                                    uintmax_t v247780466 = (v168091047 + v38226984);
                                                    uintmax_t v156378766 = (v233872816 + v247780466);
                                                    uintmax_t v265004794 = (v129782902 + v42639378);
                                                    uint16_t v41131724 = (((intmax_t)v156378766) > ((intmax_t)v265004794));
                                                    wptr_t v3010 = RAW_SET_UF(v41131724);
                                                    sptr_t v119285252 = demote(v3010);
                                                    x429.t0 = v42639378;
                                                    x429.t1 = v38226984;
                                                    x429.t2 = v129782902;
                                                    x429.t3 = v110947986;
                                                    x429.t4 = v168091047;
                                                    x429.t5 = v29534746;
                                                    x429.t6 = v211326633;
                                                    x429.t7 = v236343658;
                                                    x429.t8 = v119285252;
                                                }
                                                v2810 = x429.t0;
                                                v2812 = x429.t1;
                                                v2814 = x429.t2;
                                                v5628 = x429.t3;
                                                v5631 = x429.t4;
                                                v6601 = x429.t5;
                                                v6604 = x429.t6;
                                                v6607 = x429.t7;
                                                v2826 = x429.t8;
                                                wptr_t v5148 = promote(v6601);
                                                wptr_t v6367 = promote(v2826);
                                                return ftheMain$d101(gc,arena,v2810,v2812,v2814,v5628,v5631,v5148,v6604,v6607,v6367);
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            /* 1 */
                            assert(1 == v100320);
                            uintmax_t v107689858 = (v168091047 + v38226984);
                            {   gc_frame0(gc,3,v15783869,v211326633,v236343658);
                                sptr_t x430 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d86);
                                ((struct sFtheMain$d86*)x430)->head = TO_FPTR(&E__ftheMain$d86);
                                ((struct sFtheMain$d86*)x430)->a1 = v38226984;
                                ((struct sFtheMain$d86*)x430)->a2 = v236343658;
                                sptr_t v257895264 = MKLAZY(x430);
                                {   gc_frame0(gc,1,v257895264);
                                    sptr_t x431 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d87);
                                    ((struct sFtheMain$d87*)x431)->head = TO_FPTR(&E__ftheMain$d87);
                                    ((struct sFtheMain$d87*)x431)->a1 = v38226984;
                                    ((struct sFtheMain$d87*)x431)->a2 = v15783869;
                                    ((struct sFtheMain$d87*)x431)->a3 = v168091047;
                                    ((struct sFtheMain$d87*)x431)->a4 = v257895264;
                                    ((struct sFtheMain$d87*)x431)->a5 = v107689858;
                                    ((struct sFtheMain$d87*)x431)->a6 = v236343658;
                                    sptr_t v216121364 = MKLAZY(x431);
                                    uint16_t v100322 = (((intmax_t)0) > ((intmax_t)v168091047));
                                    if (0 == v100322) {
                                        uint16_t v100350 = (((intmax_t)0) > ((intmax_t)v38226984));
                                        if (0 == v100350) {
                                            uint16_t v100364 = (((intmax_t)v168091047) < ((intmax_t)v38226984));
                                            if (0 == v100364) {
                                                sptr_t v2772;
                                                sptr_t v6474;
                                                sptr_t v6477;
                                                uintmax_t v2770;
                                                uintmax_t v6480;
                                                struct tup10 x432;
                                                wptr_t v100366 = eval(gc,arena,v211326633);
                                                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100366) {
                                                    jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                } else {
                                                    sptr_t v122224656;
                                                    sptr_t v160015358;
                                                    /* ("CJhc.Prim.Prim.:" ni122224656 ni160015358) */
                                                    v122224656 = ((struct sCJhc_Prim_Prim_$x3a*)v100366)->a1;
                                                    v160015358 = ((struct sCJhc_Prim_Prim_$x3a*)v100366)->a2;
                                                    {   gc_frame0(gc,2,v122224656,v160015358);
                                                        sptr_t x433 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d97);
                                                        ((struct sFtheMain$d97*)x433)->head = TO_FPTR(&E__ftheMain$d97);
                                                        ((struct sFtheMain$d97*)x433)->a1 = v122224656;
                                                        ((struct sFtheMain$d97*)x433)->a2 = v15783869;
                                                        ((struct sFtheMain$d97*)x433)->a3 = v236343658;
                                                        sptr_t v156390962 = MKLAZY(x433);
                                                        {   gc_frame0(gc,1,v156390962);
                                                            wptr_t v100368 = eval(gc,arena,v122224656);
                                                            {   uintmax_t v202317984;
                                                                gc_frame0(gc,1,v100368);
                                                                v202317984 = ((struct sCJhc_Type_Basic_Integer*)v100368)->a1;
                                                                uintmax_t v193506084 = (v202317984 * v38226984);
                                                                uintmax_t v104020522 = (v168091047 + v193506084);
                                                                x432.t0 = v236343658;
                                                                x432.t1 = v156390962;
                                                                x432.t2 = v38226984;
                                                                x432.t3 = v104020522;
                                                                x432.t4 = v160015358;
                                                            }
                                                        }
                                                    }
                                                }
                                                v6474 = x432.t0;
                                                v6477 = x432.t1;
                                                v6480 = x432.t2;
                                                v2770 = x432.t3;
                                                v2772 = x432.t4;
                                                v15783869 = v6474;
                                                v236343658 = v6477;
                                                v168091047 = v6480;
                                                v38226984 = v2770;
                                                v211326633 = v2772;
                                                goto bRfW$__fMain_ratTrans__323;
                                            } else {
                                                /* 1 */
                                                assert(1 == v100364);
                                                wptr_t v100370 = eval(gc,arena,v216121364);
                                                {   uint16_t v171853848;
                                                    gc_frame0(gc,1,v100370);
                                                    v171853848 = ((uint16_t)RAW_GET_UF(v100370));
                                                    if (0 == v171853848) {
                                                        sptr_t v2784;
                                                        sptr_t v6531;
                                                        sptr_t v6540;
                                                        uintmax_t v6534;
                                                        uintmax_t v6537;
                                                        struct tup10 x434;
                                                        wptr_t v100372 = eval(gc,arena,v211326633);
                                                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100372) {
                                                            jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                        } else {
                                                            sptr_t v139082164;
                                                            sptr_t v182382414;
                                                            /* ("CJhc.Prim.Prim.:" ni139082164 ni182382414) */
                                                            v139082164 = ((struct sCJhc_Prim_Prim_$x3a*)v100372)->a1;
                                                            v182382414 = ((struct sCJhc_Prim_Prim_$x3a*)v100372)->a2;
                                                            {   gc_frame0(gc,2,v139082164,v182382414);
                                                                sptr_t x435 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d99);
                                                                ((struct sFtheMain$d99*)x435)->head = TO_FPTR(&E__ftheMain$d99);
                                                                ((struct sFtheMain$d99*)x435)->a1 = v139082164;
                                                                ((struct sFtheMain$d99*)x435)->a2 = v15783869;
                                                                ((struct sFtheMain$d99*)x435)->a3 = v236343658;
                                                                sptr_t v134159172 = MKLAZY(x435);
                                                                {   gc_frame0(gc,1,v134159172);
                                                                    wptr_t v100374 = eval(gc,arena,v139082164);
                                                                    {   uintmax_t v80626762;
                                                                        gc_frame0(gc,1,v100374);
                                                                        v80626762 = ((struct sCJhc_Type_Basic_Integer*)v100374)->a1;
                                                                        uintmax_t v58099868 = (v80626762 * v38226984);
                                                                        uintmax_t v167014402 = (v168091047 + v58099868);
                                                                        x434.t0 = v236343658;
                                                                        x434.t1 = v134159172;
                                                                        x434.t2 = v38226984;
                                                                        x434.t3 = v167014402;
                                                                        x434.t4 = v182382414;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        v2784 = x434.t0;
                                                        v6531 = x434.t1;
                                                        v6534 = x434.t2;
                                                        v6537 = x434.t3;
                                                        v6540 = x434.t4;
                                                        v15783869 = v2784;
                                                        v236343658 = v6531;
                                                        v168091047 = v6534;
                                                        v38226984 = v6537;
                                                        v211326633 = v6540;
                                                        goto bRfW$__fMain_ratTrans__323;
                                                    } else {
                                                        /* 1 */
                                                        assert(1 == v171853848);
                                                        wptr_t x436 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x436)->a1 = v168091047;
                                                        wptr_t v6694 = x436;
                                                        {   gc_frame0(gc,1,v6694);
                                                            wptr_t x437 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                            ((struct sCJhc_Type_Basic_Integer*)x437)->a1 = v38226984;
                                                            wptr_t v2974 = x437;
                                                            {   gc_frame0(gc,1,v2974);
                                                                sptr_t x438 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d98);
                                                                ((struct sFtheMain$d98*)x438)->head = TO_FPTR(&E__ftheMain$d98);
                                                                ((struct sFtheMain$d98*)x438)->a1 = v38226984;
                                                                ((struct sFtheMain$d98*)x438)->a2 = v15783869;
                                                                ((struct sFtheMain$d98*)x438)->a3 = v2974;
                                                                ((struct sFtheMain$d98*)x438)->a4 = v168091047;
                                                                ((struct sFtheMain$d98*)x438)->a5 = v257895264;
                                                                ((struct sFtheMain$d98*)x438)->a6 = v6694;
                                                                ((struct sFtheMain$d98*)x438)->a7 = v211326633;
                                                                ((struct sFtheMain$d98*)x438)->a8 = v236343658;
                                                                sptr_t v256950264 = MKLAZY(x438);
                                                                {   gc_frame0(gc,1,v256950264);
                                                                    wptr_t x439 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x439)->a1 = v257895264;
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x439)->a2 = v256950264;
                                                                    return x439;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            /* 1 */
                                            assert(1 == v100350);
                                            uintmax_t v55142476 = (-((intmax_t)v38226984));
                                            uint16_t v100352 = (((intmax_t)v168091047) < ((intmax_t)v55142476));
                                            if (0 == v100352) {
                                                sptr_t v10054;
                                                sptr_t v2730;
                                                sptr_t v2732;
                                                uintmax_t v2734;
                                                uintmax_t v2736;
                                                struct tup10 x440;
                                                wptr_t v100354 = eval(gc,arena,v211326633);
                                                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100354) {
                                                    jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                } else {
                                                    sptr_t v16425688;
                                                    sptr_t v264677748;
                                                    /* ("CJhc.Prim.Prim.:" ni16425688 ni264677748) */
                                                    v16425688 = ((struct sCJhc_Prim_Prim_$x3a*)v100354)->a1;
                                                    v264677748 = ((struct sCJhc_Prim_Prim_$x3a*)v100354)->a2;
                                                    {   gc_frame0(gc,2,v16425688,v264677748);
                                                        sptr_t x441 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d94);
                                                        ((struct sFtheMain$d94*)x441)->head = TO_FPTR(&E__ftheMain$d94);
                                                        ((struct sFtheMain$d94*)x441)->a1 = v16425688;
                                                        ((struct sFtheMain$d94*)x441)->a2 = v15783869;
                                                        ((struct sFtheMain$d94*)x441)->a3 = v236343658;
                                                        sptr_t v206629274 = MKLAZY(x441);
                                                        {   gc_frame0(gc,1,v206629274);
                                                            wptr_t v100356 = eval(gc,arena,v16425688);
                                                            {   uintmax_t v225857772;
                                                                gc_frame0(gc,1,v100356);
                                                                v225857772 = ((struct sCJhc_Type_Basic_Integer*)v100356)->a1;
                                                                uintmax_t v197417224 = (v225857772 * v38226984);
                                                                uintmax_t v2911318 = (v168091047 + v197417224);
                                                                x440.t0 = v236343658;
                                                                x440.t1 = v206629274;
                                                                x440.t2 = v38226984;
                                                                x440.t3 = v2911318;
                                                                x440.t4 = v264677748;
                                                            }
                                                        }
                                                    }
                                                }
                                                v2730 = x440.t0;
                                                v2732 = x440.t1;
                                                v2734 = x440.t2;
                                                v2736 = x440.t3;
                                                v10054 = x440.t4;
                                                v15783869 = v2730;
                                                v236343658 = v2732;
                                                v168091047 = v2734;
                                                v38226984 = v2736;
                                                v211326633 = v10054;
                                                goto bRfW$__fMain_ratTrans__323;
                                            } else {
                                                /* 1 */
                                                assert(1 == v100352);
                                                wptr_t v100358 = eval(gc,arena,v216121364);
                                                {   uint16_t v221866534;
                                                    gc_frame0(gc,1,v100358);
                                                    v221866534 = ((uint16_t)RAW_GET_UF(v100358));
                                                    if (0 == v221866534) {
                                                        sptr_t v2752;
                                                        sptr_t v5211;
                                                        sptr_t v5511;
                                                        uintmax_t v2754;
                                                        uintmax_t v5508;
                                                        struct tup10 x442;
                                                        wptr_t v100360 = eval(gc,arena,v211326633);
                                                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100360) {
                                                            jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                        } else {
                                                            sptr_t v13468756;
                                                            sptr_t v138245502;
                                                            /* ("CJhc.Prim.Prim.:" ni13468756 ni138245502) */
                                                            v13468756 = ((struct sCJhc_Prim_Prim_$x3a*)v100360)->a1;
                                                            v138245502 = ((struct sCJhc_Prim_Prim_$x3a*)v100360)->a2;
                                                            {   gc_frame0(gc,2,v13468756,v138245502);
                                                                sptr_t x443 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d96);
                                                                ((struct sFtheMain$d96*)x443)->head = TO_FPTR(&E__ftheMain$d96);
                                                                ((struct sFtheMain$d96*)x443)->a1 = v15783869;
                                                                ((struct sFtheMain$d96*)x443)->a2 = v13468756;
                                                                ((struct sFtheMain$d96*)x443)->a3 = v236343658;
                                                                sptr_t v35878056 = MKLAZY(x443);
                                                                {   gc_frame0(gc,1,v35878056);
                                                                    wptr_t v100362 = eval(gc,arena,v13468756);
                                                                    {   uintmax_t v187576968;
                                                                        gc_frame0(gc,1,v100362);
                                                                        v187576968 = ((struct sCJhc_Type_Basic_Integer*)v100362)->a1;
                                                                        uintmax_t v197827700 = (v187576968 * v38226984);
                                                                        uintmax_t v128930120 = (v168091047 + v197827700);
                                                                        x442.t0 = v236343658;
                                                                        x442.t1 = v35878056;
                                                                        x442.t2 = v38226984;
                                                                        x442.t3 = v128930120;
                                                                        x442.t4 = v138245502;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        v5211 = x442.t0;
                                                        v2752 = x442.t1;
                                                        v2754 = x442.t2;
                                                        v5508 = x442.t3;
                                                        v5511 = x442.t4;
                                                        v15783869 = v5211;
                                                        v236343658 = v2752;
                                                        v168091047 = v2754;
                                                        v38226984 = v5508;
                                                        v211326633 = v5511;
                                                        goto bRfW$__fMain_ratTrans__323;
                                                    } else {
                                                        /* 1 */
                                                        assert(1 == v221866534);
                                                        wptr_t x444 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x444)->a1 = v168091047;
                                                        wptr_t v2943 = x444;
                                                        {   gc_frame0(gc,1,v2943);
                                                            wptr_t x445 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                            ((struct sCJhc_Type_Basic_Integer*)x445)->a1 = v38226984;
                                                            wptr_t v2945 = x445;
                                                            {   gc_frame0(gc,1,v2945);
                                                                sptr_t x446 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d95);
                                                                ((struct sFtheMain$d95*)x446)->head = TO_FPTR(&E__ftheMain$d95);
                                                                ((struct sFtheMain$d95*)x446)->a1 = v2943;
                                                                ((struct sFtheMain$d95*)x446)->a2 = v38226984;
                                                                ((struct sFtheMain$d95*)x446)->a3 = v15783869;
                                                                ((struct sFtheMain$d95*)x446)->a4 = v2945;
                                                                ((struct sFtheMain$d95*)x446)->a5 = v168091047;
                                                                ((struct sFtheMain$d95*)x446)->a6 = v257895264;
                                                                ((struct sFtheMain$d95*)x446)->a7 = v211326633;
                                                                ((struct sFtheMain$d95*)x446)->a8 = v236343658;
                                                                sptr_t v173090278 = MKLAZY(x446);
                                                                {   gc_frame0(gc,1,v173090278);
                                                                    wptr_t x447 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x447)->a1 = v257895264;
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x447)->a2 = v173090278;
                                                                    return x447;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        /* 1 */
                                        assert(1 == v100322);
                                        uintmax_t v109675484 = (-((intmax_t)v168091047));
                                        uint16_t v100324 = (((intmax_t)0) > ((intmax_t)v38226984));
                                        if (0 == v100324) {
                                            uint16_t v100338 = (((intmax_t)v109675484) < ((intmax_t)v38226984));
                                            if (0 == v100338) {
                                                sptr_t v2694;
                                                sptr_t v2696;
                                                sptr_t v2702;
                                                uintmax_t v2698;
                                                uintmax_t v2700;
                                                struct tup10 x448;
                                                wptr_t v100340 = eval(gc,arena,v211326633);
                                                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100340) {
                                                    jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                } else {
                                                    sptr_t v49539684;
                                                    sptr_t v61415102;
                                                    /* ("CJhc.Prim.Prim.:" ni61415102 ni49539684) */
                                                    v61415102 = ((struct sCJhc_Prim_Prim_$x3a*)v100340)->a1;
                                                    v49539684 = ((struct sCJhc_Prim_Prim_$x3a*)v100340)->a2;
                                                    {   gc_frame0(gc,2,v49539684,v61415102);
                                                        sptr_t x449 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d91);
                                                        ((struct sFtheMain$d91*)x449)->head = TO_FPTR(&E__ftheMain$d91);
                                                        ((struct sFtheMain$d91*)x449)->a1 = v61415102;
                                                        ((struct sFtheMain$d91*)x449)->a2 = v15783869;
                                                        ((struct sFtheMain$d91*)x449)->a3 = v236343658;
                                                        sptr_t v58800116 = MKLAZY(x449);
                                                        {   gc_frame0(gc,1,v58800116);
                                                            wptr_t v100342 = eval(gc,arena,v61415102);
                                                            {   uintmax_t v32824934;
                                                                gc_frame0(gc,1,v100342);
                                                                v32824934 = ((struct sCJhc_Type_Basic_Integer*)v100342)->a1;
                                                                uintmax_t v175502018 = (v32824934 * v38226984);
                                                                uintmax_t v106329926 = (v168091047 + v175502018);
                                                                x448.t0 = v236343658;
                                                                x448.t1 = v58800116;
                                                                x448.t2 = v38226984;
                                                                x448.t3 = v106329926;
                                                                x448.t4 = v49539684;
                                                            }
                                                        }
                                                    }
                                                }
                                                v2694 = x448.t0;
                                                v2696 = x448.t1;
                                                v2698 = x448.t2;
                                                v2700 = x448.t3;
                                                v2702 = x448.t4;
                                                v15783869 = v2694;
                                                v236343658 = v2696;
                                                v168091047 = v2698;
                                                v38226984 = v2700;
                                                v211326633 = v2702;
                                                goto bRfW$__fMain_ratTrans__323;
                                            } else {
                                                /* 1 */
                                                assert(1 == v100338);
                                                wptr_t v100344 = eval(gc,arena,v216121364);
                                                {   uint16_t v161577756;
                                                    gc_frame0(gc,1,v100344);
                                                    v161577756 = ((uint16_t)RAW_GET_UF(v100344));
                                                    if (0 == v161577756) {
                                                        sptr_t v2714;
                                                        sptr_t v2716;
                                                        sptr_t v5439;
                                                        uintmax_t v2718;
                                                        uintmax_t v5436;
                                                        struct tup10 x450;
                                                        wptr_t v100346 = eval(gc,arena,v211326633);
                                                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100346) {
                                                            jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                        } else {
                                                            sptr_t v245239694;
                                                            sptr_t v32638414;
                                                            /* ("CJhc.Prim.Prim.:" ni32638414 ni245239694) */
                                                            v32638414 = ((struct sCJhc_Prim_Prim_$x3a*)v100346)->a1;
                                                            v245239694 = ((struct sCJhc_Prim_Prim_$x3a*)v100346)->a2;
                                                            {   gc_frame0(gc,2,v32638414,v245239694);
                                                                sptr_t x451 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d93);
                                                                ((struct sFtheMain$d93*)x451)->head = TO_FPTR(&E__ftheMain$d93);
                                                                ((struct sFtheMain$d93*)x451)->a1 = v15783869;
                                                                ((struct sFtheMain$d93*)x451)->a2 = v32638414;
                                                                ((struct sFtheMain$d93*)x451)->a3 = v236343658;
                                                                sptr_t v19462814 = MKLAZY(x451);
                                                                {   gc_frame0(gc,1,v19462814);
                                                                    wptr_t v100348 = eval(gc,arena,v32638414);
                                                                    {   uintmax_t v205657476;
                                                                        gc_frame0(gc,1,v100348);
                                                                        v205657476 = ((struct sCJhc_Type_Basic_Integer*)v100348)->a1;
                                                                        uintmax_t v159177514 = (v205657476 * v38226984);
                                                                        uintmax_t v97787036 = (v168091047 + v159177514);
                                                                        x450.t0 = v236343658;
                                                                        x450.t1 = v19462814;
                                                                        x450.t2 = v38226984;
                                                                        x450.t3 = v97787036;
                                                                        x450.t4 = v245239694;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        v2714 = x450.t0;
                                                        v2716 = x450.t1;
                                                        v2718 = x450.t2;
                                                        v5436 = x450.t3;
                                                        v5439 = x450.t4;
                                                        v15783869 = v2714;
                                                        v236343658 = v2716;
                                                        v168091047 = v2718;
                                                        v38226984 = v5436;
                                                        v211326633 = v5439;
                                                        goto bRfW$__fMain_ratTrans__323;
                                                    } else {
                                                        /* 1 */
                                                        assert(1 == v161577756);
                                                        wptr_t x452 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x452)->a1 = v168091047;
                                                        wptr_t v6520 = x452;
                                                        {   gc_frame0(gc,1,v6520);
                                                            wptr_t x453 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                            ((struct sCJhc_Type_Basic_Integer*)x453)->a1 = v38226984;
                                                            wptr_t v6523 = x453;
                                                            {   gc_frame0(gc,1,v6523);
                                                                sptr_t x454 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d92);
                                                                ((struct sFtheMain$d92*)x454)->head = TO_FPTR(&E__ftheMain$d92);
                                                                ((struct sFtheMain$d92*)x454)->a1 = v38226984;
                                                                ((struct sFtheMain$d92*)x454)->a2 = v15783869;
                                                                ((struct sFtheMain$d92*)x454)->a3 = v6523;
                                                                ((struct sFtheMain$d92*)x454)->a4 = v168091047;
                                                                ((struct sFtheMain$d92*)x454)->a5 = v257895264;
                                                                ((struct sFtheMain$d92*)x454)->a6 = v6520;
                                                                ((struct sFtheMain$d92*)x454)->a7 = v211326633;
                                                                ((struct sFtheMain$d92*)x454)->a8 = v236343658;
                                                                sptr_t v74410710 = MKLAZY(x454);
                                                                {   gc_frame0(gc,1,v74410710);
                                                                    wptr_t x455 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x455)->a1 = v257895264;
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x455)->a2 = v74410710;
                                                                    return x455;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            /* 1 */
                                            assert(1 == v100324);
                                            uintmax_t v113659716 = (-((intmax_t)v38226984));
                                            uint16_t v100326 = (((intmax_t)v109675484) < ((intmax_t)v113659716));
                                            if (0 == v100326) {
                                                sptr_t v2668;
                                                sptr_t v5319;
                                                sptr_t v5322;
                                                uintmax_t v2664;
                                                uintmax_t v2666;
                                                struct tup10 x456;
                                                wptr_t v100328 = eval(gc,arena,v211326633);
                                                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100328) {
                                                    jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                } else {
                                                    sptr_t v109675486;
                                                    sptr_t v61415100;
                                                    /* ("CJhc.Prim.Prim.:" ni109675486 ni61415100) */
                                                    v109675486 = ((struct sCJhc_Prim_Prim_$x3a*)v100328)->a1;
                                                    v61415100 = ((struct sCJhc_Prim_Prim_$x3a*)v100328)->a2;
                                                    {   gc_frame0(gc,2,v61415100,v109675486);
                                                        sptr_t x457 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d88);
                                                        ((struct sFtheMain$d88*)x457)->head = TO_FPTR(&E__ftheMain$d88);
                                                        ((struct sFtheMain$d88*)x457)->a1 = v15783869;
                                                        ((struct sFtheMain$d88*)x457)->a2 = v109675486;
                                                        ((struct sFtheMain$d88*)x457)->a3 = v236343658;
                                                        sptr_t v66251204 = MKLAZY(x457);
                                                        {   gc_frame0(gc,1,v66251204);
                                                            wptr_t v100330 = eval(gc,arena,v109675486);
                                                            {   uintmax_t v170633594;
                                                                gc_frame0(gc,1,v100330);
                                                                v170633594 = ((struct sCJhc_Type_Basic_Integer*)v100330)->a1;
                                                                uintmax_t v97156880 = (v170633594 * v38226984);
                                                                uintmax_t v86943492 = (v168091047 + v97156880);
                                                                x456.t0 = v236343658;
                                                                x456.t1 = v66251204;
                                                                x456.t2 = v38226984;
                                                                x456.t3 = v86943492;
                                                                x456.t4 = v61415100;
                                                            }
                                                        }
                                                    }
                                                }
                                                v5319 = x456.t0;
                                                v5322 = x456.t1;
                                                v2664 = x456.t2;
                                                v2666 = x456.t3;
                                                v2668 = x456.t4;
                                                v15783869 = v5319;
                                                v236343658 = v5322;
                                                v168091047 = v2664;
                                                v38226984 = v2666;
                                                v211326633 = v2668;
                                                goto bRfW$__fMain_ratTrans__323;
                                            } else {
                                                /* 1 */
                                                assert(1 == v100326);
                                                wptr_t v100332 = eval(gc,arena,v216121364);
                                                {   uint16_t v13468754;
                                                    gc_frame0(gc,1,v100332);
                                                    v13468754 = ((uint16_t)RAW_GET_UF(v100332));
                                                    if (0 == v13468754) {
                                                        sptr_t v2680;
                                                        sptr_t v6257;
                                                        sptr_t v6266;
                                                        uintmax_t v6260;
                                                        uintmax_t v6263;
                                                        struct tup10 x458;
                                                        wptr_t v100334 = eval(gc,arena,v211326633);
                                                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100334) {
                                                            jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                        } else {
                                                            sptr_t v12597810;
                                                            sptr_t v77124648;
                                                            /* ("CJhc.Prim.Prim.:" ni77124648 ni12597810) */
                                                            v77124648 = ((struct sCJhc_Prim_Prim_$x3a*)v100334)->a1;
                                                            v12597810 = ((struct sCJhc_Prim_Prim_$x3a*)v100334)->a2;
                                                            {   gc_frame0(gc,2,v12597810,v77124648);
                                                                sptr_t x459 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d90);
                                                                ((struct sFtheMain$d90*)x459)->head = TO_FPTR(&E__ftheMain$d90);
                                                                ((struct sFtheMain$d90*)x459)->a1 = v77124648;
                                                                ((struct sFtheMain$d90*)x459)->a2 = v15783869;
                                                                ((struct sFtheMain$d90*)x459)->a3 = v236343658;
                                                                sptr_t v47792492 = MKLAZY(x459);
                                                                {   gc_frame0(gc,1,v47792492);
                                                                    wptr_t v100336 = eval(gc,arena,v77124648);
                                                                    {   uintmax_t v231094584;
                                                                        gc_frame0(gc,1,v100336);
                                                                        v231094584 = ((struct sCJhc_Type_Basic_Integer*)v100336)->a1;
                                                                        uintmax_t v72446292 = (v231094584 * v38226984);
                                                                        uintmax_t v224579918 = (v168091047 + v72446292);
                                                                        x458.t0 = v236343658;
                                                                        x458.t1 = v47792492;
                                                                        x458.t2 = v38226984;
                                                                        x458.t3 = v224579918;
                                                                        x458.t4 = v12597810;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        v2680 = x458.t0;
                                                        v6257 = x458.t1;
                                                        v6260 = x458.t2;
                                                        v6263 = x458.t3;
                                                        v6266 = x458.t4;
                                                        v15783869 = v2680;
                                                        v236343658 = v6257;
                                                        v168091047 = v6260;
                                                        v38226984 = v6263;
                                                        v211326633 = v6266;
                                                        goto bRfW$__fMain_ratTrans__323;
                                                    } else {
                                                        /* 1 */
                                                        assert(1 == v13468754);
                                                        wptr_t x460 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x460)->a1 = v168091047;
                                                        wptr_t v2883 = x460;
                                                        {   gc_frame0(gc,1,v2883);
                                                            wptr_t x461 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                            ((struct sCJhc_Type_Basic_Integer*)x461)->a1 = v38226984;
                                                            wptr_t v2885 = x461;
                                                            {   gc_frame0(gc,1,v2885);
                                                                sptr_t x462 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d89);
                                                                ((struct sFtheMain$d89*)x462)->head = TO_FPTR(&E__ftheMain$d89);
                                                                ((struct sFtheMain$d89*)x462)->a1 = v38226984;
                                                                ((struct sFtheMain$d89*)x462)->a2 = v15783869;
                                                                ((struct sFtheMain$d89*)x462)->a3 = v2885;
                                                                ((struct sFtheMain$d89*)x462)->a4 = v168091047;
                                                                ((struct sFtheMain$d89*)x462)->a5 = v257895264;
                                                                ((struct sFtheMain$d89*)x462)->a6 = v2883;
                                                                ((struct sFtheMain$d89*)x462)->a7 = v211326633;
                                                                ((struct sFtheMain$d89*)x462)->a8 = v236343658;
                                                                sptr_t v40201294 = MKLAZY(x462);
                                                                {   gc_frame0(gc,1,v40201294);
                                                                    wptr_t x463 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x463)->a1 = v257895264;
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x463)->a2 = v40201294;
                                                                    return x463;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    /* 1 */
                    assert(1 == v100138);
                    if (0 == v38226984) {
                        uintmax_t v137642918 = (v168091047 + v38226984);
                        {   gc_frame0(gc,3,v15783869,v211326633,v236343658);
                            sptr_t x464 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d40);
                            ((struct sFtheMain$d40*)x464)->head = TO_FPTR(&E__ftheMain$d40);
                            ((struct sFtheMain$d40*)x464)->a1 = v38226984;
                            ((struct sFtheMain$d40*)x464)->a2 = v236343658;
                            sptr_t v154246482 = MKLAZY(x464);
                            {   gc_frame0(gc,1,v154246482);
                                sptr_t x465 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d41);
                                ((struct sFtheMain$d41*)x465)->head = TO_FPTR(&E__ftheMain$d41);
                                ((struct sFtheMain$d41*)x465)->a1 = v38226984;
                                ((struct sFtheMain$d41*)x465)->a2 = v15783869;
                                ((struct sFtheMain$d41*)x465)->a3 = v168091047;
                                ((struct sFtheMain$d41*)x465)->a4 = v154246482;
                                ((struct sFtheMain$d41*)x465)->a5 = v137642918;
                                ((struct sFtheMain$d41*)x465)->a6 = v236343658;
                                sptr_t v39930316 = MKLAZY(x465);
                                uint16_t v100140 = (((intmax_t)0) > ((intmax_t)v168091047));
                                if (0 == v100140) {
                                    uint16_t v100168 = (((intmax_t)0) > ((intmax_t)v38226984));
                                    if (0 == v100168) {
                                        uint16_t v100182 = (((intmax_t)v168091047) < ((intmax_t)v38226984));
                                        if (0 == v100182) {
                                            sptr_t v2305;
                                            sptr_t v5238;
                                            sptr_t v5241;
                                            uintmax_t v2303;
                                            uintmax_t v5244;
                                            struct tup10 x466;
                                            wptr_t v100184 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100184) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v240841804;
                                                sptr_t v56032206;
                                                /* ("CJhc.Prim.Prim.:" ni56032206 ni240841804) */
                                                v56032206 = ((struct sCJhc_Prim_Prim_$x3a*)v100184)->a1;
                                                v240841804 = ((struct sCJhc_Prim_Prim_$x3a*)v100184)->a2;
                                                {   gc_frame0(gc,2,v56032206,v240841804);
                                                    sptr_t x467 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d51);
                                                    ((struct sFtheMain$d51*)x467)->head = TO_FPTR(&E__ftheMain$d51);
                                                    ((struct sFtheMain$d51*)x467)->a1 = v15783869;
                                                    ((struct sFtheMain$d51*)x467)->a2 = v56032206;
                                                    ((struct sFtheMain$d51*)x467)->a3 = v236343658;
                                                    sptr_t v102549694 = MKLAZY(x467);
                                                    {   gc_frame0(gc,1,v102549694);
                                                        wptr_t v100186 = eval(gc,arena,v56032206);
                                                        {   uintmax_t v189920628;
                                                            gc_frame0(gc,1,v100186);
                                                            v189920628 = ((struct sCJhc_Type_Basic_Integer*)v100186)->a1;
                                                            uintmax_t v110426250 = (v189920628 * v38226984);
                                                            uintmax_t v125395082 = (v168091047 + v110426250);
                                                            x466.t0 = v236343658;
                                                            x466.t1 = v102549694;
                                                            x466.t2 = v38226984;
                                                            x466.t3 = v125395082;
                                                            x466.t4 = v240841804;
                                                        }
                                                    }
                                                }
                                            }
                                            v5238 = x466.t0;
                                            v5241 = x466.t1;
                                            v5244 = x466.t2;
                                            v2303 = x466.t3;
                                            v2305 = x466.t4;
                                            v15783869 = v5238;
                                            v236343658 = v5241;
                                            v168091047 = v5244;
                                            v38226984 = v2303;
                                            v211326633 = v2305;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100182);
                                            wptr_t v100188 = eval(gc,arena,v39930316);
                                            {   uint16_t v77051620;
                                                gc_frame0(gc,1,v100188);
                                                v77051620 = ((uint16_t)RAW_GET_UF(v100188));
                                                if (0 == v77051620) {
                                                    sptr_t v2317;
                                                    sptr_t v2319;
                                                    sptr_t v2325;
                                                    uintmax_t v2321;
                                                    uintmax_t v2323;
                                                    struct tup10 x468;
                                                    wptr_t v100190 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100190) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v113231160;
                                                        sptr_t v86251126;
                                                        /* ("CJhc.Prim.Prim.:" ni86251126 ni113231160) */
                                                        v86251126 = ((struct sCJhc_Prim_Prim_$x3a*)v100190)->a1;
                                                        v113231160 = ((struct sCJhc_Prim_Prim_$x3a*)v100190)->a2;
                                                        {   gc_frame0(gc,2,v86251126,v113231160);
                                                            sptr_t x469 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d53);
                                                            ((struct sFtheMain$d53*)x469)->head = TO_FPTR(&E__ftheMain$d53);
                                                            ((struct sFtheMain$d53*)x469)->a1 = v15783869;
                                                            ((struct sFtheMain$d53*)x469)->a2 = v86251126;
                                                            ((struct sFtheMain$d53*)x469)->a3 = v236343658;
                                                            sptr_t v208569444 = MKLAZY(x469);
                                                            {   gc_frame0(gc,1,v208569444);
                                                                wptr_t v100192 = eval(gc,arena,v86251126);
                                                                {   uintmax_t v257965284;
                                                                    gc_frame0(gc,1,v100192);
                                                                    v257965284 = ((struct sCJhc_Type_Basic_Integer*)v100192)->a1;
                                                                    uintmax_t v211799396 = (v257965284 * v38226984);
                                                                    uintmax_t v254927758 = (v168091047 + v211799396);
                                                                    x468.t0 = v236343658;
                                                                    x468.t1 = v208569444;
                                                                    x468.t2 = v38226984;
                                                                    x468.t3 = v254927758;
                                                                    x468.t4 = v113231160;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v2317 = x468.t0;
                                                    v2319 = x468.t1;
                                                    v2321 = x468.t2;
                                                    v2323 = x468.t3;
                                                    v2325 = x468.t4;
                                                    v15783869 = v2317;
                                                    v236343658 = v2319;
                                                    v168091047 = v2321;
                                                    v38226984 = v2323;
                                                    v211326633 = v2325;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v77051620);
                                                    wptr_t x470 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x470)->a1 = v168091047;
                                                    wptr_t v5521 = x470;
                                                    {   gc_frame0(gc,1,v5521);
                                                        wptr_t x471 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x471)->a1 = v38226984;
                                                        wptr_t v5524 = x471;
                                                        {   gc_frame0(gc,1,v5524);
                                                            sptr_t x472 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d52);
                                                            ((struct sFtheMain$d52*)x472)->head = TO_FPTR(&E__ftheMain$d52);
                                                            ((struct sFtheMain$d52*)x472)->a1 = v38226984;
                                                            ((struct sFtheMain$d52*)x472)->a2 = v15783869;
                                                            ((struct sFtheMain$d52*)x472)->a3 = v5521;
                                                            ((struct sFtheMain$d52*)x472)->a4 = v5524;
                                                            ((struct sFtheMain$d52*)x472)->a5 = v168091047;
                                                            ((struct sFtheMain$d52*)x472)->a6 = v154246482;
                                                            ((struct sFtheMain$d52*)x472)->a7 = v211326633;
                                                            ((struct sFtheMain$d52*)x472)->a8 = v236343658;
                                                            sptr_t v211324748 = MKLAZY(x472);
                                                            {   gc_frame0(gc,1,v211324748);
                                                                wptr_t x473 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x473)->a1 = v154246482;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x473)->a2 = v211324748;
                                                                return x473;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        /* 1 */
                                        assert(1 == v100168);
                                        uintmax_t v188712734 = (-((intmax_t)v38226984));
                                        uint16_t v100170 = (((intmax_t)v168091047) < ((intmax_t)v188712734));
                                        if (0 == v100170) {
                                            sptr_t v2263;
                                            sptr_t v5160;
                                            sptr_t v8037;
                                            uintmax_t v5157;
                                            uintmax_t v8041;
                                            struct tup10 x474;
                                            wptr_t v100172 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100172) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v111069278;
                                                sptr_t v17089570;
                                                /* ("CJhc.Prim.Prim.:" ni111069278 ni17089570) */
                                                v111069278 = ((struct sCJhc_Prim_Prim_$x3a*)v100172)->a1;
                                                v17089570 = ((struct sCJhc_Prim_Prim_$x3a*)v100172)->a2;
                                                {   gc_frame0(gc,2,v17089570,v111069278);
                                                    sptr_t x475 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d48);
                                                    ((struct sFtheMain$d48*)x475)->head = TO_FPTR(&E__ftheMain$d48);
                                                    ((struct sFtheMain$d48*)x475)->a1 = v15783869;
                                                    ((struct sFtheMain$d48*)x475)->a2 = v111069278;
                                                    ((struct sFtheMain$d48*)x475)->a3 = v236343658;
                                                    sptr_t v24658042 = MKLAZY(x475);
                                                    {   gc_frame0(gc,1,v24658042);
                                                        wptr_t v100174 = eval(gc,arena,v111069278);
                                                        {   uintmax_t v108754598;
                                                            gc_frame0(gc,1,v100174);
                                                            v108754598 = ((struct sCJhc_Type_Basic_Integer*)v100174)->a1;
                                                            uintmax_t v74827120 = (v108754598 * v38226984);
                                                            uintmax_t v31577662 = (v168091047 + v74827120);
                                                            x474.t0 = v236343658;
                                                            x474.t1 = v24658042;
                                                            x474.t2 = v38226984;
                                                            x474.t3 = v31577662;
                                                            x474.t4 = v17089570;
                                                        }
                                                    }
                                                }
                                            }
                                            v2263 = x474.t0;
                                            v8037 = x474.t1;
                                            v8041 = x474.t2;
                                            v5157 = x474.t3;
                                            v5160 = x474.t4;
                                            v15783869 = v2263;
                                            v236343658 = v8037;
                                            v168091047 = v8041;
                                            v38226984 = v5157;
                                            v211326633 = v5160;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100170);
                                            wptr_t v100176 = eval(gc,arena,v39930316);
                                            {   uint16_t v49937462;
                                                gc_frame0(gc,1,v100176);
                                                v49937462 = ((uint16_t)RAW_GET_UF(v100176));
                                                if (0 == v49937462) {
                                                    sptr_t v2283;
                                                    sptr_t v2285;
                                                    sptr_t v2291;
                                                    uintmax_t v4571;
                                                    uintmax_t v6859;
                                                    struct tup10 x476;
                                                    wptr_t v100178 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100178) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v106472802;
                                                        sptr_t v12164544;
                                                        /* ("CJhc.Prim.Prim.:" ni12164544 ni106472802) */
                                                        v12164544 = ((struct sCJhc_Prim_Prim_$x3a*)v100178)->a1;
                                                        v106472802 = ((struct sCJhc_Prim_Prim_$x3a*)v100178)->a2;
                                                        {   gc_frame0(gc,2,v12164544,v106472802);
                                                            sptr_t x477 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d50);
                                                            ((struct sFtheMain$d50*)x477)->head = TO_FPTR(&E__ftheMain$d50);
                                                            ((struct sFtheMain$d50*)x477)->a1 = v15783869;
                                                            ((struct sFtheMain$d50*)x477)->a2 = v12164544;
                                                            ((struct sFtheMain$d50*)x477)->a3 = v236343658;
                                                            sptr_t v242021450 = MKLAZY(x477);
                                                            {   gc_frame0(gc,1,v242021450);
                                                                wptr_t v100180 = eval(gc,arena,v12164544);
                                                                {   uintmax_t v222802716;
                                                                    gc_frame0(gc,1,v100180);
                                                                    v222802716 = ((struct sCJhc_Type_Basic_Integer*)v100180)->a1;
                                                                    uintmax_t v213073448 = (v222802716 * v38226984);
                                                                    uintmax_t v57119688 = (v168091047 + v213073448);
                                                                    x476.t0 = v236343658;
                                                                    x476.t1 = v242021450;
                                                                    x476.t2 = v38226984;
                                                                    x476.t3 = v57119688;
                                                                    x476.t4 = v106472802;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v2283 = x476.t0;
                                                    v2285 = x476.t1;
                                                    v4571 = x476.t2;
                                                    v6859 = x476.t3;
                                                    v2291 = x476.t4;
                                                    v15783869 = v2283;
                                                    v236343658 = v2285;
                                                    v168091047 = v4571;
                                                    v38226984 = v6859;
                                                    v211326633 = v2291;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v49937462);
                                                    wptr_t x478 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x478)->a1 = v168091047;
                                                    wptr_t v2539 = x478;
                                                    {   gc_frame0(gc,1,v2539);
                                                        wptr_t x479 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x479)->a1 = v38226984;
                                                        wptr_t v2541 = x479;
                                                        {   gc_frame0(gc,1,v2541);
                                                            sptr_t x480 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d49);
                                                            ((struct sFtheMain$d49*)x480)->head = TO_FPTR(&E__ftheMain$d49);
                                                            ((struct sFtheMain$d49*)x480)->a1 = v38226984;
                                                            ((struct sFtheMain$d49*)x480)->a2 = v15783869;
                                                            ((struct sFtheMain$d49*)x480)->a3 = v2539;
                                                            ((struct sFtheMain$d49*)x480)->a4 = v2541;
                                                            ((struct sFtheMain$d49*)x480)->a5 = v168091047;
                                                            ((struct sFtheMain$d49*)x480)->a6 = v154246482;
                                                            ((struct sFtheMain$d49*)x480)->a7 = v211326633;
                                                            ((struct sFtheMain$d49*)x480)->a8 = v236343658;
                                                            sptr_t v148739198 = MKLAZY(x480);
                                                            {   gc_frame0(gc,1,v148739198);
                                                                wptr_t x481 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x481)->a1 = v154246482;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x481)->a2 = v148739198;
                                                                return x481;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    /* 1 */
                                    assert(1 == v100140);
                                    uintmax_t v14348048 = (-((intmax_t)v168091047));
                                    uint16_t v100142 = (((intmax_t)0) > ((intmax_t)v38226984));
                                    if (0 == v100142) {
                                        uint16_t v100156 = (((intmax_t)v14348048) < ((intmax_t)v38226984));
                                        if (0 == v100156) {
                                            sptr_t v2235;
                                            sptr_t v4453;
                                            sptr_t v6683;
                                            uintmax_t v2233;
                                            uintmax_t v3777;
                                            struct tup10 x482;
                                            wptr_t v100158 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100158) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v152966620;
                                                sptr_t v79925458;
                                                /* ("CJhc.Prim.Prim.:" ni79925458 ni152966620) */
                                                v79925458 = ((struct sCJhc_Prim_Prim_$x3a*)v100158)->a1;
                                                v152966620 = ((struct sCJhc_Prim_Prim_$x3a*)v100158)->a2;
                                                {   gc_frame0(gc,2,v79925458,v152966620);
                                                    sptr_t x483 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d45);
                                                    ((struct sFtheMain$d45*)x483)->head = TO_FPTR(&E__ftheMain$d45);
                                                    ((struct sFtheMain$d45*)x483)->a1 = v79925458;
                                                    ((struct sFtheMain$d45*)x483)->a2 = v15783869;
                                                    ((struct sFtheMain$d45*)x483)->a3 = v236343658;
                                                    sptr_t v67443754 = MKLAZY(x483);
                                                    {   gc_frame0(gc,1,v67443754);
                                                        wptr_t v100160 = eval(gc,arena,v79925458);
                                                        {   uintmax_t v118972438;
                                                            gc_frame0(gc,1,v100160);
                                                            v118972438 = ((struct sCJhc_Type_Basic_Integer*)v100160)->a1;
                                                            uintmax_t v187028906 = (v118972438 * v38226984);
                                                            uintmax_t v75144256 = (v168091047 + v187028906);
                                                            x482.t0 = v236343658;
                                                            x482.t1 = v67443754;
                                                            x482.t2 = v38226984;
                                                            x482.t3 = v75144256;
                                                            x482.t4 = v152966620;
                                                        }
                                                    }
                                                }
                                            }
                                            v4453 = x482.t0;
                                            v6683 = x482.t1;
                                            v3777 = x482.t2;
                                            v2233 = x482.t3;
                                            v2235 = x482.t4;
                                            v15783869 = v4453;
                                            v236343658 = v6683;
                                            v168091047 = v3777;
                                            v38226984 = v2233;
                                            v211326633 = v2235;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100156);
                                            wptr_t v100162 = eval(gc,arena,v39930316);
                                            {   uint16_t v60694798;
                                                gc_frame0(gc,1,v100162);
                                                v60694798 = ((uint16_t)RAW_GET_UF(v100162));
                                                if (0 == v60694798) {
                                                    sptr_t v2247;
                                                    sptr_t v2249;
                                                    sptr_t v2255;
                                                    uintmax_t v2251;
                                                    uintmax_t v2253;
                                                    struct tup10 x484;
                                                    wptr_t v100164 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100164) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v228339982;
                                                        sptr_t v45031398;
                                                        /* ("CJhc.Prim.Prim.:" ni228339982 ni45031398) */
                                                        v228339982 = ((struct sCJhc_Prim_Prim_$x3a*)v100164)->a1;
                                                        v45031398 = ((struct sCJhc_Prim_Prim_$x3a*)v100164)->a2;
                                                        {   gc_frame0(gc,2,v45031398,v228339982);
                                                            sptr_t x485 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d47);
                                                            ((struct sFtheMain$d47*)x485)->head = TO_FPTR(&E__ftheMain$d47);
                                                            ((struct sFtheMain$d47*)x485)->a1 = v15783869;
                                                            ((struct sFtheMain$d47*)x485)->a2 = v228339982;
                                                            ((struct sFtheMain$d47*)x485)->a3 = v236343658;
                                                            sptr_t v122892006 = MKLAZY(x485);
                                                            {   gc_frame0(gc,1,v122892006);
                                                                wptr_t v100166 = eval(gc,arena,v228339982);
                                                                {   uintmax_t v125732538;
                                                                    gc_frame0(gc,1,v100166);
                                                                    v125732538 = ((struct sCJhc_Type_Basic_Integer*)v100166)->a1;
                                                                    uintmax_t v67172532 = (v125732538 * v38226984);
                                                                    uintmax_t v189794412 = (v168091047 + v67172532);
                                                                    x484.t0 = v236343658;
                                                                    x484.t1 = v122892006;
                                                                    x484.t2 = v38226984;
                                                                    x484.t3 = v189794412;
                                                                    x484.t4 = v45031398;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v2247 = x484.t0;
                                                    v2249 = x484.t1;
                                                    v2251 = x484.t2;
                                                    v2253 = x484.t3;
                                                    v2255 = x484.t4;
                                                    v15783869 = v2247;
                                                    v236343658 = v2249;
                                                    v168091047 = v2251;
                                                    v38226984 = v2253;
                                                    v211326633 = v2255;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v60694798);
                                                    wptr_t x486 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x486)->a1 = v168091047;
                                                    wptr_t v5347 = x486;
                                                    {   gc_frame0(gc,1,v5347);
                                                        wptr_t x487 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x487)->a1 = v38226984;
                                                        wptr_t v5350 = x487;
                                                        {   gc_frame0(gc,1,v5350);
                                                            sptr_t x488 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d46);
                                                            ((struct sFtheMain$d46*)x488)->head = TO_FPTR(&E__ftheMain$d46);
                                                            ((struct sFtheMain$d46*)x488)->a1 = v38226984;
                                                            ((struct sFtheMain$d46*)x488)->a2 = v15783869;
                                                            ((struct sFtheMain$d46*)x488)->a3 = v168091047;
                                                            ((struct sFtheMain$d46*)x488)->a4 = v5347;
                                                            ((struct sFtheMain$d46*)x488)->a5 = v154246482;
                                                            ((struct sFtheMain$d46*)x488)->a6 = v211326633;
                                                            ((struct sFtheMain$d46*)x488)->a7 = v236343658;
                                                            ((struct sFtheMain$d46*)x488)->a8 = v5350;
                                                            sptr_t v97496860 = MKLAZY(x488);
                                                            {   gc_frame0(gc,1,v97496860);
                                                                wptr_t x489 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x489)->a1 = v154246482;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x489)->a2 = v97496860;
                                                                return x489;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        /* 1 */
                                        assert(1 == v100142);
                                        uintmax_t v4177720 = (-((intmax_t)v38226984));
                                        uint16_t v100144 = (((intmax_t)v14348048) < ((intmax_t)v4177720));
                                        if (0 == v100144) {
                                            sptr_t v2193;
                                            sptr_t v2195;
                                            sptr_t v4976;
                                            uintmax_t v4973;
                                            uintmax_t v7743;
                                            struct tup10 x490;
                                            wptr_t v100146 = eval(gc,arena,v211326633);
                                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100146) {
                                                jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                            } else {
                                                sptr_t v1339530;
                                                sptr_t v253572504;
                                                /* ("CJhc.Prim.Prim.:" ni253572504 ni1339530) */
                                                v253572504 = ((struct sCJhc_Prim_Prim_$x3a*)v100146)->a1;
                                                v1339530 = ((struct sCJhc_Prim_Prim_$x3a*)v100146)->a2;
                                                {   gc_frame0(gc,2,v1339530,v253572504);
                                                    sptr_t x491 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d42);
                                                    ((struct sFtheMain$d42*)x491)->head = TO_FPTR(&E__ftheMain$d42);
                                                    ((struct sFtheMain$d42*)x491)->a1 = v15783869;
                                                    ((struct sFtheMain$d42*)x491)->a2 = v253572504;
                                                    ((struct sFtheMain$d42*)x491)->a3 = v236343658;
                                                    sptr_t v135594738 = MKLAZY(x491);
                                                    {   gc_frame0(gc,1,v135594738);
                                                        wptr_t v100148 = eval(gc,arena,v253572504);
                                                        {   uintmax_t v64055160;
                                                            gc_frame0(gc,1,v100148);
                                                            v64055160 = ((struct sCJhc_Type_Basic_Integer*)v100148)->a1;
                                                            uintmax_t v222848748 = (v64055160 * v38226984);
                                                            uintmax_t v61551848 = (v168091047 + v222848748);
                                                            x490.t0 = v236343658;
                                                            x490.t1 = v135594738;
                                                            x490.t2 = v38226984;
                                                            x490.t3 = v61551848;
                                                            x490.t4 = v1339530;
                                                        }
                                                    }
                                                }
                                            }
                                            v2193 = x490.t0;
                                            v2195 = x490.t1;
                                            v7743 = x490.t2;
                                            v4973 = x490.t3;
                                            v4976 = x490.t4;
                                            v15783869 = v2193;
                                            v236343658 = v2195;
                                            v168091047 = v7743;
                                            v38226984 = v4973;
                                            v211326633 = v4976;
                                            goto bRfW$__fMain_ratTrans__323;
                                        } else {
                                            /* 1 */
                                            assert(1 == v100144);
                                            wptr_t v100150 = eval(gc,arena,v39930316);
                                            {   uint16_t v136941090;
                                                gc_frame0(gc,1,v100150);
                                                v136941090 = ((uint16_t)RAW_GET_UF(v100150));
                                                if (0 == v136941090) {
                                                    sptr_t v2221;
                                                    sptr_t v5018;
                                                    sptr_t v5021;
                                                    uintmax_t v2217;
                                                    uintmax_t v5027;
                                                    struct tup10 x492;
                                                    wptr_t v100152 = eval(gc,arena,v211326633);
                                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100152) {
                                                        jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                    } else {
                                                        sptr_t v142926210;
                                                        sptr_t v50997640;
                                                        /* ("CJhc.Prim.Prim.:" ni142926210 ni50997640) */
                                                        v142926210 = ((struct sCJhc_Prim_Prim_$x3a*)v100152)->a1;
                                                        v50997640 = ((struct sCJhc_Prim_Prim_$x3a*)v100152)->a2;
                                                        {   gc_frame0(gc,2,v50997640,v142926210);
                                                            sptr_t x493 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d44);
                                                            ((struct sFtheMain$d44*)x493)->head = TO_FPTR(&E__ftheMain$d44);
                                                            ((struct sFtheMain$d44*)x493)->a1 = v142926210;
                                                            ((struct sFtheMain$d44*)x493)->a2 = v15783869;
                                                            ((struct sFtheMain$d44*)x493)->a3 = v236343658;
                                                            sptr_t v113838350 = MKLAZY(x493);
                                                            {   gc_frame0(gc,1,v113838350);
                                                                wptr_t v100154 = eval(gc,arena,v142926210);
                                                                {   uintmax_t v139338096;
                                                                    gc_frame0(gc,1,v100154);
                                                                    v139338096 = ((struct sCJhc_Type_Basic_Integer*)v100154)->a1;
                                                                    uintmax_t v7252608 = (v139338096 * v38226984);
                                                                    uintmax_t v202424668 = (v168091047 + v7252608);
                                                                    x492.t0 = v236343658;
                                                                    x492.t1 = v113838350;
                                                                    x492.t2 = v38226984;
                                                                    x492.t3 = v202424668;
                                                                    x492.t4 = v50997640;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    v5018 = x492.t0;
                                                    v5021 = x492.t1;
                                                    v2217 = x492.t2;
                                                    v5027 = x492.t3;
                                                    v2221 = x492.t4;
                                                    v15783869 = v5018;
                                                    v236343658 = v5021;
                                                    v168091047 = v2217;
                                                    v38226984 = v5027;
                                                    v211326633 = v2221;
                                                    goto bRfW$__fMain_ratTrans__323;
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v136941090);
                                                    wptr_t x494 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                    ((struct sCJhc_Type_Basic_Integer*)x494)->a1 = v168091047;
                                                    wptr_t v2479 = x494;
                                                    {   gc_frame0(gc,1,v2479);
                                                        wptr_t x495 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x495)->a1 = v38226984;
                                                        wptr_t v2481 = x495;
                                                        {   gc_frame0(gc,1,v2481);
                                                            sptr_t x496 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d43);
                                                            ((struct sFtheMain$d43*)x496)->head = TO_FPTR(&E__ftheMain$d43);
                                                            ((struct sFtheMain$d43*)x496)->a1 = v2479;
                                                            ((struct sFtheMain$d43*)x496)->a2 = v38226984;
                                                            ((struct sFtheMain$d43*)x496)->a3 = v15783869;
                                                            ((struct sFtheMain$d43*)x496)->a4 = v2481;
                                                            ((struct sFtheMain$d43*)x496)->a5 = v168091047;
                                                            ((struct sFtheMain$d43*)x496)->a6 = v154246482;
                                                            ((struct sFtheMain$d43*)x496)->a7 = v211326633;
                                                            ((struct sFtheMain$d43*)x496)->a8 = v236343658;
                                                            sptr_t v265053594 = MKLAZY(x496);
                                                            {   gc_frame0(gc,1,v265053594);
                                                                wptr_t x497 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x497)->a1 = v154246482;
                                                                ((struct sCJhc_Prim_Prim_$x3a*)x497)->a2 = v265053594;
                                                                return x497;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        uint16_t v100194 = (((intmax_t)0) < ((intmax_t)v38226984));
                        if (0 == v100194) {
                            uintmax_t v240132928 = (v168091047 + v38226984);
                            {   gc_frame0(gc,3,v15783869,v211326633,v236343658);
                                sptr_t x498 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d58);
                                ((struct sFtheMain$d58*)x498)->head = TO_FPTR(&E__ftheMain$d58);
                                ((struct sFtheMain$d58*)x498)->a1 = v38226984;
                                ((struct sFtheMain$d58*)x498)->a2 = v236343658;
                                sptr_t v9745020 = MKLAZY(x498);
                                {   gc_frame0(gc,1,v9745020);
                                    sptr_t x499 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d59);
                                    ((struct sFtheMain$d59*)x499)->head = TO_FPTR(&E__ftheMain$d59);
                                    ((struct sFtheMain$d59*)x499)->a1 = v38226984;
                                    ((struct sFtheMain$d59*)x499)->a2 = v15783869;
                                    ((struct sFtheMain$d59*)x499)->a3 = v168091047;
                                    ((struct sFtheMain$d59*)x499)->a4 = v9745020;
                                    ((struct sFtheMain$d59*)x499)->a5 = v236343658;
                                    ((struct sFtheMain$d59*)x499)->a6 = v240132928;
                                    sptr_t v990234 = MKLAZY(x499);
                                    uint16_t v100212 = (((intmax_t)0) > ((intmax_t)v168091047));
                                    if (0 == v100212) {
                                        uint16_t v100240 = (((intmax_t)0) > ((intmax_t)v38226984));
                                        if (0 == v100240) {
                                            uint16_t v100254 = (((intmax_t)v168091047) < ((intmax_t)v38226984));
                                            if (0 == v100254) {
                                                sptr_t v2473;
                                                sptr_t v2475;
                                                sptr_t v4957;
                                                uintmax_t v2477;
                                                uintmax_t v4954;
                                                struct tup10 x500;
                                                wptr_t v100256 = eval(gc,arena,v211326633);
                                                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100256) {
                                                    jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                } else {
                                                    sptr_t v151125780;
                                                    sptr_t v89648032;
                                                    /* ("CJhc.Prim.Prim.:" ni89648032 ni151125780) */
                                                    v89648032 = ((struct sCJhc_Prim_Prim_$x3a*)v100256)->a1;
                                                    v151125780 = ((struct sCJhc_Prim_Prim_$x3a*)v100256)->a2;
                                                    {   gc_frame0(gc,2,v89648032,v151125780);
                                                        sptr_t x501 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d69);
                                                        ((struct sFtheMain$d69*)x501)->head = TO_FPTR(&E__ftheMain$d69);
                                                        ((struct sFtheMain$d69*)x501)->a1 = v15783869;
                                                        ((struct sFtheMain$d69*)x501)->a2 = v89648032;
                                                        ((struct sFtheMain$d69*)x501)->a3 = v236343658;
                                                        sptr_t v58750238 = MKLAZY(x501);
                                                        {   gc_frame0(gc,1,v58750238);
                                                            wptr_t v100258 = eval(gc,arena,v89648032);
                                                            {   uintmax_t v52354974;
                                                                gc_frame0(gc,1,v100258);
                                                                v52354974 = ((struct sCJhc_Type_Basic_Integer*)v100258)->a1;
                                                                uintmax_t v136477494 = (v52354974 * v38226984);
                                                                uintmax_t v240671510 = (v168091047 + v136477494);
                                                                x500.t0 = v236343658;
                                                                x500.t1 = v58750238;
                                                                x500.t2 = v38226984;
                                                                x500.t3 = v240671510;
                                                                x500.t4 = v151125780;
                                                            }
                                                        }
                                                    }
                                                }
                                                v2473 = x500.t0;
                                                v2475 = x500.t1;
                                                v2477 = x500.t2;
                                                v4954 = x500.t3;
                                                v4957 = x500.t4;
                                                v15783869 = v2473;
                                                v236343658 = v2475;
                                                v168091047 = v2477;
                                                v38226984 = v4954;
                                                v211326633 = v4957;
                                                goto bRfW$__fMain_ratTrans__323;
                                            } else {
                                                /* 1 */
                                                assert(1 == v100254);
                                                wptr_t v100260 = eval(gc,arena,v990234);
                                                {   uint16_t v64465060;
                                                    gc_frame0(gc,1,v100260);
                                                    v64465060 = ((uint16_t)RAW_GET_UF(v100260));
                                                    if (0 == v64465060) {
                                                        sptr_t v2493;
                                                        sptr_t v2495;
                                                        sptr_t v5765;
                                                        uintmax_t v4507;
                                                        uintmax_t v5759;
                                                        struct tup10 x502;
                                                        wptr_t v100262 = eval(gc,arena,v211326633);
                                                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100262) {
                                                            jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                        } else {
                                                            sptr_t v239100276;
                                                            sptr_t v239631886;
                                                            /* ("CJhc.Prim.Prim.:" ni239631886 ni239100276) */
                                                            v239631886 = ((struct sCJhc_Prim_Prim_$x3a*)v100262)->a1;
                                                            v239100276 = ((struct sCJhc_Prim_Prim_$x3a*)v100262)->a2;
                                                            {   gc_frame0(gc,2,v239100276,v239631886);
                                                                sptr_t x503 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d71);
                                                                ((struct sFtheMain$d71*)x503)->head = TO_FPTR(&E__ftheMain$d71);
                                                                ((struct sFtheMain$d71*)x503)->a1 = v15783869;
                                                                ((struct sFtheMain$d71*)x503)->a2 = v239631886;
                                                                ((struct sFtheMain$d71*)x503)->a3 = v236343658;
                                                                sptr_t v245228926 = MKLAZY(x503);
                                                                {   gc_frame0(gc,1,v245228926);
                                                                    wptr_t v100264 = eval(gc,arena,v239631886);
                                                                    {   uintmax_t v8344914;
                                                                        gc_frame0(gc,1,v100264);
                                                                        v8344914 = ((struct sCJhc_Type_Basic_Integer*)v100264)->a1;
                                                                        uintmax_t v266556602 = (v8344914 * v38226984);
                                                                        uintmax_t v223132532 = (v168091047 + v266556602);
                                                                        x502.t0 = v236343658;
                                                                        x502.t1 = v245228926;
                                                                        x502.t2 = v38226984;
                                                                        x502.t3 = v223132532;
                                                                        x502.t4 = v239100276;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        v2493 = x502.t0;
                                                        v2495 = x502.t1;
                                                        v5759 = x502.t2;
                                                        v4507 = x502.t3;
                                                        v5765 = x502.t4;
                                                        v15783869 = v2493;
                                                        v236343658 = v2495;
                                                        v168091047 = v5759;
                                                        v38226984 = v4507;
                                                        v211326633 = v5765;
                                                        goto bRfW$__fMain_ratTrans__323;
                                                    } else {
                                                        /* 1 */
                                                        assert(1 == v64465060);
                                                        wptr_t x504 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x504)->a1 = v168091047;
                                                        wptr_t v2720 = x504;
                                                        {   gc_frame0(gc,1,v2720);
                                                            wptr_t x505 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                            ((struct sCJhc_Type_Basic_Integer*)x505)->a1 = v38226984;
                                                            wptr_t v2722 = x505;
                                                            {   gc_frame0(gc,1,v2722);
                                                                sptr_t x506 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d70);
                                                                ((struct sFtheMain$d70*)x506)->head = TO_FPTR(&E__ftheMain$d70);
                                                                ((struct sFtheMain$d70*)x506)->a1 = v38226984;
                                                                ((struct sFtheMain$d70*)x506)->a2 = v15783869;
                                                                ((struct sFtheMain$d70*)x506)->a3 = v168091047;
                                                                ((struct sFtheMain$d70*)x506)->a4 = v2722;
                                                                ((struct sFtheMain$d70*)x506)->a5 = v211326633;
                                                                ((struct sFtheMain$d70*)x506)->a6 = v2720;
                                                                ((struct sFtheMain$d70*)x506)->a7 = v9745020;
                                                                ((struct sFtheMain$d70*)x506)->a8 = v236343658;
                                                                sptr_t v102891952 = MKLAZY(x506);
                                                                {   gc_frame0(gc,1,v102891952);
                                                                    wptr_t x507 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x507)->a1 = v9745020;
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x507)->a2 = v102891952;
                                                                    return x507;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            /* 1 */
                                            assert(1 == v100240);
                                            uintmax_t v84222528 = (-((intmax_t)v38226984));
                                            uint16_t v100242 = (((intmax_t)v168091047) < ((intmax_t)v84222528));
                                            if (0 == v100242) {
                                                sptr_t v2439;
                                                sptr_t v4880;
                                                sptr_t v5621;
                                                uintmax_t v4883;
                                                uintmax_t v5618;
                                                struct tup10 x508;
                                                wptr_t v100244 = eval(gc,arena,v211326633);
                                                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100244) {
                                                    jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                } else {
                                                    sptr_t v241818418;
                                                    sptr_t v28177032;
                                                    /* ("CJhc.Prim.Prim.:" ni28177032 ni241818418) */
                                                    v28177032 = ((struct sCJhc_Prim_Prim_$x3a*)v100244)->a1;
                                                    v241818418 = ((struct sCJhc_Prim_Prim_$x3a*)v100244)->a2;
                                                    {   gc_frame0(gc,2,v28177032,v241818418);
                                                        sptr_t x509 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d66);
                                                        ((struct sFtheMain$d66*)x509)->head = TO_FPTR(&E__ftheMain$d66);
                                                        ((struct sFtheMain$d66*)x509)->a1 = v15783869;
                                                        ((struct sFtheMain$d66*)x509)->a2 = v28177032;
                                                        ((struct sFtheMain$d66*)x509)->a3 = v236343658;
                                                        sptr_t v183082884 = MKLAZY(x509);
                                                        {   gc_frame0(gc,1,v183082884);
                                                            wptr_t v100246 = eval(gc,arena,v28177032);
                                                            {   uintmax_t v112417154;
                                                                gc_frame0(gc,1,v100246);
                                                                v112417154 = ((struct sCJhc_Type_Basic_Integer*)v100246)->a1;
                                                                uintmax_t v251806220 = (v112417154 * v38226984);
                                                                uintmax_t v234830354 = (v168091047 + v251806220);
                                                                x508.t0 = v236343658;
                                                                x508.t1 = v183082884;
                                                                x508.t2 = v38226984;
                                                                x508.t3 = v234830354;
                                                                x508.t4 = v241818418;
                                                            }
                                                        }
                                                    }
                                                }
                                                v2439 = x508.t0;
                                                v4880 = x508.t1;
                                                v4883 = x508.t2;
                                                v5618 = x508.t3;
                                                v5621 = x508.t4;
                                                v15783869 = v2439;
                                                v236343658 = v4880;
                                                v168091047 = v4883;
                                                v38226984 = v5618;
                                                v211326633 = v5621;
                                                goto bRfW$__fMain_ratTrans__323;
                                            } else {
                                                /* 1 */
                                                assert(1 == v100242);
                                                wptr_t v100248 = eval(gc,arena,v990234);
                                                {   uint16_t v219876442;
                                                    gc_frame0(gc,1,v100248);
                                                    v219876442 = ((uint16_t)RAW_GET_UF(v100248));
                                                    if (0 == v219876442) {
                                                        sptr_t v2459;
                                                        sptr_t v2461;
                                                        sptr_t v5675;
                                                        uintmax_t v5669;
                                                        uintmax_t v5672;
                                                        struct tup10 x510;
                                                        wptr_t v100250 = eval(gc,arena,v211326633);
                                                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100250) {
                                                            jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                        } else {
                                                            sptr_t v218503430;
                                                            sptr_t v26364024;
                                                            /* ("CJhc.Prim.Prim.:" ni218503430 ni26364024) */
                                                            v218503430 = ((struct sCJhc_Prim_Prim_$x3a*)v100250)->a1;
                                                            v26364024 = ((struct sCJhc_Prim_Prim_$x3a*)v100250)->a2;
                                                            {   gc_frame0(gc,2,v26364024,v218503430);
                                                                sptr_t x511 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d68);
                                                                ((struct sFtheMain$d68*)x511)->head = TO_FPTR(&E__ftheMain$d68);
                                                                ((struct sFtheMain$d68*)x511)->a1 = v15783869;
                                                                ((struct sFtheMain$d68*)x511)->a2 = v218503430;
                                                                ((struct sFtheMain$d68*)x511)->a3 = v236343658;
                                                                sptr_t v111142938 = MKLAZY(x511);
                                                                {   gc_frame0(gc,1,v111142938);
                                                                    wptr_t v100252 = eval(gc,arena,v218503430);
                                                                    {   uintmax_t v37774494;
                                                                        gc_frame0(gc,1,v100252);
                                                                        v37774494 = ((struct sCJhc_Type_Basic_Integer*)v100252)->a1;
                                                                        uintmax_t v170248832 = (v37774494 * v38226984);
                                                                        uintmax_t v30707552 = (v168091047 + v170248832);
                                                                        x510.t0 = v236343658;
                                                                        x510.t1 = v111142938;
                                                                        x510.t2 = v38226984;
                                                                        x510.t3 = v30707552;
                                                                        x510.t4 = v26364024;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        v2459 = x510.t0;
                                                        v2461 = x510.t1;
                                                        v5669 = x510.t2;
                                                        v5672 = x510.t3;
                                                        v5675 = x510.t4;
                                                        v15783869 = v2459;
                                                        v236343658 = v2461;
                                                        v168091047 = v5669;
                                                        v38226984 = v5672;
                                                        v211326633 = v5675;
                                                        goto bRfW$__fMain_ratTrans__323;
                                                    } else {
                                                        /* 1 */
                                                        assert(1 == v219876442);
                                                        wptr_t x512 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x512)->a1 = v168091047;
                                                        wptr_t v5873 = x512;
                                                        {   gc_frame0(gc,1,v5873);
                                                            wptr_t x513 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                            ((struct sCJhc_Type_Basic_Integer*)x513)->a1 = v38226984;
                                                            wptr_t v5876 = x513;
                                                            {   gc_frame0(gc,1,v5876);
                                                                sptr_t x514 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d67);
                                                                ((struct sFtheMain$d67*)x514)->head = TO_FPTR(&E__ftheMain$d67);
                                                                ((struct sFtheMain$d67*)x514)->a1 = v5873;
                                                                ((struct sFtheMain$d67*)x514)->a2 = v38226984;
                                                                ((struct sFtheMain$d67*)x514)->a3 = v15783869;
                                                                ((struct sFtheMain$d67*)x514)->a4 = v168091047;
                                                                ((struct sFtheMain$d67*)x514)->a5 = v5876;
                                                                ((struct sFtheMain$d67*)x514)->a6 = v211326633;
                                                                ((struct sFtheMain$d67*)x514)->a7 = v9745020;
                                                                ((struct sFtheMain$d67*)x514)->a8 = v236343658;
                                                                sptr_t v24769844 = MKLAZY(x514);
                                                                {   gc_frame0(gc,1,v24769844);
                                                                    wptr_t x515 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x515)->a1 = v9745020;
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x515)->a2 = v24769844;
                                                                    return x515;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        /* 1 */
                                        assert(1 == v100212);
                                        uintmax_t v81094104 = (-((intmax_t)v168091047));
                                        uint16_t v100214 = (((intmax_t)0) > ((intmax_t)v38226984));
                                        if (0 == v100214) {
                                            uint16_t v100228 = (((intmax_t)v81094104) < ((intmax_t)v38226984));
                                            if (0 == v100228) {
                                                sptr_t v2403;
                                                sptr_t v2405;
                                                sptr_t v5527;
                                                uintmax_t v8635;
                                                uintmax_t v8639;
                                                struct tup10 x516;
                                                wptr_t v100230 = eval(gc,arena,v211326633);
                                                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100230) {
                                                    jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                } else {
                                                    sptr_t v213250186;
                                                    sptr_t v39202876;
                                                    /* ("CJhc.Prim.Prim.:" ni213250186 ni39202876) */
                                                    v213250186 = ((struct sCJhc_Prim_Prim_$x3a*)v100230)->a1;
                                                    v39202876 = ((struct sCJhc_Prim_Prim_$x3a*)v100230)->a2;
                                                    {   gc_frame0(gc,2,v39202876,v213250186);
                                                        sptr_t x517 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d63);
                                                        ((struct sFtheMain$d63*)x517)->head = TO_FPTR(&E__ftheMain$d63);
                                                        ((struct sFtheMain$d63*)x517)->a1 = v213250186;
                                                        ((struct sFtheMain$d63*)x517)->a2 = v15783869;
                                                        ((struct sFtheMain$d63*)x517)->a3 = v236343658;
                                                        sptr_t v251973252 = MKLAZY(x517);
                                                        {   gc_frame0(gc,1,v251973252);
                                                            wptr_t v100232 = eval(gc,arena,v213250186);
                                                            {   uintmax_t v196385514;
                                                                gc_frame0(gc,1,v100232);
                                                                v196385514 = ((struct sCJhc_Type_Basic_Integer*)v100232)->a1;
                                                                uintmax_t v126148288 = (v196385514 * v38226984);
                                                                uintmax_t v202657654 = (v168091047 + v126148288);
                                                                x516.t0 = v236343658;
                                                                x516.t1 = v251973252;
                                                                x516.t2 = v38226984;
                                                                x516.t3 = v202657654;
                                                                x516.t4 = v39202876;
                                                            }
                                                        }
                                                    }
                                                }
                                                v2403 = x516.t0;
                                                v2405 = x516.t1;
                                                v8635 = x516.t2;
                                                v8639 = x516.t3;
                                                v5527 = x516.t4;
                                                v15783869 = v2403;
                                                v236343658 = v2405;
                                                v168091047 = v8635;
                                                v38226984 = v8639;
                                                v211326633 = v5527;
                                                goto bRfW$__fMain_ratTrans__323;
                                            } else {
                                                /* 1 */
                                                assert(1 == v100228);
                                                wptr_t v100234 = eval(gc,arena,v990234);
                                                {   uint16_t v53168212;
                                                    gc_frame0(gc,1,v100234);
                                                    v53168212 = ((uint16_t)RAW_GET_UF(v100234));
                                                    if (0 == v53168212) {
                                                        sptr_t v2423;
                                                        sptr_t v2425;
                                                        sptr_t v2431;
                                                        uintmax_t v2427;
                                                        uintmax_t v2429;
                                                        struct tup10 x518;
                                                        wptr_t v100236 = eval(gc,arena,v211326633);
                                                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100236) {
                                                            jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                        } else {
                                                            sptr_t v254927760;
                                                            sptr_t v260587484;
                                                            /* ("CJhc.Prim.Prim.:" ni254927760 ni260587484) */
                                                            v254927760 = ((struct sCJhc_Prim_Prim_$x3a*)v100236)->a1;
                                                            v260587484 = ((struct sCJhc_Prim_Prim_$x3a*)v100236)->a2;
                                                            {   gc_frame0(gc,2,v254927760,v260587484);
                                                                sptr_t x519 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d65);
                                                                ((struct sFtheMain$d65*)x519)->head = TO_FPTR(&E__ftheMain$d65);
                                                                ((struct sFtheMain$d65*)x519)->a1 = v15783869;
                                                                ((struct sFtheMain$d65*)x519)->a2 = v254927760;
                                                                ((struct sFtheMain$d65*)x519)->a3 = v236343658;
                                                                sptr_t v46454714 = MKLAZY(x519);
                                                                {   gc_frame0(gc,1,v46454714);
                                                                    wptr_t v100238 = eval(gc,arena,v254927760);
                                                                    {   uintmax_t v244309086;
                                                                        gc_frame0(gc,1,v100238);
                                                                        v244309086 = ((struct sCJhc_Type_Basic_Integer*)v100238)->a1;
                                                                        uintmax_t v188192944 = (v244309086 * v38226984);
                                                                        uintmax_t v28631070 = (v168091047 + v188192944);
                                                                        x518.t0 = v236343658;
                                                                        x518.t1 = v46454714;
                                                                        x518.t2 = v38226984;
                                                                        x518.t3 = v28631070;
                                                                        x518.t4 = v260587484;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        v2423 = x518.t0;
                                                        v2425 = x518.t1;
                                                        v2427 = x518.t2;
                                                        v2429 = x518.t3;
                                                        v2431 = x518.t4;
                                                        v15783869 = v2423;
                                                        v236343658 = v2425;
                                                        v168091047 = v2427;
                                                        v38226984 = v2429;
                                                        v211326633 = v2431;
                                                        goto bRfW$__fMain_ratTrans__323;
                                                    } else {
                                                        /* 1 */
                                                        assert(1 == v53168212);
                                                        wptr_t x520 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x520)->a1 = v168091047;
                                                        wptr_t v2660 = x520;
                                                        {   gc_frame0(gc,1,v2660);
                                                            wptr_t x521 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                            ((struct sCJhc_Type_Basic_Integer*)x521)->a1 = v38226984;
                                                            wptr_t v2662 = x521;
                                                            {   gc_frame0(gc,1,v2662);
                                                                sptr_t x522 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d64);
                                                                ((struct sFtheMain$d64*)x522)->head = TO_FPTR(&E__ftheMain$d64);
                                                                ((struct sFtheMain$d64*)x522)->a1 = v38226984;
                                                                ((struct sFtheMain$d64*)x522)->a2 = v15783869;
                                                                ((struct sFtheMain$d64*)x522)->a3 = v168091047;
                                                                ((struct sFtheMain$d64*)x522)->a4 = v2662;
                                                                ((struct sFtheMain$d64*)x522)->a5 = v211326633;
                                                                ((struct sFtheMain$d64*)x522)->a6 = v2660;
                                                                ((struct sFtheMain$d64*)x522)->a7 = v9745020;
                                                                ((struct sFtheMain$d64*)x522)->a8 = v236343658;
                                                                sptr_t v203039190 = MKLAZY(x522);
                                                                {   gc_frame0(gc,1,v203039190);
                                                                    wptr_t x523 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x523)->a1 = v9745020;
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x523)->a2 = v203039190;
                                                                    return x523;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            /* 1 */
                                            assert(1 == v100214);
                                            uintmax_t v79605938 = (-((intmax_t)v38226984));
                                            uint16_t v100216 = (((intmax_t)v81094104) < ((intmax_t)v79605938));
                                            if (0 == v100216) {
                                                sptr_t v2369;
                                                sptr_t v2371;
                                                sptr_t v2377;
                                                uintmax_t v2373;
                                                uintmax_t v2375;
                                                struct tup10 x524;
                                                wptr_t v100218 = eval(gc,arena,v211326633);
                                                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100218) {
                                                    jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                } else {
                                                    sptr_t v19239266;
                                                    sptr_t v45539884;
                                                    /* ("CJhc.Prim.Prim.:" ni19239266 ni45539884) */
                                                    v19239266 = ((struct sCJhc_Prim_Prim_$x3a*)v100218)->a1;
                                                    v45539884 = ((struct sCJhc_Prim_Prim_$x3a*)v100218)->a2;
                                                    {   gc_frame0(gc,2,v19239266,v45539884);
                                                        sptr_t x525 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d60);
                                                        ((struct sFtheMain$d60*)x525)->head = TO_FPTR(&E__ftheMain$d60);
                                                        ((struct sFtheMain$d60*)x525)->a1 = v15783869;
                                                        ((struct sFtheMain$d60*)x525)->a2 = v19239266;
                                                        ((struct sFtheMain$d60*)x525)->a3 = v236343658;
                                                        sptr_t v154420610 = MKLAZY(x525);
                                                        {   gc_frame0(gc,1,v154420610);
                                                            wptr_t v100220 = eval(gc,arena,v19239266);
                                                            {   uintmax_t v79172088;
                                                                gc_frame0(gc,1,v100220);
                                                                v79172088 = ((struct sCJhc_Type_Basic_Integer*)v100220)->a1;
                                                                uintmax_t v233337136 = (v79172088 * v38226984);
                                                                uintmax_t v257664010 = (v168091047 + v233337136);
                                                                x524.t0 = v236343658;
                                                                x524.t1 = v154420610;
                                                                x524.t2 = v38226984;
                                                                x524.t3 = v257664010;
                                                                x524.t4 = v45539884;
                                                            }
                                                        }
                                                    }
                                                }
                                                v2369 = x524.t0;
                                                v2371 = x524.t1;
                                                v2373 = x524.t2;
                                                v2375 = x524.t3;
                                                v2377 = x524.t4;
                                                v15783869 = v2369;
                                                v236343658 = v2371;
                                                v168091047 = v2373;
                                                v38226984 = v2375;
                                                v211326633 = v2377;
                                                goto bRfW$__fMain_ratTrans__323;
                                            } else {
                                                /* 1 */
                                                assert(1 == v100216);
                                                wptr_t v100222 = eval(gc,arena,v990234);
                                                {   uint16_t v107001068;
                                                    gc_frame0(gc,1,v100222);
                                                    v107001068 = ((uint16_t)RAW_GET_UF(v100222));
                                                    if (0 == v107001068) {
                                                        sptr_t v2397;
                                                        sptr_t v5479;
                                                        sptr_t v5482;
                                                        uintmax_t v2395;
                                                        uintmax_t v5485;
                                                        struct tup10 x526;
                                                        wptr_t v100224 = eval(gc,arena,v211326633);
                                                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100224) {
                                                            jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                                                        } else {
                                                            sptr_t v13593610;
                                                            sptr_t v136499032;
                                                            /* ("CJhc.Prim.Prim.:" ni136499032 ni13593610) */
                                                            v136499032 = ((struct sCJhc_Prim_Prim_$x3a*)v100224)->a1;
                                                            v13593610 = ((struct sCJhc_Prim_Prim_$x3a*)v100224)->a2;
                                                            {   gc_frame0(gc,2,v13593610,v136499032);
                                                                sptr_t x527 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d62);
                                                                ((struct sFtheMain$d62*)x527)->head = TO_FPTR(&E__ftheMain$d62);
                                                                ((struct sFtheMain$d62*)x527)->a1 = v15783869;
                                                                ((struct sFtheMain$d62*)x527)->a2 = v136499032;
                                                                ((struct sFtheMain$d62*)x527)->a3 = v236343658;
                                                                sptr_t v264446474 = MKLAZY(x527);
                                                                {   gc_frame0(gc,1,v264446474);
                                                                    wptr_t v100226 = eval(gc,arena,v136499032);
                                                                    {   uintmax_t v246624246;
                                                                        gc_frame0(gc,1,v100226);
                                                                        v246624246 = ((struct sCJhc_Type_Basic_Integer*)v100226)->a1;
                                                                        uintmax_t v230411984 = (v246624246 * v38226984);
                                                                        uintmax_t v76483312 = (v168091047 + v230411984);
                                                                        x526.t0 = v236343658;
                                                                        x526.t1 = v264446474;
                                                                        x526.t2 = v38226984;
                                                                        x526.t3 = v76483312;
                                                                        x526.t4 = v13593610;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        v5479 = x526.t0;
                                                        v5482 = x526.t1;
                                                        v5485 = x526.t2;
                                                        v2395 = x526.t3;
                                                        v2397 = x526.t4;
                                                        v15783869 = v5479;
                                                        v236343658 = v5482;
                                                        v168091047 = v5485;
                                                        v38226984 = v2395;
                                                        v211326633 = v2397;
                                                        goto bRfW$__fMain_ratTrans__323;
                                                    } else {
                                                        /* 1 */
                                                        assert(1 == v107001068);
                                                        wptr_t x528 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                        ((struct sCJhc_Type_Basic_Integer*)x528)->a1 = v168091047;
                                                        wptr_t v4428 = x528;
                                                        {   gc_frame0(gc,1,v4428);
                                                            wptr_t x529 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                                            ((struct sCJhc_Type_Basic_Integer*)x529)->a1 = v38226984;
                                                            wptr_t v2633 = x529;
                                                            {   gc_frame0(gc,1,v2633);
                                                                sptr_t x530 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d61);
                                                                ((struct sFtheMain$d61*)x530)->head = TO_FPTR(&E__ftheMain$d61);
                                                                ((struct sFtheMain$d61*)x530)->a1 = v4428;
                                                                ((struct sFtheMain$d61*)x530)->a2 = v38226984;
                                                                ((struct sFtheMain$d61*)x530)->a3 = v15783869;
                                                                ((struct sFtheMain$d61*)x530)->a4 = v2633;
                                                                ((struct sFtheMain$d61*)x530)->a5 = v168091047;
                                                                ((struct sFtheMain$d61*)x530)->a6 = v211326633;
                                                                ((struct sFtheMain$d61*)x530)->a7 = v9745020;
                                                                ((struct sFtheMain$d61*)x530)->a8 = v236343658;
                                                                sptr_t v202837488 = MKLAZY(x530);
                                                                {   gc_frame0(gc,1,v202837488);
                                                                    wptr_t x531 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x531)->a1 = v9745020;
                                                                    ((struct sCJhc_Prim_Prim_$x3a*)x531)->a2 = v202837488;
                                                                    return x531;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            /* 1 */
                            assert(1 == v100194);
                            uintmax_t v181085614 = (v168091047 + v38226984);
                            {   wptr_t v100196;
                                gc_frame0(gc,3,v15783869,v211326633,v236343658);
                                v100196 = ftheMain$d54(gc,arena,v38226984,v236343658);
                                {   uintmax_t v115160448;
                                    gc_frame0(gc,1,v100196);
                                    v115160448 = ((struct sCJhc_Type_Basic_Integer*)v100196)->a1;
                                    wptr_t x532 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                    ((struct sCJhc_Type_Basic_Integer*)x532)->a1 = v115160448;
                                    wptr_t v2589 = x532;
                                    sptr_t v124940226 = demote(v2589);
                                    uintmax_t v24769842 = (v181085614 * v115160448);
                                    {   gc_frame0(gc,1,v124940226);
                                        wptr_t v100198 = eval(gc,arena,v15783869);
                                        {   uintmax_t v112925380;
                                            gc_frame0(gc,1,v100198);
                                            v112925380 = ((struct sCJhc_Type_Basic_Integer*)v100198)->a1;
                                            wptr_t v100200 = eval(gc,arena,v236343658);
                                            {   sptr_t v2348;
                                                sptr_t v4702;
                                                sptr_t v5374;
                                                sptr_t v5377;
                                                uintmax_t v123660922;
                                                uintmax_t v2344;
                                                uintmax_t v2346;
                                                uintmax_t v2350;
                                                uintmax_t v2356;
                                                uintmax_t v4699;
                                                struct tup12 x533;
                                                gc_frame0(gc,1,v100200);
                                                v123660922 = ((struct sCJhc_Type_Basic_Integer*)v100200)->a1;
                                                uintmax_t v205680834 = (v112925380 + v123660922);
                                                uint16_t v100206 = (((intmax_t)v24769842) <= ((intmax_t)v205680834));
                                                if (0 == v100206) {
                                                    x533.t0 = v38226984;
                                                    x533.t1 = v123660922;
                                                    x533.t2 = v124940226;
                                                    x533.t3 = v115160448;
                                                    x533.t4 = v168091047;
                                                    x533.t5 = v211326633;
                                                    x533.t6 = v112925380;
                                                    x533.t7 = v236343658;
                                                    x533.t8 = ((sptr_t)RAW_SET_UF(0));
                                                } else {
                                                    /* 1 */
                                                    assert(1 == v100206);
                                                    uintmax_t v156312464 = (v168091047 + v38226984);
                                                    uintmax_t v190864528 = (v156312464 * v115160448);
                                                    uintmax_t v125735148 = (v168091047 + v38226984);
                                                    uintmax_t v195586466 = (v190864528 + v125735148);
                                                    uintmax_t v104879892 = (v112925380 + v123660922);
                                                    uint16_t v19172376 = (((intmax_t)v195586466) > ((intmax_t)v104879892));
                                                    wptr_t v2608 = RAW_SET_UF(v19172376);
                                                    sptr_t v182639130 = demote(v2608);
                                                    x533.t0 = v38226984;
                                                    x533.t1 = v123660922;
                                                    x533.t2 = v124940226;
                                                    x533.t3 = v115160448;
                                                    x533.t4 = v168091047;
                                                    x533.t5 = v211326633;
                                                    x533.t6 = v112925380;
                                                    x533.t7 = v236343658;
                                                    x533.t8 = v182639130;
                                                }
                                                v2344 = x533.t0;
                                                v2346 = x533.t1;
                                                v2348 = x533.t2;
                                                v2350 = x533.t3;
                                                v4699 = x533.t4;
                                                v4702 = x533.t5;
                                                v2356 = x533.t6;
                                                v5374 = x533.t7;
                                                v5377 = x533.t8;
                                                wptr_t v1759 = promote(v2348);
                                                wptr_t v1766 = promote(v5377);
                                                return ftheMain$d55(gc,arena,v2344,v2346,v1759,v2350,v4699,v4702,v2356,v5374,v1766);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
}

static uint32_t A_STD
fW$__fPrelude_CType_digitToInt(gc_t gc,arena_t arena,uint32_t v2047609395)
{
        uint16_t v101254 = (48 <= v2047609395);
        if (0 == v101254) {
            uint16_t v101256 = (97 <= v2047609395);
            if (0 == v101256) {
                uint16_t v101258 = (65 <= v2047609395);
                if (0 == v101258) {
                    jhc_error("Prelude.error: Char.digitToInt: not a digit");
                    return (uint32_t)0;
                } else {
                    /* 1 */
                    assert(1 == v101258);
                    uint16_t v101260 = (70 >= v2047609395);
                    if (0 == v101260) {
                        jhc_error("Prelude.error: Char.digitToInt: not a digit");
                        return (uint32_t)0;
                    } else {
                        /* 1 */
                        assert(1 == v101260);
                        uint32_t v61835120 = v2047609395;
                        return v61835120 - 75;
                    }
                }
            } else {
                /* 1 */
                assert(1 == v101256);
                uint16_t v101262 = (102 >= v2047609395);
                if (0 == v101262) {
                    uint16_t v101264 = (65 <= v2047609395);
                    if (0 == v101264) {
                        jhc_error("Prelude.error: Char.digitToInt: not a digit");
                        return (uint32_t)0;
                    } else {
                        /* 1 */
                        assert(1 == v101264);
                        uint16_t v101266 = (70 >= v2047609395);
                        if (0 == v101266) {
                            jhc_error("Prelude.error: Char.digitToInt: not a digit");
                            return (uint32_t)0;
                        } else {
                            /* 1 */
                            assert(1 == v101266);
                            uint32_t v136238518 = v2047609395;
                            return v136238518 - 75;
                        }
                    }
                } else {
                    /* 1 */
                    assert(1 == v101262);
                    uint32_t v264254028 = v2047609395;
                    return v264254028 - 107;
                }
            }
        } else {
            /* 1 */
            assert(1 == v101254);
            uint16_t v101268 = (57 >= v2047609395);
            if (0 == v101268) {
                uint16_t v101270 = (97 <= v2047609395);
                if (0 == v101270) {
                    uint16_t v101272 = (65 <= v2047609395);
                    if (0 == v101272) {
                        jhc_error("Prelude.error: Char.digitToInt: not a digit");
                        return (uint32_t)0;
                    } else {
                        /* 1 */
                        assert(1 == v101272);
                        uint16_t v101274 = (70 >= v2047609395);
                        if (0 == v101274) {
                            jhc_error("Prelude.error: Char.digitToInt: not a digit");
                            return (uint32_t)0;
                        } else {
                            /* 1 */
                            assert(1 == v101274);
                            uint32_t v29534752 = v2047609395;
                            return v29534752 - 75;
                        }
                    }
                } else {
                    /* 1 */
                    assert(1 == v101270);
                    uint16_t v101276 = (102 >= v2047609395);
                    if (0 == v101276) {
                        uint16_t v101278 = (65 <= v2047609395);
                        if (0 == v101278) {
                            jhc_error("Prelude.error: Char.digitToInt: not a digit");
                            return (uint32_t)0;
                        } else {
                            /* 1 */
                            assert(1 == v101278);
                            uint16_t v101280 = (70 >= v2047609395);
                            if (0 == v101280) {
                                jhc_error("Prelude.error: Char.digitToInt: not a digit");
                                return (uint32_t)0;
                            } else {
                                /* 1 */
                                assert(1 == v101280);
                                uint32_t v196335310 = v2047609395;
                                return v196335310 - 75;
                            }
                        }
                    } else {
                        /* 1 */
                        assert(1 == v101276);
                        uint32_t v68216830 = v2047609395;
                        return v68216830 - 107;
                    }
                }
            } else {
                /* 1 */
                assert(1 == v101268);
                uint32_t v115160446 = v2047609395;
                return v115160446 - 48;
            }
        }
}

static uint16_t A_STD
fW$__fPrelude_CType_isAlpha(gc_t gc,arena_t arena,uint32_t v2024671793)
{
        uint16_t v101330 = (65 <= v2024671793);
        if (0 == v101330) {
            uint16_t v101332 = (97 <= v2024671793);
            if (0 == v101332) {
                return 0;
            } else {
                /* 1 */
                assert(1 == v101332);
                return 122 >= v2024671793;
            }
        } else {
            /* 1 */
            assert(1 == v101330);
            uint16_t v101334 = (90 >= v2024671793);
            if (0 == v101334) {
                uint16_t v101336 = (97 <= v2024671793);
                if (0 == v101336) {
                    return 0;
                } else {
                    /* 1 */
                    assert(1 == v101336);
                    return 122 >= v2024671793;
                }
            } else {
                /* 1 */
                assert(1 == v101334);
                return 1;
            }
        }
}

static uint16_t A_STD
fW$__fPrelude_CType_isAlphaNum(gc_t gc,arena_t arena,uint32_t v2021394995)
{
        uint16_t v101326;
        v101326 = fW$__fPrelude_CType_isAlpha(gc,arena,v2021394995);
        if (0 == v101326) {
            uint16_t v101328 = (48 <= v2021394995);
            if (0 == v101328) {
                return 0;
            } else {
                /* 1 */
                assert(1 == v101328);
                return 57 >= v2021394995;
            }
        } else {
            /* 1 */
            assert(1 == v101326);
            return 1;
        }
}

static uint16_t A_STD
fW$__fPrelude_CType_isDigit(gc_t gc,arena_t arena,uint32_t v2061765169)
{
        uint16_t v101222 = (48 <= v2061765169);
        if (0 == v101222) {
            return 0;
        } else {
            /* 1 */
            assert(1 == v101222);
            return 57 >= v2061765169;
        }
}

static uint16_t A_STD
fW$__fPrelude_CType_isHexDigit(gc_t gc,arena_t arena,uint32_t v49838044)
{
        uint16_t v101226 = (48 <= v49838044);
        if (0 == v101226) {
            wptr_t v4104;
            v4104 = fW$__fPrelude_CType_isHexDigit$d2(gc,arena,v49838044);
            uint16_t v101228 = (65 <= v49838044);
            if (0 == v101228) {
                {   uint16_t v135370998;
                    gc_frame0(gc,1,v4104);
                    v135370998 = ((uint16_t)RAW_GET_UF(v4104));
                    return v135370998;
                }
            } else {
                /* 1 */
                assert(1 == v101228);
                uint16_t v101232 = (70 >= v49838044);
                if (0 == v101232) {
                    {   uint16_t v110947982;
                        gc_frame0(gc,1,v4104);
                        v110947982 = ((uint16_t)RAW_GET_UF(v4104));
                        return v110947982;
                    }
                } else {
                    /* 1 */
                    assert(1 == v101232);
                    return 1;
                }
            }
        } else {
            /* 1 */
            assert(1 == v101226);
            uint16_t v101236 = (57 >= v49838044);
            if (0 == v101236) {
                wptr_t v2902;
                v2902 = fW$__fPrelude_CType_isHexDigit$d3(gc,arena,v49838044);
                uint16_t v101238 = (65 <= v49838044);
                if (0 == v101238) {
                    {   uint16_t v194635132;
                        gc_frame0(gc,1,v2902);
                        v194635132 = ((uint16_t)RAW_GET_UF(v2902));
                        return v194635132;
                    }
                } else {
                    /* 1 */
                    assert(1 == v101238);
                    uint16_t v101242 = (70 >= v49838044);
                    if (0 == v101242) {
                        {   uint16_t v153480246;
                            gc_frame0(gc,1,v2902);
                            v153480246 = ((uint16_t)RAW_GET_UF(v2902));
                            return v153480246;
                        }
                    } else {
                        /* 1 */
                        assert(1 == v101242);
                        return 1;
                    }
                }
            } else {
                /* 1 */
                assert(1 == v101236);
                return 1;
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fPrelude_CType_isHexDigit$d2(gc_t gc,arena_t arena,uint32_t v2054687283)
{
        uint16_t v101248 = (97 <= v2054687283);
        if (0 == v101248) {
            return RAW_SET_UF(0);
        } else {
            /* 1 */
            assert(1 == v101248);
            uint16_t v153480248 = (102 >= v2054687283);
            return RAW_SET_UF(v153480248);
        }
}

static wptr_t A_STD A_MALLOC
fW$__fPrelude_CType_isHexDigit$d3(gc_t gc,arena_t arena,uint32_t v159335782)
{
        uint16_t v101246 = (97 <= v159335782);
        if (0 == v101246) {
            return RAW_SET_UF(0);
        } else {
            /* 1 */
            assert(1 == v101246);
            uint16_t v29534740 = (102 >= v159335782);
            return RAW_SET_UF(v29534740);
        }
}

static uint16_t A_STD
fW$__fPrelude_CType_isOctDigit(gc_t gc,arena_t arena,uint32_t v2068318771)
{
        uint16_t v101088 = (48 <= v2068318771);
        if (0 == v101088) {
            return 0;
        } else {
            /* 1 */
            assert(1 == v101088);
            return 55 >= v2068318771;
        }
}

static uint16_t A_STD
fW$__fPrelude_CType_isSpace(gc_t gc,arena_t arena,sptr_t v1261576229)
{
        return fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v1261576229,PROMOTE(c11));
}

static wptr_t A_STD A_MALLOC
fW$__fR$__fJhc_List_387__f(gc_t gc,arena_t arena,uint32_t v135170746,sptr_t v168294378)
{
        uint16_t v100000 = (((int32_t)0) >= ((int32_t)v135170746));
        if (0 == v100000) {
            wptr_t v100002 = eval(gc,arena,v168294378);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100002) {
                return v100002;
            } else {
                sptr_t v306;
                sptr_t v4860;
                /* ("CJhc.Prim.Prim.:" ni4860 ni306) */
                v4860 = ((struct sCJhc_Prim_Prim_$x3a*)v100002)->a1;
                v306 = ((struct sCJhc_Prim_Prim_$x3a*)v100002)->a2;
                uint32_t v194508206 = (v135170746 - 1);
                {   gc_frame0(gc,2,v306,v4860);
                    sptr_t x549 = s_alloc(gc,arena,public_caches(arena)->cFW$__fR$__fJhc_List_387__f);
                    ((struct sFW$__fR$__fJhc_List_387__f*)x549)->head = TO_FPTR(&E__fW$__fR$__fJhc_List_387__f);
                    ((struct sFW$__fR$__fJhc_List_387__f*)x549)->a1 = v194508206;
                    ((struct sFW$__fR$__fJhc_List_387__f*)x549)->a2 = v306;
                    sptr_t v140312346 = MKLAZY(x549);
                    {   gc_frame0(gc,1,v140312346);
                        wptr_t x550 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x550)->a1 = v4860;
                        ((struct sCJhc_Prim_Prim_$x3a*)x550)->a2 = v140312346;
                        return x550;
                    }
                }
            }
        } else {
            /* 1 */
            assert(1 == v100000);
            return SET_RAW_TAG(CJhc_Prim_Prim_$BE);
        }
}

static uint16_t A_STD
fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc_t gc,arena_t arena,sptr_t v9226,wptr_t v4652)
{
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v4652) {
            return 0;
        } else {
            sptr_t v4676;
            sptr_t v92;
            /* ("CJhc.Prim.Prim.:" ni92 ni4676) */
            v92 = ((struct sCJhc_Prim_Prim_$x3a*)v4652)->a1;
            v4676 = ((struct sCJhc_Prim_Prim_$x3a*)v4652)->a2;
            {   gc_frame0(gc,2,v92,v4676);
                wptr_t v101576 = eval(gc,arena,v9226);
                {   uint32_t v85122216;
                    gc_frame0(gc,1,v101576);
                    v85122216 = ((uint32_t)RAW_GET_UF(v101576));
                    wptr_t v101578 = eval(gc,arena,v92);
                    {   uint32_t v228308038;
                        gc_frame0(gc,1,v101578);
                        v228308038 = ((uint32_t)RAW_GET_UF(v101578));
                        uint16_t v101580 = (v85122216 == v228308038);
                        if (0 == v101580) {
                            sptr_t v247340482;
                            uint32_t v160064802;
                            v160064802 = v228308038;
                            v247340482 = v4676;
                            fW$__fJhc_List_213__f__51:;
                            {   uint16_t v101582 = (v85122216 == v160064802);
                                if (0 == v101582) {
                                    wptr_t v101584 = eval(gc,arena,v247340482);
                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v101584) {
                                        return 0;
                                    } else {
                                        sptr_t v86;
                                        sptr_t v88;
                                        /* ("CJhc.Prim.Prim.:" ni86 ni88) */
                                        v86 = ((struct sCJhc_Prim_Prim_$x3a*)v101584)->a1;
                                        v88 = ((struct sCJhc_Prim_Prim_$x3a*)v101584)->a2;
                                        {   gc_frame0(gc,1,v88);
                                            wptr_t v101586 = eval(gc,arena,v86);
                                            {   uint32_t v853150229;
                                                gc_frame0(gc,1,v101586);
                                                v853150229 = ((uint32_t)RAW_GET_UF(v101586));
                                                v160064802 = v853150229;
                                                v247340482 = v88;
                                                goto fW$__fJhc_List_213__f__51;
                                            }
                                        }
                                    }
                                } else {
                                    /* 1 */
                                    assert(1 == v101582);
                                    return 1;
                                }
                            }
                        } else {
                            /* 1 */
                            assert(1 == v101580);
                            return 1;
                        }
                    }
                }
            }
        }
}

static struct tup1 A_STD
fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default(gc_t gc,arena_t arena,uintmax_t v20524842,uintmax_t v79605934)
{
        wptr_t v3005;
        v3005 = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d5(gc,arena,v79605934);
        {   gc_frame0(gc,1,v3005);
            sptr_t x91 = s_alloc(gc,arena,public_caches(arena)->cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3);
            ((struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3*)x91)->head = TO_FPTR(&E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3);
            ((struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3*)x91)->a1 = v20524842;
            ((struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3*)x91)->a2 = v79605934;
            sptr_t v182966162 = MKLAZY(x91);
            {   uint16_t v101306;
                gc_frame0(gc,1,v182966162);
                sptr_t x92 = s_alloc(gc,arena,public_caches(arena)->cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4);
                ((struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4*)x92)->head = TO_FPTR(&E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4);
                ((struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4*)x92)->a1 = v182966162;
                sptr_t v85252474 = MKLAZY(x92);
                v101306 = fW$__fJhc_Class_Ord_$ee(gc,arena,SET_RAW_TAG(TJhc_Type_Basic_Integer),v85252474,v3005);
                sptr_t x93 = s_alloc(gc,arena,public_caches(arena)->cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2);
                ((struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2*)x93)->head = TO_FPTR(&E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2);
                ((struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2*)x93)->a1 = v20524842;
                ((struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2*)x93)->a2 = v79605934;
                sptr_t v70380426 = MKLAZY(x93);
                if (0 == v101306) {
                    struct tup1 _t13;
                    return (_t13.t0 = v70380426,_t13.t1 = v182966162,_t13);
                } else {
                    /* 1 */
                    assert(1 == v101306);
                    {   gc_frame0(gc,1,v70380426);
                        sptr_t x94 = s_alloc(gc,arena,public_caches(arena)->cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6);
                        ((struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6*)x94)->head = TO_FPTR(&E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6);
                        ((struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6*)x94)->a1 = v70380426;
                        sptr_t v209271966 = MKLAZY(x94);
                        {   struct tup1 _t14;
                            gc_frame0(gc,1,v209271966);
                            sptr_t x95 = s_alloc(gc,arena,public_caches(arena)->cFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7);
                            ((struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7*)x95)->head = TO_FPTR(&E__fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7);
                            ((struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7*)x95)->a1 = v182966162;
                            ((struct sFW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7*)x95)->a2 = v79605934;
                            sptr_t v209271968 = MKLAZY(x95);
                            return (_t14.t0 = v209271966,_t14.t1 = v209271968,_t14);
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d2(gc_t gc,arena_t arena,uintmax_t v1502880821,uintmax_t v1506288693)
{
        uintmax_t v136238522 = (((intmax_t)v1502880821) / ((intmax_t)v1506288693));
        wptr_t x87 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x87)->a1 = v136238522;
        return x87;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3(gc_t gc,arena_t arena,uintmax_t v120087512,uintmax_t v245784000)
{
        uintmax_t v242159980 = (((intmax_t)v120087512) % ((intmax_t)v245784000));
        wptr_t x88 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x88)->a1 = v242159980;
        return x88;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4(gc_t gc,arena_t arena,sptr_t v165876934)
{
        wptr_t v101314 = eval(gc,arena,v165876934);
        {   uintmax_t v80100082;
            gc_frame0(gc,1,v101314);
            v80100082 = ((struct sCJhc_Type_Basic_Integer*)v101314)->a1;
            if (0 == v80100082) {
                return PROMOTE(c35);
            } else {
                uint16_t v101316 = (((intmax_t)0) < ((intmax_t)v80100082));
                if (0 == v101316) {
                    return PROMOTE(c36);
                } else {
                    /* 1 */
                    assert(1 == v101316);
                    return PROMOTE(c37);
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d5(gc_t gc,arena_t arena,uintmax_t v142194674)
{
        if (0 == v142194674) {
            return PROMOTE(c35);
        } else {
            uint16_t v101312 = (((intmax_t)0) < ((intmax_t)v142194674));
            if (0 == v101312) {
                return PROMOTE(c37);
            } else {
                /* 1 */
                assert(1 == v101312);
                return PROMOTE(c36);
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6(gc_t gc,arena_t arena,sptr_t v108428556)
{
        wptr_t v101310 = eval(gc,arena,v108428556);
        {   uintmax_t v59150088;
            gc_frame0(gc,1,v101310);
            v59150088 = ((struct sCJhc_Type_Basic_Integer*)v101310)->a1;
            uintmax_t v119514820 = (v59150088 - 1);
            wptr_t x89 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
            ((struct sCJhc_Type_Basic_Integer*)x89)->a1 = v119514820;
            return x89;
        }
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7(gc_t gc,arena_t arena,sptr_t v214782330,uintmax_t v227732182)
{
        wptr_t v101308 = eval(gc,arena,v214782330);
        {   uintmax_t v40405756;
            gc_frame0(gc,1,v101308);
            v40405756 = ((struct sCJhc_Type_Basic_Integer*)v101308)->a1;
            uintmax_t v80100074 = (v40405756 + v227732182);
            wptr_t x90 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
            ((struct sCJhc_Type_Basic_Integer*)x90)->a1 = v80100074;
            return x90;
        }
}

static uint16_t A_STD
fW$__fx130476104(gc_t gc,arena_t arena,uint32_t v1632112673)
{
        uint16_t v101064 = (65 <= v1632112673);
        if (0 == v101064) {
            uint16_t v101066 = (48 <= v1632112673);
            if (0 == v101066) {
                return 0;
            } else {
                /* 1 */
                assert(1 == v101066);
                return 57 >= v1632112673;
            }
        } else {
            /* 1 */
            assert(1 == v101064);
            uint16_t v101068 = (90 >= v1632112673);
            if (0 == v101068) {
                uint16_t v101070 = (48 <= v1632112673);
                if (0 == v101070) {
                    return 0;
                } else {
                    /* 1 */
                    assert(1 == v101070);
                    return 57 >= v1632112673;
                }
            } else {
                /* 1 */
                assert(1 == v101068);
                return 1;
            }
        }
}

static uint16_t A_STD
fW$__fx2971480(gc_t gc,arena_t arena,uint32_t v1423582241)
{
        uint16_t v101074 = (65 <= v1423582241);
        if (0 == v101074) {
            uint16_t v101076 = (48 <= v1423582241);
            if (0 == v101076) {
                return 0;
            } else {
                /* 1 */
                assert(1 == v101076);
                return 57 >= v1423582241;
            }
        } else {
            /* 1 */
            assert(1 == v101074);
            uint16_t v101078 = (90 >= v1423582241);
            if (0 == v101078) {
                uint16_t v101080 = (48 <= v1423582241);
                if (0 == v101080) {
                    return 0;
                } else {
                    /* 1 */
                    assert(1 == v101080);
                    return 57 >= v1423582241;
                }
            } else {
                /* 1 */
                assert(1 == v101078);
                return 1;
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fx43121472(gc_t gc,arena_t arena,sptr_t v94629386,sptr_t v1513235511)
{
        {   wptr_t v100780;
            gc_frame0(gc,1,v94629386);
            v100780 = fJhc_Text_Read_lex(gc,arena,v1513235511);
            {   gc_frame0(gc,1,v100780);
                wptr_t x258 = s_alloc(gc,arena,public_caches(arena)->cP2__theMain$d3);
                SET_MEM_TAG((struct sP2__theMain$d3*)x258,P2__theMain$d3);
                ((struct sP2__theMain$d3*)x258)->a1 = v94629386;
                wptr_t v2747 = x258;
                sptr_t v118067940 = demote(v2747);
                {   gc_frame0(gc,1,v118067940);
                    wptr_t x259 = s_alloc(gc,arena,public_caches(arena)->cP1__theMain$d4);
                    SET_MEM_TAG((struct sP1__theMain$d4*)x259,P1__theMain$d4);
                    ((struct sP1__theMain$d4*)x259)->a1 = v118067940;
                    wptr_t v2751 = x259;
                    return fJhc_Basics_concatMap(gc,arena,v2751,v100780);
                }
            }
        }
}

static uint16_t A_STD
fW$__fx7909411(gc_t gc,arena_t arena,uint32_t v1425679393)
{
        uint16_t v101054 = (65 <= v1425679393);
        if (0 == v101054) {
            uint16_t v101056 = (48 <= v1425679393);
            if (0 == v101056) {
                return 0;
            } else {
                /* 1 */
                assert(1 == v101056);
                return 57 >= v1425679393;
            }
        } else {
            /* 1 */
            assert(1 == v101054);
            uint16_t v101058 = (90 >= v1425679393);
            if (0 == v101058) {
                uint16_t v101060 = (48 <= v1425679393);
                if (0 == v101060) {
                    return 0;
                } else {
                    /* 1 */
                    assert(1 == v101060);
                    return 57 >= v1425679393;
                }
            } else {
                /* 1 */
                assert(1 == v101058);
                return 1;
            }
        }
}

static void A_STD
ftheMain(gc_t gc,arena_t arena)
{
        wptr_t v100746;
        wptr_t v25;
        uint32_t v217997266 = *((int *)((uintptr_t)&jhc_argc));
        uintptr_t v194638532 = *((uintptr_t *)((uintptr_t)&jhc_argv));
        uint32_t v37774492 = (v217997266 - 1);
        v100746 = ftheMain$d2(gc,arena,v37774492,0);
        sptr_t v150965484 = demote(v100746);
        v25 = fJhc_Monad_60__go(gc,arena,v150965484,v194638532);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v25) {
            fJhc_IO_putErrLn(gc,arena,PROMOTE(c114));
            jhc_exit(255);
            return;
        } else {
            sptr_t v155049462;
            sptr_t v51294366;
            /* ("CJhc.Prim.Prim.:" ni155049462 ni51294366) */
            v155049462 = ((struct sCJhc_Prim_Prim_$x3a*)v25)->a1;
            v51294366 = ((struct sCJhc_Prim_Prim_$x3a*)v25)->a2;
            {   gc_frame0(gc,1,v155049462);
                wptr_t v100752 = eval(gc,arena,v51294366);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100752) {
                    wptr_t v100754;
                    wptr_t v100758;
                    sptr_t v3400;
                    sptr_t v68249516;
                    v100754 = fJhc_Text_Read_readsPrec(gc,arena,SET_RAW_TAG(TJhc_Type_Word_Int),PROMOTE(c115),v155049462);
                    v100758 = fJhc_Basics_concatMap(gc,arena,SET_RAW_TAG(P1__theMain$d5),v100754);
                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100758) {
                        jhc_error("Prelude.error: Prelude.read: no parse");
                    } else {
                        sptr_t v4258;
                        sptr_t v4260;
                        /* ("CJhc.Prim.Prim.:" ni4258 ni4260) */
                        v4258 = ((struct sCJhc_Prim_Prim_$x3a*)v100758)->a1;
                        v4260 = ((struct sCJhc_Prim_Prim_$x3a*)v100758)->a2;
                        {   gc_frame0(gc,1,v4258);
                            wptr_t v100760 = eval(gc,arena,v4260);
                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100760) {
                                wptr_t v100762 = eval(gc,arena,v4258);
                                {   wptr_t v100764;
                                    uint32_t v137248440;
                                    gc_frame0(gc,1,v100762);
                                    v137248440 = ((struct sCJhc_Type_Word_Int*)v100762)->a1;
                                    v100764 = fW$__fR$__fJhc_List_387__f(gc,arena,v137248440,g1782589455);
                                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100764) {
                                        v3400 = g1781016601;
                                    } else {
                                        sptr_t v177904410;
                                        sptr_t v34;
                                        /* ("CJhc.Prim.Prim.:" ni177904410 ni34) */
                                        v177904410 = ((struct sCJhc_Prim_Prim_$x3a*)v100764)->a1;
                                        v34 = ((struct sCJhc_Prim_Prim_$x3a*)v100764)->a2;
                                        {   gc_frame0(gc,2,v34,v177904410);
                                            sptr_t x551 = s_alloc(gc,arena,public_caches(arena)->cFR$__fJhc_Show_11__showl);
                                            ((struct sFR$__fJhc_Show_11__showl*)x551)->head = TO_FPTR(&E__fR$__fJhc_Show_11__showl);
                                            ((struct sFR$__fJhc_Show_11__showl*)x551)->a1 = v34;
                                            ((struct sFR$__fJhc_Show_11__showl*)x551)->a2 = SET_RAW_TAG(CJhc_Prim_Prim_$BE);
                                            sptr_t v129035592 = MKLAZY(x551);
                                            {   gc_frame0(gc,1,v129035592);
                                                sptr_t x552 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Show_shows);
                                                ((struct sFJhc_Show_shows*)x552)->head = TO_FPTR(&E__fJhc_Show_shows);
                                                ((struct sFJhc_Show_shows*)x552)->a1 = v177904410;
                                                ((struct sFJhc_Show_shows*)x552)->a2 = v129035592;
                                                sptr_t v102549690 = MKLAZY(x552);
                                                {   gc_frame0(gc,1,v102549690);
                                                    wptr_t x553 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                    ((struct sCJhc_Prim_Prim_$x3a*)x553)->a1 = ((sptr_t)RAW_SET_UF('['));
                                                    ((struct sCJhc_Prim_Prim_$x3a*)x553)->a2 = v102549690;
                                                    wptr_t v8261 = x553;
                                                    v3400 = demote(v8261);
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                /* ("CJhc.Prim.Prim.:" ni0 ni0) */
                                jhc_error("Prelude.error: Prelude.read: ambiguous parse");
                            }
                        }
                    }
                    wptr_t v100766 = eval(gc,arena,v3400);
                    sptr_t v118681336 = demote(v100766);
                    v68249516 = v118681336;
                    fJhc_Monad_72__go__554:;
                    {   wptr_t v100770 = eval(gc,arena,v68249516);
                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100770) {
                            SET_RAW_TAG(CJhc_Prim_Prim_$LR);
                        } else {
                            sptr_t v12;
                            sptr_t v264585908;
                            /* ("CJhc.Prim.Prim.:" ni12 ni264585908) */
                            v12 = ((struct sCJhc_Prim_Prim_$x3a*)v100770)->a1;
                            v264585908 = ((struct sCJhc_Prim_Prim_$x3a*)v100770)->a2;
                            {   gc_frame0(gc,1,v264585908);
                                wptr_t v100772 = eval(gc,arena,v12);
                                {   uint32_t v15858612;
                                    gc_frame0(gc,1,v100772);
                                    v15858612 = ((uint32_t)RAW_GET_UF(v100772));
                                    uint32_t v28059880 = v15858612;
                                    jhc_utf8_putchar((int)v28059880);
                                    v68249516 = v264585908;
                                    goto fJhc_Monad_72__go__554;
                                }
                            }
                        }
                    }
                    return jhc_utf8_putchar((int)10);
                } else {
                    /* ("CJhc.Prim.Prim.:" ni0 ni0) */
                    fJhc_IO_putErrLn(gc,arena,PROMOTE(c114));
                    jhc_exit(255);
                    return;
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d10(gc_t gc,arena_t arena,uintmax_t v37789460,wptr_t v60040038,uintmax_t v73700198,uintmax_t v163333524,uintmax_t v180953426,sptr_t v218886262,uintmax_t v254435822,wptr_t v263126040)
{
        sptr_t v60040860 = demote(v60040038);
        sptr_t v263126863 = demote(v263126040);
        uintmax_t v51588064 = (v180953426 * v163333524);
        uintmax_t v89270356 = (v254435822 - v51588064);
        uintmax_t v8408634 = (v180953426 * v73700198);
        uintmax_t v267064718 = (v37789460 - v8408634);
        return fW$__fMain_ratTrans(gc,arena,v263126863,v60040860,v89270356,v267064718,v218886262);
}

static wptr_t A_STD A_MALLOC
ftheMain$d100(gc_t gc,arena_t arena,uintmax_t v143960010,sptr_t v124005366)
{
        wptr_t v101288 = eval(gc,arena,v124005366);
        {   sptr_t v183861078;
            uintmax_t v85433878;
            struct tup1 x104;
            gc_frame0(gc,1,v101288);
            v85433878 = ((struct sCJhc_Type_Basic_Integer*)v101288)->a1;
            x104 = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default(gc,arena,v85433878,v143960010);
            v183861078 = x104.t0;
            return eval(gc,arena,v183861078);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d101(gc_t gc,arena_t arena,uintmax_t v187576970,uintmax_t v197827702,uintmax_t v128930122,uintmax_t v194551966,uintmax_t v133549784,wptr_t v11483698,sptr_t v212907558,sptr_t v65086124,wptr_t v110948000)
{
        sptr_t v11486280 = demote(v11483698);
        {   uint16_t v252749678;
            gc_frame0(gc,4,v11486280,v65086124,v110948000,v212907558);
            v252749678 = ((uint16_t)RAW_GET_UF(v110948000));
            if (0 == v252749678) {
                sptr_t v1845;
                sptr_t v1847;
                sptr_t v4469;
                uintmax_t v1849;
                uintmax_t v4466;
                struct tup10 x317;
                wptr_t v100006 = eval(gc,arena,v212907558);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100006) {
                    jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                } else {
                    sptr_t v163005386;
                    sptr_t v166577922;
                    /* ("CJhc.Prim.Prim.:" ni166577922 ni163005386) */
                    v166577922 = ((struct sCJhc_Prim_Prim_$x3a*)v100006)->a1;
                    v163005386 = ((struct sCJhc_Prim_Prim_$x3a*)v100006)->a2;
                    {   gc_frame0(gc,2,v163005386,v166577922);
                        sptr_t x318 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d103);
                        ((struct sFtheMain$d103*)x318)->head = TO_FPTR(&E__ftheMain$d103);
                        ((struct sFtheMain$d103*)x318)->a1 = v187576970;
                        ((struct sFtheMain$d103*)x318)->a2 = v128930122;
                        ((struct sFtheMain$d103*)x318)->a3 = v166577922;
                        sptr_t v76483314 = MKLAZY(x318);
                        {   gc_frame0(gc,1,v76483314);
                            wptr_t v100008 = eval(gc,arena,v166577922);
                            {   uintmax_t v2509618;
                                gc_frame0(gc,1,v100008);
                                v2509618 = ((struct sCJhc_Type_Basic_Integer*)v100008)->a1;
                                uintmax_t v56306554 = (v2509618 * v197827702);
                                uintmax_t v117992300 = (v133549784 + v56306554);
                                x317.t0 = v65086124;
                                x317.t1 = v76483314;
                                x317.t2 = v197827702;
                                x317.t3 = v117992300;
                                x317.t4 = v163005386;
                            }
                        }
                    }
                }
                v1845 = x317.t0;
                v1847 = x317.t1;
                v1849 = x317.t2;
                v4466 = x317.t3;
                v4469 = x317.t4;
                return fW$__fMain_ratTrans(gc,arena,v1845,v1847,v1849,v4466,v4469);
            } else {
                /* 1 */
                assert(1 == v252749678);
                wptr_t x319 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                ((struct sCJhc_Type_Basic_Integer*)x319)->a1 = v197827702;
                wptr_t v7331 = x319;
                {   gc_frame0(gc,1,v7331);
                    wptr_t x320 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                    ((struct sCJhc_Type_Basic_Integer*)x320)->a1 = v133549784;
                    wptr_t v4749 = x320;
                    {   gc_frame0(gc,1,v4749);
                        sptr_t x321 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d102);
                        ((struct sFtheMain$d102*)x321)->head = TO_FPTR(&E__ftheMain$d102);
                        ((struct sFtheMain$d102*)x321)->a1 = v187576970;
                        ((struct sFtheMain$d102*)x321)->a2 = v197827702;
                        ((struct sFtheMain$d102*)x321)->a3 = v128930122;
                        ((struct sFtheMain$d102*)x321)->a4 = v194551966;
                        ((struct sFtheMain$d102*)x321)->a5 = v133549784;
                        ((struct sFtheMain$d102*)x321)->a6 = v7331;
                        ((struct sFtheMain$d102*)x321)->a7 = v212907558;
                        ((struct sFtheMain$d102*)x321)->a8 = v4749;
                        sptr_t v18755250 = MKLAZY(x321);
                        {   gc_frame0(gc,1,v18755250);
                            wptr_t x322 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x322)->a1 = v11486280;
                            ((struct sCJhc_Prim_Prim_$x3a*)x322)->a2 = v18755250;
                            return x322;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d102(gc_t gc,arena_t arena,uintmax_t v28009248,uintmax_t v58800110,uintmax_t v75172702,uintmax_t v100615624,uintmax_t v237284570,wptr_t v177337776,sptr_t v24133714,wptr_t v226245508)
{
        sptr_t v177337911 = demote(v177337776);
        sptr_t v226245644 = demote(v226245508);
        uintmax_t v165930648 = (v100615624 * v237284570);
        uintmax_t v261886140 = (v75172702 - v165930648);
        uintmax_t v7152108 = (v100615624 * v58800110);
        uintmax_t v23693022 = (v28009248 - v7152108);
        return fW$__fMain_ratTrans(gc,arena,v226245644,v177337911,v261886140,v23693022,v24133714);
}

static wptr_t A_STD A_MALLOC
ftheMain$d103(gc_t gc,arena_t arena,uintmax_t v142590192,uintmax_t v111346352,sptr_t v94426894)
{
        wptr_t v100010 = eval(gc,arena,v94426894);
        {   uintmax_t v266304514;
            gc_frame0(gc,1,v100010);
            v266304514 = ((struct sCJhc_Type_Basic_Integer*)v100010)->a1;
            uintmax_t v222036050 = (v266304514 * v142590192);
            uintmax_t v119210126 = (v111346352 + v222036050);
            wptr_t x316 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
            ((struct sCJhc_Type_Basic_Integer*)x316)->a1 = v119210126;
            return x316;
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d104(gc_t gc,arena_t arena,sptr_t v59069482)
{
        wptr_t v101530;
        v101530 = fW$__fMain_ratTrans(gc,arena,c65,c35,0,1,v59069482);
        return fMain_toDigits(gc,arena,v101530);
}

static wptr_t A_STD A_MALLOC
ftheMain$d105(gc_t gc,arena_t arena)
{
        return fJhc_Basics_$pp(gc,arena,SET_RAW_TAG($_hole),c2,(sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
}

static wptr_t A_STD A_MALLOC
ftheMain$d11(gc_t gc,arena_t arena,uintmax_t v62352840,sptr_t v165942926,uintmax_t v46616538)
{
        wptr_t v100742 = eval(gc,arena,v165942926);
        {   uintmax_t v187274626;
            gc_frame0(gc,1,v100742);
            v187274626 = ((struct sCJhc_Type_Basic_Integer*)v100742)->a1;
            uintmax_t v244471894 = (v187274626 * v62352840);
            uintmax_t v250188744 = (v46616538 + v244471894);
            wptr_t x266 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
            ((struct sCJhc_Type_Basic_Integer*)x266)->a1 = v250188744;
            return x266;
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d12(gc_t gc,arena_t arena,uintmax_t v42118966,sptr_t v151514826)
{
        wptr_t v101302 = eval(gc,arena,v151514826);
        {   sptr_t v208085740;
            uintmax_t v30707550;
            struct tup1 x97;
            gc_frame0(gc,1,v101302);
            v30707550 = ((struct sCJhc_Type_Basic_Integer*)v101302)->a1;
            x97 = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default(gc,arena,v30707550,v42118966);
            v208085740 = x97.t0;
            return eval(gc,arena,v208085740);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d13(gc_t gc,arena_t arena,uintmax_t v158253518,sptr_t v218150378,uintmax_t v80007680,sptr_t v102891954,sptr_t v160680478,uintmax_t v267370364)
{
        {   gc_frame0(gc,2,v160680478,v218150378);
            wptr_t v100728 = eval(gc,arena,v102891954);
            {   gc_frame0(gc,1,v100728);
                wptr_t v100730 = eval(gc,arena,v218150378);
                {   gc_frame0(gc,1,v100730);
                    wptr_t v100732 = eval(gc,arena,v160680478);
                    {   uintmax_t v102939216;
                        uintmax_t v130941100;
                        uintmax_t v55118998;
                        gc_frame0(gc,1,v100732);
                        v55118998 = ((struct sCJhc_Type_Basic_Integer*)v100728)->a1;
                        uintmax_t v191257374 = (v267370364 * v55118998);
                        v102939216 = ((struct sCJhc_Type_Basic_Integer*)v100730)->a1;
                        v130941100 = ((struct sCJhc_Type_Basic_Integer*)v100732)->a1;
                        uintmax_t v206404424 = (v102939216 + v130941100);
                        uint16_t v100734 = (((intmax_t)v191257374) <= ((intmax_t)v206404424));
                        if (0 == v100734) {
                            return RAW_SET_UF(0);
                        } else {
                            /* 1 */
                            assert(1 == v100734);
                            uintmax_t v169436466 = (v80007680 + v158253518);
                            uintmax_t v24138774 = (v169436466 * v55118998);
                            uintmax_t v95762288 = (v80007680 + v158253518);
                            uintmax_t v72893098 = (v24138774 + v95762288);
                            uintmax_t v140062382 = (v102939216 + v130941100);
                            uint16_t v129267074 = (((intmax_t)v72893098) > ((intmax_t)v140062382));
                            return RAW_SET_UF(v129267074);
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d14(gc_t gc,arena_t arena,sptr_t v241147974,sptr_t v143113406,sptr_t v1980458)
{
        {   gc_frame0(gc,2,v1980458,v143113406);
            wptr_t v100722 = eval(gc,arena,v241147974);
            {   gc_frame0(gc,1,v100722);
                wptr_t v100724 = eval(gc,arena,v143113406);
                {   gc_frame0(gc,1,v100724);
                    wptr_t v100726 = eval(gc,arena,v1980458);
                    {   uintmax_t v235343146;
                        uintmax_t v24259348;
                        uintmax_t v262958246;
                        gc_frame0(gc,1,v100726);
                        v235343146 = ((struct sCJhc_Type_Basic_Integer*)v100722)->a1;
                        v24259348 = ((struct sCJhc_Type_Basic_Integer*)v100724)->a1;
                        v262958246 = ((struct sCJhc_Type_Basic_Integer*)v100726)->a1;
                        uintmax_t v103425218 = (v24259348 * v262958246);
                        uintmax_t v115599080 = (v235343146 + v103425218);
                        wptr_t x267 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x267)->a1 = v115599080;
                        return x267;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d15(gc_t gc,arena_t arena,uintmax_t v205779224,sptr_t v76303190,wptr_t v118052050,uintmax_t v46454716,sptr_t v191652910,wptr_t v212944728,sptr_t v240673846,sptr_t v264192728)
{
        sptr_t v118052847 = demote(v118052050);
        sptr_t v212945526 = demote(v212944728);
        {   gc_frame0(gc,5,v118052847,v191652910,v212945526,v240673846,v264192728);
            wptr_t v101524 = eval(gc,arena,v76303190);
            {   gc_frame0(gc,1,v101524);
                wptr_t v101526 = eval(gc,arena,v191652910);
                {   gc_frame0(gc,1,v101526);
                    wptr_t v101528 = eval(gc,arena,v264192728);
                    {   uintmax_t v102163682;
                        uintmax_t v222138554;
                        uintmax_t v24329084;
                        gc_frame0(gc,1,v101528);
                        v222138554 = ((struct sCJhc_Type_Basic_Integer*)v101524)->a1;
                        v24329084 = ((struct sCJhc_Type_Basic_Integer*)v101526)->a1;
                        uintmax_t v53788016 = (v24329084 * v46454716);
                        uintmax_t v171092542 = (v222138554 - v53788016);
                        v102163682 = ((struct sCJhc_Type_Basic_Integer*)v101528)->a1;
                        uintmax_t v131263420 = (v24329084 * v205779224);
                        uintmax_t v224126416 = (v102163682 - v131263420);
                        return fW$__fMain_ratTrans(gc,arena,v118052847,v212945526,v171092542,v224126416,v240673846);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d16(gc_t gc,arena_t arena,sptr_t v131690228,sptr_t v243465248,sptr_t v125949672)
{
        {   gc_frame0(gc,2,v125949672,v243465248);
            wptr_t v100716 = eval(gc,arena,v131690228);
            {   gc_frame0(gc,1,v100716);
                wptr_t v100718 = eval(gc,arena,v243465248);
                {   gc_frame0(gc,1,v100718);
                    wptr_t v100720 = eval(gc,arena,v125949672);
                    {   uintmax_t v13803846;
                        uintmax_t v184452252;
                        uintmax_t v243714862;
                        gc_frame0(gc,1,v100720);
                        v243714862 = ((struct sCJhc_Type_Basic_Integer*)v100716)->a1;
                        v13803846 = ((struct sCJhc_Type_Basic_Integer*)v100718)->a1;
                        v184452252 = ((struct sCJhc_Type_Basic_Integer*)v100720)->a1;
                        uintmax_t v138794828 = (v13803846 * v184452252);
                        uintmax_t v49810368 = (v243714862 + v138794828);
                        wptr_t x268 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x268)->a1 = v49810368;
                        return x268;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d17(gc_t gc,arena_t arena,sptr_t v239100278,sptr_t v159700510,sptr_t v173997446)
{
        {   gc_frame0(gc,2,v159700510,v173997446);
            wptr_t v100710 = eval(gc,arena,v239100278);
            {   gc_frame0(gc,1,v100710);
                wptr_t v100712 = eval(gc,arena,v159700510);
                {   gc_frame0(gc,1,v100712);
                    wptr_t v100714 = eval(gc,arena,v173997446);
                    {   uintmax_t v233660396;
                        uintmax_t v250896070;
                        uintmax_t v5988508;
                        gc_frame0(gc,1,v100714);
                        v5988508 = ((struct sCJhc_Type_Basic_Integer*)v100710)->a1;
                        v250896070 = ((struct sCJhc_Type_Basic_Integer*)v100712)->a1;
                        v233660396 = ((struct sCJhc_Type_Basic_Integer*)v100714)->a1;
                        uintmax_t v7818876 = (v250896070 * v233660396);
                        uintmax_t v151477128 = (v5988508 + v7818876);
                        wptr_t x269 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x269)->a1 = v151477128;
                        return x269;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d18(gc_t gc,arena_t arena,uintmax_t v51274848,sptr_t v29077244,wptr_t v78939490,uintmax_t v110207574,sptr_t v120834810,wptr_t v196551380,sptr_t v183082878,sptr_t v1780406)
{
        sptr_t v78940262 = demote(v78939490);
        sptr_t v196552153 = demote(v196551380);
        {   gc_frame0(gc,5,v1780406,v78940262,v120834810,v183082878,v196552153);
            wptr_t v101518 = eval(gc,arena,v29077244);
            {   gc_frame0(gc,1,v101518);
                wptr_t v101520 = eval(gc,arena,v120834810);
                {   gc_frame0(gc,1,v101520);
                    wptr_t v101522 = eval(gc,arena,v1780406);
                    {   uintmax_t v161350322;
                        uintmax_t v19530608;
                        uintmax_t v236625868;
                        gc_frame0(gc,1,v101522);
                        v161350322 = ((struct sCJhc_Type_Basic_Integer*)v101518)->a1;
                        v19530608 = ((struct sCJhc_Type_Basic_Integer*)v101520)->a1;
                        uintmax_t v85235532 = (v19530608 * v110207574);
                        uintmax_t v246097320 = (v161350322 - v85235532);
                        v236625868 = ((struct sCJhc_Type_Basic_Integer*)v101522)->a1;
                        uintmax_t v25602826 = (v19530608 * v51274848);
                        uintmax_t v181136484 = (v236625868 - v25602826);
                        return fW$__fMain_ratTrans(gc,arena,v196552153,v78940262,v246097320,v181136484,v183082878);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d19(gc_t gc,arena_t arena,sptr_t v2171400,sptr_t v263919152,sptr_t v167139934)
{
        {   gc_frame0(gc,2,v167139934,v263919152);
            wptr_t v100704 = eval(gc,arena,v2171400);
            {   gc_frame0(gc,1,v100704);
                wptr_t v100706 = eval(gc,arena,v263919152);
                {   gc_frame0(gc,1,v100706);
                    wptr_t v100708 = eval(gc,arena,v167139934);
                    {   uintmax_t v134630442;
                        uintmax_t v188545080;
                        uintmax_t v82568580;
                        gc_frame0(gc,1,v100708);
                        v134630442 = ((struct sCJhc_Type_Basic_Integer*)v100704)->a1;
                        v82568580 = ((struct sCJhc_Type_Basic_Integer*)v100706)->a1;
                        v188545080 = ((struct sCJhc_Type_Basic_Integer*)v100708)->a1;
                        uintmax_t v20921342 = (v82568580 * v188545080);
                        uintmax_t v135520222 = (v134630442 + v20921342);
                        wptr_t x270 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x270)->a1 = v135520222;
                        return x270;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d2(gc_t gc,arena_t arena,uint32_t v187320696,uint32_t v115160440)
{
        wptr_t x254 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Word_Int);
        ((struct sCJhc_Type_Word_Int*)x254)->a1 = v115160440;
        wptr_t v4602 = x254;
        sptr_t v194508208 = demote(v4602);
        uint16_t v100794 = (((int32_t)v115160440) > ((int32_t)v187320696));
        if (0 == v100794) {
            uint32_t v10527816 = (1 + v115160440);
            {   gc_frame0(gc,1,v194508208);
                sptr_t x255 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d2);
                ((struct sFtheMain$d2*)x255)->head = TO_FPTR(&E__ftheMain$d2);
                ((struct sFtheMain$d2*)x255)->a1 = v187320696;
                ((struct sFtheMain$d2*)x255)->a2 = v10527816;
                sptr_t v146030160 = MKLAZY(x255);
                {   gc_frame0(gc,1,v146030160);
                    wptr_t x256 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x256)->a1 = v194508208;
                    ((struct sCJhc_Prim_Prim_$x3a*)x256)->a2 = v146030160;
                    return x256;
                }
            }
        } else {
            /* 1 */
            assert(1 == v100794);
            return SET_RAW_TAG(CJhc_Prim_Prim_$BE);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d20(gc_t gc,arena_t arena,sptr_t v161788968,sptr_t v145737754,sptr_t v117501958)
{
        {   gc_frame0(gc,2,v117501958,v145737754);
            wptr_t v100698 = eval(gc,arena,v161788968);
            {   gc_frame0(gc,1,v100698);
                wptr_t v100700 = eval(gc,arena,v145737754);
                {   gc_frame0(gc,1,v100700);
                    wptr_t v100702 = eval(gc,arena,v117501958);
                    {   uintmax_t v13190390;
                        uintmax_t v175036830;
                        uintmax_t v178033786;
                        gc_frame0(gc,1,v100702);
                        v13190390 = ((struct sCJhc_Type_Basic_Integer*)v100698)->a1;
                        v175036830 = ((struct sCJhc_Type_Basic_Integer*)v100700)->a1;
                        v178033786 = ((struct sCJhc_Type_Basic_Integer*)v100702)->a1;
                        uintmax_t v244449310 = (v175036830 * v178033786);
                        uintmax_t v211934526 = (v13190390 + v244449310);
                        wptr_t x271 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x271)->a1 = v211934526;
                        return x271;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d21(gc_t gc,arena_t arena,uintmax_t v141244512,sptr_t v130564414,wptr_t v105527380,wptr_t v153504076,uintmax_t v21055632,sptr_t v15858620,sptr_t v169909354,sptr_t v45052584)
{
        sptr_t v105528127 = demote(v105527380);
        sptr_t v153504824 = demote(v153504076);
        {   gc_frame0(gc,5,v15858620,v45052584,v105528127,v153504824,v169909354);
            wptr_t v101512 = eval(gc,arena,v130564414);
            {   gc_frame0(gc,1,v101512);
                wptr_t v101514 = eval(gc,arena,v15858620);
                {   gc_frame0(gc,1,v101514);
                    wptr_t v101516 = eval(gc,arena,v45052584);
                    {   uintmax_t v138929408;
                        uintmax_t v232832138;
                        uintmax_t v232939208;
                        gc_frame0(gc,1,v101516);
                        v232832138 = ((struct sCJhc_Type_Basic_Integer*)v101512)->a1;
                        v138929408 = ((struct sCJhc_Type_Basic_Integer*)v101514)->a1;
                        uintmax_t v236244382 = (v138929408 * v21055632);
                        uintmax_t v120327486 = (v232832138 - v236244382);
                        v232939208 = ((struct sCJhc_Type_Basic_Integer*)v101516)->a1;
                        uintmax_t v75827050 = (v138929408 * v141244512);
                        uintmax_t v9728868 = (v232939208 - v75827050);
                        return fW$__fMain_ratTrans(gc,arena,v105528127,v153504824,v120327486,v9728868,v169909354);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d22(gc_t gc,arena_t arena,sptr_t v223132534,sptr_t v125714784,sptr_t v203991440)
{
        {   gc_frame0(gc,2,v125714784,v203991440);
            wptr_t v100692 = eval(gc,arena,v223132534);
            {   gc_frame0(gc,1,v100692);
                wptr_t v100694 = eval(gc,arena,v125714784);
                {   gc_frame0(gc,1,v100694);
                    wptr_t v100696 = eval(gc,arena,v203991440);
                    {   uintmax_t v126550540;
                        uintmax_t v56530756;
                        uintmax_t v69028706;
                        gc_frame0(gc,1,v100696);
                        v126550540 = ((struct sCJhc_Type_Basic_Integer*)v100692)->a1;
                        v56530756 = ((struct sCJhc_Type_Basic_Integer*)v100694)->a1;
                        v69028706 = ((struct sCJhc_Type_Basic_Integer*)v100696)->a1;
                        uintmax_t v10649780 = (v56530756 * v69028706);
                        uintmax_t v254483264 = (v126550540 + v10649780);
                        wptr_t x272 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x272)->a1 = v254483264;
                        return x272;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d23(gc_t gc,arena_t arena,sptr_t v223108754,sptr_t v164501550,sptr_t v68911720)
{
        {   gc_frame0(gc,2,v68911720,v164501550);
            wptr_t v100686 = eval(gc,arena,v223108754);
            {   gc_frame0(gc,1,v100686);
                wptr_t v100688 = eval(gc,arena,v164501550);
                {   gc_frame0(gc,1,v100688);
                    wptr_t v100690 = eval(gc,arena,v68911720);
                    {   uintmax_t v201940348;
                        uintmax_t v218328830;
                        uintmax_t v256794228;
                        gc_frame0(gc,1,v100690);
                        v218328830 = ((struct sCJhc_Type_Basic_Integer*)v100686)->a1;
                        v201940348 = ((struct sCJhc_Type_Basic_Integer*)v100688)->a1;
                        v256794228 = ((struct sCJhc_Type_Basic_Integer*)v100690)->a1;
                        uintmax_t v10659386 = (v201940348 * v256794228);
                        uintmax_t v7438922 = (v218328830 + v10659386);
                        wptr_t x273 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x273)->a1 = v7438922;
                        return x273;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d24(gc_t gc,arena_t arena,uintmax_t v58334288,sptr_t v253791876,wptr_t v125536984,uintmax_t v237992584,wptr_t v186917922,sptr_t v172090968,sptr_t v111142934,sptr_t v202961034)
{
        sptr_t v125537706 = demote(v125536984);
        sptr_t v186918645 = demote(v186917922);
        {   gc_frame0(gc,5,v111142934,v125537706,v172090968,v186918645,v202961034);
            wptr_t v101506 = eval(gc,arena,v253791876);
            {   gc_frame0(gc,1,v101506);
                wptr_t v101508 = eval(gc,arena,v172090968);
                {   gc_frame0(gc,1,v101508);
                    wptr_t v101510 = eval(gc,arena,v202961034);
                    {   uintmax_t v138653432;
                        uintmax_t v260857606;
                        uintmax_t v54046832;
                        gc_frame0(gc,1,v101510);
                        v138653432 = ((struct sCJhc_Type_Basic_Integer*)v101506)->a1;
                        v54046832 = ((struct sCJhc_Type_Basic_Integer*)v101508)->a1;
                        uintmax_t v185454092 = (v54046832 * v237992584);
                        uintmax_t v76364414 = (v138653432 - v185454092);
                        v260857606 = ((struct sCJhc_Type_Basic_Integer*)v101510)->a1;
                        uintmax_t v204499666 = (v54046832 * v58334288);
                        uintmax_t v134409870 = (v260857606 - v204499666);
                        return fW$__fMain_ratTrans(gc,arena,v186918645,v125537706,v76364414,v134409870,v111142934);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d25(gc_t gc,arena_t arena,sptr_t v153504074,sptr_t v249570746,sptr_t v263650746)
{
        {   gc_frame0(gc,2,v249570746,v263650746);
            wptr_t v100680 = eval(gc,arena,v153504074);
            {   gc_frame0(gc,1,v100680);
                wptr_t v100682 = eval(gc,arena,v249570746);
                {   gc_frame0(gc,1,v100682);
                    wptr_t v100684 = eval(gc,arena,v263650746);
                    {   uintmax_t v161443780;
                        uintmax_t v68812050;
                        uintmax_t v77145382;
                        gc_frame0(gc,1,v100684);
                        v161443780 = ((struct sCJhc_Type_Basic_Integer*)v100680)->a1;
                        v68812050 = ((struct sCJhc_Type_Basic_Integer*)v100682)->a1;
                        v77145382 = ((struct sCJhc_Type_Basic_Integer*)v100684)->a1;
                        uintmax_t v11146704 = (v68812050 * v77145382);
                        uintmax_t v262269096 = (v161443780 + v11146704);
                        wptr_t x274 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x274)->a1 = v262269096;
                        return x274;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d26(gc_t gc,arena_t arena,uintmax_t v35878050,sptr_t v195325126)
{
        wptr_t v101300 = eval(gc,arena,v195325126);
        {   sptr_t v87687696;
            uintmax_t v95584982;
            struct tup1 x98;
            gc_frame0(gc,1,v101300);
            v95584982 = ((struct sCJhc_Type_Basic_Integer*)v101300)->a1;
            x98 = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default(gc,arena,v95584982,v35878050);
            v87687696 = x98.t0;
            return eval(gc,arena,v87687696);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d27(gc_t gc,arena_t arena,uintmax_t v40090100,uintmax_t v97832272,sptr_t v244592736,uintmax_t v255047276,sptr_t v240508882,sptr_t v185347146)
{
        {   gc_frame0(gc,2,v185347146,v244592736);
            wptr_t v100672 = eval(gc,arena,v240508882);
            {   gc_frame0(gc,1,v100672);
                wptr_t v100674 = eval(gc,arena,v244592736);
                {   gc_frame0(gc,1,v100674);
                    wptr_t v100676 = eval(gc,arena,v185347146);
                    {   uintmax_t v3497554;
                        uintmax_t v72064546;
                        uintmax_t v72360248;
                        gc_frame0(gc,1,v100676);
                        v3497554 = ((struct sCJhc_Type_Basic_Integer*)v100672)->a1;
                        uintmax_t v79593808 = (v40090100 * v3497554);
                        v72064546 = ((struct sCJhc_Type_Basic_Integer*)v100674)->a1;
                        v72360248 = ((struct sCJhc_Type_Basic_Integer*)v100676)->a1;
                        uintmax_t v176218856 = (v72064546 + v72360248);
                        uint16_t v100678 = (((intmax_t)v79593808) <= ((intmax_t)v176218856));
                        if (0 == v100678) {
                            return RAW_SET_UF(0);
                        } else {
                            /* 1 */
                            assert(1 == v100678);
                            uintmax_t v115516486 = (v255047276 + v97832272);
                            uintmax_t v230754948 = (v115516486 * v3497554);
                            uintmax_t v206784656 = (v255047276 + v97832272);
                            uintmax_t v241961904 = (v230754948 + v206784656);
                            uintmax_t v34254636 = (v72064546 + v72360248);
                            uint16_t v241923796 = (((intmax_t)v241961904) > ((intmax_t)v34254636));
                            return RAW_SET_UF(v241923796);
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d28(gc_t gc,arena_t arena,sptr_t v1896400,sptr_t v190594772,sptr_t v176422428)
{
        {   gc_frame0(gc,2,v176422428,v190594772);
            wptr_t v100666 = eval(gc,arena,v1896400);
            {   gc_frame0(gc,1,v100666);
                wptr_t v100668 = eval(gc,arena,v190594772);
                {   gc_frame0(gc,1,v100668);
                    wptr_t v100670 = eval(gc,arena,v176422428);
                    {   uintmax_t v108742;
                        uintmax_t v172249170;
                        uintmax_t v199058638;
                        gc_frame0(gc,1,v100670);
                        v172249170 = ((struct sCJhc_Type_Basic_Integer*)v100666)->a1;
                        v199058638 = ((struct sCJhc_Type_Basic_Integer*)v100668)->a1;
                        v108742 = ((struct sCJhc_Type_Basic_Integer*)v100670)->a1;
                        uintmax_t v120592616 = (v199058638 * v108742);
                        uintmax_t v28985550 = (v172249170 + v120592616);
                        wptr_t x275 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x275)->a1 = v28985550;
                        return x275;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d29(gc_t gc,arena_t arena,wptr_t v26450574,uintmax_t v128764926,sptr_t v7598848,uintmax_t v123670240,sptr_t v186043006,wptr_t v189036904,sptr_t v267321786,sptr_t v58750240)
{
        sptr_t v26451271 = demote(v26450574);
        sptr_t v189037602 = demote(v189036904);
        {   gc_frame0(gc,5,v26451271,v58750240,v186043006,v189037602,v267321786);
            wptr_t v101500 = eval(gc,arena,v7598848);
            {   gc_frame0(gc,1,v101500);
                wptr_t v101502 = eval(gc,arena,v186043006);
                {   gc_frame0(gc,1,v101502);
                    wptr_t v101504 = eval(gc,arena,v58750240);
                    {   uintmax_t v193934726;
                        uintmax_t v239396660;
                        uintmax_t v77875360;
                        gc_frame0(gc,1,v101504);
                        v77875360 = ((struct sCJhc_Type_Basic_Integer*)v101500)->a1;
                        v239396660 = ((struct sCJhc_Type_Basic_Integer*)v101502)->a1;
                        uintmax_t v112431790 = (v239396660 * v123670240);
                        uintmax_t v28709476 = (v77875360 - v112431790);
                        v193934726 = ((struct sCJhc_Type_Basic_Integer*)v101504)->a1;
                        uintmax_t v4016178 = (v239396660 * v128764926);
                        uintmax_t v196890814 = (v193934726 - v4016178);
                        return fW$__fMain_ratTrans(gc,arena,v189037602,v26451271,v28709476,v196890814,v267321786);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d3(gc_t gc,arena_t arena,sptr_t v1509696567,sptr_t v1516774455,sptr_t v1520313399)
{
        {   gc_frame0(gc,2,v1509696567,v1520313399);
            wptr_t v100790 = eval(gc,arena,v1516774455);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100790) {
                wptr_t v100792 = eval(gc,arena,v1520313399);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100792) {
                    wptr_t x257 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x257)->a1 = v1509696567;
                    ((struct sCJhc_Prim_Prim_$x3a*)x257)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
                    return x257;
                } else {
                    /* ("CJhc.Prim.Prim.:" ni0 ni0) */
                    return SET_RAW_TAG(CJhc_Prim_Prim_$BE);
                }
            } else {
                /* ("CJhc.Prim.Prim.:" ni0 ni0) */
                return SET_RAW_TAG(CJhc_Prim_Prim_$BE);
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d30(gc_t gc,arena_t arena,sptr_t v27092182,sptr_t v205904152,sptr_t v223322624)
{
        {   gc_frame0(gc,2,v27092182,v223322624);
            wptr_t v100660 = eval(gc,arena,v205904152);
            {   gc_frame0(gc,1,v100660);
                wptr_t v100662 = eval(gc,arena,v27092182);
                {   gc_frame0(gc,1,v100662);
                    wptr_t v100664 = eval(gc,arena,v223322624);
                    {   uintmax_t v140926152;
                        uintmax_t v162419306;
                        uintmax_t v169458478;
                        gc_frame0(gc,1,v100664);
                        v140926152 = ((struct sCJhc_Type_Basic_Integer*)v100660)->a1;
                        v162419306 = ((struct sCJhc_Type_Basic_Integer*)v100662)->a1;
                        v169458478 = ((struct sCJhc_Type_Basic_Integer*)v100664)->a1;
                        uintmax_t v203096586 = (v162419306 * v169458478);
                        uintmax_t v127051864 = (v140926152 + v203096586);
                        wptr_t x276 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x276)->a1 = v127051864;
                        return x276;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d31(gc_t gc,arena_t arena,sptr_t v47625414,sptr_t v167193546,sptr_t v50167690)
{
        {   gc_frame0(gc,2,v47625414,v50167690);
            wptr_t v100654 = eval(gc,arena,v167193546);
            {   gc_frame0(gc,1,v100654);
                wptr_t v100656 = eval(gc,arena,v47625414);
                {   gc_frame0(gc,1,v100656);
                    wptr_t v100658 = eval(gc,arena,v50167690);
                    {   uintmax_t v100768630;
                        uintmax_t v220556070;
                        uintmax_t v59544928;
                        gc_frame0(gc,1,v100658);
                        v220556070 = ((struct sCJhc_Type_Basic_Integer*)v100654)->a1;
                        v100768630 = ((struct sCJhc_Type_Basic_Integer*)v100656)->a1;
                        v59544928 = ((struct sCJhc_Type_Basic_Integer*)v100658)->a1;
                        uintmax_t v84808910 = (v100768630 * v59544928);
                        uintmax_t v83311012 = (v220556070 + v84808910);
                        wptr_t x277 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x277)->a1 = v83311012;
                        return x277;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d32(gc_t gc,arena_t arena,uintmax_t v238570486,sptr_t v167886986,wptr_t v99676084,uintmax_t v56741148,sptr_t v92400194,wptr_t v186377428,sptr_t v235480816,sptr_t v196970364)
{
        sptr_t v99676756 = demote(v99676084);
        sptr_t v186378101 = demote(v186377428);
        {   gc_frame0(gc,5,v92400194,v99676756,v186378101,v196970364,v235480816);
            wptr_t v101494 = eval(gc,arena,v167886986);
            {   gc_frame0(gc,1,v101494);
                wptr_t v101496 = eval(gc,arena,v92400194);
                {   gc_frame0(gc,1,v101496);
                    wptr_t v101498 = eval(gc,arena,v196970364);
                    {   uintmax_t v184250106;
                        uintmax_t v213494262;
                        uintmax_t v32304422;
                        gc_frame0(gc,1,v101498);
                        v213494262 = ((struct sCJhc_Type_Basic_Integer*)v101494)->a1;
                        v32304422 = ((struct sCJhc_Type_Basic_Integer*)v101496)->a1;
                        uintmax_t v136770202 = (v32304422 * v56741148);
                        uintmax_t v195015070 = (v213494262 - v136770202);
                        v184250106 = ((struct sCJhc_Type_Basic_Integer*)v101498)->a1;
                        uintmax_t v125123158 = (v32304422 * v238570486);
                        uintmax_t v206413414 = (v184250106 - v125123158);
                        return fW$__fMain_ratTrans(gc,arena,v99676756,v186378101,v195015070,v206413414,v235480816);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d33(gc_t gc,arena_t arena,sptr_t v32506482,sptr_t v253381940,sptr_t v160021402)
{
        {   gc_frame0(gc,2,v160021402,v253381940);
            wptr_t v100648 = eval(gc,arena,v32506482);
            {   gc_frame0(gc,1,v100648);
                wptr_t v100650 = eval(gc,arena,v253381940);
                {   gc_frame0(gc,1,v100650);
                    wptr_t v100652 = eval(gc,arena,v160021402);
                    {   uintmax_t v179034436;
                        uintmax_t v214702150;
                        uintmax_t v94700212;
                        gc_frame0(gc,1,v100652);
                        v94700212 = ((struct sCJhc_Type_Basic_Integer*)v100648)->a1;
                        v214702150 = ((struct sCJhc_Type_Basic_Integer*)v100650)->a1;
                        v179034436 = ((struct sCJhc_Type_Basic_Integer*)v100652)->a1;
                        uintmax_t v167638382 = (v214702150 * v179034436);
                        uintmax_t v8055546 = (v94700212 + v167638382);
                        wptr_t x278 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x278)->a1 = v8055546;
                        return x278;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d34(gc_t gc,arena_t arena,sptr_t v29208316,sptr_t v181560322,sptr_t v32158690)
{
        {   gc_frame0(gc,2,v32158690,v181560322);
            wptr_t v100642 = eval(gc,arena,v29208316);
            {   gc_frame0(gc,1,v100642);
                wptr_t v100644 = eval(gc,arena,v181560322);
                {   gc_frame0(gc,1,v100644);
                    wptr_t v100646 = eval(gc,arena,v32158690);
                    {   uintmax_t v193330028;
                        uintmax_t v202402842;
                        uintmax_t v210798110;
                        gc_frame0(gc,1,v100646);
                        v210798110 = ((struct sCJhc_Type_Basic_Integer*)v100642)->a1;
                        v202402842 = ((struct sCJhc_Type_Basic_Integer*)v100644)->a1;
                        v193330028 = ((struct sCJhc_Type_Basic_Integer*)v100646)->a1;
                        uintmax_t v132873296 = (v202402842 * v193330028);
                        uintmax_t v148218402 = (v210798110 + v132873296);
                        wptr_t x279 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x279)->a1 = v148218402;
                        return x279;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d35(gc_t gc,arena_t arena,wptr_t v7252610,uintmax_t v73700196,sptr_t v218886264,uintmax_t v11751994,sptr_t v241309826,wptr_t v202424670,sptr_t v174020696,sptr_t v245228924)
{
        sptr_t v7253257 = demote(v7252610);
        sptr_t v202425318 = demote(v202424670);
        {   gc_frame0(gc,5,v7253257,v174020696,v202425318,v241309826,v245228924);
            wptr_t v101488 = eval(gc,arena,v218886264);
            {   gc_frame0(gc,1,v101488);
                wptr_t v101490 = eval(gc,arena,v241309826);
                {   gc_frame0(gc,1,v101490);
                    wptr_t v101492 = eval(gc,arena,v245228924);
                    {   uintmax_t v195522838;
                        uintmax_t v8746616;
                        uintmax_t v98635554;
                        gc_frame0(gc,1,v101492);
                        v195522838 = ((struct sCJhc_Type_Basic_Integer*)v101488)->a1;
                        v8746616 = ((struct sCJhc_Type_Basic_Integer*)v101490)->a1;
                        uintmax_t v217610494 = (v8746616 * v11751994);
                        uintmax_t v169339620 = (v195522838 - v217610494);
                        v98635554 = ((struct sCJhc_Type_Basic_Integer*)v101492)->a1;
                        uintmax_t v158573814 = (v8746616 * v73700196);
                        uintmax_t v16051306 = (v98635554 - v158573814);
                        return fW$__fMain_ratTrans(gc,arena,v7253257,v202425318,v169339620,v16051306,v174020696);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d36(gc_t gc,arena_t arena,sptr_t v140079098,sptr_t v77402378,sptr_t v73437330)
{
        {   gc_frame0(gc,2,v73437330,v77402378);
            wptr_t v100636 = eval(gc,arena,v140079098);
            {   gc_frame0(gc,1,v100636);
                wptr_t v100638 = eval(gc,arena,v77402378);
                {   gc_frame0(gc,1,v100638);
                    wptr_t v100640 = eval(gc,arena,v73437330);
                    {   uintmax_t v233679022;
                        uintmax_t v242565842;
                        uintmax_t v35428518;
                        gc_frame0(gc,1,v100640);
                        v242565842 = ((struct sCJhc_Type_Basic_Integer*)v100636)->a1;
                        v233679022 = ((struct sCJhc_Type_Basic_Integer*)v100638)->a1;
                        v35428518 = ((struct sCJhc_Type_Basic_Integer*)v100640)->a1;
                        uintmax_t v233559490 = (v233679022 * v35428518);
                        uintmax_t v72532782 = (v242565842 + v233559490);
                        wptr_t x280 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x280)->a1 = v72532782;
                        return x280;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d37(gc_t gc,arena_t arena,sptr_t v11006260,sptr_t v204742008,sptr_t v95584984)
{
        {   gc_frame0(gc,2,v11006260,v95584984);
            wptr_t v100630 = eval(gc,arena,v204742008);
            {   gc_frame0(gc,1,v100630);
                wptr_t v100632 = eval(gc,arena,v11006260);
                {   gc_frame0(gc,1,v100632);
                    wptr_t v100634 = eval(gc,arena,v95584984);
                    {   uintmax_t v1841192;
                        uintmax_t v217349528;
                        uintmax_t v22881590;
                        gc_frame0(gc,1,v100634);
                        v22881590 = ((struct sCJhc_Type_Basic_Integer*)v100630)->a1;
                        v1841192 = ((struct sCJhc_Type_Basic_Integer*)v100632)->a1;
                        v217349528 = ((struct sCJhc_Type_Basic_Integer*)v100634)->a1;
                        uintmax_t v149357052 = (v1841192 * v217349528);
                        uintmax_t v85901660 = (v22881590 + v149357052);
                        wptr_t x281 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x281)->a1 = v85901660;
                        return x281;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d38(gc_t gc,arena_t arena,uintmax_t v90105170,sptr_t v100210678,wptr_t v131747560,uintmax_t v212413206,wptr_t v178413712,sptr_t v35624300,sptr_t v207549704,sptr_t v262424426)
{
        sptr_t v131748182 = demote(v131747560);
        sptr_t v178414335 = demote(v178413712);
        {   gc_frame0(gc,5,v35624300,v131748182,v178414335,v207549704,v262424426);
            wptr_t v101482 = eval(gc,arena,v100210678);
            {   gc_frame0(gc,1,v101482);
                wptr_t v101484 = eval(gc,arena,v35624300);
                {   gc_frame0(gc,1,v101484);
                    wptr_t v101486 = eval(gc,arena,v262424426);
                    {   uintmax_t v25313854;
                        uintmax_t v77928938;
                        uintmax_t v90217718;
                        gc_frame0(gc,1,v101486);
                        v77928938 = ((struct sCJhc_Type_Basic_Integer*)v101482)->a1;
                        v90217718 = ((struct sCJhc_Type_Basic_Integer*)v101484)->a1;
                        uintmax_t v51544150 = (v90217718 * v212413206);
                        uintmax_t v160971000 = (v77928938 - v51544150);
                        v25313854 = ((struct sCJhc_Type_Basic_Integer*)v101486)->a1;
                        uintmax_t v232025696 = (v90217718 * v90105170);
                        uintmax_t v18598524 = (v25313854 - v232025696);
                        return fW$__fMain_ratTrans(gc,arena,v178414335,v131748182,v160971000,v18598524,v207549704);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d39(gc_t gc,arena_t arena,sptr_t v21280168,sptr_t v216450962,sptr_t v173801154)
{
        {   gc_frame0(gc,2,v21280168,v173801154);
            wptr_t v100624 = eval(gc,arena,v216450962);
            {   gc_frame0(gc,1,v100624);
                wptr_t v100626 = eval(gc,arena,v21280168);
                {   gc_frame0(gc,1,v100626);
                    wptr_t v100628 = eval(gc,arena,v173801154);
                    {   uintmax_t v238981498;
                        uintmax_t v93173176;
                        uintmax_t v96329370;
                        gc_frame0(gc,1,v100628);
                        v93173176 = ((struct sCJhc_Type_Basic_Integer*)v100624)->a1;
                        v238981498 = ((struct sCJhc_Type_Basic_Integer*)v100626)->a1;
                        v96329370 = ((struct sCJhc_Type_Basic_Integer*)v100628)->a1;
                        uintmax_t v212089518 = (v238981498 * v96329370);
                        uintmax_t v131441410 = (v93173176 + v212089518);
                        wptr_t x282 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x282)->a1 = v131441410;
                        return x282;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d4(gc_t gc,arena_t arena,sptr_t v1609835549,sptr_t v267321788)
{
        {   gc_frame0(gc,1,v1609835549);
            wptr_t v100784 = eval(gc,arena,v267321788);
            wptr_t v100786 = promote(v1609835549);
            {   sptr_t v135170748;
                sptr_t v178407648;
                gc_frame0(gc,2,v100784,v100786);
                v178407648 = ((struct sCJhc_Prim_Prim_$LcR*)v100784)->a1;
                v135170748 = ((struct sCJhc_Prim_Prim_$LcR*)v100784)->a2;
                {   sptr_t v1458;
                    gc_frame0(gc,2,v135170748,v178407648);
                    v1458 = ((struct sP2__theMain$d3*)v100786)->a1;
                    return ftheMain$d3(gc,arena,v1458,v178407648,v135170748);
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d40(gc_t gc,arena_t arena,uintmax_t v148294368,sptr_t v88032712)
{
        wptr_t v101298 = eval(gc,arena,v88032712);
        {   sptr_t v209100926;
            uintmax_t v207549710;
            struct tup1 x99;
            gc_frame0(gc,1,v101298);
            v207549710 = ((struct sCJhc_Type_Basic_Integer*)v101298)->a1;
            x99 = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default(gc,arena,v207549710,v148294368);
            v209100926 = x99.t0;
            return eval(gc,arena,v209100926);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d41(gc_t gc,arena_t arena,uintmax_t v71121692,sptr_t v4177722,uintmax_t v247844062,sptr_t v218239112,uintmax_t v251858414,sptr_t v244867476)
{
        {   gc_frame0(gc,2,v4177722,v244867476);
            wptr_t v100616 = eval(gc,arena,v218239112);
            {   gc_frame0(gc,1,v100616);
                wptr_t v100618 = eval(gc,arena,v4177722);
                {   gc_frame0(gc,1,v100618);
                    wptr_t v100620 = eval(gc,arena,v244867476);
                    {   uintmax_t v197016942;
                        uintmax_t v261514472;
                        uintmax_t v73437328;
                        gc_frame0(gc,1,v100620);
                        v197016942 = ((struct sCJhc_Type_Basic_Integer*)v100616)->a1;
                        uintmax_t v22554430 = (v251858414 * v197016942);
                        v73437328 = ((struct sCJhc_Type_Basic_Integer*)v100618)->a1;
                        v261514472 = ((struct sCJhc_Type_Basic_Integer*)v100620)->a1;
                        uintmax_t v152135036 = (v73437328 + v261514472);
                        uint16_t v100622 = (((intmax_t)v22554430) <= ((intmax_t)v152135036));
                        if (0 == v100622) {
                            return RAW_SET_UF(0);
                        } else {
                            /* 1 */
                            assert(1 == v100622);
                            uintmax_t v95584980 = (v247844062 + v71121692);
                            uintmax_t v148134850 = (v95584980 * v197016942);
                            uintmax_t v40313382 = (v247844062 + v71121692);
                            uintmax_t v87687694 = (v148134850 + v40313382);
                            uintmax_t v216450958 = (v73437328 + v261514472);
                            uint16_t v173801152 = (((intmax_t)v87687694) > ((intmax_t)v216450958));
                            return RAW_SET_UF(v173801152);
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d42(gc_t gc,arena_t arena,sptr_t v194402432,sptr_t v194402430,sptr_t v1339532)
{
        {   gc_frame0(gc,2,v1339532,v194402430);
            wptr_t v100610 = eval(gc,arena,v194402432);
            {   gc_frame0(gc,1,v100610);
                wptr_t v100612 = eval(gc,arena,v194402430);
                {   gc_frame0(gc,1,v100612);
                    wptr_t v100614 = eval(gc,arena,v1339532);
                    {   uintmax_t v112839540;
                        uintmax_t v117752370;
                        uintmax_t v22604478;
                        gc_frame0(gc,1,v100614);
                        v117752370 = ((struct sCJhc_Type_Basic_Integer*)v100610)->a1;
                        v112839540 = ((struct sCJhc_Type_Basic_Integer*)v100612)->a1;
                        v22604478 = ((struct sCJhc_Type_Basic_Integer*)v100614)->a1;
                        uintmax_t v224988698 = (v112839540 * v22604478);
                        uintmax_t v244785092 = (v117752370 + v224988698);
                        wptr_t x283 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x283)->a1 = v244785092;
                        return x283;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d43(gc_t gc,arena_t arena,wptr_t v50432186,uintmax_t v201297312,sptr_t v178901588,wptr_t v143261710,uintmax_t v135594734,sptr_t v212933204,sptr_t v36059414,sptr_t v176934666)
{
        sptr_t v50432783 = demote(v50432186);
        sptr_t v143262308 = demote(v143261710);
        {   gc_frame0(gc,5,v36059414,v50432783,v143262308,v176934666,v212933204);
            wptr_t v101476 = eval(gc,arena,v178901588);
            {   gc_frame0(gc,1,v101476);
                wptr_t v101478 = eval(gc,arena,v212933204);
                {   gc_frame0(gc,1,v101478);
                    wptr_t v101480 = eval(gc,arena,v176934666);
                    {   uintmax_t v10112352;
                        uintmax_t v6503380;
                        uintmax_t v99676082;
                        gc_frame0(gc,1,v101480);
                        v6503380 = ((struct sCJhc_Type_Basic_Integer*)v101476)->a1;
                        v10112352 = ((struct sCJhc_Type_Basic_Integer*)v101478)->a1;
                        uintmax_t v217212942 = (v10112352 * v135594734);
                        uintmax_t v91594898 = (v6503380 - v217212942);
                        v99676082 = ((struct sCJhc_Type_Basic_Integer*)v101480)->a1;
                        uintmax_t v23319750 = (v10112352 * v201297312);
                        uintmax_t v170867750 = (v99676082 - v23319750);
                        return fW$__fMain_ratTrans(gc,arena,v50432783,v143262308,v91594898,v170867750,v36059414);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d44(gc_t gc,arena_t arena,sptr_t v76020826,sptr_t v144748910,sptr_t v117752372)
{
        {   gc_frame0(gc,2,v76020826,v117752372);
            wptr_t v100604 = eval(gc,arena,v144748910);
            {   gc_frame0(gc,1,v100604);
                wptr_t v100606 = eval(gc,arena,v76020826);
                {   gc_frame0(gc,1,v100606);
                    wptr_t v100608 = eval(gc,arena,v117752372);
                    {   uintmax_t v246261758;
                        uintmax_t v27187222;
                        uintmax_t v86240094;
                        gc_frame0(gc,1,v100608);
                        v27187222 = ((struct sCJhc_Type_Basic_Integer*)v100604)->a1;
                        v246261758 = ((struct sCJhc_Type_Basic_Integer*)v100606)->a1;
                        v86240094 = ((struct sCJhc_Type_Basic_Integer*)v100608)->a1;
                        uintmax_t v206413092 = (v246261758 * v86240094);
                        uintmax_t v85212618 = (v27187222 + v206413092);
                        wptr_t x284 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x284)->a1 = v85212618;
                        return x284;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d45(gc_t gc,arena_t arena,sptr_t v12973502,sptr_t v22604480,sptr_t v224988700)
{
        {   gc_frame0(gc,2,v12973502,v224988700);
            wptr_t v100598 = eval(gc,arena,v22604480);
            {   gc_frame0(gc,1,v100598);
                wptr_t v100600 = eval(gc,arena,v12973502);
                {   gc_frame0(gc,1,v100600);
                    wptr_t v100602 = eval(gc,arena,v224988700);
                    {   uintmax_t v139519348;
                        uintmax_t v226286982;
                        uintmax_t v253020998;
                        gc_frame0(gc,1,v100602);
                        v253020998 = ((struct sCJhc_Type_Basic_Integer*)v100598)->a1;
                        v139519348 = ((struct sCJhc_Type_Basic_Integer*)v100600)->a1;
                        v226286982 = ((struct sCJhc_Type_Basic_Integer*)v100602)->a1;
                        uintmax_t v41049682 = (v139519348 * v226286982);
                        uintmax_t v50148804 = (v253020998 + v41049682);
                        wptr_t x285 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x285)->a1 = v50148804;
                        return x285;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d46(gc_t gc,arena_t arena,uintmax_t v160064800,sptr_t v247340480,uintmax_t v50432182,wptr_t v202526180,sptr_t v143261706,sptr_t v107672532,sptr_t v257529850,wptr_t v268164220)
{
        sptr_t v202526752 = demote(v202526180);
        sptr_t v268164793 = demote(v268164220);
        {   gc_frame0(gc,5,v107672532,v143261706,v202526752,v257529850,v268164793);
            wptr_t v101470 = eval(gc,arena,v247340480);
            {   gc_frame0(gc,1,v101470);
                wptr_t v101472 = eval(gc,arena,v143261706);
                {   gc_frame0(gc,1,v101472);
                    wptr_t v101474 = eval(gc,arena,v257529850);
                    {   uintmax_t v194562810;
                        uintmax_t v28153278;
                        uintmax_t v91079758;
                        gc_frame0(gc,1,v101474);
                        v194562810 = ((struct sCJhc_Type_Basic_Integer*)v101470)->a1;
                        v28153278 = ((struct sCJhc_Type_Basic_Integer*)v101472)->a1;
                        uintmax_t v209077200 = (v28153278 * v50432182);
                        uintmax_t v111018026 = (v194562810 - v209077200);
                        v91079758 = ((struct sCJhc_Type_Basic_Integer*)v101474)->a1;
                        uintmax_t v78612190 = (v28153278 * v160064800);
                        uintmax_t v84237932 = (v91079758 - v78612190);
                        return fW$__fMain_ratTrans(gc,arena,v202526752,v268164793,v111018026,v84237932,v107672532);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d47(gc_t gc,arena_t arena,sptr_t v222848750,sptr_t v122214794,sptr_t v61551850)
{
        {   gc_frame0(gc,2,v61551850,v122214794);
            wptr_t v100592 = eval(gc,arena,v222848750);
            {   gc_frame0(gc,1,v100592);
                wptr_t v100594 = eval(gc,arena,v122214794);
                {   gc_frame0(gc,1,v100594);
                    wptr_t v100596 = eval(gc,arena,v61551850);
                    {   uintmax_t v176065410;
                        uintmax_t v177805552;
                        uintmax_t v263126038;
                        gc_frame0(gc,1,v100596);
                        v263126038 = ((struct sCJhc_Type_Basic_Integer*)v100592)->a1;
                        v177805552 = ((struct sCJhc_Type_Basic_Integer*)v100594)->a1;
                        v176065410 = ((struct sCJhc_Type_Basic_Integer*)v100596)->a1;
                        uintmax_t v158044790 = (v177805552 * v176065410);
                        uintmax_t v6704984 = (v263126038 + v158044790);
                        wptr_t x286 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x286)->a1 = v6704984;
                        return x286;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d48(gc_t gc,arena_t arena,sptr_t v100335388,sptr_t v133026458,sptr_t v77277006)
{
        {   gc_frame0(gc,2,v77277006,v133026458);
            wptr_t v100586 = eval(gc,arena,v100335388);
            {   gc_frame0(gc,1,v100586);
                wptr_t v100588 = eval(gc,arena,v133026458);
                {   gc_frame0(gc,1,v100588);
                    wptr_t v100590 = eval(gc,arena,v77277006);
                    {   uintmax_t v19178534;
                        uintmax_t v194789092;
                        uintmax_t v8898198;
                        gc_frame0(gc,1,v100590);
                        v8898198 = ((struct sCJhc_Type_Basic_Integer*)v100586)->a1;
                        v194789092 = ((struct sCJhc_Type_Basic_Integer*)v100588)->a1;
                        v19178534 = ((struct sCJhc_Type_Basic_Integer*)v100590)->a1;
                        uintmax_t v131031420 = (v194789092 * v19178534);
                        uintmax_t v195552930 = (v8898198 + v131031420);
                        wptr_t x287 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x287)->a1 = v195552930;
                        return x287;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d49(gc_t gc,arena_t arena,uintmax_t v146854714,sptr_t v69432564,wptr_t v115766314,wptr_t v118138962,uintmax_t v88379832,sptr_t v113838344,sptr_t v267751048,sptr_t v51476038)
{
        sptr_t v115766861 = demote(v115766314);
        sptr_t v118139510 = demote(v118138962);
        {   gc_frame0(gc,5,v51476038,v113838344,v115766861,v118139510,v267751048);
            wptr_t v101464 = eval(gc,arena,v69432564);
            {   gc_frame0(gc,1,v101464);
                wptr_t v101466 = eval(gc,arena,v113838344);
                {   gc_frame0(gc,1,v101466);
                    wptr_t v101468 = eval(gc,arena,v51476038);
                    {   uintmax_t v141005602;
                        uintmax_t v261403796;
                        uintmax_t v88239592;
                        gc_frame0(gc,1,v101468);
                        v141005602 = ((struct sCJhc_Type_Basic_Integer*)v101464)->a1;
                        v261403796 = ((struct sCJhc_Type_Basic_Integer*)v101466)->a1;
                        uintmax_t v111487808 = (v261403796 * v88379832);
                        uintmax_t v3653044 = (v141005602 - v111487808);
                        v88239592 = ((struct sCJhc_Type_Basic_Integer*)v101468)->a1;
                        uintmax_t v224662450 = (v261403796 * v146854714);
                        uintmax_t v18961740 = (v88239592 - v224662450);
                        return fW$__fMain_ratTrans(gc,arena,v115766861,v118139510,v3653044,v18961740,v267751048);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d5(gc_t gc,arena_t arena,sptr_t v168294380)
{
        wptr_t v100778 = eval(gc,arena,v168294380);
        {   sptr_t v167886984;
            sptr_t v56741152;
            gc_frame0(gc,1,v100778);
            v167886984 = ((struct sCJhc_Prim_Prim_$LcR*)v100778)->a1;
            v56741152 = ((struct sCJhc_Prim_Prim_$LcR*)v100778)->a2;
            return fW$__fx43121472(gc,arena,v167886984,v56741152);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d50(gc_t gc,arena_t arena,sptr_t v99676086,sptr_t v81057818,sptr_t v186377426)
{
        {   gc_frame0(gc,2,v81057818,v186377426);
            wptr_t v100580 = eval(gc,arena,v99676086);
            {   gc_frame0(gc,1,v100580);
                wptr_t v100582 = eval(gc,arena,v81057818);
                {   gc_frame0(gc,1,v100582);
                    wptr_t v100584 = eval(gc,arena,v186377426);
                    {   uintmax_t v248903432;
                        uintmax_t v46072006;
                        uintmax_t v78645248;
                        gc_frame0(gc,1,v100584);
                        v78645248 = ((struct sCJhc_Type_Basic_Integer*)v100580)->a1;
                        v46072006 = ((struct sCJhc_Type_Basic_Integer*)v100582)->a1;
                        v248903432 = ((struct sCJhc_Type_Basic_Integer*)v100584)->a1;
                        uintmax_t v188122478 = (v46072006 * v248903432);
                        uintmax_t v160358332 = (v78645248 + v188122478);
                        wptr_t x288 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x288)->a1 = v160358332;
                        return x288;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d51(gc_t gc,arena_t arena,sptr_t v133804448,sptr_t v90351748,sptr_t v6503382)
{
        {   gc_frame0(gc,2,v6503382,v90351748);
            wptr_t v100574 = eval(gc,arena,v133804448);
            {   gc_frame0(gc,1,v100574);
                wptr_t v100576 = eval(gc,arena,v90351748);
                {   gc_frame0(gc,1,v100576);
                    wptr_t v100578 = eval(gc,arena,v6503382);
                    {   uintmax_t v1179196;
                        uintmax_t v90708148;
                        uintmax_t v9458694;
                        gc_frame0(gc,1,v100578);
                        v90708148 = ((struct sCJhc_Type_Basic_Integer*)v100574)->a1;
                        v1179196 = ((struct sCJhc_Type_Basic_Integer*)v100576)->a1;
                        v9458694 = ((struct sCJhc_Type_Basic_Integer*)v100578)->a1;
                        uintmax_t v168445050 = (v1179196 * v9458694);
                        uintmax_t v185244528 = (v90708148 + v168445050);
                        wptr_t x289 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x289)->a1 = v185244528;
                        return x289;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d52(gc_t gc,arena_t arena,uintmax_t v228202152,sptr_t v67338508,wptr_t v97730302,wptr_t v155054262,uintmax_t v232701278,sptr_t v67443750,sptr_t v227078458,sptr_t v68153294)
{
        sptr_t v97730824 = demote(v97730302);
        sptr_t v155054785 = demote(v155054262);
        {   gc_frame0(gc,5,v67443750,v68153294,v97730824,v155054785,v227078458);
            wptr_t v101458 = eval(gc,arena,v67338508);
            {   gc_frame0(gc,1,v101458);
                wptr_t v101460 = eval(gc,arena,v67443750);
                {   gc_frame0(gc,1,v101460);
                    wptr_t v101462 = eval(gc,arena,v68153294);
                    {   uintmax_t v108386434;
                        uintmax_t v179854992;
                        uintmax_t v240132926;
                        gc_frame0(gc,1,v101462);
                        v179854992 = ((struct sCJhc_Type_Basic_Integer*)v101458)->a1;
                        v240132926 = ((struct sCJhc_Type_Basic_Integer*)v101460)->a1;
                        uintmax_t v9745018 = (v240132926 * v232701278);
                        uintmax_t v82120230 = (v179854992 - v9745018);
                        v108386434 = ((struct sCJhc_Type_Basic_Integer*)v101462)->a1;
                        uintmax_t v150329790 = (v240132926 * v228202152);
                        uintmax_t v57975586 = (v108386434 - v150329790);
                        return fW$__fMain_ratTrans(gc,arena,v97730824,v155054785,v82120230,v57975586,v227078458);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d53(gc_t gc,arena_t arena,sptr_t v91594902,sptr_t v191240590,sptr_t v243604030)
{
        {   gc_frame0(gc,2,v191240590,v243604030);
            wptr_t v100568 = eval(gc,arena,v91594902);
            {   gc_frame0(gc,1,v100568);
                wptr_t v100570 = eval(gc,arena,v191240590);
                {   gc_frame0(gc,1,v100570);
                    wptr_t v100572 = eval(gc,arena,v243604030);
                    {   uintmax_t v136499030;
                        uintmax_t v246725376;
                        uintmax_t v52017878;
                        gc_frame0(gc,1,v100572);
                        v136499030 = ((struct sCJhc_Type_Basic_Integer*)v100568)->a1;
                        v246725376 = ((struct sCJhc_Type_Basic_Integer*)v100570)->a1;
                        v52017878 = ((struct sCJhc_Type_Basic_Integer*)v100572)->a1;
                        uintmax_t v56167746 = (v246725376 * v52017878);
                        uintmax_t v33876320 = (v136499030 + v56167746);
                        wptr_t x290 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x290)->a1 = v33876320;
                        return x290;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d54(gc_t gc,arena_t arena,uintmax_t v265780748,sptr_t v202526710)
{
        wptr_t v101296 = eval(gc,arena,v202526710);
        {   sptr_t v84222526;
            uintmax_t v182639124;
            struct tup1 x100;
            gc_frame0(gc,1,v101296);
            v182639124 = ((struct sCJhc_Type_Basic_Integer*)v101296)->a1;
            x100 = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default(gc,arena,v182639124,v265780748);
            v84222526 = x100.t0;
            return eval(gc,arena,v84222526);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d55(gc_t gc,arena_t arena,uintmax_t v27187224,uintmax_t v166026142,wptr_t v98700307,uintmax_t v246261760,uintmax_t v212002256,sptr_t v86240096,uintmax_t v206413094,sptr_t v85212620,wptr_t v124940246)
{
        sptr_t v98700781 = demote(v98700307);
        {   uint16_t v69432558;
            gc_frame0(gc,4,v85212620,v86240096,v98700781,v124940246);
            v69432558 = ((uint16_t)RAW_GET_UF(v124940246));
            if (0 == v69432558) {
                sptr_t v3108;
                sptr_t v7291;
                sptr_t v7294;
                uintmax_t v3106;
                uintmax_t v7297;
                struct tup10 x540;
                wptr_t v100562 = eval(gc,arena,v86240096);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100562) {
                    jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                } else {
                    sptr_t v133127690;
                    sptr_t v264841570;
                    /* ("CJhc.Prim.Prim.:" ni133127690 ni264841570) */
                    v133127690 = ((struct sCJhc_Prim_Prim_$x3a*)v100562)->a1;
                    v264841570 = ((struct sCJhc_Prim_Prim_$x3a*)v100562)->a2;
                    {   gc_frame0(gc,2,v133127690,v264841570);
                        sptr_t x541 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d57);
                        ((struct sFtheMain$d57*)x541)->head = TO_FPTR(&E__ftheMain$d57);
                        ((struct sFtheMain$d57*)x541)->a1 = v166026142;
                        ((struct sFtheMain$d57*)x541)->a2 = v133127690;
                        ((struct sFtheMain$d57*)x541)->a3 = v206413094;
                        sptr_t v209623818 = MKLAZY(x541);
                        {   gc_frame0(gc,1,v209623818);
                            wptr_t v100564 = eval(gc,arena,v133127690);
                            {   uintmax_t v90719984;
                                gc_frame0(gc,1,v100564);
                                v90719984 = ((struct sCJhc_Type_Basic_Integer*)v100564)->a1;
                                uintmax_t v198205316 = (v90719984 * v27187224);
                                uintmax_t v59033970 = (v212002256 + v198205316);
                                x540.t0 = v85212620;
                                x540.t1 = v209623818;
                                x540.t2 = v27187224;
                                x540.t3 = v59033970;
                                x540.t4 = v264841570;
                            }
                        }
                    }
                }
                v7291 = x540.t0;
                v7294 = x540.t1;
                v7297 = x540.t2;
                v3106 = x540.t3;
                v3108 = x540.t4;
                return fW$__fMain_ratTrans(gc,arena,v7291,v7294,v7297,v3106,v3108);
            } else {
                /* 1 */
                assert(1 == v69432558);
                wptr_t x542 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                ((struct sCJhc_Type_Basic_Integer*)x542)->a1 = v27187224;
                wptr_t v3315 = x542;
                {   gc_frame0(gc,1,v3315);
                    wptr_t x543 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                    ((struct sCJhc_Type_Basic_Integer*)x543)->a1 = v212002256;
                    wptr_t v3317 = x543;
                    {   gc_frame0(gc,1,v3317);
                        sptr_t x544 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d56);
                        ((struct sFtheMain$d56*)x544)->head = TO_FPTR(&E__ftheMain$d56);
                        ((struct sFtheMain$d56*)x544)->a1 = v27187224;
                        ((struct sFtheMain$d56*)x544)->a2 = v166026142;
                        ((struct sFtheMain$d56*)x544)->a3 = v3317;
                        ((struct sFtheMain$d56*)x544)->a4 = v246261760;
                        ((struct sFtheMain$d56*)x544)->a5 = v212002256;
                        ((struct sFtheMain$d56*)x544)->a6 = v3315;
                        ((struct sFtheMain$d56*)x544)->a7 = v86240096;
                        ((struct sFtheMain$d56*)x544)->a8 = v206413094;
                        sptr_t v250404512 = MKLAZY(x544);
                        {   gc_frame0(gc,1,v250404512);
                            wptr_t x545 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x545)->a1 = v98700781;
                            ((struct sCJhc_Prim_Prim_$x3a*)x545)->a2 = v250404512;
                            return x545;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d56(gc_t gc,arena_t arena,uintmax_t v211219934,uintmax_t v76769902,wptr_t v135170750,uintmax_t v145315034,uintmax_t v134427062,wptr_t v168294382,sptr_t v202526176,uintmax_t v235206648)
{
        sptr_t v135171204 = demote(v135170750);
        sptr_t v168294837 = demote(v168294382);
        uintmax_t v88760324 = (v145315034 * v134427062);
        uintmax_t v58231586 = (v235206648 - v88760324);
        uintmax_t v227078452 = (v145315034 * v211219934);
        uintmax_t v211219932 = (v76769902 - v227078452);
        return fW$__fMain_ratTrans(gc,arena,v135171204,v168294837,v58231586,v211219932,v202526176);
}

static wptr_t A_STD A_MALLOC
ftheMain$d57(gc_t gc,arena_t arena,uintmax_t v109658024,sptr_t v122891998,uintmax_t v172338608)
{
        wptr_t v100566 = eval(gc,arena,v122891998);
        {   uintmax_t v151167342;
            gc_frame0(gc,1,v100566);
            v151167342 = ((struct sCJhc_Type_Basic_Integer*)v100566)->a1;
            uintmax_t v194492352 = (v151167342 * v109658024);
            uintmax_t v120257688 = (v172338608 + v194492352);
            wptr_t x291 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
            ((struct sCJhc_Type_Basic_Integer*)x291)->a1 = v120257688;
            return x291;
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d58(gc_t gc,arena_t arena,uintmax_t v156390956,sptr_t v62866276)
{
        wptr_t v101294 = eval(gc,arena,v62866276);
        {   sptr_t v44000688;
            uintmax_t v119285248;
            struct tup1 x101;
            gc_frame0(gc,1,v101294);
            v119285248 = ((struct sCJhc_Type_Basic_Integer*)v101294)->a1;
            x101 = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default(gc,arena,v119285248,v156390956);
            v44000688 = x101.t0;
            return eval(gc,arena,v44000688);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d59(gc_t gc,arena_t arena,uintmax_t v48036060,sptr_t v103985158,uintmax_t v221518978,sptr_t v12973504,sptr_t v152966622,uintmax_t v267892974)
{
        {   gc_frame0(gc,2,v103985158,v152966622);
            wptr_t v100552 = eval(gc,arena,v12973504);
            {   gc_frame0(gc,1,v100552);
                wptr_t v100554 = eval(gc,arena,v103985158);
                {   gc_frame0(gc,1,v100554);
                    wptr_t v100556 = eval(gc,arena,v152966622);
                    {   uintmax_t v135303432;
                        uintmax_t v138499562;
                        uintmax_t v19462812;
                        gc_frame0(gc,1,v100556);
                        v19462812 = ((struct sCJhc_Type_Basic_Integer*)v100552)->a1;
                        uintmax_t v232493422 = (v267892974 * v19462812);
                        v138499562 = ((struct sCJhc_Type_Basic_Integer*)v100554)->a1;
                        v135303432 = ((struct sCJhc_Type_Basic_Integer*)v100556)->a1;
                        uintmax_t v40099008 = (v138499562 + v135303432);
                        uint16_t v100558 = (((intmax_t)v232493422) <= ((intmax_t)v40099008));
                        if (0 == v100558) {
                            return RAW_SET_UF(0);
                        } else {
                            /* 1 */
                            assert(1 == v100558);
                            uintmax_t v245783998 = (v221518978 + v48036060);
                            uintmax_t v206629278 = (v245783998 * v19462812);
                            uintmax_t v192968710 = (v221518978 + v48036060);
                            uintmax_t v142194672 = (v206629278 + v192968710);
                            uintmax_t v116463172 = (v138499562 + v135303432);
                            uint16_t v134000986 = (((intmax_t)v142194672) > ((intmax_t)v116463172));
                            return RAW_SET_UF(v134000986);
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d6(gc_t gc,arena_t arena,sptr_t v254050128)
{
        wptr_t v100744 = eval(gc,arena,v254050128);
        {   uintmax_t v154318376;
            gc_frame0(gc,1,v100744);
            v154318376 = ((struct sCJhc_Type_Basic_Integer*)v100744)->a1;
            uintmax_t v261247682 = (2 + v154318376);
            wptr_t x260 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
            ((struct sCJhc_Type_Basic_Integer*)x260)->a1 = v261247682;
            return x260;
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d60(gc_t gc,arena_t arena,sptr_t v224813030,sptr_t v151514824,sptr_t v253021000)
{
        {   gc_frame0(gc,2,v151514824,v253021000);
            wptr_t v100546 = eval(gc,arena,v224813030);
            {   gc_frame0(gc,1,v100546);
                wptr_t v100548 = eval(gc,arena,v151514824);
                {   gc_frame0(gc,1,v100548);
                    wptr_t v100550 = eval(gc,arena,v253021000);
                    {   uintmax_t v265780752;
                        uintmax_t v88032710;
                        uintmax_t v94356372;
                        gc_frame0(gc,1,v100550);
                        v88032710 = ((struct sCJhc_Type_Basic_Integer*)v100546)->a1;
                        v265780752 = ((struct sCJhc_Type_Basic_Integer*)v100548)->a1;
                        v94356372 = ((struct sCJhc_Type_Basic_Integer*)v100550)->a1;
                        uintmax_t v156390960 = (v265780752 * v94356372);
                        uintmax_t v62866274 = (v88032710 + v156390960);
                        wptr_t x292 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x292)->a1 = v62866274;
                        return x292;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d61(gc_t gc,arena_t arena,wptr_t v23565124,uintmax_t v268164216,sptr_t v53399310,wptr_t v132127026,uintmax_t v88760326,sptr_t v169337066,sptr_t v243821966,sptr_t v186011614)
{
        sptr_t v23565553 = demote(v23565124);
        sptr_t v132127456 = demote(v132127026);
        {   gc_frame0(gc,5,v23565553,v132127456,v169337066,v186011614,v243821966);
            wptr_t v101452 = eval(gc,arena,v53399310);
            {   gc_frame0(gc,1,v101452);
                wptr_t v101454 = eval(gc,arena,v243821966);
                {   gc_frame0(gc,1,v101454);
                    wptr_t v101456 = eval(gc,arena,v186011614);
                    {   uintmax_t v172856234;
                        uintmax_t v2754014;
                        uintmax_t v49838042;
                        gc_frame0(gc,1,v101456);
                        v49838042 = ((struct sCJhc_Type_Basic_Integer*)v101452)->a1;
                        v172856234 = ((struct sCJhc_Type_Basic_Integer*)v101454)->a1;
                        uintmax_t v114140700 = (v172856234 * v88760326);
                        uintmax_t v139273906 = (v49838042 - v114140700);
                        v2754014 = ((struct sCJhc_Type_Basic_Integer*)v101456)->a1;
                        uintmax_t v111424374 = (v172856234 * v268164216);
                        uintmax_t v134159170 = (v2754014 - v111424374);
                        return fW$__fMain_ratTrans(gc,arena,v23565553,v132127456,v139273906,v134159170,v169337066);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d62(gc_t gc,arena_t arena,sptr_t v226286984,sptr_t v85433876,sptr_t v41049686)
{
        {   gc_frame0(gc,2,v41049686,v85433876);
            wptr_t v100540 = eval(gc,arena,v226286984);
            {   gc_frame0(gc,1,v100540);
                wptr_t v100542 = eval(gc,arena,v85433876);
                {   gc_frame0(gc,1,v100542);
                    wptr_t v100544 = eval(gc,arena,v41049686);
                    {   uintmax_t v188753484;
                        uintmax_t v226245506;
                        uintmax_t v24018032;
                        gc_frame0(gc,1,v100544);
                        v226245506 = ((struct sCJhc_Type_Basic_Integer*)v100540)->a1;
                        v188753484 = ((struct sCJhc_Type_Basic_Integer*)v100542)->a1;
                        v24018032 = ((struct sCJhc_Type_Basic_Integer*)v100544)->a1;
                        uintmax_t v131605200 = (v188753484 * v24018032);
                        uintmax_t v235430062 = (v226245506 + v131605200);
                        wptr_t x293 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x293)->a1 = v235430062;
                        return x293;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d63(gc_t gc,arena_t arena,sptr_t v54193220,sptr_t v187028908,sptr_t v75144258)
{
        {   gc_frame0(gc,2,v54193220,v75144258);
            wptr_t v100534 = eval(gc,arena,v187028908);
            {   gc_frame0(gc,1,v100534);
                wptr_t v100536 = eval(gc,arena,v54193220);
                {   gc_frame0(gc,1,v100536);
                    wptr_t v100538 = eval(gc,arena,v75144258);
                    {   uintmax_t v127463882;
                        uintmax_t v52493076;
                        uintmax_t v88439512;
                        gc_frame0(gc,1,v100538);
                        v52493076 = ((struct sCJhc_Type_Basic_Integer*)v100534)->a1;
                        v88439512 = ((struct sCJhc_Type_Basic_Integer*)v100536)->a1;
                        v127463882 = ((struct sCJhc_Type_Basic_Integer*)v100538)->a1;
                        uintmax_t v195460598 = (v88439512 * v127463882);
                        uintmax_t v151155890 = (v52493076 + v195460598);
                        wptr_t x294 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x294)->a1 = v151155890;
                        return x294;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d64(gc_t gc,arena_t arena,uintmax_t v30776898,sptr_t v122892000,uintmax_t v264841574,wptr_t v194346578,sptr_t v52515414,wptr_t v230320880,sptr_t v25494360,sptr_t v95073924)
{
        sptr_t v194346982 = demote(v194346578);
        sptr_t v230321285 = demote(v230320880);
        {   gc_frame0(gc,5,v25494360,v52515414,v95073924,v194346982,v230321285);
            wptr_t v101446 = eval(gc,arena,v122892000);
            {   gc_frame0(gc,1,v101446);
                wptr_t v101448 = eval(gc,arena,v25494360);
                {   gc_frame0(gc,1,v101448);
                    wptr_t v101450 = eval(gc,arena,v95073924);
                    {   uintmax_t v160744292;
                        uintmax_t v160959528;
                        uintmax_t v164349962;
                        gc_frame0(gc,1,v101450);
                        v160959528 = ((struct sCJhc_Type_Basic_Integer*)v101446)->a1;
                        v164349962 = ((struct sCJhc_Type_Basic_Integer*)v101448)->a1;
                        uintmax_t v186660874 = (v164349962 * v264841574);
                        uintmax_t v204720532 = (v160959528 - v186660874);
                        v160744292 = ((struct sCJhc_Type_Basic_Integer*)v101450)->a1;
                        uintmax_t v187320698 = (v164349962 * v30776898);
                        uintmax_t v130625166 = (v160744292 - v187320698);
                        return fW$__fMain_ratTrans(gc,arena,v230321285,v194346982,v204720532,v130625166,v52515414);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d65(gc_t gc,arena_t arena,sptr_t v131747558,sptr_t v219478860,sptr_t v3576054)
{
        {   gc_frame0(gc,2,v3576054,v219478860);
            wptr_t v100528 = eval(gc,arena,v131747558);
            {   gc_frame0(gc,1,v100528);
                wptr_t v100530 = eval(gc,arena,v219478860);
                {   gc_frame0(gc,1,v100530);
                    wptr_t v100532 = eval(gc,arena,v3576054);
                    {   uintmax_t v108428558;
                        uintmax_t v142766500;
                        uintmax_t v60561608;
                        gc_frame0(gc,1,v100532);
                        v60561608 = ((struct sCJhc_Type_Basic_Integer*)v100528)->a1;
                        v108428558 = ((struct sCJhc_Type_Basic_Integer*)v100530)->a1;
                        v142766500 = ((struct sCJhc_Type_Basic_Integer*)v100532)->a1;
                        uintmax_t v162777572 = (v108428558 * v142766500);
                        uintmax_t v47086270 = (v60561608 + v162777572);
                        wptr_t x295 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x295)->a1 = v47086270;
                        return x295;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d66(gc_t gc,arena_t arena,sptr_t v91079760,sptr_t v79607518,sptr_t v82965324)
{
        {   gc_frame0(gc,2,v79607518,v82965324);
            wptr_t v100522 = eval(gc,arena,v91079760);
            {   gc_frame0(gc,1,v100522);
                wptr_t v100524 = eval(gc,arena,v79607518);
                {   gc_frame0(gc,1,v100524);
                    wptr_t v100526 = eval(gc,arena,v82965324);
                    {   uintmax_t v148734270;
                        uintmax_t v154338572;
                        uintmax_t v219145902;
                        gc_frame0(gc,1,v100526);
                        v219145902 = ((struct sCJhc_Type_Basic_Integer*)v100522)->a1;
                        v154338572 = ((struct sCJhc_Type_Basic_Integer*)v100524)->a1;
                        v148734270 = ((struct sCJhc_Type_Basic_Integer*)v100526)->a1;
                        uintmax_t v31637638 = (v154338572 * v148734270);
                        uintmax_t v115547294 = (v219145902 + v31637638);
                        wptr_t x296 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x296)->a1 = v115547294;
                        return x296;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d67(gc_t gc,arena_t arena,wptr_t v15858618,uintmax_t v151167346,sptr_t v24658036,uintmax_t v150886634,wptr_t v169909358,sptr_t v194492356,sptr_t v226176100,sptr_t v240576404)
{
        sptr_t v15858997 = demote(v15858618);
        sptr_t v169909738 = demote(v169909358);
        {   gc_frame0(gc,5,v15858997,v169909738,v194492356,v226176100,v240576404);
            wptr_t v101440 = eval(gc,arena,v24658036);
            {   gc_frame0(gc,1,v101440);
                wptr_t v101442 = eval(gc,arena,v226176100);
                {   gc_frame0(gc,1,v101442);
                    wptr_t v101444 = eval(gc,arena,v240576404);
                    {   uintmax_t v104879894;
                        uintmax_t v125735150;
                        uintmax_t v235206650;
                        gc_frame0(gc,1,v101444);
                        v125735150 = ((struct sCJhc_Type_Basic_Integer*)v101440)->a1;
                        v104879894 = ((struct sCJhc_Type_Basic_Integer*)v101442)->a1;
                        uintmax_t v19172378 = (v104879894 * v150886634);
                        uintmax_t v231532612 = (v125735150 - v19172378);
                        v235206650 = ((struct sCJhc_Type_Basic_Integer*)v101444)->a1;
                        uintmax_t v205680836 = (v104879894 * v151167346);
                        uintmax_t v156312466 = (v235206650 - v205680836);
                        return fW$__fMain_ratTrans(gc,arena,v15858997,v169909738,v231532612,v156312466,v194492356);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d68(gc_t gc,arena_t arena,sptr_t v222510914,sptr_t v221098676,sptr_t v194562812)
{
        {   gc_frame0(gc,2,v194562812,v221098676);
            wptr_t v100516 = eval(gc,arena,v222510914);
            {   gc_frame0(gc,1,v100516);
                wptr_t v100518 = eval(gc,arena,v221098676);
                {   gc_frame0(gc,1,v100518);
                    wptr_t v100520 = eval(gc,arena,v194562812);
                    {   uintmax_t v127975178;
                        uintmax_t v246982874;
                        uintmax_t v67585040;
                        gc_frame0(gc,1,v100520);
                        v127975178 = ((struct sCJhc_Type_Basic_Integer*)v100516)->a1;
                        v246982874 = ((struct sCJhc_Type_Basic_Integer*)v100518)->a1;
                        v67585040 = ((struct sCJhc_Type_Basic_Integer*)v100520)->a1;
                        uintmax_t v94629388 = (v246982874 * v67585040);
                        uintmax_t v118067942 = (v127975178 + v94629388);
                        wptr_t x297 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x297)->a1 = v118067942;
                        return x297;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d69(gc_t gc,arena_t arena,sptr_t v111018028,sptr_t v190688244,sptr_t v228163042)
{
        {   gc_frame0(gc,2,v190688244,v228163042);
            wptr_t v100510 = eval(gc,arena,v111018028);
            {   gc_frame0(gc,1,v100510);
                wptr_t v100512 = eval(gc,arena,v190688244);
                {   gc_frame0(gc,1,v100512);
                    wptr_t v100514 = eval(gc,arena,v228163042);
                    {   uintmax_t v118052048;
                        uintmax_t v143119114;
                        uintmax_t v266106778;
                        gc_frame0(gc,1,v100514);
                        v266106778 = ((struct sCJhc_Type_Basic_Integer*)v100510)->a1;
                        v118052048 = ((struct sCJhc_Type_Basic_Integer*)v100512)->a1;
                        v143119114 = ((struct sCJhc_Type_Basic_Integer*)v100514)->a1;
                        uintmax_t v32685994 = (v118052048 * v143119114);
                        uintmax_t v124449678 = (v266106778 + v32685994);
                        wptr_t x298 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x298)->a1 = v124449678;
                        return x298;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d7(gc_t gc,arena_t arena)
{
        return fR$__fMain_1__aux(gc,arena,c64);
}

static wptr_t A_STD A_MALLOC
ftheMain$d70(gc_t gc,arena_t arena,uintmax_t v115766306,sptr_t v118138960,uintmax_t v197085302,wptr_t v196970362,sptr_t v146793348,wptr_t v235480820,sptr_t v198205320,sptr_t v135243418)
{
        sptr_t v196970716 = demote(v196970362);
        sptr_t v235481175 = demote(v235480820);
        {   gc_frame0(gc,5,v135243418,v146793348,v196970716,v198205320,v235481175);
            wptr_t v101434 = eval(gc,arena,v118138960);
            {   gc_frame0(gc,1,v101434);
                wptr_t v101436 = eval(gc,arena,v198205320);
                {   gc_frame0(gc,1,v101436);
                    wptr_t v101438 = eval(gc,arena,v135243418);
                    {   uintmax_t v131690230;
                        uintmax_t v837332;
                        uintmax_t v96753044;
                        gc_frame0(gc,1,v101438);
                        v96753044 = ((struct sCJhc_Type_Basic_Integer*)v101434)->a1;
                        v131690230 = ((struct sCJhc_Type_Basic_Integer*)v101436)->a1;
                        uintmax_t v125949674 = (v131690230 * v197085302);
                        uintmax_t v196551382 = (v96753044 - v125949674);
                        v837332 = ((struct sCJhc_Type_Basic_Integer*)v101438)->a1;
                        uintmax_t v241147976 = (v131690230 * v115766306);
                        uintmax_t v1980460 = (v837332 - v241147976);
                        return fW$__fMain_ratTrans(gc,arena,v235481175,v196970716,v196551382,v1980460,v146793348);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d71(gc_t gc,arena_t arena,sptr_t v142763144,sptr_t v168604006,sptr_t v16254244)
{
        {   gc_frame0(gc,2,v16254244,v168604006);
            wptr_t v100504 = eval(gc,arena,v142763144);
            {   gc_frame0(gc,1,v100504);
                wptr_t v100506 = eval(gc,arena,v168604006);
                {   gc_frame0(gc,1,v100506);
                    wptr_t v100508 = eval(gc,arena,v16254244);
                    {   uintmax_t v2171398;
                        uintmax_t v7431714;
                        uintmax_t v8563660;
                        gc_frame0(gc,1,v100508);
                        v2171398 = ((struct sCJhc_Type_Basic_Integer*)v100504)->a1;
                        v7431714 = ((struct sCJhc_Type_Basic_Integer*)v100506)->a1;
                        v8563660 = ((struct sCJhc_Type_Basic_Integer*)v100508)->a1;
                        uintmax_t v161788966 = (v7431714 * v8563660);
                        uintmax_t v117501956 = (v2171398 + v161788966);
                        wptr_t x299 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x299)->a1 = v117501956;
                        return x299;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d72(gc_t gc,arena_t arena,uintmax_t v79172084,sptr_t v233337134)
{
        wptr_t v101292 = eval(gc,arena,v233337134);
        {   sptr_t v215130362;
            uintmax_t v39202878;
            struct tup1 x102;
            gc_frame0(gc,1,v101292);
            v39202878 = ((struct sCJhc_Type_Basic_Integer*)v101292)->a1;
            x102 = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default(gc,arena,v39202878,v79172084);
            v215130362 = x102.t0;
            return eval(gc,arena,v215130362);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d73(gc_t gc,arena_t arena,uintmax_t v177805554,sptr_t v148154794,sptr_t v176065412,uintmax_t v140188292,uintmax_t v158044792,sptr_t v6704986)
{
        {   gc_frame0(gc,2,v6704986,v148154794);
            wptr_t v100496 = eval(gc,arena,v176065412);
            {   gc_frame0(gc,1,v100496);
                wptr_t v100498 = eval(gc,arena,v148154794);
                {   gc_frame0(gc,1,v100498);
                    wptr_t v100500 = eval(gc,arena,v6704986);
                    {   uintmax_t v117024856;
                        uintmax_t v24943990;
                        uintmax_t v82167998;
                        gc_frame0(gc,1,v100500);
                        v82167998 = ((struct sCJhc_Type_Basic_Integer*)v100496)->a1;
                        uintmax_t v210294124 = (v140188292 * v82167998);
                        v24943990 = ((struct sCJhc_Type_Basic_Integer*)v100498)->a1;
                        v117024856 = ((struct sCJhc_Type_Basic_Integer*)v100500)->a1;
                        uintmax_t v22391458 = (v24943990 + v117024856);
                        uint16_t v100502 = (((intmax_t)v210294124) <= ((intmax_t)v22391458));
                        if (0 == v100502) {
                            return RAW_SET_UF(0);
                        } else {
                            /* 1 */
                            assert(1 == v100502);
                            uintmax_t v142422200 = (v158044792 + v177805554);
                            uintmax_t v79194514 = (v142422200 * v82167998);
                            uintmax_t v188183070 = (v158044792 + v177805554);
                            uintmax_t v252036802 = (v79194514 + v188183070);
                            uintmax_t v107809498 = (v24943990 + v117024856);
                            uint16_t v259359270 = (((intmax_t)v252036802) > ((intmax_t)v107809498));
                            return RAW_SET_UF(v259359270);
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d74(gc_t gc,arena_t arena,sptr_t v189794416,sptr_t v242072928,sptr_t v79562122)
{
        {   gc_frame0(gc,2,v79562122,v242072928);
            wptr_t v100490 = eval(gc,arena,v189794416);
            {   gc_frame0(gc,1,v100490);
                wptr_t v100492 = eval(gc,arena,v242072928);
                {   gc_frame0(gc,1,v100492);
                    wptr_t v100494 = eval(gc,arena,v79562122);
                    {   uintmax_t v248834780;
                        uintmax_t v65253352;
                        uintmax_t v71727034;
                        gc_frame0(gc,1,v100494);
                        v65253352 = ((struct sCJhc_Type_Basic_Integer*)v100490)->a1;
                        v71727034 = ((struct sCJhc_Type_Basic_Integer*)v100492)->a1;
                        v248834780 = ((struct sCJhc_Type_Basic_Integer*)v100494)->a1;
                        uintmax_t v180703496 = (v71727034 * v248834780);
                        uintmax_t v70583838 = (v65253352 + v180703496);
                        wptr_t x300 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x300)->a1 = v70583838;
                        return x300;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d75(gc_t gc,arena_t arena,uintmax_t v59033972,sptr_t v242021444,sptr_t v82003538,uintmax_t v123491438,wptr_t v202657656,sptr_t v56119430,wptr_t v221385244,sptr_t v92909418)
{
        sptr_t v202657985 = demote(v202657656);
        sptr_t v221385574 = demote(v221385244);
        {   gc_frame0(gc,5,v56119430,v82003538,v92909418,v202657985,v221385574);
            wptr_t v101428 = eval(gc,arena,v242021444);
            {   gc_frame0(gc,1,v101428);
                wptr_t v101430 = eval(gc,arena,v82003538);
                {   gc_frame0(gc,1,v101430);
                    wptr_t v101432 = eval(gc,arena,v92909418);
                    {   uintmax_t v142306976;
                        uintmax_t v42464576;
                        uintmax_t v58771138;
                        gc_frame0(gc,1,v101432);
                        v42464576 = ((struct sCJhc_Type_Basic_Integer*)v101428)->a1;
                        v142306976 = ((struct sCJhc_Type_Basic_Integer*)v101430)->a1;
                        uintmax_t v95297350 = (v142306976 * v123491438);
                        uintmax_t v251329078 = (v42464576 - v95297350);
                        v58771138 = ((struct sCJhc_Type_Basic_Integer*)v101432)->a1;
                        uintmax_t v192823750 = (v142306976 * v59033972);
                        uintmax_t v230909486 = (v58771138 - v192823750);
                        return fW$__fMain_ratTrans(gc,arena,v202657985,v221385574,v251329078,v230909486,v56119430);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d76(gc_t gc,arena_t arena,sptr_t v68454642,sptr_t v221485828,sptr_t v121824440)
{
        {   gc_frame0(gc,2,v68454642,v121824440);
            wptr_t v100484 = eval(gc,arena,v221485828);
            {   gc_frame0(gc,1,v100484);
                wptr_t v100486 = eval(gc,arena,v68454642);
                {   gc_frame0(gc,1,v100486);
                    wptr_t v100488 = eval(gc,arena,v121824440);
                    {   uintmax_t v122670402;
                        uintmax_t v128607668;
                        uintmax_t v38357066;
                        gc_frame0(gc,1,v100488);
                        v122670402 = ((struct sCJhc_Type_Basic_Integer*)v100484)->a1;
                        v128607668 = ((struct sCJhc_Type_Basic_Integer*)v100486)->a1;
                        v38357066 = ((struct sCJhc_Type_Basic_Integer*)v100488)->a1;
                        uintmax_t v156167040 = (v128607668 * v38357066);
                        uintmax_t v1206304 = (v122670402 + v156167040);
                        wptr_t x301 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x301)->a1 = v1206304;
                        return x301;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d77(gc_t gc,arena_t arena,sptr_t v70208272,sptr_t v17089572,sptr_t v94909436)
{
        {   gc_frame0(gc,2,v70208272,v94909436);
            wptr_t v100478 = eval(gc,arena,v17089572);
            {   gc_frame0(gc,1,v100478);
                wptr_t v100480 = eval(gc,arena,v70208272);
                {   gc_frame0(gc,1,v100480);
                    wptr_t v100482 = eval(gc,arena,v94909436);
                    {   uintmax_t v130356318;
                        uintmax_t v134588272;
                        uintmax_t v239857030;
                        gc_frame0(gc,1,v100482);
                        v239857030 = ((struct sCJhc_Type_Basic_Integer*)v100478)->a1;
                        v134588272 = ((struct sCJhc_Type_Basic_Integer*)v100480)->a1;
                        v130356318 = ((struct sCJhc_Type_Basic_Integer*)v100482)->a1;
                        uintmax_t v216869950 = (v134588272 * v130356318);
                        uintmax_t v5354886 = (v239857030 + v216869950);
                        wptr_t x302 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x302)->a1 = v5354886;
                        return x302;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d78(gc_t gc,arena_t arena,wptr_t v23036004,wptr_t v60561606,uintmax_t v177904412,sptr_t v129035594,sptr_t v102549692,uintmax_t v132292954,sptr_t v115557552,sptr_t v44963750)
{
        sptr_t v23036308 = demote(v23036004);
        sptr_t v60561911 = demote(v60561606);
        {   gc_frame0(gc,5,v23036308,v44963750,v60561911,v102549692,v115557552);
            wptr_t v101422 = eval(gc,arena,v129035594);
            {   gc_frame0(gc,1,v101422);
                wptr_t v101424 = eval(gc,arena,v102549692);
                {   gc_frame0(gc,1,v101424);
                    wptr_t v101426 = eval(gc,arena,v44963750);
                    {   uintmax_t v150330178;
                        uintmax_t v52735426;
                        uintmax_t v7306088;
                        gc_frame0(gc,1,v101426);
                        v52735426 = ((struct sCJhc_Type_Basic_Integer*)v101422)->a1;
                        v7306088 = ((struct sCJhc_Type_Basic_Integer*)v101424)->a1;
                        uintmax_t v19263408 = (v7306088 * v132292954);
                        uintmax_t v90365272 = (v52735426 - v19263408);
                        v150330178 = ((struct sCJhc_Type_Basic_Integer*)v101426)->a1;
                        uintmax_t v95108208 = (v7306088 * v177904412);
                        uintmax_t v162115636 = (v150330178 - v95108208);
                        return fW$__fMain_ratTrans(gc,arena,v60561911,v23036308,v90365272,v162115636,v115557552);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d79(gc_t gc,arena_t arena,sptr_t v8898200,sptr_t v243827952,sptr_t v166857224)
{
        {   gc_frame0(gc,2,v166857224,v243827952);
            wptr_t v100472 = eval(gc,arena,v8898200);
            {   gc_frame0(gc,1,v100472);
                wptr_t v100474 = eval(gc,arena,v243827952);
                {   gc_frame0(gc,1,v100474);
                    wptr_t v100476 = eval(gc,arena,v166857224);
                    {   uintmax_t v112335492;
                        uintmax_t v203888598;
                        uintmax_t v77327812;
                        gc_frame0(gc,1,v100476);
                        v77327812 = ((struct sCJhc_Type_Basic_Integer*)v100472)->a1;
                        v203888598 = ((struct sCJhc_Type_Basic_Integer*)v100474)->a1;
                        v112335492 = ((struct sCJhc_Type_Basic_Integer*)v100476)->a1;
                        uintmax_t v36086268 = (v203888598 * v112335492);
                        uintmax_t v242070246 = (v77327812 + v36086268);
                        wptr_t x303 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x303)->a1 = v242070246;
                        return x303;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d8(gc_t gc,arena_t arena,uintmax_t v223424584,sptr_t v23503988)
{
        wptr_t v101304 = eval(gc,arena,v23503988);
        {   sptr_t v142763146;
            uintmax_t v122214796;
            struct tup1 x96;
            gc_frame0(gc,1,v101304);
            v122214796 = ((struct sCJhc_Type_Basic_Integer*)v101304)->a1;
            x96 = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default(gc,arena,v122214796,v223424584);
            v142763146 = x96.t0;
            return eval(gc,arena,v142763146);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d80(gc_t gc,arena_t arena,sptr_t v131031422,sptr_t v78937326,sptr_t v195552932)
{
        {   gc_frame0(gc,2,v78937326,v195552932);
            wptr_t v100466 = eval(gc,arena,v131031422);
            {   gc_frame0(gc,1,v100466);
                wptr_t v100468 = eval(gc,arena,v78937326);
                {   gc_frame0(gc,1,v100468);
                    wptr_t v100470 = eval(gc,arena,v195552932);
                    {   uintmax_t v155999274;
                        uintmax_t v167638536;
                        uintmax_t v58227422;
                        gc_frame0(gc,1,v100470);
                        v167638536 = ((struct sCJhc_Type_Basic_Integer*)v100466)->a1;
                        v58227422 = ((struct sCJhc_Type_Basic_Integer*)v100468)->a1;
                        v155999274 = ((struct sCJhc_Type_Basic_Integer*)v100470)->a1;
                        uintmax_t v241468594 = (v58227422 * v155999274);
                        uintmax_t v35454692 = (v167638536 + v241468594);
                        wptr_t x304 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x304)->a1 = v35454692;
                        return x304;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d81(gc_t gc,arena_t arena,wptr_t v4703650,uintmax_t v44540626,sptr_t v97730300,sptr_t v155054258,wptr_t v154338570,uintmax_t v101519596,sptr_t v129659908,sptr_t v220415142)
{
        sptr_t v4703929 = demote(v4703650);
        sptr_t v154338850 = demote(v154338570);
        {   gc_frame0(gc,5,v4703929,v129659908,v154338850,v155054258,v220415142);
            wptr_t v101416 = eval(gc,arena,v97730300);
            {   gc_frame0(gc,1,v101416);
                wptr_t v101418 = eval(gc,arena,v155054258);
                {   gc_frame0(gc,1,v101418);
                    wptr_t v101420 = eval(gc,arena,v220415142);
                    {   uintmax_t v184573436;
                        uintmax_t v210828314;
                        uintmax_t v57502540;
                        gc_frame0(gc,1,v101420);
                        v210828314 = ((struct sCJhc_Type_Basic_Integer*)v101416)->a1;
                        v57502540 = ((struct sCJhc_Type_Basic_Integer*)v101418)->a1;
                        uintmax_t v43878450 = (v57502540 * v101519596);
                        uintmax_t v106106246 = (v210828314 - v43878450);
                        v184573436 = ((struct sCJhc_Type_Basic_Integer*)v101420)->a1;
                        uintmax_t v3057282 = (v57502540 * v44540626);
                        uintmax_t v179296062 = (v184573436 - v3057282);
                        return fW$__fMain_ratTrans(gc,arena,v154338850,v4703929,v106106246,v179296062,v129659908);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d82(gc_t gc,arena_t arena,sptr_t v31577664,sptr_t v230133320,sptr_t v234052162)
{
        {   gc_frame0(gc,2,v230133320,v234052162);
            wptr_t v100460 = eval(gc,arena,v31577664);
            {   gc_frame0(gc,1,v100460);
                wptr_t v100462 = eval(gc,arena,v230133320);
                {   gc_frame0(gc,1,v100462);
                    wptr_t v100464 = eval(gc,arena,v234052162);
                    {   uintmax_t v127931522;
                        uintmax_t v146803466;
                        uintmax_t v6850380;
                        gc_frame0(gc,1,v100464);
                        v6850380 = ((struct sCJhc_Type_Basic_Integer*)v100460)->a1;
                        v127931522 = ((struct sCJhc_Type_Basic_Integer*)v100462)->a1;
                        v146803466 = ((struct sCJhc_Type_Basic_Integer*)v100464)->a1;
                        uintmax_t v83700424 = (v127931522 * v146803466);
                        uintmax_t v250790164 = (v6850380 + v83700424);
                        wptr_t x305 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x305)->a1 = v250790164;
                        return x305;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d83(gc_t gc,arena_t arena,sptr_t v8056232,sptr_t v251295706,sptr_t v39675364)
{
        {   gc_frame0(gc,2,v8056232,v39675364);
            wptr_t v100454 = eval(gc,arena,v251295706);
            {   gc_frame0(gc,1,v100454);
                wptr_t v100456 = eval(gc,arena,v8056232);
                {   gc_frame0(gc,1,v100456);
                    wptr_t v100458 = eval(gc,arena,v39675364);
                    {   uintmax_t v193884816;
                        uintmax_t v258099688;
                        uintmax_t v79711366;
                        gc_frame0(gc,1,v100458);
                        v193884816 = ((struct sCJhc_Type_Basic_Integer*)v100454)->a1;
                        v79711366 = ((struct sCJhc_Type_Basic_Integer*)v100456)->a1;
                        v258099688 = ((struct sCJhc_Type_Basic_Integer*)v100458)->a1;
                        uintmax_t v115951172 = (v79711366 * v258099688);
                        uintmax_t v33656114 = (v193884816 + v115951172);
                        wptr_t x306 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x306)->a1 = v33656114;
                        return x306;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d84(gc_t gc,arena_t arena,uintmax_t v255683962,sptr_t v913262,sptr_t v208569442,uintmax_t v243957158,wptr_t v174468706,sptr_t v170030616,wptr_t v231532614,sptr_t v225564906)
{
        sptr_t v174468960 = demote(v174468706);
        sptr_t v231532869 = demote(v231532614);
        {   gc_frame0(gc,5,v170030616,v174468960,v208569442,v225564906,v231532869);
            wptr_t v101410 = eval(gc,arena,v913262);
            {   gc_frame0(gc,1,v101410);
                wptr_t v101412 = eval(gc,arena,v208569442);
                {   gc_frame0(gc,1,v101412);
                    wptr_t v101414 = eval(gc,arena,v225564906);
                    {   uintmax_t v19490034;
                        uintmax_t v225850760;
                        uintmax_t v31953224;
                        gc_frame0(gc,1,v101414);
                        v31953224 = ((struct sCJhc_Type_Basic_Integer*)v101410)->a1;
                        v19490034 = ((struct sCJhc_Type_Basic_Integer*)v101412)->a1;
                        uintmax_t v164791536 = (v19490034 * v243957158);
                        uintmax_t v95162572 = (v31953224 - v164791536);
                        v225850760 = ((struct sCJhc_Type_Basic_Integer*)v101414)->a1;
                        uintmax_t v154593004 = (v19490034 * v255683962);
                        uintmax_t v38478530 = (v225850760 - v154593004);
                        return fW$__fMain_ratTrans(gc,arena,v231532869,v174468960,v95162572,v38478530,v170030616);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d85(gc_t gc,arena_t arena,sptr_t v42368142,sptr_t v101335934,sptr_t v170522258)
{
        {   gc_frame0(gc,2,v42368142,v170522258);
            wptr_t v100448 = eval(gc,arena,v101335934);
            {   gc_frame0(gc,1,v100448);
                wptr_t v100450 = eval(gc,arena,v42368142);
                {   gc_frame0(gc,1,v100450);
                    wptr_t v100452 = eval(gc,arena,v170522258);
                    {   uintmax_t v132446358;
                        uintmax_t v225015296;
                        uintmax_t v4562604;
                        gc_frame0(gc,1,v100452);
                        v225015296 = ((struct sCJhc_Type_Basic_Integer*)v100448)->a1;
                        v132446358 = ((struct sCJhc_Type_Basic_Integer*)v100450)->a1;
                        v4562604 = ((struct sCJhc_Type_Basic_Integer*)v100452)->a1;
                        uintmax_t v26078344 = (v132446358 * v4562604);
                        uintmax_t v185400356 = (v225015296 + v26078344);
                        wptr_t x307 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x307)->a1 = v185400356;
                        return x307;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d86(gc_t gc,arena_t arena,uintmax_t v13690786,sptr_t v107001064)
{
        wptr_t v101290 = eval(gc,arena,v107001064);
        {   sptr_t v120254444;
            uintmax_t v42111266;
            struct tup1 x103;
            gc_frame0(gc,1,v101290);
            v42111266 = ((struct sCJhc_Type_Basic_Integer*)v101290)->a1;
            x103 = fW$__fW$__fInstance$__iJhc_Class_Real_divMod_default(gc,arena,v42111266,v13690786);
            v120254444 = x103.t0;
            return eval(gc,arena,v120254444);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d87(gc_t gc,arena_t arena,uintmax_t v141005604,sptr_t v51997480,uintmax_t v261403798,sptr_t v111487810,uintmax_t v173761890,sptr_t v3653046)
{
        {   gc_frame0(gc,2,v3653046,v51997480);
            wptr_t v100440 = eval(gc,arena,v111487810);
            {   gc_frame0(gc,1,v100440);
                wptr_t v100442 = eval(gc,arena,v51997480);
                {   gc_frame0(gc,1,v100442);
                    wptr_t v100444 = eval(gc,arena,v3653046);
                    {   uintmax_t v12164542;
                        uintmax_t v222424780;
                        uintmax_t v56032204;
                        gc_frame0(gc,1,v100444);
                        v12164542 = ((struct sCJhc_Type_Basic_Integer*)v100440)->a1;
                        uintmax_t v151711806 = (v173761890 * v12164542);
                        v56032204 = ((struct sCJhc_Type_Basic_Integer*)v100442)->a1;
                        v222424780 = ((struct sCJhc_Type_Basic_Integer*)v100444)->a1;
                        uintmax_t v3288464 = (v56032204 + v222424780);
                        uint16_t v100446 = (((intmax_t)v151711806) <= ((intmax_t)v3288464));
                        if (0 == v100446) {
                            return RAW_SET_UF(0);
                        } else {
                            /* 1 */
                            assert(1 == v100446);
                            uintmax_t v168907474 = (v261403798 + v141005604);
                            uintmax_t v122815192 = (v168907474 * v12164542);
                            uintmax_t v86251124 = (v261403798 + v141005604);
                            uintmax_t v151923978 = (v122815192 + v86251124);
                            uintmax_t v263789284 = (v56032204 + v222424780);
                            uint16_t v107689856 = (((intmax_t)v151923978) > ((intmax_t)v263789284));
                            return RAW_SET_UF(v107689856);
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d88(gc_t gc,arena_t arena,sptr_t v30877582,sptr_t v88353268,sptr_t v229934424)
{
        {   gc_frame0(gc,2,v88353268,v229934424);
            wptr_t v100434 = eval(gc,arena,v30877582);
            {   gc_frame0(gc,1,v100434);
                wptr_t v100436 = eval(gc,arena,v88353268);
                {   gc_frame0(gc,1,v100436);
                    wptr_t v100438 = eval(gc,arena,v229934424);
                    {   uintmax_t v174402330;
                        uintmax_t v24554960;
                        uintmax_t v32638412;
                        gc_frame0(gc,1,v100438);
                        v24554960 = ((struct sCJhc_Type_Basic_Integer*)v100434)->a1;
                        v32638412 = ((struct sCJhc_Type_Basic_Integer*)v100436)->a1;
                        v174402330 = ((struct sCJhc_Type_Basic_Integer*)v100438)->a1;
                        uintmax_t v16425686 = (v32638412 * v174402330);
                        uintmax_t v268236438 = (v24554960 + v16425686);
                        wptr_t x308 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x308)->a1 = v268236438;
                        return x308;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d89(gc_t gc,arena_t arena,uintmax_t v196079998,sptr_t v42111264,wptr_t v125929212,uintmax_t v217358908,sptr_t v169786048,wptr_t v218789760,sptr_t v122154544,sptr_t v120254442)
{
        sptr_t v125929441 = demote(v125929212);
        sptr_t v218789990 = demote(v218789760);
        {   gc_frame0(gc,5,v120254442,v122154544,v125929441,v169786048,v218789990);
            wptr_t v101404 = eval(gc,arena,v42111264);
            {   gc_frame0(gc,1,v101404);
                wptr_t v101406 = eval(gc,arena,v169786048);
                {   gc_frame0(gc,1,v101406);
                    wptr_t v101408 = eval(gc,arena,v120254442);
                    {   uintmax_t v129782900;
                        uintmax_t v36251730;
                        uintmax_t v67435208;
                        gc_frame0(gc,1,v101408);
                        v36251730 = ((struct sCJhc_Type_Basic_Integer*)v101404)->a1;
                        v129782900 = ((struct sCJhc_Type_Basic_Integer*)v101406)->a1;
                        uintmax_t v203682432 = (v129782900 * v217358908);
                        uintmax_t v42639376 = (v36251730 - v203682432);
                        v67435208 = ((struct sCJhc_Type_Basic_Integer*)v101408)->a1;
                        uintmax_t v139082162 = (v129782900 * v196079998);
                        uintmax_t v74790440 = (v67435208 - v139082162);
                        return fW$__fMain_ratTrans(gc,arena,v218789990,v125929441,v42639376,v74790440,v122154544);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d9(gc_t gc,arena_t arena,uintmax_t v266106780,uintmax_t v206133682,uintmax_t v118052046,uintmax_t v212944726,sptr_t v143119116,wptr_t v240263364,uintmax_t v32685996,sptr_t v124449680,wptr_t v40405754)
{
        sptr_t v240264206 = demote(v240263364);
        {   uint16_t v124089854;
            gc_frame0(gc,4,v40405754,v124449680,v143119116,v240264206);
            v124089854 = ((uint16_t)RAW_GET_UF(v40405754));
            if (0 == v124089854) {
                sptr_t v2843;
                sptr_t v2851;
                sptr_t v5688;
                uintmax_t v2849;
                uintmax_t v5691;
                struct tup10 x534;
                wptr_t v100738 = eval(gc,arena,v143119116);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100738) {
                    jhc_error("digits-of-e1.hs:32:23: Unmatched pattern");
                } else {
                    sptr_t v64465064;
                    sptr_t v97944130;
                    /* ("CJhc.Prim.Prim.:" ni64465064 ni97944130) */
                    v64465064 = ((struct sCJhc_Prim_Prim_$x3a*)v100738)->a1;
                    v97944130 = ((struct sCJhc_Prim_Prim_$x3a*)v100738)->a2;
                    {   gc_frame0(gc,2,v64465064,v97944130);
                        sptr_t x535 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d11);
                        ((struct sFtheMain$d11*)x535)->head = TO_FPTR(&E__ftheMain$d11);
                        ((struct sFtheMain$d11*)x535)->a1 = v266106780;
                        ((struct sFtheMain$d11*)x535)->a2 = v64465064;
                        ((struct sFtheMain$d11*)x535)->a3 = v32685996;
                        sptr_t v189794414 = MKLAZY(x535);
                        {   gc_frame0(gc,1,v189794414);
                            wptr_t v100740 = eval(gc,arena,v64465064);
                            {   uintmax_t v149262066;
                                gc_frame0(gc,1,v100740);
                                v149262066 = ((struct sCJhc_Type_Basic_Integer*)v100740)->a1;
                                uintmax_t v81257180 = (v149262066 * v206133682);
                                uintmax_t v76766048 = (v118052046 + v81257180);
                                x534.t0 = v124449680;
                                x534.t1 = v189794414;
                                x534.t2 = v206133682;
                                x534.t3 = v76766048;
                                x534.t4 = v97944130;
                            }
                        }
                    }
                }
                v2843 = x534.t0;
                v5688 = x534.t1;
                v5691 = x534.t2;
                v2849 = x534.t3;
                v2851 = x534.t4;
                return fW$__fMain_ratTrans(gc,arena,v2843,v5688,v5691,v2849,v2851);
            } else {
                /* 1 */
                assert(1 == v124089854);
                wptr_t x536 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                ((struct sCJhc_Type_Basic_Integer*)x536)->a1 = v206133682;
                wptr_t v3024 = x536;
                {   gc_frame0(gc,1,v3024);
                    wptr_t x537 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                    ((struct sCJhc_Type_Basic_Integer*)x537)->a1 = v118052046;
                    wptr_t v3026 = x537;
                    {   gc_frame0(gc,1,v3026);
                        sptr_t x538 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d10);
                        ((struct sFtheMain$d10*)x538)->head = TO_FPTR(&E__ftheMain$d10);
                        ((struct sFtheMain$d10*)x538)->a1 = v266106780;
                        ((struct sFtheMain$d10*)x538)->a2 = v3024;
                        ((struct sFtheMain$d10*)x538)->a3 = v206133682;
                        ((struct sFtheMain$d10*)x538)->a4 = v118052046;
                        ((struct sFtheMain$d10*)x538)->a5 = v212944726;
                        ((struct sFtheMain$d10*)x538)->a6 = v143119116;
                        ((struct sFtheMain$d10*)x538)->a7 = v32685996;
                        ((struct sFtheMain$d10*)x538)->a8 = v3026;
                        sptr_t v140369372 = MKLAZY(x538);
                        {   gc_frame0(gc,1,v140369372);
                            wptr_t x539 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x539)->a1 = v240264206;
                            ((struct sCJhc_Prim_Prim_$x3a*)x539)->a2 = v140369372;
                            return x539;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d90(gc_t gc,arena_t arena,sptr_t v63275270,sptr_t v65562080,sptr_t v46072008)
{
        {   gc_frame0(gc,2,v46072008,v63275270);
            wptr_t v100428 = eval(gc,arena,v65562080);
            {   gc_frame0(gc,1,v100428);
                wptr_t v100430 = eval(gc,arena,v63275270);
                {   gc_frame0(gc,1,v100430);
                    wptr_t v100432 = eval(gc,arena,v46072008);
                    {   uintmax_t v168732082;
                        uintmax_t v224834306;
                        uintmax_t v30957684;
                        gc_frame0(gc,1,v100432);
                        v168732082 = ((struct sCJhc_Type_Basic_Integer*)v100428)->a1;
                        v30957684 = ((struct sCJhc_Type_Basic_Integer*)v100430)->a1;
                        v224834306 = ((struct sCJhc_Type_Basic_Integer*)v100432)->a1;
                        uintmax_t v69283182 = (v30957684 * v224834306);
                        uintmax_t v229668134 = (v168732082 + v69283182);
                        wptr_t x309 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x309)->a1 = v229668134;
                        return x309;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d91(gc_t gc,arena_t arena,sptr_t v5097150,sptr_t v160358334,sptr_t v116984016)
{
        {   gc_frame0(gc,2,v5097150,v116984016);
            wptr_t v100422 = eval(gc,arena,v160358334);
            {   gc_frame0(gc,1,v100422);
                wptr_t v100424 = eval(gc,arena,v5097150);
                {   gc_frame0(gc,1,v100424);
                    wptr_t v100426 = eval(gc,arena,v116984016);
                    {   uintmax_t v214892890;
                        uintmax_t v224199306;
                        uintmax_t v7189556;
                        gc_frame0(gc,1,v100426);
                        v214892890 = ((struct sCJhc_Type_Basic_Integer*)v100422)->a1;
                        v7189556 = ((struct sCJhc_Type_Basic_Integer*)v100424)->a1;
                        v224199306 = ((struct sCJhc_Type_Basic_Integer*)v100426)->a1;
                        uintmax_t v131959576 = (v7189556 * v224199306);
                        uintmax_t v191386606 = (v214892890 + v131959576);
                        wptr_t x310 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x310)->a1 = v191386606;
                        return x310;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d92(gc_t gc,arena_t arena,uintmax_t v66251200,sptr_t v163322718,wptr_t v117945880,uintmax_t v155808982,sptr_t v90955818,wptr_t v172897314,sptr_t v225040670,sptr_t v126919652)
{
        sptr_t v117946084 = demote(v117945880);
        sptr_t v172897519 = demote(v172897314);
        {   gc_frame0(gc,5,v90955818,v117946084,v126919652,v172897519,v225040670);
            wptr_t v101398 = eval(gc,arena,v163322718);
            {   gc_frame0(gc,1,v101398);
                wptr_t v101400 = eval(gc,arena,v90955818);
                {   gc_frame0(gc,1,v101400);
                    wptr_t v101402 = eval(gc,arena,v126919652);
                    {   uintmax_t v157878974;
                        uintmax_t v210253728;
                        uintmax_t v4342794;
                        gc_frame0(gc,1,v101402);
                        v157878974 = ((struct sCJhc_Type_Basic_Integer*)v101398)->a1;
                        v4342794 = ((struct sCJhc_Type_Basic_Integer*)v101400)->a1;
                        uintmax_t v20045050 = (v4342794 * v155808982);
                        uintmax_t v171337304 = (v157878974 - v20045050);
                        v210253728 = ((struct sCJhc_Type_Basic_Integer*)v101402)->a1;
                        uintmax_t v94522158 = (v4342794 * v66251200);
                        uintmax_t v204193218 = (v210253728 - v94522158);
                        return fW$__fMain_ratTrans(gc,arena,v172897519,v117946084,v171337304,v204193218,v225040670);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d93(gc_t gc,arena_t arena,sptr_t v39764832,sptr_t v156427568,sptr_t v148389326)
{
        {   gc_frame0(gc,2,v148389326,v156427568);
            wptr_t v100416 = eval(gc,arena,v39764832);
            {   gc_frame0(gc,1,v100416);
                wptr_t v100418 = eval(gc,arena,v156427568);
                {   gc_frame0(gc,1,v100418);
                    wptr_t v100420 = eval(gc,arena,v148389326);
                    {   uintmax_t v14863428;
                        uintmax_t v191975972;
                        uintmax_t v197261326;
                        gc_frame0(gc,1,v100420);
                        v191975972 = ((struct sCJhc_Type_Basic_Integer*)v100416)->a1;
                        v14863428 = ((struct sCJhc_Type_Basic_Integer*)v100418)->a1;
                        v197261326 = ((struct sCJhc_Type_Basic_Integer*)v100420)->a1;
                        uintmax_t v95986684 = (v14863428 * v197261326);
                        uintmax_t v147060710 = (v191975972 + v95986684);
                        wptr_t x311 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x311)->a1 = v147060710;
                        return x311;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d94(gc_t gc,arena_t arena,sptr_t v17980060,sptr_t v57262136,sptr_t v90351750)
{
        {   gc_frame0(gc,2,v17980060,v90351750);
            wptr_t v100410 = eval(gc,arena,v57262136);
            {   gc_frame0(gc,1,v100410);
                wptr_t v100412 = eval(gc,arena,v17980060);
                {   gc_frame0(gc,1,v100412);
                    wptr_t v100414 = eval(gc,arena,v90351750);
                    {   uintmax_t v124785374;
                        uintmax_t v198141688;
                        uintmax_t v206725780;
                        gc_frame0(gc,1,v100414);
                        v206725780 = ((struct sCJhc_Type_Basic_Integer*)v100410)->a1;
                        v124785374 = ((struct sCJhc_Type_Basic_Integer*)v100412)->a1;
                        v198141688 = ((struct sCJhc_Type_Basic_Integer*)v100414)->a1;
                        uintmax_t v38572692 = (v124785374 * v198141688);
                        uintmax_t v234052570 = (v206725780 + v38572692);
                        wptr_t x312 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x312)->a1 = v234052570;
                        return x312;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d95(gc_t gc,arena_t arena,wptr_t v20524848,uintmax_t v125929210,sptr_t v82235056,wptr_t v79605940,uintmax_t v227676688,sptr_t v70889122,sptr_t v134677014,sptr_t v98508474)
{
        sptr_t v20525027 = demote(v20524848);
        sptr_t v79606120 = demote(v79605940);
        {   gc_frame0(gc,5,v20525027,v70889122,v79606120,v98508474,v134677014);
            wptr_t v101392 = eval(gc,arena,v82235056);
            {   gc_frame0(gc,1,v101392);
                wptr_t v101394 = eval(gc,arena,v70889122);
                {   gc_frame0(gc,1,v101394);
                    wptr_t v101396 = eval(gc,arena,v98508474);
                    {   uintmax_t v112941028;
                        uintmax_t v240964860;
                        uintmax_t v93233076;
                        gc_frame0(gc,1,v101396);
                        v240964860 = ((struct sCJhc_Type_Basic_Integer*)v101392)->a1;
                        v93233076 = ((struct sCJhc_Type_Basic_Integer*)v101394)->a1;
                        uintmax_t v33555944 = (v93233076 * v227676688);
                        uintmax_t v65371984 = (v240964860 - v33555944);
                        v112941028 = ((struct sCJhc_Type_Basic_Integer*)v101396)->a1;
                        uintmax_t v71302554 = (v93233076 * v125929210);
                        uintmax_t v263778094 = (v112941028 - v71302554);
                        return fW$__fMain_ratTrans(gc,arena,v20525027,v79606120,v65371984,v263778094,v134677014);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d96(gc_t gc,arena_t arena,sptr_t v206812774,sptr_t v154762170,sptr_t v130793048)
{
        {   gc_frame0(gc,2,v130793048,v154762170);
            wptr_t v100404 = eval(gc,arena,v206812774);
            {   gc_frame0(gc,1,v100404);
                wptr_t v100406 = eval(gc,arena,v154762170);
                {   gc_frame0(gc,1,v100406);
                    wptr_t v100408 = eval(gc,arena,v130793048);
                    {   uintmax_t v163828302;
                        uintmax_t v235469706;
                        uintmax_t v4519528;
                        gc_frame0(gc,1,v100408);
                        v4519528 = ((struct sCJhc_Type_Basic_Integer*)v100404)->a1;
                        v235469706 = ((struct sCJhc_Type_Basic_Integer*)v100406)->a1;
                        v163828302 = ((struct sCJhc_Type_Basic_Integer*)v100408)->a1;
                        uintmax_t v142590190 = (v235469706 * v163828302);
                        uintmax_t v111346350 = (v4519528 + v142590190);
                        wptr_t x313 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x313)->a1 = v111346350;
                        return x313;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d97(gc_t gc,arena_t arena,sptr_t v53820784,sptr_t v163603298,sptr_t v9458696)
{
        {   gc_frame0(gc,2,v9458696,v53820784);
            wptr_t v100398 = eval(gc,arena,v163603298);
            {   gc_frame0(gc,1,v100398);
                wptr_t v100400 = eval(gc,arena,v53820784);
                {   gc_frame0(gc,1,v100400);
                    wptr_t v100402 = eval(gc,arena,v9458696);
                    {   uintmax_t v119698330;
                        uintmax_t v13546092;
                        uintmax_t v215427382;
                        gc_frame0(gc,1,v100402);
                        v13546092 = ((struct sCJhc_Type_Basic_Integer*)v100398)->a1;
                        v119698330 = ((struct sCJhc_Type_Basic_Integer*)v100400)->a1;
                        v215427382 = ((struct sCJhc_Type_Basic_Integer*)v100402)->a1;
                        uintmax_t v1674658 = (v119698330 * v215427382);
                        uintmax_t v206345258 = (v13546092 + v1674658);
                        wptr_t x314 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x314)->a1 = v206345258;
                        return x314;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d98(gc_t gc,arena_t arena,uintmax_t v47792490,sptr_t v10461222,wptr_t v143960016,uintmax_t v43838984,sptr_t v136306590,wptr_t v217646346,sptr_t v74909130,sptr_t v52608294)
{
        sptr_t v143960170 = demote(v143960016);
        sptr_t v217646501 = demote(v217646346);
        {   gc_frame0(gc,5,v52608294,v74909130,v136306590,v143960170,v217646501);
            wptr_t v101386 = eval(gc,arena,v10461222);
            {   gc_frame0(gc,1,v101386);
                wptr_t v101388 = eval(gc,arena,v136306590);
                {   gc_frame0(gc,1,v101388);
                    wptr_t v101390 = eval(gc,arena,v52608294);
                    {   uintmax_t v140606610;
                        uintmax_t v143516990;
                        uintmax_t v146874656;
                        gc_frame0(gc,1,v101390);
                        v143516990 = ((struct sCJhc_Type_Basic_Integer*)v101386)->a1;
                        v146874656 = ((struct sCJhc_Type_Basic_Integer*)v101388)->a1;
                        uintmax_t v108459196 = (v146874656 * v43838984);
                        uintmax_t v144857812 = (v143516990 - v108459196);
                        v140606610 = ((struct sCJhc_Type_Basic_Integer*)v101390)->a1;
                        uintmax_t v108578252 = (v146874656 * v47792490);
                        uintmax_t v58416632 = (v140606610 - v108578252);
                        return fW$__fMain_ratTrans(gc,arena,v217646501,v143960170,v144857812,v58416632,v74909130);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d99(gc_t gc,arena_t arena,sptr_t v45108862,sptr_t v189920630,sptr_t v110426252)
{
        {   gc_frame0(gc,2,v45108862,v110426252);
            wptr_t v100392 = eval(gc,arena,v189920630);
            {   gc_frame0(gc,1,v100392);
                wptr_t v100394 = eval(gc,arena,v45108862);
                {   gc_frame0(gc,1,v100394);
                    wptr_t v100396 = eval(gc,arena,v110426252);
                    {   uintmax_t v117547716;
                        uintmax_t v164466460;
                        uintmax_t v35834616;
                        gc_frame0(gc,1,v100396);
                        v35834616 = ((struct sCJhc_Type_Basic_Integer*)v100392)->a1;
                        v117547716 = ((struct sCJhc_Type_Basic_Integer*)v100394)->a1;
                        v164466460 = ((struct sCJhc_Type_Basic_Integer*)v100396)->a1;
                        uintmax_t v85139538 = (v117547716 * v164466460);
                        uintmax_t v60401902 = (v35834616 + v85139538);
                        wptr_t x315 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x315)->a1 = v60401902;
                        return x315;
                    }
                }
            }
        }
}
