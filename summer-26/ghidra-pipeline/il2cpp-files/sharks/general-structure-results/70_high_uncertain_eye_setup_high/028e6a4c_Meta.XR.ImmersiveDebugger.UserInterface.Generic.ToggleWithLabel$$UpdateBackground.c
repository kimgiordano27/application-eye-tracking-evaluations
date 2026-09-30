/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ToggleWithLabel$$UpdateBackground
ENTRY_POINT: 028e6a4c
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x028e6c88) */
/* WARNING: Removing unreachable block (ram,0x028e6d7c) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ToggleWithLabel__UpdateBackground(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x22;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  
  uVar1 = FUN_02170a40();
  if ((uVar1 & 1) != 0) {
    in_stack_00000008 = unaff_x20[1];
    thunk_FUN_01851c08(PTR_DAT_037f9268);
    uVar5 = thunk_FUN_018617ec();
    uVar6 = thunk_FUN_01851c08(PTR_DAT_037fb678);
    uVar5 = FUN_02a473b8(uVar6,uVar5,0);
    thunk_FUN_01851c08(PTR_DAT_037f8d50);
    uVar6 = thunk_FUN_01861bbc();
    FUN_02bcf690(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar6);
  }
  in_stack_00000048 = unaff_x20[1];
  in_stack_00000040 = *unaff_x20;
  lVar2 = *unaff_x26;
  if ((unaff_x22 & 1) == 0) {
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
                    /* try { // try from 028e6b68 to 029e6b73 has its CatchHandler @ 028e6634 */
    lVar2 = FUN_01b793c4(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x210));
                    /* try { // try from 028e6b74 to 029e6b7b has its CatchHandler @ 028e6b7c */
    lVar3 = *unaff_x26;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 028e6b40 with catch @ 028e6b7c
                       catch(type#2 @ 00000000) { ... } // from try @ 028e6b74 with catch @ 028e6b7c
                        */
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
    lVar3 = *unaff_x26;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar4 = *unaff_x26;
    uVar5 = *unaff_x20;
    uVar6 = unaff_x20[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    FUN_02170834(lVar3,uVar5,uVar6,lVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x218));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    in_stack_00000030 = *(undefined8 *)(lVar2 + 0x60);
    in_stack_00000028 = *(undefined8 *)(lVar2 + 0x58);
    in_stack_00000020 = *(undefined8 *)(lVar2 + 0x50);
  }
  else {
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar2 = *unaff_x26;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
                    /* try { // try from 028e6ab8 to 029e6abb has its CatchHandler @ 028e6ac4 */
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 028e6abc to 029e6ae7 has its CatchHandler @ 028e6634 */
      lVar2 = FUN_0185daa4();
    }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e6ab8 with catch @ 028e6ac4
                        */
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e69ec with catch @ 028e6ac8
                        */
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e6934 with catch @ 028e6acc
                        */
    lVar3 = *unaff_x26;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e6974 with catch @ 028e6ad0
                        */
    uVar5 = *unaff_x20;
    uVar6 = unaff_x20[1];
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
                    /* try { // try from 028e6ae8 to 029e6aeb has its CatchHandler @ 028e6b00 */
    FUN_02171ca8(lVar2,uVar5,uVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1f8));
    uVar5 = in_stack_00000058;
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
                    /* catch() { ... } // from try @ 028e6ae8 with catch @ 028e6b00 */
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    in_stack_00000008 = uVar5;
    thunk_FUN_0188fd20(&stack0x00000008,uVar5);
    thunk_FUN_0188fd20();
                    /* try { // try from 028e6b40 to 029e6b67 has its CatchHandler @ 028e6b7c */
    in_stack_00000010 = CONCAT53((int5)((ulong)in_stack_00000010 >> 0x18),0x10000);
    in_stack_00000028 = in_stack_00000008;
    in_stack_00000020 = 0;
    in_stack_00000030 = in_stack_00000010;
  }
  lVar2 = *unaff_x26;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  lVar2 = thunk_FUN_0181d094(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x228));
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar2 = *unaff_x26;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  FUN_028e74c4(&stack0x00000040,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x228));
  unaff_x19[2] = in_stack_00000030;
  unaff_x19[1] = in_stack_00000028;
  *unaff_x19 = in_stack_00000020;
  return;
}


