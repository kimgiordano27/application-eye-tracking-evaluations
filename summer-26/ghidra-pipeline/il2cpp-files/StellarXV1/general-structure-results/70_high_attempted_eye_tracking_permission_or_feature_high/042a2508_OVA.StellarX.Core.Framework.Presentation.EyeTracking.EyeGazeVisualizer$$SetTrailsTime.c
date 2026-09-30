/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Presentation.EyeTracking.EyeGazeVisualizer$$SetTrailsTime
ENTRY_POINT: 042a2508
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVA_StellarX_Core_Framework_Presentation_EyeTracking_EyeGazeVisualizer__SetTrailsTime
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long in_x9;
  long lVar2;
  int in_w11;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  *(int *)(param_1 + 0x1c) = in_w11 + 1;
  if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *(undefined8 *)(in_x9 + (long)(int)uVar1 * 8 + 0x20) = param_3;
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    thunk_FUN_040ec700();
    return;
  }
  FUN_05c26d88(param_1,param_3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
  return;
}


