/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Dispose
ENTRY_POINT: 01a44ff8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Qpl_Annotation_Builder__Dispose(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  undefined1 uStack000000000000005c;
  
  uStack0000000000000058 = 8;
  uStack000000000000005c = 0;
  uStack0000000000000030 = param_1;
  uStack0000000000000050 = param_2;
  uVar1 = thunk_FUN_00d625b4(&stack0x00000030);
  *(undefined8 *)(unaff_x20 + 0xc98) = uVar1;
  uStack0000000000000050 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  FUN_00bffb30();
  uVar1 = (**(code **)(unaff_x20 + 0xc98))(&stack0x00000030);
  FUN_00bffb80(&stack0x00000030);
  thunk_FUN_00d62a3c(uStack0000000000000038);
  uStack0000000000000038 = 0;
  thunk_FUN_00d62a3c(uStack0000000000000040);
  uStack0000000000000040 = 0;
  thunk_FUN_00d62a3c(uStack0000000000000050);
  unaff_x19[4] = 0;
  unaff_x19[1] = 0;
  *unaff_x19 = 0;
  unaff_x19[3] = 0;
  unaff_x19[2] = 0;
  return uVar1;
}


