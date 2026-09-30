/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 021182dc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceQueryResult>
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int unaff_w19;
  
  if (param_1 == 0) {
    FUN_01dde854(param_4);
  }
  if (unaff_w19 == 0) {
    param_2 = 1;
  }
  return param_2;
}


