/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 05d52e3c
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


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_04e5d48c(param_1,param_2,0);
  uVar2 = FUN_02ce7ad4(*unaff_x22,0xfd1);
  FUN_04e5d48c(uVar2,*unaff_x21,0);
  uVar1 = DAT_0137e9a8;
  *unaff_x19 = param_1;
  unaff_x19[1] = uVar2;
  *(undefined1 *)(unaff_x19 + 3) = 0;
  *(undefined4 *)((long)unaff_x19 + 0x19) = 0;
  unaff_x19[2] = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x1c) = 0;
  return;
}


