/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsJsonPrinter$$PrettyJson
ENTRY_POINT: 06777630
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsJsonPrinter__PrettyJson(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 local_60;
  float local_58;
  
  if ((DAT_073a157c & 1) == 0) {
    FUN_02fe925c(Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>_TypeInfo)
    ;
    DAT_073a157c = 1;
  }
  puVar4 = Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>_TypeInfo;
  local_60 = *(undefined8 *)(param_1 + 0x18);
  local_58 = *(float *)(param_1 + 0x20);
  if ((float)local_60 == 0.0) {
    local_60._4_4_ = (float)((ulong)local_60 >> 0x20);
    bVar8 = false;
    bVar5 = local_60._4_4_ == 0.0;
    if ((bVar5) && (local_58 == 0.0)) {
      FUN_06776e4c(param_1,&local_60);
      bVar8 = true;
      *(float *)(param_1 + 0x20) = local_58;
      *(undefined8 *)(param_1 + 0x18) = local_60;
    }
  }
  else {
    bVar8 = false;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  iVar6 = FUN_06774394(&local_60);
  lVar7 = param_1 + 0x24;
  FUN_06774228(0,lVar7,iVar6);
  iVar1 = (iVar6 + 1) % 3;
  FUN_06774228(*(undefined4 *)(param_1 + 0x8c),lVar7,iVar1);
  iVar2 = (iVar6 + 2) % 3;
  FUN_06774228(*(undefined4 *)(param_1 + 0x90),lVar7,iVar2);
  lVar7 = param_1 + 0x30;
  FUN_06774228(0,lVar7,iVar6);
  fVar10 = (float)FUN_067741c4(&local_60,iVar6);
  fVar11 = -*(float *)(param_1 + 0x90);
  if (fVar10 <= 0.0) {
    fVar11 = *(float *)(param_1 + 0x90);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_06774228(fVar11,lVar7,iVar1);
  fVar10 = (float)FUN_067741c4(&local_60,iVar6);
  fVar11 = *(float *)(param_1 + 0x8c);
  if (fVar10 <= 0.0) {
    fVar11 = -*(float *)(param_1 + 0x8c);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_06774228(fVar11,lVar7,iVar2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar3 = lVar9;
    while (lVar3 != 0) {
      lVar9 = *(long *)(lVar9 + 0x18);
      if (lVar9 == *(long *)(lVar7 + 0x10)) {
        if (bVar8) {
          FUN_06777534(param_1);
          lVar7 = *(long *)(param_1 + 0x10);
          if (lVar7 == 0) break;
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          lVar9 = *(long *)(lVar7 + 0x18);
          if (lVar9 == lVar7) {
            return;
          }
          bVar8 = true;
          while (lVar9 != 0) {
            fVar11 = *(float *)(lVar9 + 0x34);
            if (bVar8) {
              *(float *)(param_1 + 0x44) = fVar11;
              *(float *)(param_1 + 0x3c) = fVar11;
              uVar12 = *(undefined4 *)(lVar9 + 0x38);
              *(undefined4 *)(param_1 + 0x48) = uVar12;
              *(undefined4 *)(param_1 + 0x40) = uVar12;
            }
            else {
              if (fVar11 < *(float *)(param_1 + 0x3c)) {
                *(float *)(param_1 + 0x3c) = fVar11;
              }
              if (*(float *)(param_1 + 0x44) < fVar11) {
                *(float *)(param_1 + 0x44) = fVar11;
              }
              fVar11 = *(float *)(lVar9 + 0x38);
              if (fVar11 < *(float *)(param_1 + 0x40)) {
                *(float *)(param_1 + 0x40) = fVar11;
              }
              if (*(float *)(param_1 + 0x48) < fVar11) {
                *(float *)(param_1 + 0x48) = fVar11;
              }
            }
            lVar9 = *(long *)(lVar9 + 0x18);
            bVar8 = false;
            if (lVar9 == lVar7) {
              return;
            }
          }
        }
        break;
      }
      if (lVar9 == 0) break;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar7 = *(long *)(param_1 + 0x10);
      }
      *(float *)(lVar9 + 0x34) =
           *(float *)(lVar9 + 0x28) * *(float *)(param_1 + 0x24) +
           *(float *)(lVar9 + 0x2c) * *(float *)(param_1 + 0x28) +
           *(float *)(lVar9 + 0x30) * *(float *)(param_1 + 0x2c);
      *(float *)(lVar9 + 0x38) =
           *(float *)(lVar9 + 0x28) * *(float *)(param_1 + 0x30) +
           *(float *)(lVar9 + 0x2c) * *(float *)(param_1 + 0x34) +
           *(float *)(lVar9 + 0x30) * *(float *)(param_1 + 0x38);
      lVar3 = lVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


