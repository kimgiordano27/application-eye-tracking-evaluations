/*
FUNCTION_NAME: FUN_0373baf0
ENTRY_POINT: 0373baf0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_0373baf0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  puVar2 = Method_Oculus_Platform_Request<AchievementUpdate>_OnComplete__;
  if ((DAT_048363e6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AchievementUpdate>_OnComplete__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass6_0_<CreatePostProcessing>b__0__
                      );
    DAT_048363e6 = 1;
  }
  puVar3 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass6_0_<CreatePostProcessing>b__0__
  ;
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  local_28 = *param_1;
  uVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_28);
  FUN_03406290(*(undefined8 *)puVar3,uVar4,0);
  return;
}


