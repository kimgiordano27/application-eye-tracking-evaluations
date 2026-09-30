/*
FUNCTION_NAME: RealisticEyeMovements.EyeAndHeadAnimator$$get_LeftEyeRay
ENTRY_POINT: 02025cc4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;pose_vector
EVIDENCE: strong_eye_source_hits_2;strong_pose_or_ray_construction_hits_4;functionality_possible_biometrics_hits_2
*/


void RealisticEyeMovements_EyeAndHeadAnimator__get_LeftEyeRay(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = FUN_020184f8();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0x18),uVar1);
  return;
}


