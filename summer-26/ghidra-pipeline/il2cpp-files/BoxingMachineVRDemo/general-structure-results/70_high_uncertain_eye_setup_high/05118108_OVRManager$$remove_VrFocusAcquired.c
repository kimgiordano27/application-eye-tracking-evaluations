/*
FUNCTION_NAME: OVRManager$$remove_VrFocusAcquired
ENTRY_POINT: 05118108
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05118288) */
/* WARNING: Removing unreachable block (ram,0x05118224) */
/* WARNING: Removing unreachable block (ram,0x05118248) */
/* WARNING: Removing unreachable block (ram,0x05118294) */

undefined8 OVRManager__remove_VrFocusAcquired(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 uVar8;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  char cStack000000000000004c;
  
  FUN_02d6084c(PTR_DAT_06780a10);
  FUN_02d6084c(PTR_DAT_06764da0);
  *(undefined1 *)(unaff_x19 + 0xba7) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  uVar8 = *(undefined8 *)(unaff_x21 + 0x18);
  cStack000000000000004c = '\0';
  FUN_0506ac34(uVar8,&stack0x0000004c,0);
  plVar5 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
  FUN_04e9624c(plVar5,0);
  if (*(long *)(unaff_x21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_03f8d0f8(&stack0x00000008,*(long *)(unaff_x21 + 0x10),*(undefined8 *)PTR_DAT_06780a10);
  puVar3 = PTR_DAT_06780a08;
  puVar2 = PTR_DAT_06780a00;
  puVar1 = PTR_DAT_067809f8;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  while (uVar6 = FUN_04a7bb1c(&stack0x00000020,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
    uVar7 = FUN_04a7bc0c(&stack0x00000020,*(undefined8 *)puVar3);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar4 = FUN_04e96dc8(plVar5,0);
    if (0 < iVar4) {
      FUN_04e9806c(plVar5,0);
    }
    FUN_04e97bc4(plVar5,uVar7,0);
  }
  FUN_04a7bb0c(&stack0x00000020,*(undefined8 *)puVar1);
  if (plVar5 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (cStack000000000000004c != '\0') {
      thunk_FUN_02d6ec70(uVar8,0);
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


