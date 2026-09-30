/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.LayoutStyle$$get_RightMargin
ENTRY_POINT: 028e8bf4
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_LayoutStyle__get_RightMargin(long param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *unaff_x20;
  code *pcVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long in_stack_00000010;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0185daa4();
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
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
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  if (lVar2 != 0) {
    lVar7 = *unaff_x24;
    uVar5 = *unaff_x20;
    uVar6 = unaff_x20[1];
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar3 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
      uVar1 = *(ushort *)(*unaff_x24 + 0x135);
      lVar3 = *unaff_x24;
    }
    uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xd0);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0185daa4(lVar3);
    }
    in_stack_00000028 = &stack0x00000010;
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xd0);
    in_stack_00000020 = &stack0x00000030;
    in_stack_00000030 = uVar5;
    in_stack_00000038 = uVar6;
    (**(code **)(lVar3 + 0x10))(uVar9,lVar3,lVar2,&stack0x00000020,(long)&stack0x00000048 + 4);
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
      lVar3 = *unaff_x24;
      uVar1 = *(ushort *)(lVar3 + 0x135);
      lVar2 = lVar3;
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_0185daa4(lVar3);
        uVar1 = *(ushort *)(*unaff_x24 + 0x135);
        lVar2 = *unaff_x24;
      }
      pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0xf0);
      if ((uVar1 & 1) == 0) {
        FUN_0185daa4(lVar2);
      }
      uVar4 = (*pcVar8)();
      if ((uVar4 & 1) == 0) {
        in_stack_00000038 = unaff_x20[1];
        in_stack_00000030 = *unaff_x20;
        uVar5 = thunk_FUN_01851c08(PTR_DAT_037f9268);
        thunk_FUN_018617ec(uVar5,&stack0x00000030);
        thunk_FUN_01851c08(PTR_DAT_037fb618);
        uVar5 = FUN_02a50b00();
        thunk_FUN_01851c08(PTR_DAT_037f8d50);
        uVar6 = thunk_FUN_01861bbc();
        FUN_02bcf6b4(uVar6,uVar5);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar6);
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
        lVar7 = *unaff_x24;
        uVar5 = *unaff_x20;
        uVar6 = unaff_x20[1];
        uVar1 = *(ushort *)(lVar7 + 0x135);
        lVar3 = lVar7;
        if ((uVar1 & 1) == 0) {
          lVar7 = FUN_0185daa4(lVar7);
          uVar1 = *(ushort *)(*unaff_x24 + 0x135);
          lVar3 = *unaff_x24;
        }
        uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xf8);
        if ((uVar1 & 1) == 0) {
          lVar3 = FUN_0185daa4(lVar3);
        }
        in_stack_00000028 = (undefined8 *)&stack0x00000008;
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xf8);
        in_stack_00000020 = &stack0x00000030;
        in_stack_00000030 = uVar5;
        in_stack_00000038 = uVar6;
        (**(code **)(lVar3 + 0x10))(uVar9,lVar3,lVar2,&stack0x00000020,(long)&stack0x00000048 + 4);
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
            lVar3 = *unaff_x24;
            uVar1 = *(ushort *)(lVar3 + 0x135);
            lVar2 = lVar3;
            if ((uVar1 & 1) == 0) {
              lVar3 = FUN_0185daa4(lVar3);
              uVar1 = *(ushort *)(*unaff_x24 + 0x135);
              lVar2 = *unaff_x24;
            }
            pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x108);
            if ((uVar1 & 1) == 0) {
              FUN_0185daa4(lVar2);
            }
            (*pcVar8)();
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
      lVar7 = *unaff_x24;
      uVar1 = *(ushort *)(lVar7 + 0x135);
      lVar3 = lVar7;
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_0185daa4(lVar7);
        uVar1 = *(ushort *)(*unaff_x24 + 0x135);
        lVar3 = *unaff_x24;
      }
      pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xe8);
      if ((uVar1 & 1) == 0) {
        FUN_0185daa4(lVar3);
      }
      (*pcVar8)(lVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


