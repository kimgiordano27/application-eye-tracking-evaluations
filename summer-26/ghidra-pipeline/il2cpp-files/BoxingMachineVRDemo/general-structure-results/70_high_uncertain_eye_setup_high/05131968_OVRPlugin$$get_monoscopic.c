/*
FUNCTION_NAME: OVRPlugin$$get_monoscopic
ENTRY_POINT: 05131968
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_monoscopic(void)

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
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_067609b8);
  FUN_02d6084c(PTR_DAT_0676aa88);
  FUN_02d6084c(PTR_DAT_0676aa90);
  FUN_02d6084c(PTR_DAT_0676aa98);
  FUN_02d6084c(PTR_DAT_0676aaa0);
  FUN_02d6084c(PTR_DAT_06779650);
  *(undefined1 *)(unaff_x20 + 0xc6b) = 1;
  puVar1 = PTR_DAT_067609b8;
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
      goto LAB_05131af0;
    }
    FUN_050f136c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_06779650,0);
    plVar4 = *(long **)(unaff_x19 + 8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar2 = (**(code **)(*plVar4 + 0x268))(plVar4,*(undefined8 *)(*plVar4 + 0x270));
    plVar4 = *(long **)(unaff_x19 + 8);
    unaff_x19[0x10] = iVar2;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar5 = (**(code **)(*plVar4 + 0x188))
                      (plVar4,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(*plVar4 + 400));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    _in_stack_00000010 = FUN_042a16bc(lVar5,0,*(undefined8 *)PTR_DAT_0676aaa0);
    uVar3 = FUN_0467cf10(&stack0x00000010,*(undefined8 *)PTR_DAT_0676aa98);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000010;
      thunk_FUN_02dd37b4(unaff_x19 + 0x12,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_032e5e38(unaff_x19 + 2,&stack0x00000010);
      return;
    }
  }
  uVar3 = FUN_0467cf5c(&stack0x00000010,*(undefined8 *)PTR_DAT_0676aa90);
  uVar10 = *(undefined8 *)(unaff_x19 + 8);
  if ((uVar3 & 1) == 0) {
    lVar5 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_04f8e414(0);
    if (lVar9 != 0) {
      plVar4 = (long *)thunk_FUN_02d709fc(lVar9,0);
      if (plVar4 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06781150);
        uVar6 = FUN_050f0ec0(uVar8,uVar6,uVar7,0);
        uVar10 = FUN_05095eec(uVar10,uVar6,0);
        uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06781358);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar10,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar5 = FUN_0512c3a0(lVar9,uVar10,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 10)
                      );
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  auVar11 = FUN_0507b064(lVar5,0,0);
  uVar3 = FUN_04f2d31c();
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x16) = auVar11;
    thunk_FUN_02dd37b4(unaff_x19 + 0x16,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_032e830c(unaff_x19 + 2);
    return;
  }
LAB_05131af0:
  FUN_04f2d338();
  plVar4 = *(long **)(unaff_x19 + 8);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  iVar2 = (**(code **)(*plVar4 + 0x268))(plVar4,*(undefined8 *)(*plVar4 + 0x270));
  if (iVar2 <= unaff_x19[0x10]) {
    *unaff_x19 = -2;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_04f2db0c(unaff_x19 + 2,0);
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 8);
  lVar5 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar6 = FUN_04f8e414(0);
  if (lVar9 != 0) {
    plVar4 = (long *)thunk_FUN_02d709fc(lVar9,0);
    if (plVar4 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06781158);
      uVar6 = FUN_050f0ec0(uVar8,uVar6,uVar7,0);
      uVar10 = FUN_05095eec(uVar10,uVar6,0);
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06781358);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar10,uVar6);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


