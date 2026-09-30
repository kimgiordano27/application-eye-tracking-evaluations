/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterActionMapsWithRuntime
ENTRY_POINT: 07ae5368
PROGRAM: DirtBikerVR-libil2cpp.so
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
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterActionMapsWithRuntime
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined8 *unaff_x23;
  
  FUN_066b7b48(param_2,param_3,*param_1);
  if (unaff_x19 != 0) {
    FUN_07aef90c();
    return *unaff_x23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


