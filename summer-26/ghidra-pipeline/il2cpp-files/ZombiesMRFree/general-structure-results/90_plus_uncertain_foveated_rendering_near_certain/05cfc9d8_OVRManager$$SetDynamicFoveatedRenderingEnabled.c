/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 05cfc9d8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 99
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetDynamicFoveatedRenderingEnabled(undefined1 param_1 [16])

{
  undefined4 unaff_w19;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined4 *)(unaff_x21 + 0x20) = 0;
  *(undefined4 *)(unaff_x21 + 0x24) = unaff_w19;
  *(long *)(unaff_x21 + 0x18) = param_1._8_8_;
  *(long *)(unaff_x21 + 0x10) = param_1._0_8_;
  *(undefined8 *)(unaff_x21 + 0xc) = in_stack_00000008;
  *(undefined8 *)(unaff_x21 + 4) = in_stack_00000000;
  return;
}


