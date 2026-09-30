/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$set_MaskBias
ENTRY_POINT: 0313d2f4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__set_MaskBias
               (long param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (param_3 < 0) {
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_033b2d60(0x17,0);
  }
  if (0 < param_3) {
    iVar1 = *(int *)(param_1 + 0x18) - param_3;
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 - param_2 != 0 && param_2 <= iVar1) {
      FUN_033b4f38(*(undefined8 *)(param_1 + 0x10),param_3 + param_2,*(undefined8 *)(param_1 + 0x10)
                   ,param_2,iVar1 - param_2,0);
      iVar1 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    FUN_033b4c84(*(undefined8 *)(param_1 + 0x10),iVar1,param_3,0);
    return;
  }
  return;
}


