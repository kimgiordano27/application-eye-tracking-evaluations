/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterDeviceLayout
ENTRY_POINT: 036e7798
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_11;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterDeviceLayout(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  puVar1 = 
  PTR_UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var_03ce7a10;
  if ((DAT_03ef7519 & 1) == 0) {
    FUN_01c5c92c(
                PTR_UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var_03ce7a10
                );
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_Layouts_InputDeviceMatcher_TypeInfo_03cb6e28);
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_InputSystem_TypeInfo_03cb6cc8);
    FUN_01c5c92c(PTR_Method_System_Nullable<InputDeviceMatcher>__ctor___03ccff20);
    FUN_01c5c92c(PTR_StringLiteral_2701_03ce7a18);
    FUN_01c5c92c(PTR_StringLiteral_6562_03ccffc0);
    FUN_01c5c92c(PTR_StringLiteral_2707_03ce2790);
    DAT_03ef7519 = 1;
  }
  puVar2 = PTR_UnityEngine_InputSystem_Layouts_InputDeviceMatcher_TypeInfo_03cb6e28;
  uVar7 = *(undefined8 *)puVar1;
  local_38 = 0;
  if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  puVar5 = PTR_StringLiteral_2701_03ce7a18;
  puVar4 = PTR_StringLiteral_6562_03ccffc0;
  puVar3 = PTR_Method_System_Nullable<InputDeviceMatcher>__ctor___03ccff20;
  puVar1 = PTR_UnityEngine_InputSystem_InputSystem_TypeInfo_03cb6cc8;
  uVar7 = System_Type__GetTypeFromHandle(uVar7,0);
  local_38 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  puVar2 = PTR_StringLiteral_2707_03ce2790;
  local_38 = UnityEngine_InputSystem_Layouts_InputDeviceMatcher__WithInterface
                       (&local_38,*(undefined8 *)puVar4,1,0);
  uVar6 = UnityEngine_InputSystem_Layouts_InputDeviceMatcher__WithProduct
                    (&local_38,*(undefined8 *)puVar5,1,0);
  local_50 = 0;
  uStack_48 = 0;
  System_Nullable<InputDeviceMatcher>___ctor(&local_50,uVar6,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  UnityEngine_InputSystem_InputSystem__RegisterLayout
            (uVar7,*(undefined8 *)puVar2,local_50,uStack_48,0);
  return;
}


