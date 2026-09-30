/*
FUNCTION_NAME: OVRManager$$add_HMDUnmounted
ENTRY_POINT: 05117e74
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05118044) */

void OVRManager__add_HMDUnmounted(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  char cStack0000000000000004;
  undefined8 in_stack_00000008;
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_06776bc0);
  FUN_02d6084c(PTR_DAT_067809f0);
  *(undefined1 *)(unaff_x24 + 0xba6) = 1;
  puVar1 = PTR_DAT_0675eef8;
  in_stack_00000008 = 0;
  cStack0000000000000004 = 0;
  plVar4 = (long *)thunk_FUN_02d9d534(*unaff_x22);
  FUN_04e9624c(plVar4,0);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar2 = PTR_DAT_067809f0;
  in_stack_00000008 = FUN_04fe8d24(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
  uVar5 = FUN_04f8e414(0);
  uVar5 = FUN_04fe9cb8(&stack0x00000008,*(undefined8 *)puVar2,uVar5,0);
  puVar3 = PTR_DAT_067809e8;
  puVar2 = PTR_DAT_06776bc0;
  puVar1 = PTR_DAT_06760790;
  if (plVar4 != (long *)0x0) {
    FUN_04e97bc4(plVar4,uVar5,0);
    FUN_04e97bc4(plVar4,*(undefined8 *)puVar1,0);
    uVar5 = thunk_FUN_02d9d164(*(undefined8 *)puVar3);
    uVar5 = FUN_0503c9d8(uVar5,*(undefined8 *)puVar2,0);
    FUN_04e97bc4(plVar4,uVar5,0);
    FUN_04e97bc4(plVar4,*(undefined8 *)puVar1,0);
    FUN_04e97bc4(plVar4);
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
    cStack0000000000000004 = '\0';
    FUN_0506ac34(uVar7,&stack0x00000004,0);
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (999 < *(int *)(lVar6 + 0x20)) {
      FUN_03f8d1d0(lVar6,*(undefined8 *)PTR_DAT_0676c430);
      lVar6 = *(long *)(unaff_x19 + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
    }
    FUN_03f8d040(lVar6,uVar5,*(undefined8 *)PTR_DAT_0676c408);
    if (cStack0000000000000004 != '\0') {
      thunk_FUN_02d6ec70(uVar7,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


