/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$ToNativeArray
ENTRY_POINT: 01a44de4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Qpl_Annotation_Builder__ToNativeArray(undefined8 param_1)

{
  undefined8 uVar1;
  code *in_x10;
  undefined4 unaff_w20;
  long unaff_x22;
  long *plVar2;
  
  plVar2 = *(long **)(unaff_x22 + 0x108);
  (*in_x10)(param_1);
  if (*(int *)(*plVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar1 = thunk_FUN_00d363f4(unaff_w20,0);
  FUN_0169daac();
  return uVar1;
}


