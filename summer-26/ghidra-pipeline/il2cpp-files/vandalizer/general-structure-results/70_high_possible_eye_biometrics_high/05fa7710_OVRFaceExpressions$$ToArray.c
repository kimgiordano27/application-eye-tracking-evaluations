/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 05fa7710
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions__ToArray(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_06eef94c(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                 *(undefined4 *)(param_1 + 0x54),*(long *)(param_1 + 0x30),2,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_06eefb4c(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                   *(undefined4 *)(param_1 + 0x60),*(long *)(param_1 + 0x30),2,0);
      lVar1 = *(long *)(param_1 + 0x70);
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x05fa7780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))
                  (*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                   *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                   *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),
                   *(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


