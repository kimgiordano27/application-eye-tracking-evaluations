/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Inspector$$UpdateInstanceState
ENTRY_POINT: 06dda388
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dda9c0) */

undefined8 *
Meta_XR_ImmersiveDebugger_UserInterface_Inspector__UpdateInstanceState(long param_1,long param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ushort *in_x9;
  long *unaff_x20;
  undefined4 unaff_w21;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  char cStack0000000000000028;
  char cStack000000000000002c;
  
  uVar7 = **(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x18);
  if ((*in_x9 & 1) == 0) {
    param_2 = FUN_03d8f26c();
  }
  in_stack_00000008 = &stack0x00000010;
  in_stack_00000010 = (undefined8 *)CONCAT44(in_stack_00000010._4_4_,unaff_w21);
  (**(code **)(*(long *)(*(long *)(param_2 + 0xc0) + 0x18) + 0x10))(uVar7);
  if (cStack000000000000002c == '\0') {
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar6 = *unaff_x20;
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c(lVar6);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    uVar7 = thunk_FUN_03d2ef40();
    lVar5 = *unaff_x20;
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03d8f26c();
      lVar5 = *unaff_x20;
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x28);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    (*pcVar8)(uVar7,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar5 = *unaff_x20;
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03d8f26c();
      lVar5 = *unaff_x20;
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    uVar9 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x30);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
    in_stack_00000010 = &stack0x00000008;
    in_stack_00000008 = (undefined8 *)CONCAT44(in_stack_00000008._4_4_,unaff_w21);
    in_stack_00000018 = uVar7;
    (**(code **)(lVar6 + 0x10))(uVar9,lVar6,lVar4,&stack0x00000010,uVar7);
  }
  lVar4 = *unaff_x20;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar4 = *unaff_x20;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar5 = *unaff_x20;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_03d8f26c();
    lVar5 = *unaff_x20;
    uVar1 = *(ushort *)(lVar5 + 0x135);
  }
  uVar7 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
  in_stack_00000008 = (undefined8 *)((long)&stack0x00000028 + 4);
  (**(code **)(lVar6 + 0x10))(uVar7,lVar6,lVar4,&stack0x00000008,&stack0x00000010);
  puVar2 = in_stack_00000010;
  if (in_stack_00000010 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar6 = *unaff_x20;
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar4 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03d8f26c();
    lVar6 = *unaff_x20;
    uVar1 = *(ushort *)(lVar6 + 0x135);
  }
  pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  iVar3 = (*pcVar8)(puVar2,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
  if (iVar3 == 0) {
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar5 = *unaff_x20;
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03d8f26c();
      lVar5 = *unaff_x20;
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    uVar7 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    in_stack_00000008 = (undefined8 *)((long)&stack0x00000028 + 4);
    (**(code **)(lVar6 + 0x10))(uVar7,lVar6,lVar4,&stack0x00000008,&stack0x00000010);
    puVar2 = in_stack_00000010;
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = FUN_03d2d394(lVar4,unaff_w21);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar5 = *unaff_x20;
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03d8f26c();
      lVar5 = *unaff_x20;
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    uVar7 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x50);
    in_stack_00000008 = (undefined8 *)lVar4;
    (**(code **)(lVar6 + 0x10))(uVar7,lVar6,puVar2,&stack0x00000008,lVar4);
  }
  lVar4 = *unaff_x20;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar4 = *unaff_x20;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar5 = *unaff_x20;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_03d8f26c();
    lVar5 = *unaff_x20;
    uVar1 = *(ushort *)(lVar5 + 0x135);
  }
  uVar7 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
  in_stack_00000008 = (undefined8 *)((long)&stack0x00000028 + 4);
  (**(code **)(lVar6 + 0x10))(uVar7,lVar6,lVar4,&stack0x00000008,&stack0x00000010);
  puVar2 = in_stack_00000010;
  if (in_stack_00000010 != (undefined8 *)0x0) {
    lVar6 = *unaff_x20;
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_03d8f26c();
      lVar6 = *unaff_x20;
      uVar1 = *(ushort *)(lVar6 + 0x135);
    }
    uVar7 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x60);
    (**(code **)(lVar4 + 0x10))(uVar7,lVar4,puVar2,0,&stack0x00000010);
    puVar2 = in_stack_00000010;
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar5 = *unaff_x20;
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03d8f26c();
      lVar5 = *unaff_x20;
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    uVar7 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x70);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x70);
    in_stack_00000008 = puVar2;
    (**(code **)(lVar6 + 0x10))(uVar7,lVar6,lVar4,&stack0x00000008,&stack0x00000010);
    if (cStack0000000000000028 != '\0') {
      thunk_FUN_03d180a8();
    }
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


