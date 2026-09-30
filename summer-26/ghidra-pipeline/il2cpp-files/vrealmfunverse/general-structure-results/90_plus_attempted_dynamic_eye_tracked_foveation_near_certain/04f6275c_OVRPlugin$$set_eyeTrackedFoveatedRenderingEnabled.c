/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 04f6275c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  void *unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  
  uStack0000000000000080 = 0;
  uStack0000000000000084 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000058 = 0;
  uStack000000000000005c = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  uStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000064 = 0;
  uStack0000000000000078 = 0;
  uStack000000000000007c = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  thunk_FUN_02bb0e9c(&stack0x00000040);
  uStack0000000000000050 = *(undefined4 *)(unaff_x20 + 0xdc);
  uStack0000000000000048 =
       CONCAT44(*(undefined4 *)(unaff_x20 + 0x128),*(undefined4 *)(unaff_x20 + 0xe4));
  uStack000000000000005c = (undefined4)*(undefined8 *)(unaff_x20 + 0xf0);
  uStack0000000000000060 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xf0) >> 0x20);
  uStack0000000000000054 = (undefined4)*(undefined8 *)(unaff_x20 + 0xe8);
  uStack0000000000000058 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xe8) >> 0x20);
  uStack0000000000000064 = (undefined4)*(undefined8 *)(unaff_x20 + 0xf8);
  uStack0000000000000068 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xf8) >> 0x20);
  uStack0000000000000074 = (undefined4)*(undefined8 *)(unaff_x20 + 0x108);
  uStack0000000000000078 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x108) >> 0x20);
  uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x20 + 0x100);
  uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x100) >> 0x20);
  uStack000000000000007c = (undefined4)*(undefined8 *)(unaff_x20 + 0x110);
  uStack0000000000000080 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x110) >> 0x20);
  memcpy(unaff_x19,&stack0x00000040,0x48);
  return;
}


