/*
FUNCTION_NAME: FUN_0606afe4
ENTRY_POINT: 0606afe4
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;pose_vector
EVIDENCE: strong_eye_source_hits_4;strong_pose_or_ray_construction_hits_2;functionality_possible_biometrics_hits_4
*/


void FUN_0606afe4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_0606ae8c();
  FUN_0606aec4();
  FUN_0606aefc();
  FUN_0606af34();
  UnityEngine_InputSystem_XR_Eyes__get_rightEyeRotation();
  UnityEngine_InputSystem_XR_Eyes__set_leftEyeOpenAmount();
  FUN_0606af34();
  UnityEngine_InputSystem_XR_Eyes__get_rightEyeRotation();
  UnityEngine_InputSystem_XR_Eyes__set_leftEyeOpenAmount();
  thunk_FUN_02f239f0(PTR_DAT_06d02178);
  uVar1 = thunk_FUN_02ef1808();
  FUN_056044d4(uVar1,0);
  uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d8e920);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar1,uVar2);
}


