/*
FUNCTION_NAME: Unity.VisualScripting.Flow.<>c$$<New>b__35_0
ENTRY_POINT: 084103b8
PROGRAM: cac-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_Flow_<>c__<New>b__35_0(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  double dVar8;
  double unaff_d8;
  double unaff_d9;
  double dVar9;
  
  do {
    iVar3 = FUN_083f783c(param_1,param_2);
                    /* try { // try from 084103bc to 085103c7 has its CatchHandler @ 08410508 */
    if (iVar3 != 0) {
      unaff_d8 = unaff_d9;
    }
LAB_084103cc:
    do {
      lVar4 = *unaff_x20;
                    /* try { // try from 084103d0 to 085103d3 has its CatchHandler @ 08410528 */
      if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* try { // try from 084103d8 to 085103df has its CatchHandler @ 0841050c */
        thunk_FUN_03f6fea8();
        lVar4 = *unaff_x20;
      }
                    /* try { // try from 084103e4 to 085103ef has its CatchHandler @ 08410510 */
      uVar5 = *(uint *)(unaff_x19 + 0x18);
      if (unaff_d8 <= **(double **)(lVar4 + 0xb8)) {
        unaff_d8 = unaff_d9;
      }
                    /* try { // try from 084103f4 to 085103ff has its CatchHandler @ 0841051c */
      if (uVar5 <= (uint)unaff_x22) goto LAB_08410438;
      if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_08410434;
      uVar1 = (uint)unaff_x22 + 1;
      unaff_x22 = (ulong)uVar1;
      *(double *)(*(long *)(unaff_x23 + 0x20) + 0xa8) = unaff_d8;
      if ((int)uVar5 <= (int)uVar1) {
        return;
      }
      uVar5 = 0;
      unaff_d8 = 0.0;
      unaff_x23 = unaff_x19 + unaff_x22 * 8;
      plVar7 = unaff_x21;
      uVar6 = 0xffffffff;
      do {
        if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_08410438;
        if (*plVar7 == 0) goto LAB_08410434;
        dVar8 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                  (*plVar7,0);
        if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_08410438;
        if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_08410434;
        dVar9 = *(double *)(*(long *)(unaff_x23 + 0x20) + 0x18);
        if (dVar9 < dVar8) {
          unaff_d8 = 0.0;
          goto LAB_084103cc;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_08410438;
        if (*plVar7 == 0) goto LAB_08410434;
        dVar8 = (double)Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance
                                  (*plVar7,0);
        dVar9 = dVar9 - dVar8;
        plVar7 = plVar7 + 1;
        uVar2 = uVar5;
        if (unaff_d8 <= dVar9 && uVar6 != 0xffffffff) {
          uVar2 = uVar6;
          dVar9 = unaff_d8;
        }
        unaff_d8 = dVar9;
        uVar5 = uVar5 + 1;
        uVar6 = uVar2;
      } while (uVar1 != uVar5);
    } while ((int)uVar2 < 0);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar2) {
LAB_08410438:
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    param_1 = *(long *)(unaff_x19 + (ulong)uVar2 * 8 + 0x20);
    if (param_1 == 0) {
LAB_08410434:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    param_2 = 0;
  } while( true );
}


