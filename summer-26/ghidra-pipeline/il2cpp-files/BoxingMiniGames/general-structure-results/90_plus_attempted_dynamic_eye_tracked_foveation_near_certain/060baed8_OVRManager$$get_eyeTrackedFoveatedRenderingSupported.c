/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 060baed8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingSupported(void)

{
  undefined8 uVar1;
  undefined1 in_w8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x998) = in_w8;
  FUN_042b5424();
  uVar1 = thunk_FUN_0367fd24(*(undefined8 *)(unaff_x19 + 0x118),*unaff_x21);
  *(undefined8 *)(unaff_x19 + 0x120) = uVar1;
  thunk_FUN_036b7ad0(unaff_x19 + 0x120,uVar1);
  uVar1 = thunk_FUN_0367fd24(*(undefined8 *)(unaff_x19 + 0x150),*unaff_x20);
  *(undefined8 *)(unaff_x19 + 0x158) = uVar1;
  thunk_FUN_036b7ad0(unaff_x19 + 0x158,uVar1);
  *(undefined8 *)(unaff_x19 + 0x20) = 0x4469737447726162;
  return;
}


