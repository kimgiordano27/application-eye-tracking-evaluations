/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$GetPoseBasedOnAnchorVolume
ENTRY_POINT: 06e0312c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__GetPoseBasedOnAnchorVolume
          (long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
LAB_06e031cc:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(int *)((long)param_1 + 0xc) == *(int *)(lVar2 + 0x1c)) {
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + (long)(int)uVar1 * 0x28;
          lVar6 = *(long *)(lVar2 + 0x28);
          lVar5 = *(long *)(lVar2 + 0x20);
          lVar4 = *(long *)(lVar2 + 0x38);
          lVar3 = *(long *)(lVar2 + 0x30);
          param_1[6] = *(long *)(lVar2 + 0x40);
          param_1[3] = lVar6;
          param_1[2] = lVar5;
          param_1[5] = lVar4;
          param_1[4] = lVar3;
          thunk_FUN_03d1023c(param_1 + 5,0);
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      goto LAB_06e031cc;
    }
  }
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_06e031d4(param_1);
  return 0;
}


