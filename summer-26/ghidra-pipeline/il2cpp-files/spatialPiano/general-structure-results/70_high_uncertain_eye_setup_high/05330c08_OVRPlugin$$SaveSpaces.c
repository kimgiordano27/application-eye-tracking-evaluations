/*
FUNCTION_NAME: OVRPlugin$$SaveSpaces
ENTRY_POINT: 05330c08
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


float OVRPlugin__SaveSpaces(void)

{
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  float fVar1;
  float unaff_s11;
  undefined4 in_stack_00000018;
  
  for (; (uint)unaff_x21 < in_w8; unaff_x21 = unaff_x21 + 1) {
    if (*(long *)(unaff_x20 + 0x40) == 0) {
LAB_05330cac:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05348760(&stack0x00000014,*(long *)(unaff_x20 + 0x40),*(undefined4 *)(unaff_x22 + 0x24),0);
    fVar1 = (float)OVRPlugin__OnEditorShutdown();
    if (fVar1 <= unaff_s11) {
      unaff_s11 = fVar1;
    }
    if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -1) <= (long)unaff_x21) {
      return unaff_s11;
    }
    if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) <= unaff_x21) break;
    if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_05330cac;
    unaff_x22 = unaff_x19 + unaff_x21 * 4;
    FUN_05348760(&stack0x00000014,*(long *)(unaff_x20 + 0x40),*(undefined4 *)(unaff_x22 + 0x20),0);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


