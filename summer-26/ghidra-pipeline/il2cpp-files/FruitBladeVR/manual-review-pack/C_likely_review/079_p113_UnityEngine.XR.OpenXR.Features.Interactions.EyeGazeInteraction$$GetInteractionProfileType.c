/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$GetInteractionProfileType
ENTRY_POINT: 036e7974
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


uint UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  puVar1 = 
  PTR_UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var_03ce7a10;
  if ((DAT_03ef751b & 1) == 0) {
    FUN_01c5c92c(
                PTR_UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var_03ce7a10
                );
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_XR_XRController_var_03ce7a20);
    DAT_03ef751b = 1;
  }
  puVar2 = PTR_UnityEngine_InputSystem_XR_XRController_var_03ce7a20;
  uVar5 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  plVar4 = (long *)System_Type__GetTypeFromHandle(uVar5,0);
  uVar5 = System_Type__GetTypeFromHandle(*(undefined8 *)puVar2,0);
  if (plVar4 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar4 + 0x278))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x280));
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


