/*
FUNCTION_NAME: FUN_058e32e0
ENTRY_POINT: 058e32e0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_058e32e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  
  if ((DAT_06b80b6f & 1) == 0) {
    FUN_02d6084c(OVRPlugin_SkeletonType_TypeInfo);
    FUN_02d6084c(OVRPlugin_SpaceQueryResult_TypeInfo);
    FUN_02d6084c(OVRPlugin_SystemHeadset_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(OVRPlugin_TextureRectMatrixf_TypeInfo);
    DAT_06b80b6f = 1;
  }
  puVar2 = OVRPlugin_TextureRectMatrixf_TypeInfo;
  puVar1 = OVRPlugin_SpaceQueryResult_TypeInfo;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  plVar6 = (long *)(param_1 + 0x20);
  if ((*plVar6 != 0) &&
     (piVar4 = *(int **)(*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo + 0xb8), 0 < *piVar4)) {
    lVar8 = *(long *)(*plVar6 + 0x78);
    iVar7 = 0;
    do {
      FUN_037a60a0(&local_70,piVar4,iVar7,*(undefined8 *)puVar1);
      if (local_58 == lVar8) {
        FUN_037a60a0(&local_70,*(undefined8 *)(*(long *)puVar2 + 0xb8),iVar7,*(undefined8 *)puVar1);
        local_a0 = local_50;
        uStack_b8 = uStack_68;
        local_c0 = local_70;
        lStack_a8 = local_58;
        uStack_b0 = uStack_60;
        FUN_058e34f8(&local_70,&local_c0,param_1);
        uVar3 = local_50;
        uStack_88 = uStack_68;
        local_90 = local_70;
        lStack_78 = local_58;
        uStack_80 = uStack_60;
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar5 = UnityEngine_Font__add_textureRebuilt(uVar3,0,0);
        if ((uVar5 & 1) == 0) {
          uStack_68 = uStack_88;
          local_70 = local_90;
          local_58 = lStack_78;
          uStack_60 = uStack_80;
          FUN_037a614c(*(undefined8 *)(*(long *)puVar2 + 0xb8),iVar7,&local_70,
                       *(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo);
          uVar5 = FUN_0585c0d0(*plVar6,0);
          if ((uVar5 & 1) == 0) {
            FUN_058e31a8(param_1);
          }
        }
        else {
          FUN_037a60a0(&local_70,*(undefined8 *)(*(long *)puVar2 + 0xb8),iVar7,*(undefined8 *)puVar1
                      );
          uStack_b8 = uStack_68;
          local_c0 = local_70;
          lStack_a8 = local_58;
          uStack_b0 = uStack_60;
          local_a0 = local_50;
          FUN_058e3094(&local_c0);
          FUN_037a70ec(*(undefined8 *)(*(long *)puVar2 + 0xb8),iVar7,
                       *(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
        }
        *(undefined8 *)(param_1 + 0x20) = 0;
        thunk_FUN_02dd37b4(plVar6,0);
        *(undefined8 *)(param_1 + 0x30) = 0;
        return;
      }
      iVar7 = iVar7 + 1;
      piVar4 = *(int **)(*(long *)puVar2 + 0xb8);
    } while (iVar7 < *piVar4);
  }
  return;
}


