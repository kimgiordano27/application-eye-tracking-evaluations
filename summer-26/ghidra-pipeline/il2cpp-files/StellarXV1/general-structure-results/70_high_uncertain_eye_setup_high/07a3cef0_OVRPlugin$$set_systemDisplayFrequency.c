/*
FUNCTION_NAME: OVRPlugin$$set_systemDisplayFrequency
ENTRY_POINT: 07a3cef0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_systemDisplayFrequency(void)

{
  undefined *puVar1;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  ulong uVar2;
  undefined4 *puVar3;
  
  puVar1 = PTR_DAT_092c9430;
  if (0 < (int)in_w8) {
    uVar2 = 0;
    puVar3 = (undefined4 *)(unaff_x20 + 0x28);
    do {
      if (in_w8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_07a3cf80;
      FUN_05d120a8(puVar3[-2],puVar3[-1],*puVar3,*(undefined4 *)(unaff_x19 + 0x78),
                   *(long *)(unaff_x19 + 0x80),uVar2 & 0xffffffff,*(undefined8 *)puVar1);
      in_w8 = *(uint *)(unaff_x20 + 0x18);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 3;
    } while ((long)uVar2 < (long)(int)in_w8);
  }
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    FUN_079d0620(*(undefined4 *)(unaff_x19 + 0x68),*(undefined4 *)(unaff_x19 + 0x6c),
                 *(undefined4 *)(unaff_x19 + 0x70),*(undefined4 *)(unaff_x19 + 0x74),
                 *(long *)(unaff_x19 + 0x90),*(undefined8 *)(unaff_x19 + 0x80),0);
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      FUN_079ce330(*(long *)(unaff_x19 + 0x90),0);
      return;
    }
  }
LAB_07a3cf80:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


