/* == Start of generated table == */
/*
 * The following table is generated by running:
 *
 *   ./gen-indic-table.py IndicSyllabicCategory.txt IndicPositionalCategory.txt Blocks.txt
 *
 * on files with these headers:
 *
 * # IndicSyllabicCategory-14.0.0.txt
 * # Date: 2021-05-22, 01:01:00 GMT [KW, RP]
 * # IndicPositionalCategory-14.0.0.txt
 * # Date: 2021-05-22, 01:01:00 GMT [KW, RP]
 * # Blocks-14.0.0.txt
 * # Date: 2021-01-22, 23:29:00 GMT [KW]
 */

#include "hb.hh"

#ifndef HB_NO_OT_SHAPE

#include "hb-ot-shaper-indic.hh"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-macros"

#define ISC_A    OT_A            /*  51 chars; A */
#define ISC_C    OT_C            /* 520 chars; C */
#define ISC_CM   OT_CM           /*   9 chars; CM */
#define ISC_CS   OT_CS           /*   2 chars; CS */
#define ISC_Co   OT_Coeng        /*   2 chars; Coeng */
#define ISC_DC   OT_DOTTEDCIRCLE /*   1 chars; DOTTEDCIRCLE */
#define ISC_H    OT_H            /*  10 chars; H */
#define ISC_M    OT_M            /* 160 chars; M */
#define ISC_N    OT_N            /*  35 chars; N */
#define ISC_GB   OT_PLACEHOLDER  /* 168 chars; PLACEHOLDER */
#define ISC_R    OT_Ra           /*  12 chars; Ra */
#define ISC_Rf   OT_Repha        /*   1 chars; Repha */
#define ISC_Rt   OT_Robatic      /*   3 chars; Robatic */
#define ISC_SM   OT_SM           /*  48 chars; SM */
#define ISC_S    OT_Symbol       /*  22 chars; Symbol */
#define ISC_V    OT_V            /* 190 chars; V */
#define ISC_VA   OT_VAbv         /*  20 chars; VAbv */
#define ISC_VB   OT_VBlw         /*   7 chars; VBlw */
#define ISC_VL   OT_VPre         /*   5 chars; VPre */
#define ISC_VR   OT_VPst         /*  14 chars; VPst */
#define ISC_X    OT_X            /*   2 chars; X */
#define ISC_Xg   OT_Xgroup       /*   7 chars; Xgroup */
#define ISC_Yg   OT_Ygroup       /*   4 chars; Ygroup */
#define ISC_ZWJ  OT_ZWJ          /*   1 chars; ZWJ */
#define ISC_ZWNJ OT_ZWNJ         /*   1 chars; ZWNJ */

#define IMC_T    POS_ABOVE_C     /*  25 chars; ABOVE_C */
#define IMC_A    POS_AFTER_MAIN  /*   3 chars; AFTER_MAIN */
#define IMC_AP   POS_AFTER_POST  /*  50 chars; AFTER_POST */
#define IMC_AS   POS_AFTER_SUB   /*  60 chars; AFTER_SUB */
#define IMC_C    POS_BASE_C      /* 902 chars; BASE_C */
#define IMC_BS   POS_BEFORE_SUB  /*  31 chars; BEFORE_SUB */
#define IMC_B    POS_BELOW_C     /*  13 chars; BELOW_C */
#define IMC_X    POS_END         /*  56 chars; END */
#define IMC_R    POS_POST_C      /*  14 chars; POST_C */
#define IMC_L    POS_PRE_C       /*   5 chars; PRE_C */
#define IMC_LM   POS_PRE_M       /*  16 chars; PRE_M */
#define IMC_SM   POS_SMVD        /* 120 chars; SMVD */

#pragma GCC diagnostic pop

#define _(S,M) INDIC_COMBINE_CATEGORIES (ISC_##S, IMC_##M)


static const uint16_t indic_table[] = {


#define indic_offset_0x0028u 0


  /* Basic Latin */

  /* 0028 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X), _(GB,C),  _(X,X),  _(X,X),
  /* 0030 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* 0038 */ _(GB,C), _(GB,C),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),

