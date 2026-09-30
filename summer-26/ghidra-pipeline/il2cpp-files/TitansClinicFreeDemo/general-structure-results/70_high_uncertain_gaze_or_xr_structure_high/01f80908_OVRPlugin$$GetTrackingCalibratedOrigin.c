/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 01f80908
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin__GetTrackingCalibratedOrigin(uint param_1)

{
  bool in_ZR;
  uint uVar1;
  uint in_w8;
  uint unaff_w20;
  
  if ((((((in_ZR) || ((param_1 & 7) == in_w8)) &&
        (((unaff_w20 >> 4 & 1) == 0 || ((param_1 >> 4 & 1) != 0)))) &&
       (((unaff_w20 >> 5 & 1) == 0 || ((param_1 >> 5 & 1) != 0)))) &&
      (((unaff_w20 >> 6 & 1) == 0 || ((param_1 >> 6 & 1) != 0)))) &&
     (((unaff_w20 >> 7 & 1) == 0 || ((param_1 >> 7 & 1) != 0)))) {
    uVar1 = (uint)((unaff_w20 & 0x2000) == 0) | (param_1 & 0x2000) >> 0xd;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


