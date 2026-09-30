/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector2>$$<.ctor>b__0
ENTRY_POINT: 069c3740
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector2>__<_ctor>b__0
               (long param_1,int param_2)

{
  int unaff_w22;
  int unaff_w23;
  
  if (param_2 < 0) {
    FUN_08d9d780(0);
  }
  if (unaff_w23 < 0) {
    FUN_08d9d3c4(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - unaff_w22 < unaff_w23) {
    FUN_08d9cf18(0x17,0);
  }
  FUN_055f1970(*(undefined8 *)(param_1 + 0x10),unaff_w22,unaff_w23);
  return;
}


