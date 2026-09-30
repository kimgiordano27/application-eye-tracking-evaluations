/*
FUNCTION_NAME: OVRPlugin$$SetDesiredEyeTextureFormat
ENTRY_POINT: 06abe258
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetDesiredEyeTextureFormat
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  code *pcVar4;
  long unaff_x19;
  ulong unaff_x20;
  long lVar5;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined4 uVar6;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      FUN_033b9870(param_1);
    }
    uVar1 = FUN_07a119fc(param_6,0,0);
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
    if ((uVar1 & 1) == 0) {
      if (param_6 == 0) break;
      pcVar4 = *(code **)(unaff_x24 + 0x188);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)FUN_033d1b68();
        *(code **)(unaff_x24 + 0x188) = pcVar4;
      }
      lVar2 = (*pcVar4)(param_6);
      if ((lVar2 == 0) || (uVar6 = FUN_07a191d0(lVar2,0), lVar5 == 0)) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_06abe354;
    }
    else {
      if (*(char *)(unaff_x28 + 0xc53) == '\0') {
        FUN_0335b6c8(&DAT_083d0300,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x28 + 0xc53) = 1;
      }
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x20) {
LAB_06abe354:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      puVar3 = *(undefined4 **)(*(long *)(unaff_x29 + 0x300) + 0xb8);
      param_4 = puVar3[2];
      param_5 = puVar3[3];
      uVar6 = *puVar3;
      param_3 = puVar3[1];
    }
    lVar5 = lVar5 + unaff_x25;
    unaff_x25 = unaff_x25 + 0x10;
    unaff_x20 = unaff_x20 + 1;
    *(undefined4 *)(lVar5 + 0x20) = uVar6;
    *(undefined4 *)(lVar5 + 0x24) = param_3;
    *(undefined4 *)(lVar5 + 0x28) = param_4;
    *(undefined4 *)(lVar5 + 0x2c) = param_5;
    if (unaff_x25 == 0x180) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x58) == 0) break;
    param_6 = FUN_04ab0b48(*(long *)(unaff_x19 + 0x58),unaff_x20 & 0xffffffff,
                           *(undefined8 *)(unaff_x26 + 0xdd0));
    param_1 = *(long *)(unaff_x27 + 0x7d8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


