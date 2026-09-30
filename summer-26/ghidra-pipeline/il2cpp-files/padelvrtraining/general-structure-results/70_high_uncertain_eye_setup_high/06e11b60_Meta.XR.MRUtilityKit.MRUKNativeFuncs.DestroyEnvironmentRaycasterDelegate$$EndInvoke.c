/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.DestroyEnvironmentRaycasterDelegate$$EndInvoke
ENTRY_POINT: 06e11b60
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate__EndInvoke
               (ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000000 = param_3;
  uStack0000000000000010 = param_2;
  if ((param_1 & 1) == 0) {
    param_4 = FUN_03d8f26c();
  }
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(param_4 + 0xc0) + 0x10));
  return;
}


