/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 036a5b5c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 74
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_7;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_UnityEngine_Application_TypeInfo_03cb5e98;
  if ((DAT_03ef6ef6 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Application_TypeInfo_03cb5e98);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>___03ce60b0
                );
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_InputSystem_TypeInfo_03cb6cc8);
    DAT_03ef6ef6 = 1;
  }
  local_30 = 0;
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar2 = UnityEngine_Application__get_isPlaying(0);
  puVar1 = 
  PTR_Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>___03ce60b0
  ;
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_UnityEngine_InputSystem_InputSystem_TypeInfo_03cb6cc8 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    lVar4 = UnityEngine_InputSystem_InputSystem__GetDevice<object>(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      uVar3 = UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetTrackingStatus
                        ();
      return uVar3;
    }
    uVar2 = UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__TryGetDeviceWithExactCharacteristics
                      (0x31,&local_30);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetTrackingStatus
                        (local_30,uStack_28);
    }
  }
  return uVar3;
}


