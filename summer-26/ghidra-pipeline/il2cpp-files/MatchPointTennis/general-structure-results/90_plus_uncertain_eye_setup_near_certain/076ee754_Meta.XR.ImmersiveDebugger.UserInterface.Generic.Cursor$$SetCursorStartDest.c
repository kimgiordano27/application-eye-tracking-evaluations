/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorStartDest
ENTRY_POINT: 076ee754
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorStartDest(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  ulong uVar9;
  ulong unaff_x21;
  long *plVar10;
  ulong unaff_x22;
  undefined4 unaff_w23;
  long *unaff_x24;
  undefined4 unaff_w25;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  int iStack0000000000000010;
  int iStack0000000000000014;
  undefined8 in_stack_00000018;
  
  while (lVar8 = *(long *)(unaff_x19 + 0x48), lVar8 != 0) {
    if (*(uint *)(lVar8 + 0x18) <= unaff_x22) goto LAB_076eeab8;
    uVar11 = *(undefined8 *)(lVar8 + unaff_x20);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094d4178(unaff_x24,uVar11,uVar13,unaff_w25,0);
    plVar12 = *(long **)(unaff_x19 + 0x48);
    if (plVar12 == (long *)0x0) break;
    if (*(uint *)(plVar12 + 3) <= unaff_x22) goto LAB_076eeab8;
    unaff_x24 = *(long **)((long)plVar12 + unaff_x20);
    unaff_x22 = unaff_x22 + 1;
    unaff_x20 = unaff_x20 + 8;
    if (unaff_x21 == unaff_x22) {
      if (iStack0000000000000010 < 2) goto LAB_076ee914;
      uVar1 = iStack0000000000000014 - 2;
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__LateUpdate;
    }
    if (unaff_x24 == (long *)0x0) break;
    iVar2 = (**(code **)(*unaff_x24 + 0x188))(unaff_x24,*(undefined8 *)(*unaff_x24 + 400));
    iVar3 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    lVar8 = FUN_0950b9c0(iVar2 >> 1,iVar3 >> 1,0,unaff_w23,0);
    if (plVar12 == (long *)0x0) break;
    if ((lVar8 != 0) &&
       (lVar6 = thunk_FUN_04485110(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar6 == 0))
    goto LAB_076eeabc;
    if (*(uint *)(plVar12 + 3) <= unaff_x22) goto LAB_076eeab8;
    *(long *)((long)plVar12 + unaff_x20) = lVar8;
    thunk_FUN_044bb4b4((long *)((long)plVar12 + unaff_x20),lVar8);
    if (unaff_x20 == 0x20) {
      unaff_w25 = 2;
      if (*(char *)(unaff_x19 + 0x31) != '\0') {
        unaff_w25 = 3;
      }
    }
    else {
      unaff_w25 = 4;
    }
  }
  goto LAB_076eeab4;
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__LateUpdate:
  do {
    if (*(uint *)(plVar12 + 3) <= uVar1) goto LAB_076eeab8;
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    uVar9 = (ulong)uVar1;
    plVar12 = (long *)plVar12[uVar9 + 4];
    FUN_094e9b40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f600,plVar12,0);
    if (plVar12 == (long *)0x0) break;
    plVar10 = *(long **)(unaff_x19 + 0x50);
    uVar4 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
    uVar5 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
    lVar8 = FUN_0950b9c0(uVar4,uVar5,0,unaff_w23,0);
    if (plVar10 == (long *)0x0) break;
    if ((lVar8 != 0) &&
       (lVar6 = thunk_FUN_04485110(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
LAB_076eeabc:
      uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar11,0);
    }
    if (*(uint *)(plVar10 + 3) <= uVar1) goto LAB_076eeab8;
    plVar10[uVar9 + 4] = lVar8;
    thunk_FUN_044bb4b4(plVar10 + uVar9 + 4,lVar8);
    lVar8 = *(long *)(unaff_x19 + 0x50);
    uVar4 = 5;
    if (*(char *)(unaff_x19 + 0x30) != '\0') {
      uVar4 = 6;
    }
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_076eeab8;
    uVar11 = *(undefined8 *)(lVar8 + uVar9 * 8 + 0x20);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094d4178(unaff_x24,uVar11,uVar13,uVar4,0);
    lVar8 = *(long *)(unaff_x19 + 0x50);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_076eeab8;
    unaff_x24 = *(long **)(lVar8 + uVar9 * 8 + 0x20);
    if ((int)uVar1 < 1) goto LAB_076ee914;
    plVar12 = *(long **)(unaff_x19 + 0x48);
    uVar1 = uVar1 - 1;
  } while (plVar12 != (long *)0x0);
  goto LAB_076eeab4;
LAB_076ee914:
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_094e9b40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f600,in_stack_00000018,0);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar4 = 7;
    if (*(char *)(unaff_x19 + 0x30) != '\0') {
      uVar4 = 8;
    }
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_044a54b4(7);
    }
    FUN_094d4178(unaff_x24,in_stack_00000008,uVar11,uVar4,0);
    uVar9 = 0;
    lVar8 = 0x20;
    while (lVar6 = *(long *)(unaff_x19 + 0x48), lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_076eeab8:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      uVar11 = *(undefined8 *)(lVar6 + lVar8);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar7 = FUN_09531730(uVar11,0,0);
      if ((uVar7 & 1) != 0) {
        lVar6 = *(long *)(unaff_x19 + 0x48);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_076eeab8;
        FUN_0950a138(*(undefined8 *)(lVar6 + lVar8),0);
      }
      lVar6 = *(long *)(unaff_x19 + 0x50);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_076eeab8;
      uVar11 = *(undefined8 *)(lVar6 + lVar8);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar7 = FUN_09531730(uVar11,0,0);
      if ((uVar7 & 1) != 0) {
        lVar6 = *(long *)(unaff_x19 + 0x50);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_076eeab8;
        FUN_0950a138(*(undefined8 *)(lVar6 + lVar8),0);
      }
      lVar6 = *(long *)(unaff_x19 + 0x48);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_076eeab8;
      *(undefined8 *)(lVar6 + lVar8) = 0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar6 + lVar8),0);
      lVar6 = *(long *)(unaff_x19 + 0x50);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_076eeab8;
      *(undefined8 *)(lVar6 + lVar8) = 0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar6 + lVar8),0);
      lVar8 = lVar8 + 8;
      uVar9 = uVar9 + 1;
      if (lVar8 == 0xa0) {
        FUN_0950a138(in_stack_00000000,0);
        return;
      }
    }
  }
LAB_076eeab4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


