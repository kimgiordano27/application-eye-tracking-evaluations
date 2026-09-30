/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 022e15f8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 111
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar3;
  long unaff_x23;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_027b67b8;
  puVar3 = *(undefined8 **)(unaff_x21 + 0x778);
  puVar4 = *(undefined8 **)(unaff_x23 + 0x758);
  FUN_02292d7c();
  uVar2 = thunk_FUN_0124bba8(*puVar3);
  FUN_0180ea60();
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  thunk_FUN_01286abc((undefined8 *)(unaff_x20 + 0x48),uVar2);
  uVar2 = thunk_FUN_0124bba8(*puVar4);
  FUN_0158a488();
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  thunk_FUN_01286abc((undefined8 *)(unaff_x20 + 0x50),uVar2);
  *(undefined4 *)(unaff_x20 + 0x70) = 0x3c23d70a;
  uVar2 = thunk_FUN_0124bba8(*(undefined8 *)puVar1);
  FUN_0180e430();
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  thunk_FUN_01286abc((undefined8 *)(unaff_x20 + 0x40),uVar2);
  return;
}


