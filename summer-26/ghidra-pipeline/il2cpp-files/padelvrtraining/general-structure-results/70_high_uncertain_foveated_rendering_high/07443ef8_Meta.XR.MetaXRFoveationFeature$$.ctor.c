/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$.ctor
ENTRY_POINT: 07443ef8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 Meta_XR_MetaXRFoveationFeature___ctor(undefined8 param_1)

{
  long unaff_x19;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  
  FUN_08a5d494(param_1,0);
  *(undefined8 *)(unaff_x19 + 0x74) = uStack0000000000000084;
  *(ulong *)(unaff_x19 + 0x6c) = CONCAT44(uStack0000000000000080,in_stack_00000078._4_4_);
  *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000068;
  *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000060;
  *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000078;
  *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000070;
  *(undefined1 *)(unaff_x19 + 0x7c) = 1;
  FUN_074437b0();
  return 1;
}


