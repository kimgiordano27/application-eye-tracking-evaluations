/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05d52f1c
PROGRAM: hellodot-libil2cpp.so
SCORE: 109
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__SetEyeTrackedFoveatedRenderingEnabled(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  uVar1 = FUN_05ef739c();
  if ((uVar1 & 1) == 0) {
    *unaff_x20 = unaff_x21;
    unaff_x20[1] = unaff_x19;
    return;
  }
  thunk_FUN_02c7737c(PTR_DAT_065c96c8);
  uVar2 = thunk_FUN_02cea894();
  uVar3 = thunk_FUN_02c7737c(System_Func<WeightedDistribution>_TypeInfo);
  FUN_04e97f6c(uVar2,uVar3,0);
  uVar3 = thunk_FUN_02c7737c(System_Func<WeightedRange>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar2,uVar3);
}


