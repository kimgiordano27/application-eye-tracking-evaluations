/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.DestroyEnvironmentRaycasterDelegate$$BeginInvoke
ENTRY_POINT: 06e11b40
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


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate__BeginInvoke
               (long param_1)

{
  ushort uVar1;
  long unaff_x20;
  
  uVar1 = *(ushort *)(param_1 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c();
    param_1 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(param_1 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_03d8f26c();
  }
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10));
  return;
}


