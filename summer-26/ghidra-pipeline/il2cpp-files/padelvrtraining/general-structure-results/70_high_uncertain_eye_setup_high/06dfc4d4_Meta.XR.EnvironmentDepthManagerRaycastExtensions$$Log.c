/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$Log
ENTRY_POINT: 06dfc4d4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_EnvironmentDepthManagerRaycastExtensions__Log(undefined1 param_1 [16])

{
  undefined8 in_x10;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  uStack0000000000000010 = (undefined4)in_x10;
  uStack0000000000000014 = (undefined4)((ulong)in_x10 >> 0x20);
  uStack000000000000000c = param_1._12_4_;
  *(ulong *)(unaff_x19 + 0x28) = CONCAT44(in_stack_00000018,uStack0000000000000014);
  *(ulong *)(unaff_x19 + 0x20) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  *(long *)(unaff_x19 + 0x1c) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x14) = param_1._0_8_;
  return unaff_w21 < unaff_w20;
}


