/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager.<>c__DisplayClass4_0$$<ProcessType>b__1
ENTRY_POINT: 028ebdb4
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


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_0__<ProcessType>b__1
               (long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  code *pcVar9;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000048;
  
  pcVar9 = (code *)**(undefined8 **)(*(long *)(param_2 + 0xc0) + 0x2b0);
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_0185daa4(param_1);
  }
  (*pcVar9)();
  lVar4 = *unaff_x20;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar4 = *unaff_x20;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
  if (lVar4 == 0) goto LAB_028ec144;
  lVar7 = *unaff_x20;
  uVar1 = *unaff_x19;
  uVar2 = unaff_x19[1];
  uVar3 = *(ushort *)(lVar7 + 0x135);
  lVar5 = lVar7;
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_0185daa4(lVar7);
    uVar3 = *(ushort *)(*unaff_x20 + 0x135);
    lVar5 = *unaff_x20;
  }
  uVar8 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x2b8);
  if ((uVar3 & 1) == 0) {
    lVar5 = FUN_0185daa4(lVar5);
  }
  in_stack_00000038 = &stack0x00000010;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x2b8);
  in_stack_00000030 = &stack0x00000020;
  in_stack_00000020 = uVar1;
  in_stack_00000028 = uVar2;
  (**(code **)(lVar5 + 0x10))(uVar8,lVar5,lVar4,&stack0x00000030,(long)&stack0x00000048 + 4);
  if (in_stack_00000048._4_1_ != '\0') {
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
    if (lVar4 == 0) goto LAB_028ec144;
    lVar7 = *unaff_x20;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    uVar3 = *(ushort *)(lVar7 + 0x135);
    lVar5 = lVar7;
    if ((uVar3 & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
      uVar3 = *(ushort *)(*unaff_x20 + 0x135);
      lVar5 = *unaff_x20;
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x2c0);
    if ((uVar3 & 1) == 0) {
      lVar5 = FUN_0185daa4(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x2c0);
    in_stack_00000030 = &stack0x00000020;
    in_stack_00000020 = uVar1;
    in_stack_00000028 = uVar2;
    (**(code **)(lVar5 + 0x10))(uVar8,lVar5,lVar4,&stack0x00000030,(long)&stack0x00000048 + 4);
    lVar4 = in_stack_00000010;
    if (in_stack_00000010 == 0) goto LAB_028ec144;
    lVar7 = *unaff_x20;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    uVar3 = *(ushort *)(lVar7 + 0x135);
    lVar5 = lVar7;
    if ((uVar3 & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
      uVar3 = *(ushort *)(*unaff_x20 + 0x135);
      lVar5 = *unaff_x20;
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x138);
    if ((uVar3 & 1) == 0) {
      lVar5 = FUN_0185daa4(lVar5);
    }
    (*pcVar9)(lVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x138));
  }
  lVar4 = *unaff_x20;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar4 = *unaff_x20;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
  if (lVar4 == 0) {
LAB_028ec144:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar6 = FUN_021722c0(lVar4,*unaff_x19,unaff_x19[1],&stack0x00000008,
                       *(undefined8 *)PTR_DAT_037fb6a8);
  if ((uVar6 & 1) != 0) {
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
    if ((lVar4 == 0) ||
       (FUN_02171ca8(lVar4,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb698),
       in_stack_00000008 == 0)) goto LAB_028ec144;
    (**(code **)(in_stack_00000008 + 0x18))
              (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
               *(undefined8 *)(in_stack_00000008 + 0x28));
  }
  return;
}


