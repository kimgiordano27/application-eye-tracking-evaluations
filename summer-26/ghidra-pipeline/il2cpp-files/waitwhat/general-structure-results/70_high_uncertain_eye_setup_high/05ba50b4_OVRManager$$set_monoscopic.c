/*
FUNCTION_NAME: OVRManager$$set_monoscopic
ENTRY_POINT: 05ba50b4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_monoscopic(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x21;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  thunk_FUN_031e5338();
  uVar1 = FUN_069d69b8();
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar2 = FUN_069d3a80(*(long *)(unaff_x19 + 0x40),0), lVar2 == 0)) goto LAB_05ba51ac;
    FUN_069e7c88(unaff_s15 * unaff_s9 + unaff_s11,unaff_s8 * unaff_s9 + unaff_s12,
                 unaff_s10 * unaff_s9 + unaff_s13,uStack0000000000000018,uStack0000000000000014,
                 uStack000000000000001c,lVar2,0);
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar1 = FUN_069d69b8(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x48) != 0) &&
     (lVar2 = FUN_069d3a80(*(long *)(unaff_x19 + 0x48),0), lVar2 != 0)) {
    FUN_069e7c88(fStack0000000000000010 - unaff_s15 * unaff_s9,
                 fStack000000000000000c - unaff_s8 * unaff_s9,
                 fStack0000000000000008 - unaff_s10 * unaff_s9,uStack0000000000000018,
                 uStack0000000000000014,uStack000000000000001c,lVar2,0);
    return;
  }
LAB_05ba51ac:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


