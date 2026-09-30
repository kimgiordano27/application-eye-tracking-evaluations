/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$LateUpdate
ENTRY_POINT: 028e7334
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__LateUpdate(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  thunk_FUN_01843fdc();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar4 = *unaff_x20;
    uVar5 = unaff_x20[1];
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    uVar3 = FUN_02170a40(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x280));
    if ((uVar3 & 1) == 0) {
      return;
    }
    thunk_FUN_01851c08(PTR_DAT_037f9268);
    uVar4 = thunk_FUN_018617ec();
    uVar5 = thunk_FUN_01851c08(PTR_DAT_037fb690);
    uVar4 = FUN_02a473b8(uVar5,uVar4,0);
    thunk_FUN_01851c08(PTR_DAT_037f8d50);
    uVar5 = thunk_FUN_01861bbc();
    FUN_02bcf690(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


