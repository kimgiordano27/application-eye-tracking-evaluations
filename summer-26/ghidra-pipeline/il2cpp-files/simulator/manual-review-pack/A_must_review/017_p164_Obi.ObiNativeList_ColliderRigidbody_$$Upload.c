/*
FUNCTION_NAME: Obi.ObiNativeList<ColliderRigidbody>$$Upload
ENTRY_POINT: 024547c8
PROGRAM: simulator-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


int Obi_ObiNativeList<ColliderRigidbody>__Upload(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
code_r0x024547c8:
  if (unaff_x22 < (long)param_1) goto LAB_02454768;
  do {
    iVar3 = (int)param_1;
    uVar6 = (uint)unaff_x22;
    if ((int)uVar6 < iVar3) {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 == 0) goto LAB_02454878;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_0245487c;
      lVar5 = lVar4 + (long)(int)uVar6 * (long)unaff_w23;
      uVar10 = *(undefined8 *)(lVar5 + 0x28);
      uVar9 = *(undefined8 *)(lVar5 + 0x20);
      uVar8 = *(undefined8 *)(lVar5 + 0x38);
      uVar7 = *(undefined8 *)(lVar5 + 0x30);
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_0245487c;
      lVar4 = lVar4 + (long)(int)unaff_w21 * (long)unaff_w23;
      unaff_w21 = unaff_w21 + 1;
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(lVar5 + 0x40);
      *(undefined8 *)(lVar4 + 0x28) = uVar10;
      *(undefined8 *)(lVar4 + 0x20) = uVar9;
      *(undefined8 *)(lVar4 + 0x38) = uVar8;
      *(undefined8 *)(lVar4 + 0x30) = uVar7;
      iVar3 = *(int *)(unaff_x19 + 0x18);
      uVar6 = uVar6 + 1;
    }
    if (iVar3 <= (int)uVar6) {
      FUN_0290d6ac(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar3 - unaff_w21,0);
      iVar3 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = unaff_w21;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar3 - unaff_w21;
    }
    unaff_x24 = (long)(int)uVar6 * (long)unaff_w23 + 0x20;
    unaff_x22 = (long)(int)uVar6;
LAB_02454768:
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
LAB_02454878:
                    /* WARNING: Subroutine does not return */
      FUN_018c4afc();
    }
    if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x22) {
LAB_0245487c:
                    /* WARNING: Subroutine does not return */
      FUN_018c4b04();
    }
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    if (unaff_x20 == 0) goto LAB_02454878;
    in_stack_00000060 = *puVar1;
    in_stack_00000068 = puVar1[1];
    in_stack_00000070 = puVar1[2];
    in_stack_00000078 = puVar1[3];
    in_stack_00000080 = puVar1[4];
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) break;
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
  } while( true );
  param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
  unaff_x22 = unaff_x22 + 1;
  unaff_x24 = unaff_x24 + 0x28;
  goto code_r0x024547c8;
}


