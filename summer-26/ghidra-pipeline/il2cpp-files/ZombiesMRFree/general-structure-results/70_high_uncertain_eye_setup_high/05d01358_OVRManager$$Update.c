/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 05d01358
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Update(undefined1 param_1 [16],undefined1 param_2 [16])

{
  long unaff_x19;
  undefined4 uVar1;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  *(long *)(unaff_x19 + 100) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x5c) = param_1._0_8_;
                    /* try { // try from 05d0135c to 05e0135f has its CatchHandler @ 05d01544 */
  *(long *)(unaff_x19 + 0x58) = param_2._8_8_;
  *(long *)(unaff_x19 + 0x50) = param_2._0_8_;
  uStack0000000000000008 = in_stack_00000028;
                    /* try { // try from 05d01360 to 05e0136f has its CatchHandler @ 05d0155c */
  uStack0000000000000000 = in_stack_00000020;
  uStack0000000000000010 = in_stack_00000030;
  uVar1 = FUN_05d0160c();
  *(undefined4 *)(unaff_x19 + 0x6c) = uVar1;
                    /* try { // try from 05d01380 to 05e01383 has its CatchHandler @ 05d01550 */
  return;
}


