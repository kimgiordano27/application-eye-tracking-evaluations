/*
FUNCTION_NAME: Unity.VisualScripting.Flow.RecursionNode$$GetHashCode
ENTRY_POINT: 08410300
PROGRAM: cac-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_Flow_RecursionNode__GetHashCode(void)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  double dVar10;
  double dVar11;
  double unaff_d9;
  double dVar12;
  
  if (in_NG == in_OV) {
    uVar6 = 1;
    do {
      uVar7 = 0;
      dVar11 = 0.0;
      lVar4 = unaff_x19 + uVar6 * 8;
      plVar9 = (long *)(unaff_x19 + 0x20);
      uVar8 = 0xffffffff;
      do {
        if (*(uint *)(unaff_x19 + 0x18) <= uVar7) goto LAB_08410438;
        if (*plVar9 == 0) goto LAB_08410434;
        dVar10 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                   (*plVar9,0);
        uVar5 = (uint)uVar6;
                    /* try { // try from 08410344 to 08510347 has its CatchHandler @ 08410368 */
        if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_08410438;
        lVar3 = *(long *)(lVar4 + 0x20);
        if (lVar3 == 0) goto LAB_08410434;
        dVar12 = *(double *)(lVar3 + 0x18);
        if (dVar12 < dVar10) {
          dVar11 = 0.0;
          goto LAB_084103cc;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar7) goto LAB_08410438;
        if (*plVar9 == 0) goto LAB_08410434;
        dVar10 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                   (*plVar9,0);
        dVar12 = dVar12 - dVar10;
        plVar9 = plVar9 + 1;
        uVar1 = uVar7;
        if (dVar11 <= dVar12 && uVar8 != 0xffffffff) {
          uVar1 = uVar8;
          dVar12 = dVar11;
        }
        dVar11 = dVar12;
        uVar7 = uVar7 + 1;
        uVar8 = uVar1;
      } while (uVar5 != uVar7);
      if (-1 < (int)uVar1) {
        if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_08410438;
        lVar3 = *(long *)(unaff_x19 + (ulong)uVar1 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_08410434;
        iVar2 = FUN_083f783c(lVar3,0);
        if (iVar2 != 0) {
          dVar11 = unaff_d9;
        }
      }
LAB_084103cc:
      lVar3 = *unaff_x20;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar3 = *unaff_x20;
      }
      uVar7 = *(uint *)(unaff_x19 + 0x18);
      if (dVar11 <= **(double **)(lVar3 + 0xb8)) {
        dVar11 = unaff_d9;
      }
      if (uVar7 <= uVar5) {
LAB_08410438:
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      lVar4 = *(long *)(lVar4 + 0x20);
      if (lVar4 == 0) {
LAB_08410434:
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      uVar6 = (ulong)(uVar5 + 1);
      *(double *)(lVar4 + 0xa8) = dVar11;
    } while ((int)(uVar5 + 1) < (int)uVar7);
  }
  return;
}


