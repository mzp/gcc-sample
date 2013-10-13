#!/bin/sh
gcc tmp/rts/profile.c tmp/rts/rts_support.c tmp/rts/gc_none.c tmp/rts/jhc_rts.c tmp/lib/lib_cbits.c tmp/rts/gc_jgc.c tmp/rts/stableptr.c tmp/rts/conc.c -Itmp/cbits -Itmp tmp/main_code.c -o hs.out '-std=gnu99' -D_GNU_SOURCE '-falign-functions=4' -ffast-math -Wextra -Wall -Wno-unused-parameter -fno-strict-aliasing -g -lm '-D_JHC_GC=_JHC_GC_JGC' '-D_JHC_CONC=_JHC_CONC_NONE'

./hs.out 1000
