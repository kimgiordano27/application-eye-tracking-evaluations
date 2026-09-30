/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector3>$$Deserialize
ENTRY_POINT: 0470e000
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Deserialize(void)

{
  undefined8 *puVar1;
  uint uVar2;
  char in_NG;
  char in_OV;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  if (in_NG == in_OV) {
    uVar6 = 0;
    lVar7 = 0x20;
    do {
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) goto LAB_0470e13c;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_0470e140:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (unaff_x20 == 0) goto LAB_0470e13c;
      puVar1 = (undefined8 *)(lVar4 + lVar7);
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
        if (lVar4 == 0) goto LAB_0470e13c;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_0470e140;
        if (unaff_x22 == 0) {
LAB_0470e13c:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        puVar1 = (undefined8 *)(lVar4 + lVar7);
        uVar9 = puVar1[1];
        uVar8 = *puVar1;
        uVar11 = puVar1[3];
        uVar10 = puVar1[2];
        uVar5 = puVar1[4];
        lVar4 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_0470e13c;
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar2 * 0x28;
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar4 + 0x28) = uVar9;
          *(undefined8 *)(lVar4 + 0x20) = uVar8;
          *(undefined8 *)(lVar4 + 0x38) = uVar11;
          *(undefined8 *)(lVar4 + 0x30) = uVar10;
                    /* try { // try from 0470e0d8 to 0480e0ff has its CatchHandler @ 0470e290 */
          *(undefined8 *)(lVar4 + 0x40) = uVar5;
          thunk_FUN_036b7ad0(lVar4 + 0x38,0);
        }
        else {
          in_stack_00000060 = uVar8;
          in_stack_00000068 = uVar9;
          in_stack_00000070 = uVar10;
          in_stack_00000078 = uVar11;
          in_stack_00000080 = uVar5;
          FUN_0470d6fc();
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x28;
    } while ((long)uVar6 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return;
}


