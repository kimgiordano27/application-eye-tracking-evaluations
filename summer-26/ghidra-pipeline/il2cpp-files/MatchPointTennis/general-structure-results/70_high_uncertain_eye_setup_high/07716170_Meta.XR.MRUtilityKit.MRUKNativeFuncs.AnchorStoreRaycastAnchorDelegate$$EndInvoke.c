/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastAnchorDelegate$$EndInvoke
ENTRY_POINT: 07716170
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate__EndInvoke(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = thunk_FUN_0448520c();
  FUN_07730b98(uVar1,0);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar1;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x60),uVar1);
  *(undefined1 *)(unaff_x19 + 0x38) = 1;
  FUN_0952dd08();
  return;
}


