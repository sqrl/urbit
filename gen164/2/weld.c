/* j/2/weld.c
**
** This file is in the public domain.
*/
#include "all.h"
#include "../pit.h"

/* functions
*/
  u2_weak                                                         //  transfer
  j2_mbc(Pt2, weld)(u2_wire wir_r, 
                    u2_noun a,                                    //  retain
                    u2_noun b)                                    //  retain
  {
    if ( _0 == a ) {
      return u2_rx(wir_r, b);
    } 
    else if ( u2_no == u2_dust(a) ) {
      return u2_bl_bail(wir_r, c3__exit);
    }
    else {   
      return u2_rc
        (wir_r, 
         u2_rx(wir_r, u2_h(a)), 
         j2_mbc(Pt2, weld)(wir_r, u2_t(a), b));
    }
  }
  u2_noun                                                         // transfer
  j2_mb(Pt2, weld)(u2_wire wir_r, 
                   u2_noun cor)                                   // retain
  {
    u2_noun a, b;

    if ( u2_no == u2_mean(cor, u2_cv_sam_2, &a, u2_cv_sam_3, &b, 0) ) {
      return u2_bl_bail(wir_r, c3__exit);
    } else {
      return j2_mbc(Pt2, weld)(wir_r, a, b);
    }
  }

/* structures
*/
  u2_ho_jet 
  j2_mbj(Pt2, weld)[] = {
    { ".2", c3__lite, j2_mb(Pt2, weld), Tier2, u2_none, u2_none },
    { }
  };
