/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 06abf990
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__UpdateInsightPassthroughGeometryTransform(void)

{
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  uint unaff_w21;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined8 uStack000000000000001c;
  long in_stack_00000028;
  
  if (in_stack_00000028 != 0) {
                    /* catch() { ... } // from try @ 06abf980 with catch @ 06abf998 */
    FUN_06abfafc(&stack0x00000008,in_stack_00000028,unaff_w20);
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack000000000000001c;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000018,uStack0000000000000014);
    unaff_x19[1] = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    *unaff_x19 = in_stack_00000008;
    return unaff_w21 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


