/*
FUNCTION_NAME: Unity.VisualScripting.Flow.RecursionNode$$Equals
ENTRY_POINT: 08410278
PROGRAM: cac-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_6;telemetry_or_network_hits_6
*/


void Unity_VisualScripting_Flow_RecursionNode__Equals(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  uint uVar6;
  long *unaff_x22;
  long *unaff_x23;
  uint uVar7;
  long unaff_x24;
  uint uVar8;
  long unaff_x25;
  ulong unaff_x26;
  long *plVar9;
  ulong uVar10;
  double dVar11;
  double unaff_d8;
  undefined8 uVar12;
  double dVar13;
  double unaff_d10;
  double dVar14;
  
  do {
    lVar3 = *unaff_x20;
    uVar4 = *(ulong *)(unaff_x19 + 0x18);
    do {
      if (unaff_d8 <= **(double **)(lVar3 + 0xb8)) {
        unaff_d8 = unaff_d10;
      }
      if ((uVar4 & 0xffffffff) <= unaff_x26) goto LAB_08410438;
      if (*(long *)(unaff_x25 + 0x20) == 0) goto LAB_08410434;
                    /* try { // try from 084102a4 to 085102a7 has its CatchHandler @ 08410388 */
      unaff_x21 = unaff_x21 + 1;
                    /* try { // try from 084102a8 to 085102ab has its CatchHandler @ 08410380 */
      *(double *)(*(long *)(unaff_x25 + 0x20) + 0xa0) = unaff_d8;
                    /* try { // try from 084102ac to 085102af has its CatchHandler @ 0841037c */
                    /* try { // try from 084102b0 to 085102b3 has its CatchHandler @ 0841039c */
      if ((int)uVar4 <= (int)unaff_x21) {
                    /* try { // try from 084102b4 to 085102b7 has its CatchHandler @ 08410378 */
                    /* try { // try from 084102bc to 085102bf has its CatchHandler @ 08410370 */
        lVar3 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 084102c0 to 085102c3 has its CatchHandler @ 0841038c */
        if (lVar3 == 0) goto LAB_08410434;
                    /* try { // try from 084102c4 to 085102c7 has its CatchHandler @ 0841036c */
                    /* try { // try from 084102c8 to 085102f7 has its CatchHandler @ 08410360 */
        uVar12 = *(undefined8 *)(lVar3 + 0x18);
        if (*(int *)(*(long *)PTR_DAT_0910c388 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar12 = FUN_074b6538(0,uVar12,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
                    /* try { // try from 084102f8 to 08510343 has its CatchHandler @ 08410358 */
        *(undefined8 *)(lVar3 + 0xa8) = uVar12;
        if (iVar2 < 2) {
          return;
        }
        uVar4 = 1;
        goto LAB_0841030c;
      }
      unaff_x26 = unaff_x21 & 0xffffffff;
      unaff_x25 = unaff_x19 + unaff_x26 * 8;
      if ((int)uVar4 < 1) {
        unaff_d8 = INFINITY;
      }
      else {
        uVar10 = 0;
        unaff_d8 = INFINITY;
        do {
          if (unaff_x21 != uVar10) {
            if ((uVar4 & 0xffffffff) <= uVar10) goto LAB_08410438;
            lVar3 = *(long *)(unaff_x24 + uVar10 * 8);
            if (lVar3 == 0) goto LAB_08410434;
            if ((uVar4 & 0xffffffff) <= unaff_x26) goto LAB_08410438;
            if (*(long *)(unaff_x25 + 0x20) == 0) goto LAB_08410434;
            dVar11 = *(double *)(lVar3 + 0x18);
            dVar13 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                       (*(long *)(unaff_x25 + 0x20),0);
            lVar3 = *unaff_x22;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
              lVar3 = *unaff_x22;
            }
            dVar11 = dVar11 - dVar13;
            if ((-**(double **)(lVar3 + 0xb8) <= dVar11) && (dVar11 < unaff_d8)) {
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              unaff_d8 = (double)FUN_074b6688(unaff_d8,dVar11,0);
            }
            if (*(uint *)(unaff_x19 + 0x18) <= uVar10) goto LAB_08410438;
            lVar3 = *(long *)(unaff_x24 + uVar10 * 8);
            if (lVar3 == 0) goto LAB_08410434;
            if (*(uint *)(unaff_x19 + 0x18) <= unaff_x26) goto LAB_08410438;
            if (*(long *)(unaff_x25 + 0x20) == 0) goto LAB_08410434;
            dVar11 = *(double *)(lVar3 + 0x18);
            dVar13 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                       (*(long *)(unaff_x25 + 0x20),0);
            if (dVar11 <= dVar13) {
              if (*(uint *)(unaff_x19 + 0x18) <= uVar10) goto LAB_08410438;
              lVar3 = *(long *)(unaff_x24 + uVar10 * 8);
              if (lVar3 == 0) goto LAB_08410434;
              dVar13 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                         (lVar3,0);
              if (*(uint *)(unaff_x19 + 0x18) <= unaff_x26) goto LAB_08410438;
              if (*(long *)(unaff_x25 + 0x20) == 0) goto LAB_08410434;
              dVar11 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                         (*(long *)(unaff_x25 + 0x20),0);
              if (dVar11 < dVar13) {
                unaff_d8 = 0.0;
              }
            }
          }
          uVar4 = *(ulong *)(unaff_x19 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)uVar4);
      }
      lVar3 = *unaff_x20;
    } while (*(int *)(lVar3 + 0xe4) != 0);
    thunk_FUN_03f6fea8();
  } while( true );
LAB_0841030c:
  uVar7 = 0;
  dVar13 = 0.0;
  lVar3 = unaff_x19 + uVar4 * 8;
  plVar9 = (long *)(unaff_x19 + 0x20);
  uVar8 = 0xffffffff;
  do {
    if (*(uint *)(unaff_x19 + 0x18) <= uVar7) goto LAB_08410438;
    if (*plVar9 == 0) goto LAB_08410434;
    dVar11 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                               (*plVar9,0);
    uVar6 = (uint)uVar4;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_08410438;
    lVar5 = *(long *)(lVar3 + 0x20);
    if (lVar5 == 0) goto LAB_08410434;
    dVar14 = *(double *)(lVar5 + 0x18);
    if (dVar14 < dVar11) {
      dVar13 = 0.0;
      goto LAB_084103cc;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar7) goto LAB_08410438;
    if (*plVar9 == 0) goto LAB_08410434;
    dVar11 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                               (*plVar9,0);
    dVar14 = dVar14 - dVar11;
    plVar9 = plVar9 + 1;
    uVar1 = uVar7;
    if (dVar13 <= dVar14 && uVar8 != 0xffffffff) {
      uVar1 = uVar8;
      dVar14 = dVar13;
    }
    dVar13 = dVar14;
    uVar7 = uVar7 + 1;
    uVar8 = uVar1;
  } while (uVar6 != uVar7);
  if (-1 < (int)uVar1) {
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) {
LAB_08410438:
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    lVar5 = *(long *)(unaff_x19 + (ulong)uVar1 * 8 + 0x20);
    if (lVar5 == 0) {
LAB_08410434:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    iVar2 = FUN_083f783c(lVar5,0);
    if (iVar2 != 0) {
      dVar13 = 0.0;
    }
  }
LAB_084103cc:
  lVar5 = *unaff_x20;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar5 = *unaff_x20;
  }
  uVar7 = *(uint *)(unaff_x19 + 0x18);
  if (dVar13 <= **(double **)(lVar5 + 0xb8)) {
    dVar13 = 0.0;
  }
  if (uVar7 <= uVar6) goto LAB_08410438;
  lVar3 = *(long *)(lVar3 + 0x20);
  if (lVar3 == 0) goto LAB_08410434;
  uVar4 = (ulong)(uVar6 + 1);
  *(double *)(lVar3 + 0xa8) = dVar13;
  if ((int)uVar7 <= (int)(uVar6 + 1)) {
    return;
  }
  goto LAB_0841030c;
}


