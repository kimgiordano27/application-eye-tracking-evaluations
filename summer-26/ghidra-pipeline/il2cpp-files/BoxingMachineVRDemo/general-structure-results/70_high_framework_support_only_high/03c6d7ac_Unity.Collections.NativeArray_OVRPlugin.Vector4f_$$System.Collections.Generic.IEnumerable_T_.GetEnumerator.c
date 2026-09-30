/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03c6d7ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
          (void)

{
  long lVar1;
  int in_w8;
  long unaff_x19;
  
  if (in_w8 == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  return **(undefined8 **)(lVar1 + 0xb8);
}


