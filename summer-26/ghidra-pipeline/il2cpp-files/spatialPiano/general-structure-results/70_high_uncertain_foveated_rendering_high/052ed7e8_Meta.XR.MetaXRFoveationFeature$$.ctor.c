/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$.ctor
ENTRY_POINT: 052ed7e8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature___ctor(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  FUN_02f08768();
  *(undefined1 *)(unaff_x20 + 0x78) = 1;
  if (*(char *)(unaff_x19 + 0x138) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_067c9790 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_060fdf88(&stack0x00000000 + 4,0);
    *(ulong *)(unaff_x19 + 0xb8) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *(undefined8 *)(unaff_x19 + 0xb0) = in_stack_00000000._4_8_;
    *(undefined8 *)(unaff_x19 + 0xc4) = in_stack_00000018;
    *(ulong *)(unaff_x19 + 0xbc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    FUN_060f3324();
    *(undefined8 *)(unaff_x19 + 0x130) = 0;
  }
  return;
}


