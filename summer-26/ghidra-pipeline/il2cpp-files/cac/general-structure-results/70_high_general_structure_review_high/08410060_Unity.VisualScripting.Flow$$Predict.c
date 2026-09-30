/*
FUNCTION_NAME: Unity.VisualScripting.Flow$$Predict
ENTRY_POINT: 08410060
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


void Unity_VisualScripting_Flow__Predict(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  
  if ((param_1 & 1) == 0) {
    FUN_03f13384(PTR_DAT_0918a3c8);
    FUN_03f13384(PTR_DAT_0910c388);
                    /* try { // try from 0841007c to 0851007f has its CatchHandler @ 08410388 */
    FUN_03f13384(PTR_DAT_0918a080);
    *(undefined1 *)(unaff_x20 + 0x2a) = 1;
  }
  if (unaff_x19 == 0) goto LAB_08410434;
  lVar6 = FUN_083f1d40();
                    /* try { // try from 084100a0 to 085100cf has its CatchHandler @ 0841039c */
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
    if ((int)*(long *)(lVar6 + 0x18) == 0) {
LAB_08410438:
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    uVar7 = FUN_08403984(*(undefined8 *)(lVar6 + 0x20),0);
    puVar4 = PTR_DAT_0918a3c8;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_0918a3c8 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar6 = FUN_0841043c(lVar6);
      puVar3 = PTR_DAT_0918a080;
      puVar2 = PTR_DAT_0910c388;
      if (lVar6 == 0) {
LAB_08410434:
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      uVar7 = *(ulong *)(lVar6 + 0x18);
      if (uVar7 != 0) {
        if ((int)uVar7 < 1) {
          if ((int)uVar7 == 0) goto LAB_08410438;
        }
        else {
          uVar10 = 0;
          lVar11 = lVar6 + 0x20;
          do {
            uVar15 = uVar10 & 0xffffffff;
            lVar9 = lVar6 + uVar15 * 8;
            if ((int)uVar7 < 1) {
              dVar19 = INFINITY;
            }
            else {
              uVar17 = 0;
              dVar19 = INFINITY;
                    /* try { // try from 08410130 to 0851013b has its CatchHandler @ 0841038c */
              do {
                if (uVar10 != uVar17) {
                  if ((uVar7 & 0xffffffff) <= uVar17) goto LAB_08410438;
                  lVar8 = *(long *)(lVar11 + uVar17 * 8);
                  if (lVar8 == 0) goto LAB_08410434;
                  if ((uVar7 & 0xffffffff) <= uVar15) goto LAB_08410438;
                    /* try { // try from 0841015c to 0851015f has its CatchHandler @ 0841035c */
                  if (*(long *)(lVar9 + 0x20) == 0) goto LAB_08410434;
                  dVar21 = *(double *)(lVar8 + 0x18);
                  dVar18 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                             (*(long *)(lVar9 + 0x20),0);
                  lVar8 = *(long *)puVar3;
                    /* try { // try from 08410170 to 0851018b has its CatchHandler @ 0841038c */
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_03f6fea8();
                    lVar8 = *(long *)puVar3;
                  }
                  dVar21 = dVar21 - dVar18;
                  if ((-**(double **)(lVar8 + 0xb8) <= dVar21) && (dVar21 < dVar19)) {
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_03f6fea8();
                    }
                    dVar19 = (double)FUN_074b6688(dVar19,dVar21,0);
                  }
                  if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_08410438;
                  lVar8 = *(long *)(lVar11 + uVar17 * 8);
                  if (lVar8 == 0) goto LAB_08410434;
                  if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_08410438;
                  if (*(long *)(lVar9 + 0x20) == 0) goto LAB_08410434;
                  dVar21 = *(double *)(lVar8 + 0x18);
                  dVar18 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                             (*(long *)(lVar9 + 0x20),0);
                  if (dVar21 <= dVar18) {
                    if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_08410438;
                    lVar8 = *(long *)(lVar11 + uVar17 * 8);
                    if (lVar8 == 0) goto LAB_08410434;
                    dVar18 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                               (lVar8,0);
                    if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_08410438;
                    if (*(long *)(lVar9 + 0x20) == 0) goto LAB_08410434;
                    dVar21 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                               (*(long *)(lVar9 + 0x20),0);
                    if (dVar21 < dVar18) {
                      dVar19 = 0.0;
                    }
                  }
                }
                uVar7 = *(ulong *)(lVar6 + 0x18);
                uVar17 = uVar17 + 1;
              } while ((long)uVar17 < (long)(int)uVar7);
            }
            lVar8 = *(long *)puVar4;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
              lVar8 = *(long *)puVar4;
              uVar7 = *(ulong *)(lVar6 + 0x18);
            }
            if (dVar19 <= **(double **)(lVar8 + 0xb8)) {
              dVar19 = 0.0;
            }
            if ((uVar7 & 0xffffffff) <= uVar15) goto LAB_08410438;
            if (*(long *)(lVar9 + 0x20) == 0) goto LAB_08410434;
            uVar10 = uVar10 + 1;
            *(double *)(*(long *)(lVar9 + 0x20) + 0xa0) = dVar19;
          } while ((int)uVar10 < (int)uVar7);
        }
        lVar11 = *(long *)(lVar6 + 0x20);
        if (lVar11 == 0) goto LAB_08410434;
        uVar20 = *(undefined8 *)(lVar11 + 0x18);
        if (*(int *)(*(long *)PTR_DAT_0910c388 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar20 = FUN_074b6538(0,uVar20,0);
        iVar5 = *(int *)(lVar6 + 0x18);
        *(undefined8 *)(lVar11 + 0xa8) = uVar20;
        if (1 < iVar5) {
          uVar7 = 1;
          do {
            uVar13 = 0;
            dVar19 = 0.0;
            lVar11 = lVar6 + uVar7 * 8;
            plVar16 = (long *)(lVar6 + 0x20);
            uVar14 = 0xffffffff;
            do {
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_08410438;
              if (*plVar16 == 0) goto LAB_08410434;
              dVar18 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                         (*plVar16,0);
              uVar12 = (uint)uVar7;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_08410438;
              lVar9 = *(long *)(lVar11 + 0x20);
              if (lVar9 == 0) goto LAB_08410434;
              dVar21 = *(double *)(lVar9 + 0x18);
              if (dVar21 < dVar18) {
                dVar19 = 0.0;
                goto LAB_084103cc;
              }
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_08410438;
              if (*plVar16 == 0) goto LAB_08410434;
              dVar18 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                         (*plVar16,0);
              dVar21 = dVar21 - dVar18;
              plVar16 = plVar16 + 1;
              uVar1 = uVar13;
              if (dVar19 <= dVar21 && uVar14 != 0xffffffff) {
                uVar1 = uVar14;
                dVar21 = dVar19;
              }
              dVar19 = dVar21;
              uVar13 = uVar13 + 1;
              uVar14 = uVar1;
            } while (uVar12 != uVar13);
            if (-1 < (int)uVar1) {
              if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_08410438;
              lVar9 = *(long *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_08410434;
              iVar5 = FUN_083f783c(lVar9,0);
              if (iVar5 != 0) {
                dVar19 = 0.0;
              }
            }
LAB_084103cc:
            lVar9 = *(long *)puVar4;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
              lVar9 = *(long *)puVar4;
            }
            uVar13 = *(uint *)(lVar6 + 0x18);
            if (dVar19 <= **(double **)(lVar9 + 0xb8)) {
              dVar19 = 0.0;
            }
            if (uVar13 <= uVar12) goto LAB_08410438;
            lVar11 = *(long *)(lVar11 + 0x20);
            if (lVar11 == 0) goto LAB_08410434;
            uVar7 = (ulong)(uVar12 + 1);
            *(double *)(lVar11 + 0xa8) = dVar19;
          } while ((int)(uVar12 + 1) < (int)uVar13);
        }
      }
    }
  }
  return;
}


