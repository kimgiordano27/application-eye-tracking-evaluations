/*
FUNCTION_NAME: OVRPlugin$$SetColorScaleAndOffset
ENTRY_POINT: 04f64528
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetColorScaleAndOffset(void)

{
  long lVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  while( true ) {
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)(uint)unaff_x23) {
      return;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x23) break;
    if (unaff_x21 == 0) {
LAB_04f64554:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar2 = *(uint *)(unaff_x24 + unaff_x23 * 4);
    if (*(uint *)(unaff_x21 + 0x18) <= uVar2) break;
    if (unaff_x20 == 0) goto LAB_04f64554;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar2) break;
    lVar1 = unaff_x21 + (long)(int)uVar2 * 0x10;
    uVar4 = *(undefined4 *)(lVar1 + 0x24);
    uVar5 = *(undefined4 *)(lVar1 + 0x28);
    uVar6 = *(undefined4 *)(lVar1 + 0x2c);
    uVar3 = FUN_05c7b59c(*(undefined4 *)(lVar1 + 0x20),0);
    if (unaff_x19 == 0) goto LAB_04f64554;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar2) break;
    lVar1 = unaff_x19 + (long)(int)uVar2 * 0x10;
    unaff_x23 = unaff_x23 + 1;
    *(undefined4 *)(lVar1 + 0x20) = uVar3;
    *(undefined4 *)(lVar1 + 0x24) = uVar4;
    *(undefined4 *)(lVar1 + 0x28) = uVar5;
    *(undefined4 *)(lVar1 + 0x2c) = uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


