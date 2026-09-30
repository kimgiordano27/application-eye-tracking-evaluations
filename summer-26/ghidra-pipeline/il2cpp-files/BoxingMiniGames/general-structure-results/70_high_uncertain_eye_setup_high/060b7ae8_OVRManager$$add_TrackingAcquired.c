/*
FUNCTION_NAME: OVRManager$$add_TrackingAcquired
ENTRY_POINT: 060b7ae8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_TrackingAcquired(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_071af124(0);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_060a68c4();
                    /* catch() { ... } // from try @ 060b7b40 with catch @ 060b7b0c
                       catch() { ... } // from try @ 060b7b64 with catch @ 060b7b0c */
    lVar1 = *(long *)(unaff_x19 + 0x38);
    if (lVar1 != 0) {
      in_stack_00000048 = in_stack_00000018;
      in_stack_00000040 = in_stack_00000010;
      in_stack_00000058 = in_stack_00000028;
      in_stack_00000050 = in_stack_00000020;
      in_stack_00000038 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000000;
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),&stack0x00000030,*(undefined8 *)(lVar1 + 0x28));
                    /* try { // try from 060b7b38 to 061b7b3f has its CatchHandler @ 060b7b50 */
                    /* try { // try from 060b7b40 to 061b7b5f has its CatchHandler @ 060b7b0c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


