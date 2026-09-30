/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_foveatedRenderingLevel
ENTRY_POINT: 07443cf4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


uint Meta_XR_MetaXRFoveationFeature__set_foveatedRenderingLevel(void)

{
  uint uVar1;
  undefined8 *unaff_x19;
  long *unaff_x22;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  uVar1 = FUN_07445ac0();
  if ((uVar1 & 1) == 0) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    in_stack_00000050 = **(undefined8 **)(*unaff_x22 + 0xb8);
    in_stack_00000058 = *(undefined4 *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
  }
  else {
    FUN_05edca54(&stack0x00000050,&stack0x00000080,*(undefined8 *)PTR_DAT_09222990);
    uStack0000000000000044 = uStack0000000000000074;
    FUN_07445d78(&stack0x00000050);
  }
  *unaff_x19 = in_stack_00000050;
  *(undefined4 *)(unaff_x19 + 1) = in_stack_00000058;
  return uVar1 & 1;
}


