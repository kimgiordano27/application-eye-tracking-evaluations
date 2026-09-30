/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 03137254
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  undefined8 *unaff_x19;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  uStack000000000000003c = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000044 = 0;
  FUN_0313748c();
  *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(uStack0000000000000048,uStack0000000000000044);
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000040,uStack000000000000003c);
  unaff_x19[1] = CONCAT44(uStack000000000000003c,uStack0000000000000038);
  *unaff_x19 = uStack0000000000000030;
  return;
}


