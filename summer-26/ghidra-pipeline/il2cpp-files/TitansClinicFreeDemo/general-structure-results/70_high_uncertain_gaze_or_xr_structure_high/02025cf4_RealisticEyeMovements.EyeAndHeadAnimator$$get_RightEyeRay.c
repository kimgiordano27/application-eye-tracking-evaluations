/*
FUNCTION_NAME: RealisticEyeMovements.EyeAndHeadAnimator$$get_RightEyeRay
ENTRY_POINT: 02025cf4
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


void RealisticEyeMovements_EyeAndHeadAnimator__get_RightEyeRay
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_027c4fa8;
  if ((DAT_0293f1fe & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c4fa8);
    DAT_0293f1fe = 1;
  }
  FUN_01a4ceac(param_1,param_2,*(undefined8 *)puVar1);
  return;
}


