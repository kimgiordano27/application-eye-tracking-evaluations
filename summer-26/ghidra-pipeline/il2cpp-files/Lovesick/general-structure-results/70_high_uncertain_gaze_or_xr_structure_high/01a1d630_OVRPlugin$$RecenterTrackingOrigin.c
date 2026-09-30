/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 01a1d630
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__RecenterTrackingOrigin(long param_1)

{
  undefined8 unaff_x19;
  
  if (param_1 != 0) {
    FUN_017b46ec(param_1,0);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x20) = unaff_x19;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


