/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$get_leftEyePosition
ENTRY_POINT: 064dc6dc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_XRHMD__get_leftEyePosition(void)

{
  int in_w8;
  long unaff_x22;
  
  if (in_w8 == 0) {
    FUN_02fe925c(PTR_DAT_06f8b878);
    FUN_02fe925c(PTR_DAT_06f994e0);
    *(undefined1 *)(unaff_x22 + 0xfb8) = 1;
  }
  if (*(int *)(*(long *)PTR_DAT_06f8b878 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  if (*(int *)(*(long *)PTR_DAT_06f994e0 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_064a3c94();
  return;
}


