/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$OnInstanceCreate
ENTRY_POINT: 03f2ff08
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__OnInstanceCreate
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *unaff_x21;
  float unaff_s8;
  float in_stack_00000008;
  
  if (unaff_s8 <
      (in_stack_00000008 - param_3) * (in_stack_00000008 - param_3) +
      param_1._0_4_ * param_1._0_4_ + param_1._4_4_ * param_1._4_4_) {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    uVar1 = FUN_03f2fc58();
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar2 = FUN_03f2fc58();
      return uVar2;
    }
  }
  return 1;
}


