/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 03998744
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int in_w9;
  long in_x11;
  
                    /* try { // try from 03998744 to 03a9879b has its CatchHandler @ 0399879c */
  iVar1 = 4;
  if (param_1 != 0) {
    iVar1 = in_w9;
  }
  if (iVar1 <= param_3) {
    iVar1 = param_3;
  }
  FUN_03997c50(param_2,iVar1,*(undefined8 *)(*(long *)(in_x11 + 0xc0) + 0xf0));
  return;
}


