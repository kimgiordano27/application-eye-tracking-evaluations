/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<RayCastDebugger>b__85_1
ENTRY_POINT: 04a796e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<RayCastDebugger>b__85_1(long param_1)

{
  int in_w9;
  undefined4 in_w10;
  undefined4 in_w11;
  int in_w12;
  undefined4 unaff_w25;
  long unaff_x27;
  undefined4 *unaff_x29;
  
  *unaff_x29 = in_w10;
  *(int *)(unaff_x27 + 0x20) = in_w9 + -1;
  *(undefined4 *)(param_1 + 4) = in_w11;
  *(int *)(unaff_x27 + 0x38) = in_w12 + 1;
  if (in_w9 + -1 == 0) {
    unaff_w25 = 0xffffffff;
    *(undefined4 *)(unaff_x27 + 0x24) = 0;
  }
  *(undefined4 *)(unaff_x27 + 0x28) = unaff_w25;
  return 1;
}


