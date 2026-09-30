/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$SerializeQuaternion
ENTRY_POINT: 03447fc0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long Photon_Realtime_CustomTypesUnity__SerializeQuaternion(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x22;
  long *unaff_x23;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined8 in_stack_00000008;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar3 = FUN_034827c8(unaff_w19,uVar7,(long)&stack0x00000008 + 4,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232560,0);
  }
  else {
    lVar4 = *unaff_x22;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar4 = *unaff_x22;
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar5 == 0) {
LAB_03448194:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(int *)(lVar5 + 0x14) < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar5 + 0x18);
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (*(int *)(*(long *)UnityEngine_UIElements_InlineStyleAccess_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_031fec90(uVar7,uVar8,0,unaff_w20,0);
    lVar4 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232560,in_stack_00000008._4_4_);
    if (0 < in_stack_00000008._4_4_) {
      uVar6 = 0;
      uVar3 = 0;
      pfVar9 = (float *)(lVar4 + 0x28);
      do {
        lVar5 = *unaff_x22;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar5 = *unaff_x22;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
        if (lVar5 == 0) goto LAB_03448194;
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (((uVar2 <= uVar6) || (uVar2 <= uVar6 + 1)) || (uVar2 <= uVar6 + 2)) {
LAB_03448190:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (lVar4 == 0) goto LAB_03448194;
        if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_03448190;
        lVar1 = (long)(int)uVar6;
        fVar10 = *(float *)(lVar5 + (long)(int)(uVar6 + 2) * 4 + 0x20);
        fVar11 = *(float *)(lVar5 + (long)(int)(uVar6 + 1) * 4 + 0x20);
        uVar3 = uVar3 + 1;
        uVar6 = uVar6 + 3;
        pfVar9[-2] = *(float *)(lVar5 + lVar1 * 4 + 0x20);
        pfVar9[-1] = fVar11;
        *pfVar9 = -fVar10;
        pfVar9 = pfVar9 + 3;
      } while ((long)uVar3 < (long)in_stack_00000008._4_4_);
    }
  }
  return lVar4;
}


