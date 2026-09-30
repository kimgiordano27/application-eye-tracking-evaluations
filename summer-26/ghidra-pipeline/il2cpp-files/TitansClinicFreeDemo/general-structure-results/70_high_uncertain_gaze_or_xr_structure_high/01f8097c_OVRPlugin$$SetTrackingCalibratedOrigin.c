/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 01f8097c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin__SetTrackingCalibratedOrigin(long param_1)

{
  bool in_ZR;
  uint uVar1;
  uint unaff_w20;
  
  if (in_ZR) {
    uVar1 = (**(code **)(param_1 + 0x238))();
    if (((((((unaff_w20 & 7) == 0) || ((uVar1 & 7) == (unaff_w20 & 7))) &&
          (((unaff_w20 >> 4 & 1) == 0 || ((uVar1 >> 4 & 1) != 0)))) &&
         (((unaff_w20 >> 5 & 1) == 0 || ((uVar1 >> 5 & 1) != 0)))) &&
        (((unaff_w20 >> 6 & 1) == 0 || ((uVar1 >> 6 & 1) != 0)))) &&
       (((unaff_w20 >> 10 & 1) == 0 || ((uVar1 >> 10 & 1) != 0)))) {
      uVar1 = (uint)((unaff_w20 & 0x800) == 0) | (uVar1 & 0x800) >> 0xb;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230f60();
}


