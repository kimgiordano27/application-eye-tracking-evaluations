/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 033900cc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 134
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint Meta_XR_MetaXREyeTrackedFoveationFeature__set_eyeTrackedFoveatedRenderingEnabled
               (long *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  long unaff_x28;
  long unaff_x29;
  
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar1 = FUN_0339957c(unaff_w25,unaff_w24,uVar2);
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


