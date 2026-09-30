/*
FUNCTION_NAME: OVRPlugin$$get_localDimmingSupported
ENTRY_POINT: 073e2854
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_localDimmingSupported(void)

{
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  undefined4 *unaff_x23;
  
  while( true ) {
    unaff_x21 = unaff_x21 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x21) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_073e28a0;
    FUN_052ded50(unaff_x23[1],unaff_x23[2],unaff_x23[3],*(undefined4 *)(unaff_x19 + 0x78),
                 *(long *)(unaff_x19 + 0x80),unaff_x21 & 0xffffffff,*unaff_x22);
    unaff_x23 = unaff_x23 + 3;
  }
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    FUN_0736bdf0(*(undefined4 *)(unaff_x19 + 0x68),*(undefined4 *)(unaff_x19 + 0x6c),
                 *(undefined4 *)(unaff_x19 + 0x70),*(undefined4 *)(unaff_x19 + 0x74),
                 *(long *)(unaff_x19 + 0x90),*(undefined8 *)(unaff_x19 + 0x80),0);
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      FUN_07369a98(*(long *)(unaff_x19 + 0x90),0);
      return;
    }
  }
LAB_073e28a0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


