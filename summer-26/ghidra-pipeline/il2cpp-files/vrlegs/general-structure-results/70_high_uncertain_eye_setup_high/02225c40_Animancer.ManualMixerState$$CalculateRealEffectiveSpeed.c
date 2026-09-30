/*
FUNCTION_NAME: Animancer.ManualMixerState$$CalculateRealEffectiveSpeed
ENTRY_POINT: 02225c40
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


/* WARNING: Removing unreachable block (ram,0x02225cf8) */

void Animancer_ManualMixerState__CalculateRealEffectiveSpeed(void)

{
  uint uVar1;
  uint in_w8;
  long *in_x9;
  uint in_w10;
  uint in_w11;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  while( true ) {
    if (in_w10 <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar1 = (int)in_w11 >> 1;
    if (in_w10 <= uVar1) break;
    FUN_02226554((long)in_x9 + (ulong)*(uint *)(*in_x9 + 0x104) * (long)(int)in_w8 + 0x20,
                 (long)in_x9 + (ulong)*(uint *)(*in_x9 + 0x104) * (long)(int)uVar1 + 0x20,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x90));
    if (uVar1 == 0) {
      FUN_02225f20();
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x20),0);
      }
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    in_x9 = *(long **)(unaff_x21 + 0x28);
    if (in_x9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_w10 = *(uint *)(in_x9 + 3);
    in_w11 = uVar1;
    in_w8 = uVar1;
    if (-1 < (int)(uVar1 - 1)) {
      in_w11 = uVar1 - 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


