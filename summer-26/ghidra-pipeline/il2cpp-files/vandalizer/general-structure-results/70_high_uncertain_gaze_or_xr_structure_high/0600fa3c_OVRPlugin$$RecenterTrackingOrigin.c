/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 0600fa3c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__RecenterTrackingOrigin(float param_1,float param_2)

{
  float fVar1;
  float unaff_s8;
  float unaff_s11;
  
  fVar1 = SQRT(unaff_s8 * unaff_s8 + param_1 + param_2);
  if (fVar1 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    fVar1 = **(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
  }
  else {
    fVar1 = unaff_s11 / fVar1;
  }
  return fVar1;
}


