/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_1$$ovrp_SetOverlayQuad2
ENTRY_POINT: 090c99b0
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_1__ovrp_SetOverlayQuad2(void)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 uStack000000000000002c;
  
  *(undefined1 *)(unaff_x22 + 0x4d8) = 1;
  uVar1 = *unaff_x20;
  uStack000000000000002c = 0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar2 = FUN_090c968c(uVar1);
  lVar3 = *(long *)(unaff_x19 + 0x140);
  if (lVar3 != 0) {
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar2 * 0x10;
      *(undefined4 *)(lVar3 + 0x20) = unaff_s11;
      *(undefined4 *)(lVar3 + 0x24) = unaff_s10;
      *(undefined4 *)(lVar3 + 0x28) = unaff_s9;
      *(undefined4 *)(lVar3 + 0x2c) = unaff_s8;
      lVar3 = *(long *)(unaff_x19 + 0xd0);
      if (lVar3 == 0) goto LAB_090c9a50;
      if (uVar2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined4 *)(lVar3 + (long)(int)uVar2 * 4 + 0x20) = 0x3f800000;
        uStack000000000000002c = 2;
        FUN_090c9a58();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
LAB_090c9a50:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


