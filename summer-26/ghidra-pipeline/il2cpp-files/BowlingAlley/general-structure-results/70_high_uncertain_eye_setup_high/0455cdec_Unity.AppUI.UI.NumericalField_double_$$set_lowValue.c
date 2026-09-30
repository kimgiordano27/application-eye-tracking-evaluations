/*
FUNCTION_NAME: Unity.AppUI.UI.NumericalField<double>$$set_lowValue
ENTRY_POINT: 0455cdec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] Unity_AppUI_UI_NumericalField<double>__set_lowValue(void)

{
  long unaff_x19;
  undefined1 in_stack_00000000 [16];
  
  FUN_0455cc30();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray();
  return in_stack_00000000;
}