#define indic_offset_0x00b0u 24


  /* Latin-1 Supplement */

  /* 00B0 */  _(X,X),  _(X,X),_(SM,SM),_(SM,SM),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 00B8 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 00C0 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 00C8 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 00D0 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X), _(GB,C),

#define indic_offset_0x0900u 64


  /* Devanagari */

  /* 0900 */_(SM,SM),_(SM,SM),_(SM,SM),_(SM,SM),  _(V,C),  _(V,C),  _(V,C),  _(V,C),
  /* 0908 */  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),
  /* 0910 */  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0918 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0920 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0928 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0930 */  _(R,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0938 */  _(C,C),  _(C,C), _(M,AS), _(M,AS),  _(N,X), _(S,SM), _(M,AS), _(M,LM),
  /* 0940 */ _(M,AS), _(M,AS), _(M,AS), _(M,AS), _(M,AS), _(M,AS), _(M,AS), _(M,AS),
  /* 0948 */ _(M,AS), _(M,AS), _(M,AS), _(M,AS), _(M,AS),  _(H,B), _(M,LM), _(M,AS),
  /* 0950 */  _(X,X), _(A,SM), _(A,SM),_(SM,SM),_(SM,SM), _(M,AS), _(M,AS), _(M,AS),
  /* 0958 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0960 */  _(V,C),  _(V,C), _(M,AS), _(M,AS),  _(X,X),  _(X,X), _(GB,C), _(GB,C),
  /* 0968 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* 0970 */  _(X,X),  _(X,X),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),
  /* 0978 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),

  /* Bengali */

  /* 0980 */ _(GB,C),_(SM,SM),_(SM,SM),_(SM,SM),  _(X,X),  _(V,C),  _(V,C),  _(V,C),
  /* 0988 */  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(X,X),  _(X,X),  _(V,C),
  /* 0990 */  _(V,C),  _(X,X),  _(X,X),  _(V,C),  _(V,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0998 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 09A0 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 09A8 */  _(C,C),  _(X,X),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 09B0 */  _(R,C),  _(X,X),  _(C,C),  _(X,X),  _(X,X),  _(X,X),  _(C,C),  _(C,C),
  /* 09B8 */  _(C,C),  _(C,C),  _(X,X),  _(X,X),  _(N,X), _(S,SM), _(M,AP), _(M,LM),
  /* 09C0 */ _(M,AP), _(M,AS), _(M,AS), _(M,AS), _(M,AS),  _(X,X),  _(X,X), _(M,LM),
  /* 09C8 */ _(M,LM),  _(X,X),  _(X,X), _(M,AP), _(M,AP),  _(H,B),  _(C,C),  _(X,X),
  /* 09D0 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X), _(M,AP),
  /* 09D8 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(C,C),  _(C,C),  _(X,X),  _(C,C),
  /* 09E0 */  _(V,C),  _(V,C), _(M,AS), _(M,AS),  _(X,X),  _(X,X), _(GB,C), _(GB,C),
  /* 09E8 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* 09F0 */  _(R,C),  _(C,C),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 09F8 */  _(X,X),  _(X,X),  _(X,X),  _(X,X), _(GB,C),  _(X,X),_(SM,SM),  _(X,X),

  /* Gurmukhi */

  /* 0A00 */  _(X,X),_(SM,SM),_(SM,SM),_(SM,SM),  _(X,X),  _(V,C),  _(V,C),  _(V,C),
  /* 0A08 */  _(V,C),  _(V,C),  _(V,C),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(V,C),
  /* 0A10 */  _(V,C),  _(X,X),  _(X,X),  _(V,C),  _(V,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0A18 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0A20 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0A28 */  _(C,C),  _(X,X),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0A30 */  _(R,C),  _(X,X),  _(C,C),  _(C,C),  _(X,X),  _(C,C),  _(C,C),  _(X,X),
  /* 0A38 */  _(C,C),  _(C,C),  _(X,X),  _(X,X),  _(N,X),  _(X,X), _(M,AP), _(M,LM),
  /* 0A40 */ _(M,AP), _(M,AP), _(M,AP),  _(X,X),  _(X,X),  _(X,X),  _(X,X), _(M,AP),
  /* 0A48 */ _(M,AP),  _(X,X),  _(X,X), _(M,AP), _(M,AP),  _(H,B),  _(X,X),  _(X,X),
  /* 0A50 */  _(X,X),  _(M,B),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 0A58 */  _(X,X),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(X,X),  _(C,C),  _(X,X),
  /* 0A60 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X), _(GB,C), _(GB,C),
  /* 0A68 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* 0A70 */_(SM,SM),_(SM,SM),  _(C,C),  _(C,C),  _(X,X), _(CM,C),  _(X,X),  _(X,X),
  /* 0A78 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),

  /* Gujarati */

  /* 0A80 */  _(X,X),_(SM,SM),_(SM,SM),_(SM,SM),  _(X,X),  _(V,C),  _(V,C),  _(V,C),
  /* 0A88 */  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(X,X),  _(V,C),
  /* 0A90 */  _(V,C),  _(V,C),  _(X,X),  _(V,C),  _(V,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0A98 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0AA0 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0AA8 */  _(C,C),  _(X,X),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0AB0 */  _(R,C),  _(X,X),  _(C,C),  _(C,C),  _(X,X),  _(C,C),  _(C,C),  _(C,C),
  /* 0AB8 */  _(C,C),  _(C,C),  _(X,X),  _(X,X),  _(N,X), _(S,SM), _(M,AP), _(M,LM),
  /* 0AC0 */ _(M,AP), _(M,AP), _(M,AP), _(M,AP), _(M,AP), _(M,AS),  _(X,X), _(M,AS),
  /* 0AC8 */ _(M,AS), _(M,AP),  _(X,X), _(M,AP), _(M,AP),  _(H,B),  _(X,X),  _(X,X),
  /* 0AD0 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 0AD8 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 0AE0 */  _(V,C),  _(V,C), _(M,AP), _(M,AP),  _(X,X),  _(X,X), _(GB,C), _(GB,C),
  /* 0AE8 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* 0AF0 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 0AF8 */  _(X,X),  _(C,C), _(A,SM),  _(N,X), _(A,SM),  _(N,X),  _(N,X),  _(N,X),

  /* Oriya */

  /* 0B00 */  _(X,X),_(SM,BS),_(SM,SM),_(SM,SM),  _(X,X),  _(V,C),  _(V,C),  _(V,C),
  /* 0B08 */  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(X,X),  _(X,X),  _(V,C),
  /* 0B10 */  _(V,C),  _(X,X),  _(X,X),  _(V,C),  _(V,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0B18 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0B20 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0B28 */  _(C,C),  _(X,X),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0B30 */  _(R,C),  _(X,X),  _(C,C),  _(C,C),  _(X,X),  _(C,C),  _(C,C),  _(C,C),
  /* 0B38 */  _(C,C),  _(C,C),  _(X,X),  _(X,X),  _(N,X), _(S,SM), _(M,AP),  _(M,A),
  /* 0B40 */ _(M,AP), _(M,AS), _(M,AS), _(M,AS), _(M,AS),  _(X,X),  _(X,X), _(M,LM),
  /* 0B48 */  _(M,A),  _(X,X),  _(X,X), _(M,AP), _(M,AP),  _(H,B),  _(X,X),  _(X,X),
  /* 0B50 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(N,X),  _(M,A), _(M,AP),
  /* 0B58 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(C,C),  _(C,C),  _(X,X),  _(C,C),
  /* 0B60 */  _(V,C),  _(V,C), _(M,AS), _(M,AS),  _(X,X),  _(X,X), _(GB,C), _(GB,C),
  /* 0B68 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* 0B70 */  _(X,X),  _(C,C),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 0B78 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),

  /* Tamil */

  /* 0B80 */  _(X,X),  _(X,X),_(SM,SM),  _(X,X),  _(X,X),  _(V,C),  _(V,C),  _(V,C),
  /* 0B88 */  _(V,C),  _(V,C),  _(V,C),  _(X,X),  _(X,X),  _(X,X),  _(V,C),  _(V,C),
  /* 0B90 */  _(V,C),  _(X,X),  _(V,C),  _(V,C),  _(V,C),  _(C,C),  _(X,X),  _(X,X),
  /* 0B98 */  _(X,X),  _(C,C),  _(C,C),  _(X,X),  _(C,C),  _(X,X),  _(C,C),  _(C,C),
  /* 0BA0 */  _(X,X),  _(X,X),  _(X,X),  _(C,C),  _(C,C),  _(X,X),  _(X,X),  _(X,X),
  /* 0BA8 */  _(C,C),  _(C,C),  _(C,C),  _(X,X),  _(X,X),  _(X,X),  _(C,C),  _(C,C),
  /* 0BB0 */  _(R,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0BB8 */  _(C,C),  _(C,C),  _(X,X),  _(X,X),  _(X,X),  _(X,X), _(M,AP), _(M,AP),
  /* 0BC0 */ _(M,AS), _(M,AP), _(M,AP),  _(X,X),  _(X,X),  _(X,X), _(M,LM), _(M,LM),
  /* 0BC8 */ _(M,LM),  _(X,X), _(M,AP), _(M,AP), _(M,AP),  _(H,T),  _(X,X),  _(X,X),
  /* 0BD0 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X), _(M,AP),
  /* 0BD8 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 0BE0 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X), _(GB,C), _(GB,C),
  /* 0BE8 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* 0BF0 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 0BF8 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),

  /* Telugu */

  /* 0C00 */_(SM,SM),_(SM,SM),_(SM,SM),_(SM,SM),_(SM,SM),  _(V,C),  _(V,C),  _(V,C),
  /* 0C08 */  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(X,X),  _(V,C),  _(V,C),
  /* 0C10 */  _(V,C),  _(X,X),  _(V,C),  _(V,C),  _(V,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0C18 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0C20 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0C28 */  _(C,C),  _(X,X),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0C30 */  _(R,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0C38 */  _(C,C),  _(C,C),  _(X,X),  _(X,X),  _(N,X), _(S,SM), _(M,BS), _(M,BS),
  /* 0C40 */ _(M,BS), _(M,AS), _(M,AS), _(M,AS), _(M,AS),  _(X,X), _(M,BS), _(M,BS),
  /* 0C48 */ _(M,BS),  _(X,X), _(M,BS), _(M,BS), _(M,BS),  _(H,T),  _(X,X),  _(X,X),
  /* 0C50 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X), _(M,BS), _(M,BS),  _(X,X),
  /* 0C58 */  _(C,C),  _(C,C),  _(C,C),  _(X,X),  _(X,X),  _(C,C),  _(X,X),  _(X,X),
  /* 0C60 */  _(V,C),  _(V,C), _(M,BS), _(M,BS),  _(X,X),  _(X,X), _(GB,C), _(GB,C),
  /* 0C68 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* 0C70 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 0C78 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),

  /* Kannada */

  /* 0C80 */ _(GB,C),_(SM,SM),_(SM,SM),_(SM,SM),  _(X,X),  _(V,C),  _(V,C),  _(V,C),
  /* 0C88 */  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(X,X),  _(V,C),  _(V,C),
  /* 0C90 */  _(V,C),  _(X,X),  _(V,C),  _(V,C),  _(V,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0C98 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0CA0 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0CA8 */  _(C,C),  _(X,X),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0CB0 */  _(R,C),  _(C,C),  _(C,C),  _(C,C),  _(X,X),  _(C,C),  _(C,C),  _(C,C),
  /* 0CB8 */  _(C,C),  _(C,C),  _(X,X),  _(X,X),  _(N,X), _(S,SM), _(M,BS), _(M,BS),
  /* 0CC0 */ _(M,BS), _(M,BS), _(M,BS), _(M,BS), _(M,BS),  _(X,X), _(M,BS), _(M,BS),
  /* 0CC8 */ _(M,BS),  _(X,X), _(M,BS), _(M,BS), _(M,BS),  _(H,T),  _(X,X),  _(X,X),
  /* 0CD0 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X), _(M,BS), _(M,BS),  _(X,X),
  /* 0CD8 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(C,C),  _(C,C),  _(X,X),
  /* 0CE0 */  _(V,C),  _(V,C), _(M,BS), _(M,BS),  _(X,X),  _(X,X), _(GB,C), _(GB,C),
  /* 0CE8 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* 0CF0 */  _(X,X), _(CS,C), _(CS,C),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 0CF8 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),

  /* Malayalam */

  /* 0D00 */_(SM,SM),_(SM,SM),_(SM,SM),_(SM,SM), _(GB,C),  _(V,C),  _(V,C),  _(V,C),
  /* 0D08 */  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(X,X),  _(V,C),  _(V,C),
  /* 0D10 */  _(V,C),  _(X,X),  _(V,C),  _(V,C),  _(V,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0D18 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0D20 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0D28 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0D30 */  _(R,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0D38 */  _(C,C),  _(C,C),  _(C,C), _(M,AS), _(M,AS), _(S,SM), _(M,AP), _(M,AP),
  /* 0D40 */ _(M,AP), _(M,AP), _(M,AP), _(M,AP), _(M,AP),  _(X,X), _(M,LM), _(M,LM),
  /* 0D48 */ _(M,LM),  _(X,X), _(M,AP), _(M,AP), _(M,AP),  _(H,T), _(Rf,X),  _(X,X),
  /* 0D50 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(C,C),  _(C,C),  _(C,C), _(M,AP),
  /* 0D58 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(V,C),
  /* 0D60 */  _(V,C),  _(V,C), _(M,AP), _(M,AP),  _(X,X),  _(X,X), _(GB,C), _(GB,C),
  /* 0D68 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* 0D70 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 0D78 */  _(X,X),  _(X,X),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),

  /* Sinhala */

  /* 0D80 */  _(X,X),_(SM,SM),_(SM,SM),_(SM,SM),  _(X,X),  _(V,C),  _(V,C),  _(V,C),
  /* 0D88 */  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),
  /* 0D90 */  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(X,X),
  /* 0D98 */  _(X,X),  _(X,X),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0DA0 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0DA8 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0DB0 */  _(C,C),  _(C,C),  _(X,X),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 0DB8 */  _(C,C),  _(C,C),  _(C,C),  _(R,C),  _(X,X),  _(C,C),  _(X,X),  _(X,X),
  /* 0DC0 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(X,X),
  /* 0DC8 */  _(X,X),  _(X,X),  _(H,T),  _(X,X),  _(X,X),  _(X,X),  _(X,X), _(M,AS),
  /* 0DD0 */ _(M,AS), _(M,AS), _(M,AS), _(M,AS), _(M,AS),  _(X,X), _(M,AS),  _(X,X),
  /* 0DD8 */ _(M,AS), _(M,LM), _(M,AS), _(M,LM), _(M,AS), _(M,AS), _(M,AS), _(M,AS),
  /* 0DE0 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X), _(GB,C), _(GB,C),
  /* 0DE8 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* 0DF0 */  _(X,X),  _(X,X), _(M,AS), _(M,AS),  _(X,X),  _(X,X),  _(X,X),  _(X,X),

#define indic_offset_0x1000u 1336


  /* Myanmar */

  /* 1000 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 1008 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 1010 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 1018 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 1020 */  _(C,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),
  /* 1028 */  _(V,C),  _(V,C),  _(V,C), _(VR,R), _(VR,R), _(VA,T), _(VA,T), _(VB,B),
  /* 1030 */ _(VB,B), _(VL,L), _(VA,T), _(VA,T), _(VA,T), _(VA,T),_(SM,SM),  _(N,X),
  /* 1038 */_(SM,SM), _(Co,X), _(VA,T), _(CM,C), _(CM,C), _(CM,C), _(CM,C),  _(C,C),
  /* 1040 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* 1048 */ _(GB,C), _(GB,C),  _(X,X), _(GB,C),  _(X,X),  _(X,X), _(GB,C),  _(X,X),
  /* 1050 */  _(C,C),  _(C,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C), _(VR,R), _(VR,R),
  /* 1058 */ _(VB,B), _(VB,B),  _(C,C),  _(C,C),  _(C,C),  _(C,C), _(CM,C), _(CM,C),
  /* 1060 */ _(CM,C),  _(C,C), _(VR,R),  _(N,X),  _(N,X),  _(C,C),  _(C,C), _(VR,R),
  /* 1068 */ _(VR,R),  _(N,X),  _(N,X),  _(N,X),  _(N,X),  _(N,X),  _(C,C),  _(C,C),
  /* 1070 */  _(C,C), _(VA,T), _(VA,T), _(VA,T), _(VA,T),  _(C,C),  _(C,C),  _(C,C),
  /* 1078 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 1080 */  _(C,C),  _(C,C), _(CM,C), _(VR,R), _(VL,L), _(VA,T), _(VA,T),  _(N,X),
  /* 1088 */  _(N,X),  _(N,X),  _(N,X),  _(N,X),  _(N,X),  _(N,X),  _(C,C),  _(N,X),
  /* 1090 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* 1098 */ _(GB,C), _(GB,C),  _(N,X),  _(N,X), _(VR,R), _(VA,T),  _(X,X),  _(X,X),

#define indic_offset_0x1780u 1496


  /* Khmer */

  /* 1780 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 1788 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 1790 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 1798 */  _(C,C),  _(C,C),  _(R,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* 17A0 */  _(C,C),  _(C,C),  _(C,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),
  /* 17A8 */  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(V,C),
  /* 17B0 */  _(V,C),  _(V,C),  _(V,C),  _(V,C),  _(X,X),  _(X,X), _(VR,R), _(VA,T),
  /* 17B8 */ _(VA,T), _(VA,T), _(VA,T), _(VB,B), _(VB,B), _(VB,B), _(VA,T), _(VR,R),
  /* 17C0 */ _(VR,R), _(VL,L), _(VL,L), _(VL,L), _(VR,R), _(VR,R), _(Xg,X), _(Yg,X),
  /* 17C8 */ _(Yg,X), _(Rt,X), _(Rt,X), _(Xg,X), _(Rt,X), _(Xg,X), _(Xg,X), _(Xg,X),
  /* 17D0 */ _(Xg,X), _(Xg,X), _(Co,X), _(Yg,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 17D8 */  _(X,X),  _(X,X),  _(X,X),  _(X,X), _(S,SM), _(Yg,X),  _(X,X),  _(X,X),
  /* 17E0 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* 17E8 */ _(GB,C), _(GB,C),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),

#define indic_offset_0x1cd0u 1608


  /* Vedic Extensions */

  /* 1CD0 */ _(A,SM), _(A,SM), _(A,SM),  _(X,X), _(A,SM), _(A,SM), _(A,SM), _(A,SM),
  /* 1CD8 */ _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM),
  /* 1CE0 */ _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM),
  /* 1CE8 */ _(A,SM), _(S,SM), _(S,SM), _(S,SM), _(S,SM), _(A,SM), _(S,SM), _(S,SM),

  /* No_Block */

  /* 1CF0 */ _(S,SM), _(S,SM),  _(C,C),  _(C,C), _(A,SM),  _(C,C),  _(C,C), _(A,SM),

  /* Vedic Extensions */

  /* 1CF8 */ _(A,SM), _(A,SM), _(GB,C),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),

#define indic_offset_0x2008u 1656


  /* General Punctuation */

  /* 2008 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),_(ZWNJ,X),_(ZWJ,X),  _(X,X),  _(X,X),
  /* 2010 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),  _(X,X),  _(X,X),  _(X,X),

#define indic_offset_0x2070u 1672


  /* Superscripts and Subscripts */

  /* 2070 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),_(SM,SM),  _(X,X),  _(X,X),  _(X,X),
  /* 2078 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 2080 */  _(X,X),  _(X,X),_(SM,SM),_(SM,SM),_(SM,SM),  _(X,X),  _(X,X),  _(X,X),

#define indic_offset_0xa8e0u 1696


  /* Devanagari Extended */

  /* A8E0 */ _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM),
  /* A8E8 */ _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM), _(A,SM),
  /* A8F0 */ _(A,SM), _(A,SM), _(S,SM), _(S,SM), _(S,SM), _(S,SM), _(S,SM), _(S,SM),
  /* A8F8 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(V,C), _(M,AS),

#define indic_offset_0xa9e0u 1728


  /* Myanmar Extended-B */

  /* A9E0 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C), _(VA,T),  _(X,X),  _(C,C),
  /* A9E8 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* A9F0 */ _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C), _(GB,C),
  /* A9F8 */ _(GB,C), _(GB,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(X,X),

#define indic_offset_0xaa60u 1760


  /* Myanmar Extended-A */

  /* AA60 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* AA68 */  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),  _(C,C),
  /* AA70 */  _(X,X),  _(C,C),  _(C,C),  _(C,C), _(GB,C), _(GB,C), _(GB,C),  _(X,X),
  /* AA78 */  _(X,X),  _(X,X),  _(C,C),  _(N,X),  _(N,X),  _(N,X),  _(C,C),  _(C,C),

#define indic_offset_0x11300u 1792


  /* No_Block */

  /* 11300 */  _(X,X),_(SM,SM),_(SM,SM),_(SM,SM),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 11308 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 11310 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 11318 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 11320 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 11328 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 11330 */  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),  _(X,X),
  /* 11338 */  _(X,X),  _(X,X),  _(X,X),  _(N,X),  _(N,X),  _(X,X),  _(X,X),  _(X,X),

}; /* Table items: 1856; occupancy: 69% */

