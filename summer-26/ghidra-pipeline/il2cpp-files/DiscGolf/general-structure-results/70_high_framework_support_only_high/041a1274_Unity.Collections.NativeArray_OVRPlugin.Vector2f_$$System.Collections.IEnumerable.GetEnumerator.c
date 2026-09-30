/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 041a1274
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  int unaff_w22;
  int unaff_w23;
  long unaff_x25;
  
  FUN_0550980c();
  if (unaff_w23 < 0) {
    FUN_05509450(0x10,4,0);
  }
  if (*(int *)(unaff_x25 + 0x18) - unaff_w22 < unaff_w23) {
    FUN_05508fa4(0x17,0);
  }
  FUN_03755780(*(undefined8 *)(unaff_x25 + 0x10),unaff_w22,unaff_w23);
  return;
}


