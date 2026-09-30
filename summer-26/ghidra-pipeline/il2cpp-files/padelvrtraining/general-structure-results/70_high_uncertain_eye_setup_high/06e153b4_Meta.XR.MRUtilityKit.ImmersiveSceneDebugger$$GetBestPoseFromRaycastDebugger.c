/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetBestPoseFromRaycastDebugger
ENTRY_POINT: 06e153b4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetBestPoseFromRaycastDebugger
          (long param_1,long *param_2)

{
  int iVar1;
  
  if (*(int *)((long)param_2 + 0xc) != *(int *)(param_1 + 0x1c)) {
    FUN_07199bdc(0);
    param_1 = *param_2;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  param_2[2] = 0;
  param_2[3] = 0;
  *(int *)(param_2 + 1) = iVar1 + 1;
  return 0;
}


