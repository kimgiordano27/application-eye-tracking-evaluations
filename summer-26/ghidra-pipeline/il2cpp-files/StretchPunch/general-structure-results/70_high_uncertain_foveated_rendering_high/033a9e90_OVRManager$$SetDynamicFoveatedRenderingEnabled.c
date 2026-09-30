/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 033a9e90
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetDynamicFoveatedRenderingEnabled
               (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  long *plVar1;
  
  plVar1 = *(long **)(unaff_x21 + 0xea8);
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_513);
    *(undefined1 *)(unaff_x20 + 0x8a8) = 1;
  }
  if (*(int *)(*plVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033a944c(&stack0x00000008,param_3);
  return;
}


