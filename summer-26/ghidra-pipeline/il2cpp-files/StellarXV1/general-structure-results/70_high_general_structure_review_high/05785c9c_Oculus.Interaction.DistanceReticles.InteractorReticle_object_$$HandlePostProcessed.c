/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.InteractorReticle<object>$$HandlePostProcessed
ENTRY_POINT: 05785c9c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


ulong Oculus_Interaction_DistanceReticles_InteractorReticle<object>__HandlePostProcessed
                (long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  
  uStack0000000000000068 = param_2[1];
  uStack0000000000000060 = *param_2;
  uStack0000000000000070 = param_2[2];
  iVar4 = FUN_05787710(param_1,&stack0x00000060,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb0));
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
LAB_05785e88:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar2 = *(uint *)(lVar7 + 0x18);
  iVar15 = 0;
  if (uVar2 != 0) {
    iVar15 = iVar4 / (int)uVar2;
  }
  uVar3 = iVar4 - iVar15 * uVar2;
  if (uVar2 <= uVar3) {
LAB_05785e48:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  uVar2 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
  if (-1 < (int)uVar2) {
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar7 == 0) goto LAB_05785e88;
    uVar8 = *(undefined8 *)(lVar7 + 0x18);
    iVar15 = 0;
    do {
      uVar13 = (ulong)uVar2;
      if ((uint)uVar8 <= uVar2) goto LAB_05785e48;
      lVar1 = lVar7 + 0x20 + uVar13 * 0x20;
      if (*(int *)(lVar7 + 0x20 + uVar13 * 0x20) == iVar4) {
        uVar8 = *(undefined8 *)(lVar1 + 0x18);
        uVar17 = *(undefined8 *)(lVar1 + 0x10);
        uVar16 = *(undefined8 *)(lVar1 + 8);
        uVar19 = param_2[1];
        uVar18 = *param_2;
        plVar14 = *(long **)(param_1 + 0x30);
        uVar9 = param_2[2];
        if (plVar14 == (long *)0x0) goto LAB_05785e88;
        lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_040b1acc(lVar6);
        }
        lVar10 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05785dc4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_040b1e00(plVar14,lVar6,0);
LAB_05785dc4:
        in_stack_00000040 = uVar18;
        in_stack_00000048 = uVar19;
        in_stack_00000050 = uVar9;
        uStack0000000000000060 = uVar16;
        uStack0000000000000068 = uVar17;
        uStack0000000000000070 = uVar8;
        uVar11 = (*(code *)*puVar5)(plVar14,&stack0x00000060,&stack0x00000040,puVar5[1]);
        if ((uVar11 & 1) != 0) {
          return uVar13;
        }
        uVar8 = *(undefined8 *)(lVar7 + 0x18);
      }
      if ((int)(uint)uVar8 <= iVar15) {
        thunk_FUN_040dedf8(PTR_DAT_0929cb88);
        uVar8 = thunk_FUN_040b4efc();
        uVar9 = thunk_FUN_040dedf8(PTR_DAT_092b9f08);
        FUN_07679464(uVar8,uVar9,0);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar8,param_3);
      }
      if ((uint)uVar8 <= uVar2) goto LAB_05785e48;
      uVar2 = *(uint *)(lVar1 + 4);
      iVar15 = iVar15 + 1;
    } while (-1 < (int)uVar2);
  }
  return 0xffffffff;
}


