/*
FUNCTION_NAME: Animancer.AnimancerLayer$$OnStartFade
ENTRY_POINT: 0221a61c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0221a6c8) */

void Animancer_AnimancerLayer__OnStartFade(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char cStack000000000000000c;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar2,&stack0x0000000c,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (0 < (int)*(ulong *)(param_2 + 0x18)) {
    uVar3 = 0;
    uVar1 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    do {
      if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(*(long *)(param_1 + 0x100),*(undefined8 *)(param_2 + 0x20 + uVar3 * 8),
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38));
      uVar1 = (ulong)*(uint *)(param_2 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(param_2 + 0x18));
  }
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
  }
  return;
}


