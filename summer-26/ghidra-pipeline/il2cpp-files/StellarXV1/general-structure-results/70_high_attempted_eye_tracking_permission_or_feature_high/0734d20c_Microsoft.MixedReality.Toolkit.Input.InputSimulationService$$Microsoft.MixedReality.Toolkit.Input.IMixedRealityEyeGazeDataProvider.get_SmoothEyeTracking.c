/*
FUNCTION_NAME: Microsoft.MixedReality.Toolkit.Input.InputSimulationService$$Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeDataProvider.get_SmoothEyeTracking
ENTRY_POINT: 0734d20c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
Microsoft_MixedReality_Toolkit_Input_InputSimulationService__Microsoft_MixedReality_Toolkit_Input_IMixedRealityEyeGazeDataProvider_get_SmoothEyeTracking
          (undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 *puVar2;
  long *unaff_x24;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x60);
  uVar1 = FUN_089c7604(param_1,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x24);
  }
  FUN_0897e9fc(*puVar2,uVar1,0);
  return 0;
}