uint16_t
hb_indic_get_categories (hb_codepoint_t u)
{
  switch (u >> 12)
  {
    case 0x0u:
      if (unlikely (u == 0x00A0u)) return _(GB,C);
      if (hb_in_range<hb_codepoint_t> (u, 0x0028u, 0x003Fu)) return indic_table[u - 0x0028u + indic_offset_0x0028u];
      if (hb_in_range<hb_codepoint_t> (u, 0x00B0u, 0x00D7u)) return indic_table[u - 0x00B0u + indic_offset_0x00b0u];
      if (hb_in_range<hb_codepoint_t> (u, 0x0900u, 0x0DF7u)) return indic_table[u - 0x0900u + indic_offset_0x0900u];
      break;

    case 0x1u:
      if (hb_in_range<hb_codepoint_t> (u, 0x1000u, 0x109Fu)) return indic_table[u - 0x1000u + indic_offset_0x1000u];
      if (hb_in_range<hb_codepoint_t> (u, 0x1780u, 0x17EFu)) return indic_table[u - 0x1780u + indic_offset_0x1780u];
      if (hb_in_range<hb_codepoint_t> (u, 0x1CD0u, 0x1CFFu)) return indic_table[u - 0x1CD0u + indic_offset_0x1cd0u];
      break;

    case 0x2u:
      if (unlikely (u == 0x25CCu)) return _(DC,C);
      if (hb_in_range<hb_codepoint_t> (u, 0x2008u, 0x2017u)) return indic_table[u - 0x2008u + indic_offset_0x2008u];
      if (hb_in_range<hb_codepoint_t> (u, 0x2070u, 0x2087u)) return indic_table[u - 0x2070u + indic_offset_0x2070u];
      break;

    case 0xAu:
      if (hb_in_range<hb_codepoint_t> (u, 0xA8E0u, 0xA8FFu)) return indic_table[u - 0xA8E0u + indic_offset_0xa8e0u];
      if (hb_in_range<hb_codepoint_t> (u, 0xA9E0u, 0xA9FFu)) return indic_table[u - 0xA9E0u + indic_offset_0xa9e0u];
      if (hb_in_range<hb_codepoint_t> (u, 0xAA60u, 0xAA7Fu)) return indic_table[u - 0xAA60u + indic_offset_0xaa60u];
      break;

    case 0x11u:
      if (hb_in_range<hb_codepoint_t> (u, 0x11300u, 0x1133Fu)) return indic_table[u - 0x11300u + indic_offset_0x11300u];
      break;

    default:
      break;
  }
  return _(X,X);
}

#undef _

#undef ISC_A
#undef ISC_C
#undef ISC_CM
#undef ISC_CS
#undef ISC_Co
#undef ISC_DC
#undef ISC_H
#undef ISC_M
#undef ISC_N
#undef ISC_GB
#undef ISC_R
#undef ISC_Rf
#undef ISC_Rt
#undef ISC_SM
#undef ISC_S
#undef ISC_V
#undef ISC_VA
#undef ISC_VB
#undef ISC_VL
#undef ISC_VR
#undef ISC_X
#undef ISC_Xg
#undef ISC_Yg
#undef ISC_ZWJ
#undef ISC_ZWNJ

#undef IMC_T
#undef IMC_A
#undef IMC_AP
#undef IMC_AS
#undef IMC_C
#undef IMC_BS
#undef IMC_B
#undef IMC_X
#undef IMC_R
#undef IMC_L
#undef IMC_LM
#undef IMC_SM

#endif

/* == End of generated table == */
