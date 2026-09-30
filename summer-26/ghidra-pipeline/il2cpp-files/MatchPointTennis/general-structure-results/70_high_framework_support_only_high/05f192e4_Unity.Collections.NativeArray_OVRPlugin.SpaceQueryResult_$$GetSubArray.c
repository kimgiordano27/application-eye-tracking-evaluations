/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 05f192e4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  unaff_x22[5] = param_1._8_8_;
  unaff_x22[4] = param_1._0_8_;
  unaff_x22[7] = param_2._8_8_;
  unaff_x22[6] = param_2._0_8_;
  unaff_x22[1] = param_3._8_8_;
  *unaff_x22 = param_3._0_8_;
  unaff_x22[3] = param_4._8_8_;
  unaff_x22[2] = param_4._0_8_;
  thunk_FUN_044bb4b4(unaff_x19 + unaff_x21 * 0x40 + 0x20,0);
  return;
}


