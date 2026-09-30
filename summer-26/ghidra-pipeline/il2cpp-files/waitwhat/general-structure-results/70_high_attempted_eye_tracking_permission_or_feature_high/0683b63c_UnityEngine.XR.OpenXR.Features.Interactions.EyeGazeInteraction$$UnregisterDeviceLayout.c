/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$UnregisterDeviceLayout
ENTRY_POINT: 0683b63c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__UnregisterDeviceLayout(void)

{
  bool in_CY;
  long lVar1;
  undefined8 unaff_x20;
  long *unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (!in_CY) {
    lVar1 = *unaff_x26;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (unaff_w28 < *(uint *)(lVar1 + 0x18)) {
      *(undefined8 *)(lVar1 + unaff_x27 + 0x28) = unaff_x20;
      in_stack_00000010 = in_stack_00000008;
      FUN_069f0e5c(&stack0x00000010,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


