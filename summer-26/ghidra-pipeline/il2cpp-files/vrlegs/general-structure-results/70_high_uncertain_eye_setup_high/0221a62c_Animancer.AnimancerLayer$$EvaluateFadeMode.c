/*
FUNCTION_NAME: Animancer.AnimancerLayer$$EvaluateFadeMode
ENTRY_POINT: 0221a62c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0221a6c8) */

void Animancer_AnimancerLayer__EvaluateFadeMode(void)

{
  ulong uVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar2;
  char cStack000000000000000c;
  
  cStack000000000000000c = '\0';
  FUN_027e0bd8();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (0 < (int)*(ulong *)(unaff_x21 + 0x18)) {
    uVar2 = 0;
    uVar1 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
    do {
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (*(long *)(unaff_x22 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(*(long *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x21 + 0x20 + uVar2 * 8),
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38));
      uVar1 = (ulong)*(uint *)(unaff_x21 + 0x18);
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)*(uint *)(unaff_x21 + 0x18));
  }
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


