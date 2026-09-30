/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ToggleWithLabel$$OnStateChanged
ENTRY_POINT: 028e6a04
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


/* WARNING: Removing unreachable block (ram,0x028e6c88) */
/* WARNING: Removing unreachable block (ram,0x028e6d7c) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ToggleWithLabel__OnStateChanged
               (ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
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
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
  if (lVar1 != 0) {
    lVar2 = *unaff_x26;
    uVar5 = *unaff_x20;
    uVar6 = unaff_x20[1];
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    uVar3 = FUN_02170a40(lVar1,uVar5,uVar6,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x1f0));
    if ((uVar3 & 1) != 0) {
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
    lVar1 = *unaff_x26;
    if ((unaff_x22 & 1) == 0) {
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = FUN_01b793c4(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x210));
      lVar2 = *unaff_x26;
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
      lVar2 = *unaff_x26;
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
      lVar4 = *unaff_x26;
      uVar5 = *unaff_x20;
      uVar6 = unaff_x20[1];
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      FUN_02170834(lVar2,uVar5,uVar6,lVar1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x218));
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      in_stack_00000030 = *(undefined8 *)(lVar1 + 0x60);
      in_stack_00000028 = *(undefined8 *)(lVar1 + 0x58);
      in_stack_00000020 = *(undefined8 *)(lVar1 + 0x50);
    }
    else {
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar1 = *unaff_x26;
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar2 = *unaff_x26;
      uVar5 = *unaff_x20;
      uVar6 = unaff_x20[1];
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      FUN_02171ca8(lVar1,uVar5,uVar6,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x1f8));
      uVar5 = in_stack_00000058;
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      in_stack_00000008 = uVar5;
      thunk_FUN_0188fd20(&stack0x00000008,uVar5);
      thunk_FUN_0188fd20();
      in_stack_00000010 = CONCAT53((int5)((ulong)in_stack_00000010 >> 0x18),0x10000);
      in_stack_00000028 = in_stack_00000008;
      in_stack_00000020 = 0;
      in_stack_00000030 = in_stack_00000010;
    }
    lVar1 = *unaff_x26;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    lVar1 = thunk_FUN_0181d094(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x228));
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar1 = *unaff_x26;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    FUN_028e74c4(&stack0x00000040,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x228));
    unaff_x19[2] = in_stack_00000030;
    unaff_x19[1] = in_stack_00000028;
    *unaff_x19 = in_stack_00000020;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


