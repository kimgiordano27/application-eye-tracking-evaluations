/*
FUNCTION_NAME: OVRManager$$PrepareCameraForSpaceWarp
ENTRY_POINT: 05732928
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__PrepareCameraForSpaceWarp(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d3b5e0);
  FUN_02f07e70(PTR_DAT_06d3b5e8);
  FUN_02f07e70(PTR_DAT_06d3b5f0);
  FUN_02f07e70(PTR_DAT_06d3b5f8);
  FUN_02f07e70(PTR_DAT_06d4dbe0);
  *(undefined1 *)(unaff_x20 + 0x8d3) = 1;
  puVar1 = PTR_DAT_06d156d8;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar9 = *(long *)(unaff_x19 + 0xc);
  if (*unaff_x19 == 0) {
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*unaff_x19 == 1) {
      unaff_x19[0x16] = 0;
      unaff_x19[0x17] = 0;
      unaff_x19[0x18] = 0;
      unaff_x19[0x19] = 0;
      *unaff_x19 = -1;
      _in_stack_00000010 = ZEXT816(0);
      goto LAB_05732aa4;
    }
    FUN_056f1adc(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_06d4dbe0,0);
    plVar4 = *(long **)(unaff_x19 + 8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    iVar2 = (**(code **)(*plVar4 + 0x268))(plVar4,*(undefined8 *)(*plVar4 + 0x270));
    plVar4 = *(long **)(unaff_x19 + 8);
    unaff_x19[0x10] = iVar2;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar5 = (**(code **)(*plVar4 + 0x188))
                      (plVar4,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(*plVar4 + 400));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    _in_stack_00000010 = FUN_04697d3c(lVar5,0,*(undefined8 *)PTR_DAT_06d3b5f8);
    uVar3 = FUN_04a8bd80(&stack0x00000010,*(undefined8 *)PTR_DAT_06d3b5f0);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000010;
      thunk_FUN_02f411dc(unaff_x19 + 0x12,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_03787354(unaff_x19 + 2,&stack0x00000010);
      return;
    }
  }
  uVar3 = FUN_04a8bdcc(&stack0x00000010,*(undefined8 *)PTR_DAT_06d3b5e8);
  uVar10 = *(undefined8 *)(unaff_x19 + 8);
  if ((uVar3 & 1) == 0) {
    lVar5 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar6 = FUN_055b5920(0);
    if (lVar9 != 0) {
      plVar4 = (long *)thunk_FUN_02ebbee0(lVar9,0);
      if (plVar4 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d58808);
        uVar6 = FUN_056f1630(uVar8,uVar6,uVar7,0);
        uVar10 = FUN_05695e04(uVar10,uVar6,0);
        uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d589f0);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar10,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = FUN_0572d310(lVar9,uVar10,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 10)
                      );
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  auVar11 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar5,0,0);
  uVar3 = FUN_0551f17c();
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x16) = auVar11;
    thunk_FUN_02f411dc(unaff_x19 + 0x16,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_037893cc(unaff_x19 + 2);
    return;
  }
LAB_05732aa4:
  FUN_0551f198();
  plVar4 = *(long **)(unaff_x19 + 8);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  iVar2 = (**(code **)(*plVar4 + 0x268))(plVar4,*(undefined8 *)(*plVar4 + 0x270));
  if (iVar2 <= unaff_x19[0x10]) {
    *unaff_x19 = -2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0551fb78(unaff_x19 + 2,0);
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 8);
  lVar5 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar6 = FUN_055b5920(0);
  if (lVar9 != 0) {
    plVar4 = (long *)thunk_FUN_02ebbee0(lVar9,0);
    if (plVar4 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d58810);
      uVar6 = FUN_056f1630(uVar8,uVar6,uVar7,0);
      uVar10 = FUN_05695e04(uVar10,uVar6,0);
      uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d589f0);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar10,uVar6);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


