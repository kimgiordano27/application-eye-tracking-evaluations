/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 05d49ad4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor
               (long param_1)

{
  long unaff_x21;
  long lVar1;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  
  do {
    lVar1 = unaff_x21;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4e268(unaff_x22,unaff_x23);
    }
    do {
      unaff_x21 = FUN_02d86d6c();
      if (unaff_x21 == lVar1) {
        return;
      }
      unaff_x22 = FUN_05048198(unaff_x21);
      lVar1 = unaff_x21;
    } while (unaff_x22 == 0);
    unaff_x23 = *unaff_x24;
    param_1 = thunk_FUN_02d8a53c(unaff_x22,unaff_x23);
  } while( true );
}


