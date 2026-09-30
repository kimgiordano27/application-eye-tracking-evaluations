/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 03cb6864
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Dispose(void)

{
  long lVar1;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_02f6670c();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar1 + 0xb8);
  return;
}


