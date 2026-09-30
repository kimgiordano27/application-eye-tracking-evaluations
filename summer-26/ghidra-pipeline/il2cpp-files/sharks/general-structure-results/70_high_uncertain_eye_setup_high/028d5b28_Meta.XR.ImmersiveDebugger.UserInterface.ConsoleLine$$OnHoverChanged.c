/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ConsoleLine$$OnHoverChanged
ENTRY_POINT: 028d5b28
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_ConsoleLine__OnHoverChanged(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
                    /* try { // try from 028d5b4c to 029d5b5f has its CatchHandler @ 028d5b6c */
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *unaff_x20;
    uVar2 = unaff_x20[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 028d5b60 to 029d5b83 has its CatchHandler @ 028d5b0c */
      lVar4 = FUN_0185daa4();
    }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028d5b4c with catch @ 028d5b6c
                        */
    uVar5 = FUN_02171fa4(lVar3,uVar1,uVar2,&stack0x00000080,
                         *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xf8));
    lVar3 = in_stack_00000080;
    if ((uVar5 & 1) == 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      uVar8 = unaff_x21[1];
      uVar7 = *unaff_x21;
      uVar6 = unaff_x21[2];
      uVar1 = *unaff_x20;
      uVar2 = unaff_x20[1];
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_028d5ce8;
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      in_stack_00000090 = uVar7;
      in_stack_00000098 = uVar8;
      in_stack_000000a0 = uVar6;
      FUN_021608b4(lVar3,uVar1,uVar2,&stack0x00000090,
                   *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x168));
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_028d57d0();
    }
    else {
                    /* try { // try from 028d5b84 to 029d5b9b has its CatchHandler @ 028d5bd4 */
      uVar8 = unaff_x21[1];
      uVar7 = *unaff_x21;
      uVar6 = unaff_x21[2];
      uVar1 = *unaff_x20;
      uVar2 = unaff_x20[1];
                    /* try { // try from 028d5b9c to 029d5bc3 has its CatchHandler @ 028d5b0c */
      if (in_stack_00000080 == 0) goto LAB_028d5ce8;
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      in_stack_00000090 = uVar7;
      in_stack_00000098 = uVar8;
      in_stack_000000a0 = uVar6;
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,&stack0x00000090,
                 *(undefined8 *)(lVar3 + 0x28));
    }
    return;
  }
LAB_028d5ce8:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


