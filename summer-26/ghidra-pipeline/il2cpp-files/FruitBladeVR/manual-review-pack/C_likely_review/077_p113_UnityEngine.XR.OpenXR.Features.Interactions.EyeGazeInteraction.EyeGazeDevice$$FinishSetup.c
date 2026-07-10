/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$FinishSetup
ENTRY_POINT: 036e809c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__FinishSetup
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_Method_UnityEngine_InputSystem_InputControl_GetChildControl<PoseControl>___03ce7a60;
  puVar1 = PTR_StringLiteral_9412_03ce7a50;
  if ((DAT_03ef751f & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_InputControl_GetChildControl<PoseControl>___03ce7a60
                );
    FUN_01c5c92c(PTR_StringLiteral_9412_03ce7a50);
    DAT_03ef751f = 1;
  }
  UnityEngine_XR_OpenXR_Input_OpenXRDevice__FinishSetup(param_1);
  uVar3 = UnityEngine_InputSystem_InputControl__GetChildControl<object>
                    (param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x188) = uVar3;
  thunk_FUN_01cc8040(param_1 + 0x188);
  return;
}


