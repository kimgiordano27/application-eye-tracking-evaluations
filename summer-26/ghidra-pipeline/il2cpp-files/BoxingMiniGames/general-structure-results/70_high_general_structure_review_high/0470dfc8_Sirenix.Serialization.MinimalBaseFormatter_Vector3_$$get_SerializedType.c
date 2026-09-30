/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector3>$$get_SerializedType
ENTRY_POINT: 0470dfc8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long Sirenix_Serialization_MinimalBaseFormatter<Vector3>__get_SerializedType(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  if ((*(ushort *)(**(long **)(param_1 + 0xc0) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  lVar3 = thunk_FUN_0367fe20();
  FUN_0470cdd4(lVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    uVar8 = 0;
    lVar9 = 0x20;
    do {
      lVar5 = *(long *)(unaff_x21 + 0x10);
      if (lVar5 == 0) goto LAB_0470e13c;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_0470e140:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (unaff_x20 == 0) goto LAB_0470e13c;
      puVar1 = (undefined8 *)(lVar5 + lVar9);
      in_stack_00000068 = puVar1[1];
      in_stack_00000060 = *puVar1;
      in_stack_00000078 = puVar1[3];
      in_stack_00000070 = puVar1[2];
      in_stack_00000080 = puVar1[4];
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(unaff_x21 + 0x10);
        if (lVar5 == 0) goto LAB_0470e13c;
        if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_0470e140;
        if (lVar3 == 0) {
LAB_0470e13c:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        puVar1 = (undefined8 *)(lVar5 + lVar9);
        uVar11 = puVar1[1];
        uVar10 = *puVar1;
        uVar13 = puVar1[3];
        uVar12 = puVar1[2];
        uVar6 = puVar1[4];
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_0470e13c;
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar2 * 0x28;
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar7 + 0x28) = uVar11;
          *(undefined8 *)(lVar7 + 0x20) = uVar10;
          *(undefined8 *)(lVar7 + 0x38) = uVar13;
          *(undefined8 *)(lVar7 + 0x30) = uVar12;
          *(undefined8 *)(lVar7 + 0x40) = uVar6;
          thunk_FUN_036b7ad0(lVar7 + 0x38,0);
        }
        else {
          in_stack_00000060 = uVar10;
          in_stack_00000068 = uVar11;
          in_stack_00000070 = uVar12;
          in_stack_00000078 = uVar13;
          in_stack_00000080 = uVar6;
          FUN_0470d6fc(lVar3,&stack0x00000060,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x28;
    } while ((long)uVar8 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return lVar3;
}


