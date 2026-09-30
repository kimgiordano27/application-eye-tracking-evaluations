/*
FUNCTION_NAME: Unity.VisualScripting.Flow.<>c$$.cctor
ENTRY_POINT: 08410348
PROGRAM: cac-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_Flow_<>c___cctor(double param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint in_w8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  uint uVar4;
  ulong unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  uint unaff_w25;
  long *unaff_x26;
  double dVar5;
  double unaff_d8;
  double unaff_d9;
  double dVar6;
  
code_r0x08410348:
                    /* try { // try from 08410348 to 0851034b has its CatchHandler @ 08410384 */
                    /* try { // try from 0841034c to 0851034f has its CatchHandler @ 08410364 */
  if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_08410434;
                    /* try { // try from 08410350 to 08510353 has its CatchHandler @ 08410394 */
  dVar6 = *(double *)(*(long *)(unaff_x23 + 0x20) + 0x18);
                    /* try { // try from 08410354 to 08510357 has its CatchHandler @ 08410390 */
                    /* catch() { ... } // from try @ 084102f8 with catch @ 08410358 */
  uVar4 = (uint)unaff_x22;
  if (dVar6 < param_1) {
    unaff_d8 = 0.0;
  }
  else {
                    /* catch() { ... } // from try @ 0841015c with catch @ 0841035c */
                    /* catch() { ... } // from try @ 084102c8 with catch @ 08410360 */
    if (in_w8 <= unaff_w24) goto LAB_08410438;
                    /* catch() { ... } // from try @ 0841034c with catch @ 08410364 */
                    /* catch() { ... } // from try @ 08410344 with catch @ 08410368 */
    if (*unaff_x26 == 0) goto LAB_08410434;
                    /* catch() { ... } // from try @ 084102c4 with catch @ 0841036c */
                    /* catch() { ... } // from try @ 084102bc with catch @ 08410370 */
    dVar5 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                              (*unaff_x26,0);
                    /* catch() { ... } // from try @ 084102b8 with catch @ 08410374 */
    dVar6 = dVar6 - dVar5;
                    /* catch() { ... } // from try @ 084102b4 with catch @ 08410378 */
                    /* catch() { ... } // from try @ 084102ac with catch @ 0841037c */
                    /* catch() { ... } // from try @ 084102a8 with catch @ 08410380 */
    uVar1 = unaff_w24;
                    /* catch() { ... } // from try @ 084101e8 with catch @ 08410384
                       catch() { ... } // from try @ 08410348 with catch @ 08410384 */
    if (unaff_d8 <= dVar6 && unaff_w25 != 0xffffffff) {
      uVar1 = unaff_w25;
      dVar6 = unaff_d8;
    }
                    /* catch() { ... } // from try @ 0841007c with catch @ 08410388
                       catch() { ... } // from try @ 084102a4 with catch @ 08410388 */
    unaff_d8 = dVar6;
                    /* catch() { ... } // from try @ 08410130 with catch @ 0841038c
                       catch() { ... } // from try @ 08410170 with catch @ 0841038c
                       catch() { ... } // from try @ 084102c0 with catch @ 0841038c */
    unaff_w24 = unaff_w24 + 1;
                    /* catch() { ... } // from try @ 08410274 with catch @ 08410390
                       catch() { ... } // from try @ 08410354 with catch @ 08410390 */
    unaff_x26 = unaff_x26 + 1;
    unaff_w25 = uVar1;
                    /* catch() { ... } // from try @ 08410234 with catch @ 08410394
                       catch() { ... } // from try @ 08410350 with catch @ 08410394 */
    if (uVar4 != unaff_w24) goto LAB_08410320;
                    /* catch() { ... } // from try @ 08410048 with catch @ 08410398 */
    if ((int)uVar1 < 0) goto LAB_084103cc;
                    /* catch() { ... } // from try @ 084100a0 with catch @ 0841039c
                       catch() { ... } // from try @ 084102b0 with catch @ 0841039c */
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_08410438;
    lVar3 = *(long *)(unaff_x19 + (ulong)uVar1 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_08410434;
    iVar2 = FUN_083f783c(lVar3,0);
    if (iVar2 != 0) {
      unaff_d8 = unaff_d9;
    }
  }
LAB_084103cc:
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar3 = *unaff_x20;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (unaff_d8 <= **(double **)(lVar3 + 0xb8)) {
    unaff_d8 = unaff_d9;
  }
  if (uVar1 <= uVar4) goto LAB_08410438;
  if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_08410434;
  unaff_x22 = (ulong)(uVar4 + 1);
  *(double *)(*(long *)(unaff_x23 + 0x20) + 0xa8) = unaff_d8;
  if ((int)uVar1 <= (int)(uVar4 + 1)) {
    return;
  }
  unaff_w24 = 0;
  unaff_d8 = 0.0;
  unaff_x23 = unaff_x19 + unaff_x22 * 8;
  unaff_w25 = 0xffffffff;
  unaff_x26 = unaff_x21;
LAB_08410320:
  if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) goto LAB_08410438;
  if (*unaff_x26 == 0) {
LAB_08410434:
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  param_1 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                              (*unaff_x26,0);
  in_w8 = *(uint *)(unaff_x19 + 0x18);
  if (in_w8 <= (uint)unaff_x22) {
LAB_08410438:
                    /* WARNING: Subroutine does not return */
    FUN_03f13634();
  }
  goto code_r0x08410348;
}


