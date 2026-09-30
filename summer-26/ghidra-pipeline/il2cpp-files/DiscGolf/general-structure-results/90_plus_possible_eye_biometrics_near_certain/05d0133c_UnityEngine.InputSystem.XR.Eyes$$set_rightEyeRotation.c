/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$set_rightEyeRotation
ENTRY_POINT: 05d0133c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


undefined8 UnityEngine_InputSystem_XR_Eyes__set_rightEyeRotation(void)

{
  bool in_ZR;
  long *plVar1;
  long unaff_x19;
  long lVar2;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c();
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar2);
  }
  return *(undefined8 *)(unaff_x19 + 0xb0);
}


