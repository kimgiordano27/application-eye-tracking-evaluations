/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 0600f9e0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__SetTrackingCalibratedOrigin
                (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  float fVar1;
  float unaff_s8;
  float unaff_s9;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  
  FUN_0600f814();
  if (DAT_07a3ca81 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3ca81 = '\x01';
  }
  fStack0000000000000000 = fStack0000000000000000 - unaff_s8;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar1 = SQRT((in_stack_00000008 - param_3) * (in_stack_00000008 - param_3) +
               fStack0000000000000000 * fStack0000000000000000 +
               (fStack0000000000000004 - unaff_s9) * (fStack0000000000000004 - unaff_s9));
  if (fVar1 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    fStack0000000000000000 = **(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
  }
  else {
    fStack0000000000000000 = fStack0000000000000000 / fVar1;
  }
  return fStack0000000000000000;
}


