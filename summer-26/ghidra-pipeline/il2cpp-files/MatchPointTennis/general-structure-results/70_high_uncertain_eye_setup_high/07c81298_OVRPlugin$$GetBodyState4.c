/*
FUNCTION_NAME: OVRPlugin$$GetBodyState4
ENTRY_POINT: 07c81298
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBodyState4(ulong param_1)

{
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  undefined4 *unaff_x23;
  
  do {
    if ((param_1 & 0xffffffff) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_07c8130c;
    FUN_05d14cd0(unaff_x23[-2],unaff_x23[-1],*unaff_x23,*(undefined4 *)(unaff_x19 + 0x78),
                 *(long *)(unaff_x19 + 0x80),unaff_x21 & 0xffffffff,*unaff_x22);
    param_1 = (ulong)*(uint *)(unaff_x20 + 0x18);
    unaff_x21 = unaff_x21 + 1;
    unaff_x23 = unaff_x23 + 3;
  } while ((long)unaff_x21 < (long)(int)*(uint *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    FUN_07c0a000(*(undefined4 *)(unaff_x19 + 0x68),*(undefined4 *)(unaff_x19 + 0x6c),
                 *(undefined4 *)(unaff_x19 + 0x70),*(undefined4 *)(unaff_x19 + 0x74),
                 *(long *)(unaff_x19 + 0x90),*(undefined8 *)(unaff_x19 + 0x80),0);
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      FUN_07c07ca8(*(long *)(unaff_x19 + 0x90),0);
      return;
    }
  }
LAB_07c8130c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


