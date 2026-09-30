/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$get_leftEyePosition
ENTRY_POINT: 006a5d34
PROGRAM: JustAnotherCookingGame-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


undefined8 UnityEngine_InputSystem_XR_Eyes__get_leftEyePosition(void)

{
  uint in_w8;
  long unaff_x19;
  long lVar1;
  
  if ((in_w8 >> 10 & 1) != 0) {
    lVar1 = **(long **)(unaff_x19 + 0x30);
    if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
      FUN_005c1b60(lVar1);
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      lVar1 = **(long **)(unaff_x19 + 0x30);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        FUN_005c1b60(lVar1);
      }
      thunk_FUN_005c4488(lVar1);
    }
  }
  lVar1 = **(long **)(unaff_x19 + 0x30);
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    FUN_005c1b60(lVar1);
  }
  return **(undefined8 **)(lVar1 + 0xb8);
}


