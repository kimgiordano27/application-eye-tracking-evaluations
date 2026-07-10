/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$OnInstanceCreate
ENTRY_POINT: 036e7730
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 75
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


uint UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__OnInstanceCreate(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_StringLiteral_6403_03ce7a08;
  if ((DAT_03ef7518 & 1) == 0) {
    FUN_01c5c92c(PTR_StringLiteral_6403_03ce7a08);
    DAT_03ef7518 = 1;
  }
  uVar2 = UnityEngine_XR_OpenXR_OpenXRRuntime__Internal_IsExtensionEnabled(*(undefined8 *)puVar1);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
  }
  return uVar2 & 1;
}


