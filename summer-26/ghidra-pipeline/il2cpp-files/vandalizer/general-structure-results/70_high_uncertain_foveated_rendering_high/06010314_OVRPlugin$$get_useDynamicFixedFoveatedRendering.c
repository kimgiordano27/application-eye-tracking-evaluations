/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 06010314
PROGRAM: vandalizer-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFixedFoveatedRendering
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long unaff_x24;
  long *plVar1;
  long unaff_x25;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  
  plVar1 = *(long **)(unaff_x24 + 0x4f0);
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d64f0);
    *(undefined1 *)(unaff_x25 + 0x99f) = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  if (*(int *)(*plVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06e684bc(0);
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  uStack0000000000000034 = uStack0000000000000010._4_4_;
  in_stack_00000038 = uStack0000000000000010._8_4_;
  in_stack_00000030 = uStack0000000000000010;
  FUN_060103b0(param_2,param_3,&stack0x00000020,param_4,param_5,param_6);
  return;
}


