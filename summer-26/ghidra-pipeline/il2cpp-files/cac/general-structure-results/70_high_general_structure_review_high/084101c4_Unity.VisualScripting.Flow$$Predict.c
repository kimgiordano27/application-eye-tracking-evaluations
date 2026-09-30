/*
FUNCTION_NAME: Unity.VisualScripting.Flow$$Predict
ENTRY_POINT: 084101c4
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


void Unity_VisualScripting_Flow__Predict(double param_1)

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
  ulong unaff_x27;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double unaff_d10;
  double dVar13;
  
  while (unaff_x27 < *(uint *)(unaff_x19 + 0x18)) {
    lVar3 = *(long *)(unaff_x24 + unaff_x27 * 8);
    if (lVar3 == 0) goto LAB_08410434;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x26) break;
                    /* try { // try from 084101e8 to 08510217 has its CatchHandler @ 08410384 */
    if (*(long *)(unaff_x25 + 0x20) == 0) goto LAB_08410434;
    dVar12 = *(double *)(lVar3 + 0x18);
    dVar10 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                               (*(long *)(unaff_x25 + 0x20),0);
    if (dVar12 <= dVar10) {
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x27) break;
      lVar3 = *(long *)(unaff_x24 + unaff_x27 * 8);
      if (lVar3 == 0) goto LAB_08410434;
      dVar10 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                 (lVar3,0);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x26) break;
      if (*(long *)(unaff_x25 + 0x20) == 0) goto LAB_08410434;
                    /* try { // try from 08410234 to 08510263 has its CatchHandler @ 08410394 */
      dVar12 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                 (*(long *)(unaff_x25 + 0x20),0);
      if (dVar12 < dVar10) {
        param_1 = 0.0;
      }
    }
    do {
      uVar4 = *(ulong *)(unaff_x19 + 0x18);
      unaff_x27 = unaff_x27 + 1;
      if ((long)(int)uVar4 <= (long)unaff_x27) {
        while( true ) {
          lVar3 = *unaff_x20;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
            lVar3 = *unaff_x20;
            uVar4 = *(ulong *)(unaff_x19 + 0x18);
          }
          if (param_1 <= **(double **)(lVar3 + 0xb8)) {
            param_1 = unaff_d10;
          }
          if ((uVar4 & 0xffffffff) <= unaff_x26) goto LAB_08410438;
          if (*(long *)(unaff_x25 + 0x20) == 0) goto LAB_08410434;
          unaff_x21 = unaff_x21 + 1;
          *(double *)(*(long *)(unaff_x25 + 0x20) + 0xa0) = param_1;
          if ((int)uVar4 <= (int)unaff_x21) {
            lVar3 = *(long *)(unaff_x19 + 0x20);
            if (lVar3 == 0) goto LAB_08410434;
            uVar11 = *(undefined8 *)(lVar3 + 0x18);
            if (*(int *)(*(long *)PTR_DAT_0910c388 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar11 = FUN_074b6538(0,uVar11,0);
            iVar2 = *(int *)(unaff_x19 + 0x18);
            *(undefined8 *)(lVar3 + 0xa8) = uVar11;
            if (iVar2 < 2) {
              return;
            }
            uVar4 = 1;
            goto LAB_0841030c;
          }
          unaff_x26 = unaff_x21 & 0xffffffff;
          unaff_x25 = unaff_x19 + unaff_x26 * 8;
          if (0 < (int)uVar4) break;
          param_1 = INFINITY;
        }
        unaff_x27 = 0;
        param_1 = INFINITY;
      }
    } while (unaff_x21 == unaff_x27);
    if ((uVar4 & 0xffffffff) <= unaff_x27) break;
    lVar3 = *(long *)(unaff_x24 + unaff_x27 * 8);
    if (lVar3 == 0) goto LAB_08410434;
    if ((uVar4 & 0xffffffff) <= unaff_x26) break;
    if (*(long *)(unaff_x25 + 0x20) == 0) goto LAB_08410434;
    dVar12 = *(double *)(lVar3 + 0x18);
    dVar10 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                               (*(long *)(unaff_x25 + 0x20),0);
    lVar3 = *unaff_x22;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      lVar3 = *unaff_x22;
    }
    dVar12 = dVar12 - dVar10;
    if ((-**(double **)(lVar3 + 0xb8) <= dVar12) && (dVar12 < param_1)) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      param_1 = (double)FUN_074b6688(param_1,dVar12,0);
    }
  }
LAB_08410438:
                    /* WARNING: Subroutine does not return */
  FUN_03f13634();
LAB_0841030c:
  uVar7 = 0;
  dVar10 = 0.0;
  lVar3 = unaff_x19 + uVar4 * 8;
  plVar9 = (long *)(unaff_x19 + 0x20);
  uVar8 = 0xffffffff;
  do {
    if (*(uint *)(unaff_x19 + 0x18) <= uVar7) goto LAB_08410438;
    if (*plVar9 == 0) goto LAB_08410434;
    dVar12 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                               (*plVar9,0);
    uVar6 = (uint)uVar4;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_08410438;
    lVar5 = *(long *)(lVar3 + 0x20);
    if (lVar5 == 0) goto LAB_08410434;
    dVar13 = *(double *)(lVar5 + 0x18);
    if (dVar13 < dVar12) {
      dVar10 = 0.0;
      goto LAB_084103cc;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar7) goto LAB_08410438;
    if (*plVar9 == 0) goto LAB_08410434;
    dVar12 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                               (*plVar9,0);
    dVar13 = dVar13 - dVar12;
    plVar9 = plVar9 + 1;
    uVar1 = uVar7;
    if (dVar10 <= dVar13 && uVar8 != 0xffffffff) {
      uVar1 = uVar8;
      dVar13 = dVar10;
    }
    dVar10 = dVar13;
    uVar7 = uVar7 + 1;
    uVar8 = uVar1;
  } while (uVar6 != uVar7);
  if (-1 < (int)uVar1) {
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_08410438;
    lVar5 = *(long *)(unaff_x19 + (ulong)uVar1 * 8 + 0x20);
    if (lVar5 == 0) {
LAB_08410434:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    iVar2 = FUN_083f783c(lVar5,0);
    if (iVar2 != 0) {
      dVar10 = 0.0;
    }
  }
LAB_084103cc:
  lVar5 = *unaff_x20;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar5 = *unaff_x20;
  }
  uVar7 = *(uint *)(unaff_x19 + 0x18);
  if (dVar10 <= **(double **)(lVar5 + 0xb8)) {
    dVar10 = 0.0;
  }
  if (uVar7 <= uVar6) goto LAB_08410438;
  lVar3 = *(long *)(lVar3 + 0x20);
  if (lVar3 == 0) goto LAB_08410434;
  uVar4 = (ulong)(uVar6 + 1);
  *(double *)(lVar3 + 0xa8) = dVar10;
  if ((int)uVar7 <= (int)(uVar6 + 1)) {
    return;
  }
  goto LAB_0841030c;
}


