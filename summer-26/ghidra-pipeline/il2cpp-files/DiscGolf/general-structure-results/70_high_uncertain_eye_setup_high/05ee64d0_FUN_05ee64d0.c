/*
FUNCTION_NAME: FUN_05ee64d0
ENTRY_POINT: 05ee64d0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05ee64d0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_06dc3fa5 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0e2e0);
    FUN_02d965b8(PTR_DAT_06a0e2e8);
    FUN_02d965b8(PTR_DAT_06a0e2f0);
    FUN_02d965b8(PTR_DAT_06a0e2f8);
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_02d965b8(
                Method_Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBase<OvrGpuSkinnerJointsOnlyDrawCall>_RemoveBlock__
                );
    FUN_02d965b8(
                Method_Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBase<OvrGpuSkinnerJointsOnlyDrawCall>_UpdateDrawCallQuality__
                );
    FUN_02d965b8(
                Method_Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBase<OvrGpuSkinnerJointsOnlyDrawCall>_get_Height__
                );
    FUN_02d965b8(
                Method_Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBase<OvrGpuSkinnerJointsOnlyDrawCall>_get_Width__
                );
    FUN_02d965b8(
                Method_Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBase<OvrGpuSkinnerMorphTargetsOnlyDrawCall>__ctor__
                );
    FUN_02d965b8(
                Method_Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBase<OvrGpuSkinnerMorphTargetsOnlyDrawCall>_AddBlockDataForHandle__
                );
    DAT_06dc3fa5 = 1;
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  if (*(char *)(param_1 + 0x27) == '\0') {
    if (*(long *)(param_2 + 8) != 0) {
      FUN_04116bd8(&local_60,*(long *)(param_2 + 8),*(undefined8 *)PTR_DAT_06a0e2f8);
      puVar2 = PTR_DAT_06a0e2e8;
      local_70 = 0;
      puStack_68 = &local_60;
      while (uVar4 = FUN_0518cc90(&local_60,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
        uStack_88 = uStack_48;
        local_90 = local_50;
        uStack_78 = uStack_38;
        uStack_80 = uStack_40;
        FUN_05ee6164(param_1,&local_90);
      }
      FUN_0518cc8c(&local_60,*(undefined8 *)PTR_DAT_06a0e2e0);
      return;
    }
  }
  else {
    lVar3 = FUN_05e653e8(param_1,0);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x9c) != 0) {
        return;
      }
      lVar3 = FUN_05e653e8(param_1,0);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo;
        if (*(char *)(lVar3 + 0x30) != '\0') {
          puVar1 = (undefined8 *)
                   Method_Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBase<OvrGpuSkinnerJointsOnlyDrawCall>_get_Width__
          ;
        }
        uVar6 = *puVar1;
        lVar3 = FUN_05e653e8(param_1,0);
        if (lVar3 != 0) {
          puVar1 = (undefined8 *)
                   Method_Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBase<OvrGpuSkinnerJointsOnlyDrawCall>_RemoveBlock__
          ;
          if (*(char *)(lVar3 + 0x30) != '\0') {
            puVar1 = (undefined8 *)
                     Method_Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBase<OvrGpuSkinnerMorphTargetsOnlyDrawCall>_AddBlockDataForHandle__
            ;
          }
          uVar5 = *puVar1;
          lVar3 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb9d8,5);
          if (lVar3 != 0) {
            if (*(int *)(lVar3 + 0x18) != 0) {
              *(undefined8 *)(lVar3 + 0x20) =
                   *(undefined8 *)
                    Method_Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBase<OvrGpuSkinnerMorphTargetsOnlyDrawCall>__ctor__
              ;
              LeanTween__value((undefined8 *)(lVar3 + 0x20));
              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar3 + 0x28) = uVar6;
                LeanTween__value((undefined8 *)(lVar3 + 0x28),uVar6);
                if (2 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x30) =
                       *(undefined8 *)
                        Method_Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBase<OvrGpuSkinnerJointsOnlyDrawCall>_get_Height__
                  ;
                  LeanTween__value((undefined8 *)(lVar3 + 0x30));
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar3 + 0x38) = uVar5;
                    LeanTween__value((undefined8 *)(lVar3 + 0x38),uVar5);
                    if (4 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x40) =
                           *(undefined8 *)
                            Method_Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBase<OvrGpuSkinnerJointsOnlyDrawCall>_UpdateDrawCallQuality__
                      ;
                      LeanTween__value();
                      uVar6 = FUN_0536dde4(lVar3,0);
                      FUN_05e70210(uVar6,0);
                      return;
                    }
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


