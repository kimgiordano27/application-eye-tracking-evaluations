/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonForAction$$set_Action
ENTRY_POINT: 028dc9c8
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1 Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonForAction__set_Action(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0x640));
  *(undefined1 *)(unaff_x21 + 0x5dc) = 1;
  in_stack_00000018 = 0;
  uStack0000000000000014 = 0;
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (lVar1 != 0) {
    uVar2 = FUN_02171fa4(lVar1,*unaff_x20,unaff_x20[1],&stack0x00000018,
                         *(undefined8 *)PTR_DAT_037fb640);
    if ((uVar2 & 1) == 0) {
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      uVar2 = FUN_028dcc04();
      if ((uVar2 & 1) != 0) {
        return uStack0000000000000014;
      }
      thunk_FUN_01851c08(PTR_DAT_037f9268);
      uVar3 = thunk_FUN_018617ec();
      uVar4 = thunk_FUN_01851c08(PTR_DAT_037fb658);
      uVar3 = FUN_02a473b8(uVar4,uVar3,0);
      thunk_FUN_01851c08(PTR_DAT_037f8d50);
      uVar4 = thunk_FUN_01861bbc();
      FUN_02bcf690(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar4);
    }
    lVar1 = FUN_02afcf34(in_stack_00000018,0);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02afcff4(lVar1,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


