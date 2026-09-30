/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryVisibility
ENTRY_POINT: 05bd49e0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryVisibility
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               ulong param_5)

{
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  undefined4 *unaff_x23;
  
  while( true ) {
    FUN_043a80fc(unaff_x23[-2],param_2,param_3,*(undefined4 *)(unaff_x19 + 0x78),param_4,param_5,
                 *unaff_x22);
    unaff_x21 = unaff_x21 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x21) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    param_4 = *(long *)(unaff_x19 + 0x80);
    if (param_4 == 0) goto LAB_05bd4a3c;
    param_2 = unaff_x23[2];
    param_3 = unaff_x23[3];
    param_5 = unaff_x21 & 0xffffffff;
    unaff_x23 = unaff_x23 + 3;
  }
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    FUN_05b62c10(*(undefined4 *)(unaff_x19 + 0x68),*(undefined4 *)(unaff_x19 + 0x6c),
                 *(undefined4 *)(unaff_x19 + 0x70),*(undefined4 *)(unaff_x19 + 0x74),
                 *(long *)(unaff_x19 + 0x90),*(undefined8 *)(unaff_x19 + 0x80),0);
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      FUN_05b60954(*(long *)(unaff_x19 + 0x90),0);
      return;
    }
  }
LAB_05bd4a3c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


