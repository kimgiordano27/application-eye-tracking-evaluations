/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector4>$$get_SerializedType
ENTRY_POINT: 058fd494
PROGRAM: cac-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_MinimalBaseFormatter<Vector4>__get_SerializedType(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  do {
    if (param_1 <= (long)unaff_x23) {
      return;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) goto LAB_058fd4b8;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_058fd4bc:
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    if (unaff_x20 == 0) goto LAB_058fd4b8;
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    in_stack_00000068 = puVar1[1];
    in_stack_00000060 = *puVar1;
    in_stack_00000078 = puVar1[3];
    in_stack_00000070 = puVar1[2];
    in_stack_00000080 = puVar1[4];
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) goto LAB_058fd4b8;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_058fd4bc;
      if (unaff_x22 == 0) {
LAB_058fd4b8:
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      puVar1 = (undefined8 *)(lVar4 + unaff_x24);
      uVar7 = puVar1[1];
      uVar6 = *puVar1;
      uVar9 = puVar1[3];
      uVar8 = puVar1[2];
      uVar5 = puVar1[4];
      lVar4 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_058fd4b8;
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if (uVar2 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar2 * (long)unaff_w25;
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar4 + 0x28) = uVar7;
        *(undefined8 *)(lVar4 + 0x20) = uVar6;
        *(undefined8 *)(lVar4 + 0x38) = uVar9;
        *(undefined8 *)(lVar4 + 0x30) = uVar8;
        *(undefined8 *)(lVar4 + 0x40) = uVar5;
        thunk_FUN_03f86000(lVar4 + 0x28,0);
      }
      else {
        in_stack_00000060 = uVar6;
        in_stack_00000068 = uVar7;
        in_stack_00000070 = uVar8;
        in_stack_00000078 = uVar9;
        in_stack_00000080 = uVar5;
        FUN_058fcadc();
      }
    }
    param_1 = (long)*(int *)(unaff_x21 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x28;
  } while( true );
}


