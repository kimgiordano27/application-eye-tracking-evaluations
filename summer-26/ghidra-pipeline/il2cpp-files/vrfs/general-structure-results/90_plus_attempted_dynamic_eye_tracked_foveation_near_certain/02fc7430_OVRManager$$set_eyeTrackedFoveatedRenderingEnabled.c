/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 02fc7430
PROGRAM: vrfs-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 OVRManager__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_015c2790();
  }
  uVar2 = thunk_FUN_015d01b0(lVar1,&stack0x00000004);
  FUN_031dbe34(uVar2,0);
  return 0;
}


