/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay
ENTRY_POINT: 076ee778
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 166
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_6
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorRay(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  ulong uVar9;
  ulong unaff_x21;
  long *plVar10;
  ulong unaff_x22;
  undefined4 unaff_w23;
  long *unaff_x24;
  undefined4 unaff_w25;
  undefined8 unaff_x26;
  long *plVar11;
  undefined8 uVar12;
  undefined8 unaff_x27;
  undefined8 uVar13;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  int iStack0000000000000010;
  int iStack0000000000000014;
  undefined8 in_stack_00000018;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094d4178(unaff_x24,unaff_x26,unaff_x27,unaff_w25,0);
    plVar11 = *(long **)(unaff_x19 + 0x48);
    if (plVar11 == (long *)0x0) goto LAB_076eeab4;
    if (*(uint *)(plVar11 + 3) <= unaff_x22) break;
    unaff_x24 = *(long **)((long)plVar11 + unaff_x20);
    unaff_x22 = unaff_x22 + 1;
    unaff_x20 = unaff_x20 + 8;
    if (unaff_x21 == unaff_x22) {
      if (iStack0000000000000010 < 2) goto LAB_076ee914;
      uVar1 = iStack0000000000000014 - 2;
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__LateUpdate;
    }
    if (unaff_x24 == (long *)0x0) goto LAB_076eeab4;
    iVar2 = (**(code **)(*unaff_x24 + 0x188))(unaff_x24,*(undefined8 *)(*unaff_x24 + 400));
    iVar3 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    lVar6 = FUN_0950b9c0(iVar2 >> 1,iVar3 >> 1,0,unaff_w23,0);
    if (plVar11 == (long *)0x0) goto LAB_076eeab4;
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0))
    goto LAB_076eeabc;
    if (*(uint *)(plVar11 + 3) <= unaff_x22) break;
    *(long *)((long)plVar11 + unaff_x20) = lVar6;
    thunk_FUN_044bb4b4((long *)((long)plVar11 + unaff_x20),lVar6);
    if (unaff_x20 == 0x20) {
      unaff_w25 = 2;
      if (*(char *)(unaff_x19 + 0x31) != '\0') {
        unaff_w25 = 3;
      }
    }
    else {
      unaff_w25 = 4;
    }
    lVar6 = *(long *)(unaff_x19 + 0x48);
    if (lVar6 == 0) goto LAB_076eeab4;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
    unaff_x26 = *(undefined8 *)(lVar6 + unaff_x20);
    unaff_x27 = *(undefined8 *)(unaff_x19 + 0x40);
    in_w8 = *(int *)(*unaff_x29 + 0xe4);
  }
LAB_076eeab8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__LateUpdate:
  do {
    if (*(uint *)(plVar11 + 3) <= uVar1) goto LAB_076eeab8;
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    uVar9 = (ulong)uVar1;
    plVar11 = (long *)plVar11[uVar9 + 4];
    FUN_094e9b40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f600,plVar11,0);
    if (plVar11 == (long *)0x0) break;
    plVar10 = *(long **)(unaff_x19 + 0x50);
    uVar4 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
    uVar5 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
    lVar6 = FUN_0950b9c0(uVar4,uVar5,0,unaff_w23,0);
    if (plVar10 == (long *)0x0) break;
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
LAB_076eeabc:
      uVar12 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar12,0);
    }
    if (*(uint *)(plVar10 + 3) <= uVar1) goto LAB_076eeab8;
    plVar10[uVar9 + 4] = lVar6;
    thunk_FUN_044bb4b4(plVar10 + uVar9 + 4,lVar6);
    lVar6 = *(long *)(unaff_x19 + 0x50);
    uVar4 = 5;
    if (*(char *)(unaff_x19 + 0x30) != '\0') {
      uVar4 = 6;
    }
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_076eeab8;
    uVar12 = *(undefined8 *)(lVar6 + uVar9 * 8 + 0x20);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094d4178(unaff_x24,uVar12,uVar13,uVar4,0);
    lVar6 = *(long *)(unaff_x19 + 0x50);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_076eeab8;
    unaff_x24 = *(long **)(lVar6 + uVar9 * 8 + 0x20);
    if ((int)uVar1 < 1) goto LAB_076ee914;
    plVar11 = *(long **)(unaff_x19 + 0x48);
    uVar1 = uVar1 - 1;
  } while (plVar11 != (long *)0x0);
  goto LAB_076eeab4;
LAB_076ee914:
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_094e9b40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f600,in_stack_00000018,0);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar4 = 7;
    if (*(char *)(unaff_x19 + 0x30) != '\0') {
      uVar4 = 8;
    }
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_044a54b4(7);
    }
    FUN_094d4178(unaff_x24,in_stack_00000008,uVar12,uVar4,0);
    uVar9 = 0;
    lVar6 = 0x20;
    while (lVar7 = *(long *)(unaff_x19 + 0x48), lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_076eeab8;
      uVar12 = *(undefined8 *)(lVar7 + lVar6);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar8 = FUN_09531730(uVar12,0,0);
      if ((uVar8 & 1) != 0) {
        lVar7 = *(long *)(unaff_x19 + 0x48);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_076eeab8;
        FUN_0950a138(*(undefined8 *)(lVar7 + lVar6),0);
      }
      lVar7 = *(long *)(unaff_x19 + 0x50);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_076eeab8;
      uVar12 = *(undefined8 *)(lVar7 + lVar6);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar8 = FUN_09531730(uVar12,0,0);
      if ((uVar8 & 1) != 0) {
        lVar7 = *(long *)(unaff_x19 + 0x50);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_076eeab8;
        FUN_0950a138(*(undefined8 *)(lVar7 + lVar6),0);
      }
      lVar7 = *(long *)(unaff_x19 + 0x48);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_076eeab8;
      *(undefined8 *)(lVar7 + lVar6) = 0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar7 + lVar6),0);
      lVar7 = *(long *)(unaff_x19 + 0x50);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_076eeab8;
      *(undefined8 *)(lVar7 + lVar6) = 0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar7 + lVar6),0);
      lVar6 = lVar6 + 8;
      uVar9 = uVar9 + 1;
      if (lVar6 == 0xa0) {
        FUN_0950a138(in_stack_00000000,0);
        return;
      }
    }
  }
LAB_076eeab4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


