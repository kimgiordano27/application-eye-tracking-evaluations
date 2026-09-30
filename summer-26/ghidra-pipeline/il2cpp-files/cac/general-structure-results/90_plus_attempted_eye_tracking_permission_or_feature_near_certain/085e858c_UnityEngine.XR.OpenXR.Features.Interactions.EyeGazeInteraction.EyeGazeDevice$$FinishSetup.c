/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$FinishSetup
ENTRY_POINT: 085e858c
PROGRAM: cac-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__FinishSetup
          (long *param_1)

{
  long lVar1;
  undefined8 *unaff_x21;
  long lStack0000000000000008;
  undefined8 in_stack_00000010;
  
  lVar1 = *param_1;
  lStack0000000000000008 = lVar1;
  __cxa_end_catch();
  FUN_072070e8(in_stack_00000010,*unaff_x21);
  if (lVar1 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f13624(lVar1);
}


