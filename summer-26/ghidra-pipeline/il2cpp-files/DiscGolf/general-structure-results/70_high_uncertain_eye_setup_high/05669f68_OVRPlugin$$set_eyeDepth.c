/*
FUNCTION_NAME: OVRPlugin$$set_eyeDepth
ENTRY_POINT: 05669f68
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_eyeDepth(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  
  System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
            (param_1,0,param_3,0);
  if (unaff_x19 != 0) {
    FUN_0565db40();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


