/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$get_ScrollView
ENTRY_POINT: 06dda504
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dda9c0) */

undefined8 * Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__get_ScrollView(long param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long *unaff_x20;
  undefined4 unaff_w21;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 *in_stack_00000008;
  undefined8 *puStack0000000000000010;
  char in_stack_00000028;
  
  puStack0000000000000010 = &stack0x00000008;
  in_stack_00000008 = (undefined8 *)CONCAT44(in_stack_00000008._4_4_,unaff_w21);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
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
  uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  lVar6 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
  in_stack_00000008 = (undefined8 *)&stack0x0000002c;
  (**(code **)(lVar6 + 0x10))(uVar8,lVar6,lVar4,&stack0x00000008,&stack0x00000010);
  puVar2 = puStack0000000000000010;
  if (puStack0000000000000010 == (undefined8 *)0x0) {
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
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  iVar3 = (*pcVar9)(puVar2,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
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
    uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    in_stack_00000008 = (undefined8 *)&stack0x0000002c;
    (**(code **)(lVar6 + 0x10))(uVar8,lVar6,lVar4,&stack0x00000008,&stack0x00000010);
    puVar2 = puStack0000000000000010;
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    puVar7 = (undefined1 *)FUN_03d2d394(lVar4,unaff_w21);
    if (puVar2 == (undefined8 *)0x0) {
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
    uVar8 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x50);
    in_stack_00000008 = (undefined8 *)puVar7;
    (**(code **)(lVar4 + 0x10))(uVar8,lVar4,puVar2,&stack0x00000008,puVar7);
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
  if (lVar4 != 0) {
    lVar5 = *unaff_x20;
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03d8f26c();
      lVar5 = *unaff_x20;
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    in_stack_00000008 = (undefined8 *)&stack0x0000002c;
    (**(code **)(lVar6 + 0x10))(uVar8,lVar6,lVar4,&stack0x00000008,&stack0x00000010);
    puVar2 = puStack0000000000000010;
    if (puStack0000000000000010 == (undefined8 *)0x0) {
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
    uVar8 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x60);
    (**(code **)(lVar4 + 0x10))(uVar8,lVar4,puVar2,0,&stack0x00000010);
    puVar2 = puStack0000000000000010;
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar4 != 0) {
      lVar5 = *unaff_x20;
      uVar1 = *(ushort *)(lVar5 + 0x135);
      lVar6 = lVar5;
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_03d8f26c();
        lVar5 = *unaff_x20;
        uVar1 = *(ushort *)(lVar5 + 0x135);
      }
      uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x70);
      if ((uVar1 & 1) == 0) {
        lVar5 = FUN_03d8f26c();
      }
      lVar6 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x70);
      in_stack_00000008 = puVar2;
      (**(code **)(lVar6 + 0x10))(uVar8,lVar6,lVar4,&stack0x00000008,&stack0x00000010);
      if (in_stack_00000028 != '\0') {
        thunk_FUN_03d180a8();
      }
      return puVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


