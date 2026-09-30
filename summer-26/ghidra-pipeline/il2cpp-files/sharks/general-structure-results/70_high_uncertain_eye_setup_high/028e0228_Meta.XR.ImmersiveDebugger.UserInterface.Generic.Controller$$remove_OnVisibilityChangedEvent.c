/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$remove_OnVisibilityChangedEvent
ENTRY_POINT: 028e0228
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x028e052c) */

undefined1  [16]
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__remove_OnVisibilityChangedEvent
          (ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  long lVar7;
  undefined1 auVar8 [16];
  ulong uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(param_2 + 0xb8) + 0x30);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  uVar5 = *unaff_x20;
  uVar6 = unaff_x20[1];
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 028e024c to 029e0343 has its CatchHandler @ 028e0344 */
    lVar2 = FUN_0185daa4();
  }
  uVar3 = FUN_02170a40(lVar7,uVar5,uVar6,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x1f0));
  puVar1 = PTR_DAT_037f88c0;
  if ((uVar3 & 1) != 0) {
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
  in_stack_00000018 = unaff_x20[1];
  in_stack_00000010 = *unaff_x20;
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((unaff_x21 & 1) == 0) {
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4();
    }
    lVar7 = FUN_01b793c4(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x210));
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar5 = *unaff_x20;
    uVar6 = unaff_x20[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    FUN_02170834(lVar2,uVar5,uVar6,lVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x218));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    uVar5 = *(undefined8 *)(lVar7 + 0x48);
    uStack0000000000000008 = *(ulong *)(lVar7 + 0x50);
  }
  else {
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar5 = *unaff_x20;
    uVar6 = unaff_x20[1];
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    FUN_0216b5f0(lVar7,uVar5,uVar6,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x1f8));
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    thunk_FUN_0188fd20();
    uStack0000000000000008 = (ulong)CONCAT16(1,(uint6)in_stack_00000028._4_4_);
    uVar5 = 0;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  FUN_028e0c60(&stack0x00000010,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x228));
  auVar8._8_8_ = uStack0000000000000008;
  auVar8._0_8_ = uVar5;
  return auVar8;
}


