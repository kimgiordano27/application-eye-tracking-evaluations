/*
FUNCTION_NAME: Microsoft.MixedReality.Toolkit.Input.InputSimulationService$$Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeDataProvider.set_SmoothEyeTracking
ENTRY_POINT: 0734d214
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;attempted_use
EVIDENCE: strong_eye_source_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
Microsoft_MixedReality_Toolkit_Input_InputSimulationService__Microsoft_MixedReality_Toolkit_Input_IMixedRealityEyeGazeDataProvider_set_SmoothEyeTracking
          (void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long *unaff_x24;
  
  uVar1 = FUN_089c7604();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x24);
  }
  FUN_0897e9fc(*unaff_x20,uVar1,0);
  return 0;
}


