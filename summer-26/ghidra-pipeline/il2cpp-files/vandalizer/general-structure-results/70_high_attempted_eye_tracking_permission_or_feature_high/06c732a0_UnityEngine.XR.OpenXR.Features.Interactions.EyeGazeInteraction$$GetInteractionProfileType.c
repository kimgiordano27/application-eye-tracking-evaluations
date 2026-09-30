/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$GetInteractionProfileType
ENTRY_POINT: 06c732a0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType(void)

{
  undefined8 unaff_x19;
  long *unaff_x21;
  long in_stack_00000018;
  
  thunk_FUN_0329bf60();
  if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  *(undefined8 *)(in_stack_00000018 + 0x18) = unaff_x19;
  thunk_FUN_0329bf60();
  if (in_stack_00000018 != 0) {
    *(undefined1 *)(in_stack_00000018 + 0x28) = 0;
    (**(code **)(*unaff_x21 + 0x478))();
    FUN_04d12598();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


