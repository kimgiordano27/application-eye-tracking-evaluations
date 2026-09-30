/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomAllDelegate$$BeginInvoke
ENTRY_POINT: 05ae05d4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate__BeginInvoke(void)

{
  long unaff_x19;
  long unaff_x20;
  uint unaff_w23;
  uint unaff_w24;
  undefined8 uStack0000000000000000;
  undefined4 in_stack_00000008;
  
  uStack0000000000000000 = 0;
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  FUN_045dc0a8();
  *(undefined4 *)(unaff_x19 + 0x18) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000000;
  return unaff_w24 < unaff_w23;
}


