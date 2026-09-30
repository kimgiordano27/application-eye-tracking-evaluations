/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$get_HierarchyFlex
ENTRY_POINT: 06dda528
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dda9c0) */

long Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__get_HierarchyFlex(code *param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long *unaff_x20;
  undefined4 unaff_w21;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 *in_stack_00000008;
  long in_stack_00000010;
  char in_stack_00000028;
  
  (*param_1)();
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *unaff_x20;
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03d8f26c();
    lVar4 = *unaff_x20;
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  uVar8 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
  in_stack_00000008 = &stack0x0000002c;
  (**(code **)(lVar5 + 0x10))(uVar8,lVar5,lVar3,&stack0x00000008,&stack0x00000010);
  lVar3 = in_stack_00000010;
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *unaff_x20;
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03d8f26c();
    lVar4 = *unaff_x20;
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  iVar2 = (*pcVar9)(lVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40));
  if (iVar2 == 0) {
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar4 = *unaff_x20;
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar5 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c();
      lVar4 = *unaff_x20;
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    in_stack_00000008 = &stack0x0000002c;
    (**(code **)(lVar5 + 0x10))(uVar8,lVar5,lVar3,&stack0x00000008,&stack0x00000010);
    lVar3 = in_stack_00000010;
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    puVar6 = (undefined1 *)FUN_03d2d394(lVar5,unaff_w21);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar4 = *unaff_x20;
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar5 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c();
      lVar4 = *unaff_x20;
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x50);
    in_stack_00000008 = puVar6;
    (**(code **)(lVar5 + 0x10))(uVar8,lVar5,lVar3,&stack0x00000008,puVar6);
  }
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    lVar4 = *unaff_x20;
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar5 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c();
      lVar4 = *unaff_x20;
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    in_stack_00000008 = &stack0x0000002c;
    (**(code **)(lVar5 + 0x10))(uVar8,lVar5,lVar3,&stack0x00000008,&stack0x00000010);
    lVar3 = in_stack_00000010;
    if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar4 = *unaff_x20;
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar5 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c();
      lVar4 = *unaff_x20;
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x60);
    (**(code **)(lVar5 + 0x10))(uVar8,lVar5,lVar3,0,&stack0x00000010);
    lVar3 = in_stack_00000010;
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar5 != 0) {
      lVar7 = *unaff_x20;
      uVar1 = *(ushort *)(lVar7 + 0x135);
      lVar4 = lVar7;
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_03d8f26c();
        lVar7 = *unaff_x20;
        uVar1 = *(ushort *)(lVar7 + 0x135);
      }
      uVar8 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x70);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar4 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x70);
      in_stack_00000008 = (undefined1 *)lVar3;
      (**(code **)(lVar4 + 0x10))(uVar8,lVar4,lVar5,&stack0x00000008,&stack0x00000010);
      if (in_stack_00000028 != '\0') {
        thunk_FUN_03d180a8();
      }
      return lVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


