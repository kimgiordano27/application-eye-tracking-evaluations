/*
FUNCTION_NAME: OVRManager$$set_runtimeSettings
ENTRY_POINT: 0572c690
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_runtimeSettings(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  int *unaff_x19;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined4 uStack000000000000002c;
  
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  iVar1 = *unaff_x19;
  if (iVar1 == 0) {
    _uStack0000000000000010 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
LAB_0572c6f4:
    uVar4 = FUN_04a8bdcc(&stack0x00000010,*(undefined8 *)PTR_DAT_06d3b5e8);
    if ((uVar4 & 1) == 0) {
      uVar9 = *(undefined8 *)(unaff_x19 + 8);
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d587f8);
      uVar8 = FUN_05695e04(uVar9,uVar8,0);
      uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d58838);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar8,uVar9);
    }
LAB_0572c764:
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar3 = FUN_056953b4(*(long *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    auVar10 = FUN_04697d3c(lVar3,0,*(undefined8 *)PTR_DAT_06d3b5f8);
    _uStack0000000000000010 = auVar10;
    uVar4 = FUN_04a8bd80(&stack0x00000010,*(undefined8 *)PTR_DAT_06d3b5f0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = _uStack0000000000000010;
      thunk_FUN_02f411dc(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)PTR_DAT_06d58758 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_034f9d0c(unaff_x19 + 2,&stack0x00000010);
      return;
    }
  }
  else {
    if (iVar1 != 1) {
                    /* try { // try from 0572c6ac to 0582c6b3 has its CatchHandler @ 0572cb60 */
      if (iVar1 == 2) {
        _uStack0000000000000000 = *(undefined1 (*) [16])(unaff_x19 + 0x14);
        unaff_x19[0x14] = 0;
        unaff_x19[0x15] = 0;
        unaff_x19[0x16] = 0;
        unaff_x19[0x17] = 0;
        *unaff_x19 = -1;
        _uStack0000000000000010 = ZEXT816(0);
        goto LAB_0572c8bc;
      }
      plVar2 = *(long **)(unaff_x19 + 8);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      iVar1 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (iVar1 == 0) {
        plVar2 = *(long **)(unaff_x19 + 8);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar3 = (**(code **)(*plVar2 + 0x188))
                          (plVar2,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(*plVar2 + 400));
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        _uStack0000000000000010 = FUN_04697d3c(lVar3,0,*(undefined8 *)PTR_DAT_06d3b5f8);
        uVar4 = FUN_04a8bd80(&stack0x00000010,*(undefined8 *)PTR_DAT_06d3b5f0);
        if ((uVar4 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined1 (*) [16])(unaff_x19 + 0x10) = _uStack0000000000000010;
          thunk_FUN_02f411dc(unaff_x19 + 0x10,0);
          if (*(int *)(*(long *)PTR_DAT_06d58758 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_034f9d0c(unaff_x19 + 2,&stack0x00000010);
          return;
        }
        goto LAB_0572c6f4;
      }
      goto LAB_0572c764;
    }
    _uStack0000000000000010 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
  }
  FUN_04a8bdcc(&stack0x00000010,*(undefined8 *)PTR_DAT_06d3b5e8);
  plVar2 = *(long **)(unaff_x19 + 8);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  iVar1 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
  plVar2 = *(long **)(unaff_x19 + 8);
  if (iVar1 != 3) {
    lVar3 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar8 = FUN_055b5920(0);
    plVar6 = *(long **)(unaff_x19 + 8);
    if (plVar6 != (long *)0x0) {
      uStack000000000000002c =
           (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
      uVar9 = thunk_FUN_02ef1438(uVar9,&stack0x0000002c);
      uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d587f0);
      uVar8 = FUN_056f1630(uVar7,uVar8,uVar9,0);
      uVar8 = FUN_05695e04(plVar2,uVar8,0);
      uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d58838);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar8,uVar9);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250));
  lVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58778);
  if ((plVar2 != (long *)0x0) && (*plVar2 != *(long *)PTR_DAT_06d02350)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440(plVar2);
  }
  FUN_0572b548(lVar3,plVar2);
  plVar2 = (long *)(unaff_x19 + 0xe);
  *plVar2 = lVar3;
  thunk_FUN_02f411dc(plVar2,lVar3);
  lVar3 = *(long *)(unaff_x19 + 0xe);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar9 = *(undefined8 *)(unaff_x19 + 0xc);
  uVar8 = thunk_FUN_02ef170c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_06d55150);
  FUN_0572c2dc(lVar3,uVar8,uVar9);
  if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = FUN_0572cc94(*plVar2,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0xc),
                       *(undefined8 *)(unaff_x19 + 10));
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  _uStack0000000000000000 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar3,0,0);
  uVar4 = FUN_0551f17c();
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 2;
    *(undefined1 (*) [16])(unaff_x19 + 0x14) = _uStack0000000000000000;
    thunk_FUN_02f411dc(unaff_x19 + 0x14,0);
    if (*(int *)(*(long *)PTR_DAT_06d58758 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_03500ad0(unaff_x19 + 2);
    return;
  }
LAB_0572c8bc:
  FUN_0551f198();
  piVar5 = unaff_x19 + 0xe;
  uVar8 = *(undefined8 *)piVar5;
  *unaff_x19 = -2;
  piVar5[0] = 0;
  piVar5[1] = 0;
  thunk_FUN_02f411dc(piVar5,0);
  if (*(int *)(*(long *)PTR_DAT_06d58758 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_043b2468(unaff_x19 + 2,uVar8,*(undefined8 *)PTR_DAT_06d58830);
  return;
}


