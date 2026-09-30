/*
FUNCTION_NAME: OVRPlugin$$LoadRenderModel
ENTRY_POINT: 05330448
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__LoadRenderModel(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined4 uVar3;
  
  uVar3 = FUN_05330b80();
  lVar2 = *(long *)(unaff_x19 + 0x30);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= unaff_w20) {
LAB_05330518:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar2 = *(long *)(lVar2 + unaff_x21 * 8 + 0x20);
    if (lVar2 != 0) {
      uVar1 = FUN_05330cb4(*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                           *(undefined4 *)(lVar2 + 0x20));
      if ((uVar1 & 1) == 0) {
LAB_053304cc:
        uVar1 = (ulong)(*(char *)(unaff_x19 + 0x10) == '\0');
        FUN_05330ac8(uVar3,*(undefined4 *)(&DAT_011b13b0 + uVar1 * 4),
                     *(undefined4 *)(&DAT_011b0f40 + uVar1 * 4),DAT_011b045c);
        return;
      }
      lVar2 = *(long *)(unaff_x19 + 0x30);
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_05330518;
        lVar2 = *(long *)(lVar2 + unaff_x21 * 8 + 0x20);
        if (lVar2 != 0) {
          uVar3 = FUN_05330b80(*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                               *(undefined4 *)(lVar2 + 0x20));
          goto LAB_053304cc;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


