/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.LayoutStyle$$SetWidth
ENTRY_POINT: 028e8c5c
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_LayoutStyle__SetWidth
               (long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x20;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long in_stack_00000010;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  
  uVar9 = **(undefined8 **)(*(long *)(param_2 + 0xc0) + 0xd0);
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0185daa4(param_1);
  }
  in_stack_00000028 = &stack0x00000010;
  in_stack_00000020 = &stack0x00000030;
  in_stack_00000030 = unaff_x26;
  in_stack_00000038 = unaff_x25;
  (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0xd0) + 0x10))(uVar9);
  lVar2 = in_stack_00000010;
  if (in_stack_00000048._4_1_ == '\0') {
    lVar2 = *unaff_x24;
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
    lVar6 = *unaff_x24;
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar2 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
      uVar1 = *(ushort *)(*unaff_x24 + 0x135);
      lVar2 = *unaff_x24;
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0xf0);
    if ((uVar1 & 1) == 0) {
      FUN_0185daa4(lVar2);
    }
    uVar3 = (*pcVar7)();
    if ((uVar3 & 1) == 0) {
      in_stack_00000038 = unaff_x20[1];
      in_stack_00000030 = *unaff_x20;
      uVar9 = thunk_FUN_01851c08(PTR_DAT_037f9268);
      thunk_FUN_018617ec(uVar9,&stack0x00000030);
      thunk_FUN_01851c08(PTR_DAT_037fb618);
      uVar9 = FUN_02a50b00();
      thunk_FUN_01851c08(PTR_DAT_037f8d50);
      uVar4 = thunk_FUN_01861bbc();
      FUN_02bcf6b4(uVar4,uVar9);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar4);
    }
    lVar2 = *unaff_x24;
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
    lVar2 = *unaff_x24;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
    if (lVar2 != 0) {
      lVar5 = *unaff_x24;
      uVar9 = *unaff_x20;
      uVar4 = unaff_x20[1];
      uVar1 = *(ushort *)(lVar5 + 0x135);
      lVar6 = lVar5;
      if ((uVar1 & 1) == 0) {
        lVar5 = FUN_0185daa4(lVar5);
        uVar1 = *(ushort *)(*unaff_x24 + 0x135);
        lVar6 = *unaff_x24;
      }
      uVar8 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xf8);
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_0185daa4(lVar6);
      }
      in_stack_00000028 = (undefined8 *)&stack0x00000008;
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0xf8);
      in_stack_00000020 = &stack0x00000030;
      in_stack_00000030 = uVar9;
      in_stack_00000038 = uVar4;
      (**(code **)(lVar6 + 0x10))(uVar8,lVar6,lVar2,&stack0x00000020,(long)&stack0x00000048 + 4);
      if (in_stack_00000048._4_1_ == '\0') {
        lVar2 = *unaff_x24;
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
        lVar2 = *unaff_x24;
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
        if (lVar2 != 0) {
          FUN_02170834(lVar2,*unaff_x20,unaff_x20[1]);
          lVar6 = *unaff_x24;
          uVar1 = *(ushort *)(lVar6 + 0x135);
          lVar2 = lVar6;
          if ((uVar1 & 1) == 0) {
            lVar6 = FUN_0185daa4(lVar6);
            uVar1 = *(ushort *)(*unaff_x24 + 0x135);
            lVar2 = *unaff_x24;
          }
          pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x108);
          if ((uVar1 & 1) == 0) {
            FUN_0185daa4(lVar2);
          }
          (*pcVar7)();
          return;
        }
      }
      else {
        lVar2 = FUN_02afcf34();
        if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02afcff4(lVar2,0);
        }
      }
    }
  }
  else if (in_stack_00000010 != 0) {
    lVar5 = *unaff_x24;
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0185daa4(lVar5);
      uVar1 = *(ushort *)(*unaff_x24 + 0x135);
      lVar6 = *unaff_x24;
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xe8);
    if ((uVar1 & 1) == 0) {
      FUN_0185daa4(lVar6);
    }
    (*pcVar7)(lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


