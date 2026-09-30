/*
FUNCTION_NAME: OVRPlugin$$set_eyeHeight
ENTRY_POINT: 05317e28
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_eyeHeight(void)

{
  long lVar1;
  uint uVar2;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  while ((uint)unaff_x23 < in_w8) {
    if (unaff_x21 == 0) {
LAB_05317ec8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar2 = *(uint *)(unaff_x22 + 0x20 + unaff_x23 * 4);
    if (*(uint *)(unaff_x21 + 0x18) <= uVar2) break;
    if (unaff_x20 == 0) goto LAB_05317ec8;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar2) break;
    lVar1 = unaff_x21 + (long)(int)uVar2 * 0x10;
    uVar4 = *(undefined4 *)(lVar1 + 0x24);
    uVar5 = *(undefined4 *)(lVar1 + 0x28);
    uVar6 = *(undefined4 *)(lVar1 + 0x2c);
    uVar3 = FUN_060df37c(*(undefined4 *)(lVar1 + 0x20),0);
    if (unaff_x19 == 0) goto LAB_05317ec8;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar2) break;
    lVar1 = unaff_x19 + (long)(int)uVar2 * 0x10;
    unaff_x23 = unaff_x23 + 1;
    *(undefined4 *)(lVar1 + 0x20) = uVar3;
    *(undefined4 *)(lVar1 + 0x24) = uVar4;
    *(undefined4 *)(lVar1 + 0x28) = uVar5;
    *(undefined4 *)(lVar1 + 0x2c) = uVar6;
    in_w8 = *(uint *)(unaff_x22 + 0x18);
    if ((int)in_w8 <= (int)unaff_x23) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


