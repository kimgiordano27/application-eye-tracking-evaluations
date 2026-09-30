/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ComponentItem$$get_Valid
ENTRY_POINT: 028f26a8
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ComponentItem__get_Valid(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar5;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(param_2 + 0xb8) + 0x38);
  if (lVar5 == 0) goto LAB_028f2a24;
  lVar3 = *unaff_x20;
  uVar1 = *unaff_x19;
  uVar2 = unaff_x19[1];
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 028f26cc to 029f26d3 has its CatchHandler @ 028f2780 */
    lVar3 = FUN_0185daa4();
  }
                    /* try { // try from 028f26d4 to 029f2757 has its CatchHandler @ 028f245c */
  uVar4 = FUN_021722c0(lVar5,uVar1,uVar2,&stack0x00000018,
                       *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x290));
  if ((uVar4 & 1) != 0) {
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
    if (lVar5 == 0) goto LAB_028f2a24;
    lVar3 = *unaff_x20;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    FUN_02171ca8(lVar5,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2a0));
    lVar5 = in_stack_00000018;
    if (in_stack_00000018 == 0) goto LAB_028f2a24;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    (**(code **)(lVar5 + 0x18))
              (*(undefined8 *)(lVar5 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar5 + 0x28));
  }
  lVar5 = *unaff_x20;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar5 = *unaff_x20;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
  if (lVar5 == 0) goto LAB_028f2a24;
  lVar3 = *unaff_x20;
  uVar1 = *unaff_x19;
  uVar2 = unaff_x19[1];
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  uVar4 = FUN_021722c0(lVar5,uVar1,uVar2,&stack0x00000010,
                       *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2b8));
  if ((uVar4 & 1) != 0) {
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
    if (lVar5 == 0) goto LAB_028f2a24;
    lVar3 = *unaff_x20;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    FUN_02171ca8(lVar5,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2c0));
    lVar5 = in_stack_00000010;
    if (in_stack_00000010 == 0) goto LAB_028f2a24;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    (**(code **)(lVar5 + 0x18))
              (*(undefined8 *)(lVar5 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar5 + 0x28));
  }
  lVar5 = *unaff_x20;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar5 = *unaff_x20;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
  if (lVar5 != 0) {
    uVar4 = FUN_021722c0(lVar5,*unaff_x19,unaff_x19[1],&stack0x00000008,
                         *(undefined8 *)PTR_DAT_037fb6a8);
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
    if ((lVar5 != 0) &&
       (FUN_02171ca8(lVar5,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb698),
       in_stack_00000008 != 0)) {
      (**(code **)(in_stack_00000008 + 0x18))
                (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
                 *(undefined8 *)(in_stack_00000008 + 0x28));
      return;
    }
  }
LAB_028f2a24:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


