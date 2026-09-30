/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$AsSpan
ENTRY_POINT: 039a7cf0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsSpan(void)

{
  int in_w8;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  
  if (in_w8 - unaff_w22 < unaff_w21) {
    Oculus_Interaction_SecondaryInteractorConnection__Start(0x17,0);
  }
  if (1 < unaff_w21) {
    FUN_030eb984(*(undefined8 *)(unaff_x19 + 0x10),unaff_w22,unaff_w21);
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


