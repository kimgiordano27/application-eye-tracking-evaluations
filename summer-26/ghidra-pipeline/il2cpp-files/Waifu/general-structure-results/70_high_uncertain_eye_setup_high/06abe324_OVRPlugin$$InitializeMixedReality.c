/*
FUNCTION_NAME: OVRPlugin$$InitializeMixedReality
ENTRY_POINT: 06abe324
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__InitializeMixedReality
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  while( true ) {
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x24) = param_3;
    *(undefined4 *)(param_1 + 0x28) = param_4;
    *(undefined4 *)(param_1 + 0x2c) = param_5;
    if ((bool)in_ZR) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x58) == 0) break;
    lVar1 = FUN_04ab0b48(*(long *)(unaff_x19 + 0x58),unaff_x20 & 0xffffffff,
                         *(undefined8 *)(unaff_x26 + 0xdd0));
    if (*(int *)(*(long *)(unaff_x27 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870(*(long *)(unaff_x27 + 0x7d8));
    }
    uVar2 = FUN_07a119fc(lVar1,0,0);
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
    if ((uVar2 & 1) == 0) {
      if (lVar1 == 0) break;
      pcVar4 = *(code **)(unaff_x24 + 0x188);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)FUN_033d1b68();
        *(code **)(unaff_x24 + 0x188) = pcVar4;
      }
      lVar1 = (*pcVar4)(lVar1);
      if ((lVar1 == 0) || (param_2 = FUN_07a191d0(lVar1,0), param_1 == 0)) break;
      if (*(uint *)(param_1 + 0x18) <= unaff_x20) goto LAB_06abe354;
    }
    else {
      if (*(char *)(unaff_x28 + 0xc53) == '\0') {
        FUN_0335b6c8(&DAT_083d0300,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x28 + 0xc53) = 1;
      }
      if (param_1 == 0) break;
      if (*(uint *)(param_1 + 0x18) <= unaff_x20) {
LAB_06abe354:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      puVar3 = *(undefined4 **)(*(long *)(unaff_x29 + 0x300) + 0xb8);
      param_4 = puVar3[2];
      param_5 = puVar3[3];
      param_2 = *puVar3;
      param_3 = puVar3[1];
    }
    param_1 = param_1 + unaff_x25;
    unaff_x25 = unaff_x25 + 0x10;
    in_ZR = unaff_x25 == 0x180;
    unaff_x20 = unaff_x20 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


