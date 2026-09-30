/*
FUNCTION_NAME: FUN_07a5d034
ENTRY_POINT: 07a5d034
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_07a5d034(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  if ((DAT_098954f0 & 1) == 0) {
    FUN_04077588(PTR_DAT_092ecef8);
    DAT_098954f0 = 1;
  }
  puVar2 = PTR_DAT_092ecef8;
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uVar6 = 1L << (param_2 & 0x3f);
  local_38 = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_7c = 0;
  if ((*(ulong *)(param_1 + 0x40) & uVar6) == 0) {
    return;
  }
  lVar3 = *(long *)PTR_DAT_092ecef8;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
LAB_07a5d1dc:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar5 = (uint)param_2;
  if (uVar5 < *(uint *)(lVar3 + 0x18)) {
    iVar1 = *(int *)(lVar3 + (long)(int)uVar5 * 4 + 0x20);
    if (iVar1 == -1) {
      local_90 = *(undefined8 *)(param_1 + 0x20);
      uStack_88 = (undefined4)*(undefined8 *)(param_1 + 0x28);
      *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) & (uVar6 ^ 0xffffffffffffffff);
      uStack_7c = (undefined4)*(undefined8 *)(param_1 + 0x34);
      local_78 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
      uStack_84 = (undefined4)*(undefined8 *)(param_1 + 0x2c);
      local_80 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
    }
    else {
      FUN_07a5d034(param_1,iVar1);
      *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) & (uVar6 ^ 0xffffffffffffffff);
      OVRPlugin_LayerDesc__ToString(&local_90,param_1,iVar1);
    }
    lVar3 = *(long *)(param_1 + 0x10);
    uStack_48 = uStack_88;
    local_50 = local_90;
    uStack_3c = uStack_7c;
    local_38 = local_78;
    uStack_44 = uStack_84;
    local_40 = local_80;
    if (lVar3 == 0) goto LAB_07a5d1dc;
    if (uVar5 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar5 * 0x1c;
      local_60 = *(undefined8 *)(lVar3 + 0x30);
      local_58 = *(undefined4 *)(lVar3 + 0x38);
      fVar7 = *(float *)(param_1 + 0x3c);
      uStack_68._0_4_ = (float)*(undefined8 *)(lVar3 + 0x28);
      lVar4 = *(long *)(param_1 + 0x18);
      local_70 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20) * fVar7,
                          (float)*(undefined8 *)(lVar3 + 0x20) * fVar7);
      uStack_68 = CONCAT44((int)((ulong)*(undefined8 *)(lVar3 + 0x28) >> 0x20),
                           (float)uStack_68 * fVar7);
      if (lVar4 == 0) goto LAB_07a5d1dc;
      if (uVar5 < *(uint *)(lVar4 + 0x18)) {
        FUN_079cc5b4(&local_50,&local_70,lVar4 + (long)(int)uVar5 * 0x1c + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


