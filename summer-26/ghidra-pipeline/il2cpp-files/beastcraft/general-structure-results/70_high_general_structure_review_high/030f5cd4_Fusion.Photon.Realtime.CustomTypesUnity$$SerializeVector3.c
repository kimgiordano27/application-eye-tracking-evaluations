/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$SerializeVector3
ENTRY_POINT: 030f5cd4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


long Fusion_Photon_Realtime_CustomTypesUnity__SerializeVector3(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 in_ZR;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long in_x9;
  long lVar10;
  long lVar11;
  uint unaff_w19;
  uint uVar12;
  uint unaff_w20;
  ulong uVar13;
  uint unaff_w21;
  uint unaff_w22;
  uint unaff_w23;
  ulong uVar14;
  uint unaff_w24;
  uint unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  uint unaff_w29;
  long in_stack_00000000;
  ulong in_stack_00000008;
  long *in_stack_00000018;
  
  while (!(bool)in_ZR) {
    uVar3 = unaff_w22 << 2;
    unaff_w25 = unaff_w24 ^ unaff_w25;
    lVar8 = unaff_x26 + 3;
    *(uint *)(in_x9 + 0x2c) = unaff_w25;
    if (8 < (int)param_1 - 2U) {
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar6 = FUN_030f5550(unaff_w25 >> 8 | unaff_w25 << 0x18);
      lVar8 = *unaff_x27;
      if (lVar8 == 0) goto LAB_030f56f8;
      if (0xc < *(uint *)(lVar8 + 0x18)) {
        lVar10 = *(long *)(lVar8 + 0x80);
        if (lVar10 == 0) goto LAB_030f56f8;
        uVar2 = *(uint *)(lVar10 + 0x18);
        if (uVar2 != 0) {
          uVar6 = uVar3 ^ unaff_w29 ^ uVar6;
          *(uint *)(lVar10 + 0x20) = uVar6;
          if ((uVar2 != 1) && (*(uint *)(lVar10 + 0x24) = uVar6 ^ unaff_w23, 2 < uVar2)) {
            *(uint *)(lVar10 + 0x28) = uVar6 ^ unaff_w19;
            if (uVar2 != 3) {
              *(uint *)(lVar10 + 0x2c) = uVar6 ^ unaff_w19 ^ unaff_w24;
              puVar4 = PTR_DAT_06a37260;
              if ((in_stack_00000008 & 0x100000000) != 0) {
                return lVar8;
              }
              if (*(int *)(in_stack_00000000 + 0x18) < 2) {
                return lVar8;
              }
              uVar13 = 1;
              goto LAB_030f6148;
            }
          }
        }
      }
      break;
    }
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar6 = FUN_030f5550(unaff_w25 >> 8 | unaff_w25 << 0x18);
    lVar10 = *unaff_x27;
    if (lVar10 == 0) goto LAB_030f56f8;
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (uVar2 <= (int)unaff_x26 + 6U) break;
    lVar10 = lVar10 + lVar8 * 8;
    lVar11 = *(long *)(lVar10 + 0x38);
    if (lVar11 == 0) goto LAB_030f56f8;
    uVar12 = *(uint *)(lVar11 + 0x18);
    if (uVar12 == 0) break;
    uVar6 = unaff_w29 ^ uVar3 ^ uVar6;
    *(uint *)(lVar11 + 0x20) = uVar6;
    if (uVar12 == 1) break;
    *(uint *)(lVar11 + 0x24) = uVar6 ^ unaff_w23;
    if (uVar12 < 3) break;
    unaff_w19 = uVar6 ^ unaff_w23 ^ unaff_w20;
    *(uint *)(lVar11 + 0x28) = unaff_w19;
    if (uVar12 == 3) break;
    uVar12 = (int)unaff_x26 + 7;
    *(uint *)(lVar11 + 0x2c) = unaff_w19 ^ unaff_w24;
    if (uVar2 <= uVar12) break;
    lVar10 = *(long *)(lVar10 + 0x40);
    if (lVar10 == 0) goto LAB_030f56f8;
    if (*(int *)(lVar10 + 0x18) == 0) break;
    uVar2 = unaff_w19 ^ unaff_w24 ^ unaff_w21;
    *(uint *)(lVar10 + 0x20) = uVar2;
    if (*(int *)(lVar10 + 0x18) == 1) break;
    uVar5 = uVar2 ^ unaff_w25;
    *(uint *)(lVar10 + 0x24) = uVar5;
    uVar5 = FUN_030f5550(uVar5 >> 8 | uVar5 << 0x18);
    lVar10 = *in_stack_00000018;
    if (lVar10 == 0) goto LAB_030f56f8;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 <= uVar12) break;
    lVar10 = lVar10 + lVar8 * 8;
    lVar11 = *(long *)(lVar10 + 0x40);
    if (lVar11 == 0) goto LAB_030f56f8;
    if (*(uint *)(lVar11 + 0x18) < 3) break;
    uVar5 = uVar5 ^ unaff_w22 << 3;
    unaff_w29 = uVar5 ^ uVar6;
    *(uint *)(lVar11 + 0x28) = unaff_w29;
    if (*(uint *)(lVar11 + 0x18) == 3) break;
    param_1 = unaff_x26 + 8;
    unaff_w23 = uVar5 ^ unaff_w23;
    *(uint *)(lVar11 + 0x2c) = unaff_w23;
    if (uVar1 <= (uint)param_1) break;
    in_x9 = *(long *)(lVar10 + 0x48);
    if (in_x9 == 0) goto LAB_030f56f8;
    uVar6 = *(uint *)(in_x9 + 0x18);
    if (uVar6 == 0) break;
    unaff_w20 = unaff_w23 ^ unaff_w19;
    *(uint *)(in_x9 + 0x20) = unaff_w20;
    if (uVar6 == 1) break;
    unaff_w24 = unaff_w23 ^ unaff_w24;
    *(uint *)(in_x9 + 0x24) = unaff_w24;
    if (uVar6 < 3) break;
    unaff_w21 = unaff_w24 ^ uVar2;
    *(uint *)(in_x9 + 0x28) = unaff_w21;
    unaff_x26 = lVar8;
    unaff_x27 = in_stack_00000018;
    unaff_w22 = uVar3;
    in_ZR = uVar6 == 3;
  }
LAB_030f61ec:
                    /* WARNING: Subroutine does not return */
  FUN_02e3cccc();
LAB_030f6148:
  lVar8 = *unaff_x27;
  if (lVar8 == 0) {
LAB_030f56f8:
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_030f61ec;
  lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
  if (lVar8 == 0) goto LAB_030f56f8;
  uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
  uVar14 = 0;
  do {
    if (uVar9 <= uVar14) goto LAB_030f61ec;
    uVar7 = *(undefined4 *)(lVar8 + 0x20 + uVar14 * 4);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar7 = FUN_030f54b8(uVar7);
    uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
    if (uVar9 <= uVar14) goto LAB_030f61ec;
    *(undefined4 *)(lVar8 + 0x20 + uVar14 * 4) = uVar7;
    uVar14 = uVar14 + 1;
  } while (uVar14 != 4);
  uVar13 = uVar13 + 1;
  if (*(int *)(in_stack_00000000 + 0x18) <= (int)uVar13) {
    return *unaff_x27;
  }
  goto LAB_030f6148;
}


