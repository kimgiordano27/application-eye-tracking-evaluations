/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector3>$$Serialize
ENTRY_POINT: 0470e0f0
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


void Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Serialize
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 in_x9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  
  uVar8 = param_2._8_8_;
  uVar7 = param_2._0_8_;
  uVar6 = param_1._8_8_;
  uVar5 = param_1._0_8_;
code_r0x0470e0f0:
  uStack0000000000000060 = uVar5;
  uStack0000000000000068 = uVar6;
  uStack0000000000000070 = uVar7;
  uStack0000000000000078 = uVar8;
  uStack0000000000000080 = in_x9;
  FUN_0470d6fc();
LAB_0470e10c:
  do {
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x28;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
      return;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) goto LAB_0470e13c;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_0470e140;
    if (unaff_x20 == 0) goto LAB_0470e13c;
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    uStack0000000000000068 = puVar1[1];
    uStack0000000000000060 = *puVar1;
    uStack0000000000000078 = puVar1[3];
    uStack0000000000000070 = puVar1[2];
    uStack0000000000000080 = puVar1[4];
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,
                       *(undefined8 *)(unaff_x20 + 0x28));
  } while ((uVar3 & 1) == 0);
  lVar4 = *(long *)(unaff_x21 + 0x10);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_0470e140:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (unaff_x22 != 0) {
      puVar1 = (undefined8 *)(lVar4 + unaff_x24);
      uVar6 = puVar1[1];
      uVar5 = *puVar1;
      uVar8 = puVar1[3];
      uVar7 = puVar1[2];
      in_x9 = puVar1[4];
      lVar4 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar2 * (long)unaff_w25;
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar4 + 0x28) = uVar6;
          *(undefined8 *)(lVar4 + 0x20) = uVar5;
          *(undefined8 *)(lVar4 + 0x38) = uVar8;
          *(undefined8 *)(lVar4 + 0x30) = uVar7;
          *(undefined8 *)(lVar4 + 0x40) = in_x9;
          thunk_FUN_036b7ad0(lVar4 + 0x38,0);
          goto LAB_0470e10c;
        }
        goto code_r0x0470e0f0;
      }
    }
  }
LAB_0470e13c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


