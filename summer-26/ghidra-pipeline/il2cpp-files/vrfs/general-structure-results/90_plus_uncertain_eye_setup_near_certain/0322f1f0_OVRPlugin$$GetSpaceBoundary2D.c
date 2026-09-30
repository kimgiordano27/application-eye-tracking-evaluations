/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 0322f1f0
PROGRAM: vrfs-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin__GetSpaceBoundary2D(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *unaff_x21;
  long lVar9;
  long *unaff_x23;
  undefined1 auVar10 [16];
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  thunk_FUN_0159f088(PTR_DAT_06db26a0);
  thunk_FUN_0159f088(PTR_DAT_06deb8b0);
  *(undefined1 *)(unaff_x20 + 0xff4) = 1;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  plVar8 = (long *)(unaff_x19 + 0x40);
  lVar9 = *plVar8;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar6 = FUN_051d94d4(lVar9,0,0);
  puVar2 = PTR_DAT_06d8a578;
  if ((uVar6 & 1) != 0) {
    if (unaff_x21 == (long *)0x0) goto LAB_0322f4d0;
    uVar4 = (**(code **)(*unaff_x21 + 0x188))();
    uVar5 = (**(code **)(*unaff_x21 + 0x1a8))();
    plVar7 = (long *)thunk_FUN_015d056c(*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_06deb8b0;
    if (plVar7 == (long *)0x0) goto LAB_0322f4d0;
    FUN_0487d9a0(plVar7,uVar4,uVar5,0x30,0,0);
    (**(code **)(*plVar7 + 0x1d8))(plVar7,5,*(undefined8 *)(*plVar7 + 0x1e0));
    FUN_0487c4c4(plVar7,2,0);
    FUN_051e05b0(plVar7,*(undefined8 *)puVar2,0);
    FUN_0487cc60(plVar7,0,0);
    *plVar8 = (long)plVar7;
    thunk_FUN_01656ef8(plVar8,plVar7);
    puVar3 = PTR_DAT_06dc4870;
    puVar2 = PTR_DAT_06db26a0;
    if (*plVar8 == 0) goto LAB_0322f4d0;
    FUN_0487c970(*plVar8,0);
    FUN_048855dc(*(undefined8 *)puVar2,*plVar8,0);
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = 0;
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    in_stack_00000098 = 0;
    in_stack_00000090 = 0;
    lVar9 = FUN_0160edfc(*(undefined8 *)puVar3,1);
    if ((*plVar8 == 0) || (auVar10 = thunk_FUN_0487c75c(*plVar8,0), lVar9 == 0)) goto LAB_0322f4d0;
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_0322f4d4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    *(undefined1 (*) [16])(lVar9 + 0x20) = auVar10;
    in_stack_00000080 = lVar9;
    thunk_FUN_01656ef8(&stack0x00000080,lVar9);
    puVar2 = PTR_DAT_06e575f0;
    if (*plVar8 == 0) goto LAB_0322f4d0;
    _in_stack_00000088 = thunk_FUN_0487c7f4(*plVar8,0);
    in_stack_000000a0 = CONCAT44(in_stack_000000a0._4_4_,0xffffffff);
    lVar9 = FUN_0160edfc(*(undefined8 *)puVar2,1);
    puVar2 = PTR_DAT_06e44f90;
    if (lVar9 == 0) goto LAB_0322f4d0;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0322f4d4;
    *(undefined4 *)(lVar9 + 0x20) = 2;
    in_stack_000000a8 = lVar9;
    thunk_FUN_01656ef8(&stack0x000000a8);
    in_stack_000000b0 = FUN_0160edfc(*(undefined8 *)puVar2,1);
    thunk_FUN_01656ef8(&stack0x000000b0);
    uVar1 = _DAT_053e2888;
    in_stack_00000098 = 0xffffffff00000000;
    in_stack_000000b8 = _DAT_053e2888;
    *(undefined8 *)(unaff_x19 + 0x60) = 0xffffffff00000000;
    *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000090;
    *(long *)(unaff_x19 + 0x70) = in_stack_000000a8;
    *(undefined8 *)(unaff_x19 + 0x68) = in_stack_000000a0;
    *(undefined8 *)(unaff_x19 + 0x80) = uVar1;
    *(undefined8 *)(unaff_x19 + 0x78) = in_stack_000000b0;
    *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000088;
    *(long *)(unaff_x19 + 0x48) = in_stack_00000080;
    thunk_FUN_01656ef8(unaff_x19 + 0x48,0);
  }
  if (*(int *)(*(long *)PTR_DAT_06db0370 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_0487f954();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_04889200(*(long *)(unaff_x19 + 0x38),0,0);
    FUN_048806dc(0,3,2,0);
    return;
  }
LAB_0322f4d0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


