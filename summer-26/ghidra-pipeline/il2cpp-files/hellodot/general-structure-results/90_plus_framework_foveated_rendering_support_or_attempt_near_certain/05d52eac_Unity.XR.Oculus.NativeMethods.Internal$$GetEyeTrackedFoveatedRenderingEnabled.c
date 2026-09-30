/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05d52eac
PROGRAM: hellodot-libil2cpp.so
SCORE: 111
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingEnabled
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_065c8c40;
  if ((DAT_06a7aa0d & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    DAT_06a7aa0d = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar1 = FUN_05ef739c(param_2,0,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar1 = FUN_05ef739c(param_3,0,0);
    if ((uVar1 & 1) == 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      return;
    }
    thunk_FUN_02c7737c(PTR_DAT_065c96c8);
    uVar2 = thunk_FUN_02cea894();
    puVar4 = System_Func<WeightedDistribution>_TypeInfo;
  }
  else {
    thunk_FUN_02c7737c(PTR_DAT_065c96c8);
    uVar2 = thunk_FUN_02cea894();
    puVar4 = PTR_DAT_065e61e8;
  }
  uVar3 = thunk_FUN_02c7737c(puVar4);
  FUN_04e97f6c(uVar2,uVar3,0);
  uVar3 = thunk_FUN_02c7737c(System_Func<WeightedRange>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar2,uVar3);
}


