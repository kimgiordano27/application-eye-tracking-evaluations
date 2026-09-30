/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterDeviceLayout
ENTRY_POINT: 06c730c0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterDeviceLayout
               (long param_1)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long in_stack_00000018;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0x918));
  *(undefined1 *)(unaff_x22 + 0x671) = 1;
  in_stack_00000018 = 0;
  if (unaff_x21[0x23] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  FUN_0460182c(unaff_x21[0x23],&stack0x00000018,
               *(undefined8 *)
                System_Collections_Generic_IDictionary<string,_ConfigurationEntry>_TypeInfo);
  if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  *(long **)(in_stack_00000018 + 0x20) = unaff_x21;
  thunk_FUN_0329bf60();
  if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  *(undefined8 *)(in_stack_00000018 + 0x10) = unaff_x20;
  thunk_FUN_0329bf60();
  if (in_stack_00000018 != 0) {
    *(undefined8 *)(in_stack_00000018 + 0x18) = unaff_x19;
    thunk_FUN_0329bf60();
    (**(code **)(*unaff_x21 + 0x468))();
    FUN_04d12598();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


