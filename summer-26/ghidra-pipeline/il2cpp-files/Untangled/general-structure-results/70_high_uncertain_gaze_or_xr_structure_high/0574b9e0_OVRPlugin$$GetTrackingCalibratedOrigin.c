/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 0574b9e0
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingCalibratedOrigin(void)

{
  long *unaff_x19;
  
  if (*(int *)(*(long *)PTR_DAT_06d06338 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_055b5920(0);
  if (*(int *)(*(long *)PTR_DAT_06d02200 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02200);
  }
  FUN_0556c208();
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x6f8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


