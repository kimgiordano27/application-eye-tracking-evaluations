/*
FUNCTION_NAME: TestSceneUsage$$Update
ENTRY_POINT: 0313fb0c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void TestSceneUsage__Update(undefined8 param_1,int param_2)

{
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
  if (param_2 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (unaff_w20 < 0) {
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(unaff_x19 + 0x18) - unaff_w21 < unaff_w20) {
    FUN_033b2d60(0x17,0);
  }
  if (1 < unaff_w20) {
    FUN_02021b14(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,unaff_w20,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x188));
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


