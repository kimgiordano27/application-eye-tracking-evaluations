/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05bc4c24
PROGRAM: waitwhat-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0x4c0);
  if ((*(byte *)(unaff_x21 + 0xadf) & 1) == 0) {
    FUN_03188a78(PTR_DAT_071164c0);
    *(undefined1 *)(unaff_x21 + 0xadf) = 1;
  }
  uVar1 = FUN_03f82b58(param_1,param_2,*puVar3);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_05bc2908(param_1,param_2);
    return uVar2;
  }
  return 0;
}


