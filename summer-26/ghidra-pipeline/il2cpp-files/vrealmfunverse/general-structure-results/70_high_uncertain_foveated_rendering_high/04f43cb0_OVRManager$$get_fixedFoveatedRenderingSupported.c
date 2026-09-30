/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 04f43cb0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *in_x9;
  code *pcVar2;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  in_x9[5] = param_2._8_8_;
  in_x9[4] = param_2._0_8_;
  in_x9[7] = param_3._8_8_;
  in_x9[6] = param_3._0_8_;
  *(undefined8 *)((long)in_x9 + 0x14) = uStack0000000000000054;
  *(ulong *)((long)in_x9 + 0xc) = CONCAT44(uStack0000000000000050,in_stack_00000048._4_4_);
  pcVar2 = *(code **)(param_1 + 0x18);
  in_x9[1] = in_stack_00000048;
  *in_x9 = in_stack_00000040;
  (*pcVar2)(param_4,param_5,&stack0x000000a0,uVar1);
  return;
}


