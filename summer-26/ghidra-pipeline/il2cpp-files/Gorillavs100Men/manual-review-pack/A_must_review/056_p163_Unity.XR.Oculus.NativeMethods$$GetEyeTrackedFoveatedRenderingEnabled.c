/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 03f15618
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 111
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingEnabled
               (ulong param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long *plVar2;
  long unaff_x22;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0xf88);
  plVar2 = *(long **)(unaff_x21 + 0x548);
  if ((param_1 & 1) == 0) {
    FUN_020612a4(PTR_DAT_046bef88);
    FUN_020612a4(PTR_DAT_046a7548);
    *(undefined1 *)(unaff_x20 + 0xa94) = 1;
  }
  lVar1 = thunk_FUN_02094760(*puVar3);
  *(undefined4 *)(lVar1 + 0x10) = 0x3f800000;
  FUN_040e31c8(lVar1,0);
  *(long *)(param_2 + 0xa0) = lVar1;
  thunk_FUN_020ccb58((long *)(param_2 + 0xa0),lVar1);
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_020b5864();
  }
  FUN_03f01d94(param_2);
  return;
}


