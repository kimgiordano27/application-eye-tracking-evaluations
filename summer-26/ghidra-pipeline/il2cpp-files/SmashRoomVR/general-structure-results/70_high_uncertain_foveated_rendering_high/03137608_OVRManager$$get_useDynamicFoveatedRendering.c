/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 03137608
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFoveatedRendering(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined8 uStack0000000000000000;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  uStack0000000000000000 = param_1;
  FUN_0313748c();
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,in_stack_00000028._4_4_);
  unaff_x19[1] = in_stack_00000028;
  *unaff_x19 = in_stack_00000020;
  return;
}


