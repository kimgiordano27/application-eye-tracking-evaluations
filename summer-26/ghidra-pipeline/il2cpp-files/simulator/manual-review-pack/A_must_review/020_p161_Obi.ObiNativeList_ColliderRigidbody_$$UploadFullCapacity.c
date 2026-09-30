/*
FUNCTION_NAME: Obi.ObiNativeList<ColliderRigidbody>$$UploadFullCapacity
ENTRY_POINT: 024547e4
PROGRAM: simulator-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


int Obi_ObiNativeList<ColliderRigidbody>__UploadFullCapacity(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar5;
  uint uVar6;
  ulong unaff_x22;
  int unaff_w23;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  do {
    if (param_1 == 0) {
LAB_02454878:
                    /* WARNING: Subroutine does not return */
      FUN_018c4afc();
    }
    uVar6 = (uint)unaff_x22;
    if (*(uint *)(param_1 + 0x18) <= uVar6) {
LAB_0245487c:
                    /* WARNING: Subroutine does not return */
      FUN_018c4b04();
    }
    lVar4 = param_1 + (long)(int)uVar6 * (long)unaff_w23;
    uVar10 = *(undefined8 *)(lVar4 + 0x28);
    uVar9 = *(undefined8 *)(lVar4 + 0x20);
    uVar8 = *(undefined8 *)(lVar4 + 0x38);
    uVar7 = *(undefined8 *)(lVar4 + 0x30);
    if (*(uint *)(param_1 + 0x18) <= unaff_w21) goto LAB_0245487c;
    param_1 = param_1 + (long)(int)unaff_w21 * (long)unaff_w23;
    unaff_w21 = unaff_w21 + 1;
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(param_1 + 0x28) = uVar10;
    *(undefined8 *)(param_1 + 0x20) = uVar9;
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
    unaff_x22 = (ulong)(uVar6 + 1);
    do {
      iVar5 = (int)unaff_x22;
      if ((int)uVar3 <= iVar5) {
        FUN_0290d6ac(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,(int)uVar3 - unaff_w21,0);
        iVar5 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar5 - unaff_w21;
      }
      lVar4 = (long)iVar5 * (long)unaff_w23 + 0x20;
      unaff_x22 = (ulong)iVar5;
      do {
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 == 0) goto LAB_02454878;
        if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x22) goto LAB_0245487c;
        puVar1 = (undefined8 *)(lVar2 + lVar4);
        if (unaff_x20 == 0) goto LAB_02454878;
        in_stack_00000060 = *puVar1;
        in_stack_00000068 = puVar1[1];
        in_stack_00000070 = puVar1[2];
        in_stack_00000078 = puVar1[3];
        in_stack_00000080 = puVar1[4];
        uVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar3 & 1) == 0) {
          uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        uVar3 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x22 = unaff_x22 + 1;
        lVar4 = lVar4 + 0x28;
      } while ((long)unaff_x22 < (long)uVar3);
    } while ((int)uVar3 <= (int)unaff_x22);
    param_1 = *(long *)(unaff_x19 + 0x10);
  } while( true );
}


