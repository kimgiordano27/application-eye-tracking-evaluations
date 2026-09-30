/*
FUNCTION_NAME: FUN_07dc6314
ENTRY_POINT: 07dc6314
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;pose_vector
EVIDENCE: strong_eye_source_hits_3;strong_pose_or_ray_construction_hits_3;functionality_possible_biometrics_hits_3
*/


void FUN_07dc6314(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_07dc61bc();
  FUN_07dc61f4();
  UnityEngine_InputSystem_XR_Eyes__get_rightEyeRotation();
  UnityEngine_InputSystem_XR_Eyes__set_leftEyeOpenAmount();
  UnityEngine_InputSystem_XR_BoneControl__set_position();
  FUN_07dc62d4();
  UnityEngine_InputSystem_XR_Eyes__set_leftEyeOpenAmount();
  UnityEngine_InputSystem_XR_BoneControl__set_position();
  FUN_07dc62d4();
  thunk_FUN_03d1e194(PTR_DAT_091ae390);
  uVar1 = thunk_FUN_03d2ef40();
  FUN_0717a9e4(uVar1,0);
  uVar2 = thunk_FUN_03d1e194(PTR_DAT_09257358);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar1,uVar2);
}


