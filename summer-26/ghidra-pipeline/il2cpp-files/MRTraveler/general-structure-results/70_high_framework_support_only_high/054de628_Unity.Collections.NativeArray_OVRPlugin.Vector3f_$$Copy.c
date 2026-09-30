/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 054de628
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1,undefined1 param_2 [16])

{
  long lVar1;
  long in_x9;
  undefined8 in_x10;
  long unaff_x19;
  
  lVar1 = unaff_x19 + param_1 * in_x9;
  *(undefined8 *)(lVar1 + 0x30) = in_x10;
  *(long *)(lVar1 + 0x28) = param_2._8_8_;
  *(long *)(lVar1 + 0x20) = param_2._0_8_;
  thunk_FUN_03d233cc(lVar1 + 0x20,0);
  return;
}


