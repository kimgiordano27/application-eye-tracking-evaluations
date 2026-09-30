/*
FUNCTION_NAME: FUN_05b8892c
ENTRY_POINT: 05b8892c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;attempted_use
EVIDENCE: strong_eye_source_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_05b8892c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__;
  puVar1 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<XRHMD>__;
  if ((DAT_066d4b40 & 1) == 0) {
    FUN_02b3c81c(
                Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__
                );
    FUN_02b3c81c(Method_UnityEngine_InputSystem_InputSystem_GetDevice<XRHMD>__);
    DAT_066d4b40 = 1;
  }
  uVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_037550f8(uVar3,*(undefined8 *)puVar2);
  return uVar3;
}


