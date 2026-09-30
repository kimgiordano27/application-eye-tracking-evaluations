/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$get_Item
ENTRY_POINT: 03b68524
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__get_Item
               (undefined8 param_1,int param_2)

{
  int iVar1;
  bool in_ZR;
  long in_x9;
  int in_w10;
  
  iVar1 = 4;
  if (!in_ZR) {
    iVar1 = in_w10;
  }
  if (param_2 <= iVar1) {
    param_2 = iVar1;
  }
  FUN_03b678c8(param_1,param_2,*(undefined8 *)(in_x9 + 0xf0));
  return;
}


