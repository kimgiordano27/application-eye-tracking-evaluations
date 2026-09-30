/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking$$OnDisable
ENTRY_POINT: 077623b4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__OnDisable(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  uint unaff_w21;
  undefined8 *unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  long *unaff_x25;
  long *plVar10;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar11;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000018;
  
  while (param_1 != 0) {
    do {
      if (*(uint *)(unaff_x25 + 3) <= unaff_w23) {
LAB_07762678:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      unaff_x25[unaff_x28 + 4] = unaff_x24;
      thunk_FUN_044bb4b4(unaff_x25 + unaff_x28 + 4,unaff_x24);
      plVar10 = *(long **)(unaff_x20 + 0x18);
      lVar8 = thunk_FUN_0448520c(*unaff_x22);
      FUN_07762244(lVar8,2);
      if (plVar10 == (long *)0x0) goto LAB_0776262c;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_04485110(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
      goto Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__LaunchRosterPanelAsync;
      if (*(uint *)(plVar10 + 3) <= unaff_w21) goto LAB_07762678;
      plVar10[unaff_x29 + 4] = lVar8;
      thunk_FUN_044bb4b4(plVar10 + unaff_x29 + 4,lVar8);
      lVar8 = *(long *)(unaff_x20 + 0x20);
      if ((lVar8 == 0) || (lVar9 = *(long *)(unaff_x20 + 0x18), lVar9 == 0)) goto LAB_0776262c;
      if (*(uint *)(lVar9 + 0x18) <= unaff_w23) goto LAB_07762678;
      iVar1 = *(int *)(lVar8 + 0x18);
      iVar3 = *(int *)(lVar8 + 0x1c);
      uVar11 = *(undefined8 *)(lVar8 + 0x10);
      iVar2 = *(int *)(unaff_x27 + 0x14);
      iVar4 = *(int *)(unaff_x27 + 0x18);
      lVar9 = *(long *)(lVar9 + unaff_x28 * 8 + 0x20);
      lVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c00);
      FUN_07a80df4(lVar8,0);
      *(undefined8 *)(lVar8 + 0x10) = uVar11;
      if (iVar3 - iVar4 < iVar1 - iVar2) {
        *(int *)(lVar8 + 0x18) = iVar2;
        *(int *)(lVar8 + 0x1c) = iVar3;
        if (lVar9 == 0) goto LAB_0776262c;
        *(long *)(lVar9 + 0x20) = lVar8;
        thunk_FUN_044bb4b4((long *)(lVar9 + 0x20),lVar8);
        lVar8 = *(long *)(unaff_x20 + 0x18);
        if (lVar8 == 0) goto LAB_0776262c;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w21) goto LAB_07762678;
        lVar9 = *(long *)(unaff_x20 + 0x20);
        if (lVar9 == 0) goto LAB_0776262c;
        lVar8 = *(long *)(lVar8 + unaff_x29 * 8 + 0x20);
        iVar3 = *(int *)(in_stack_00000018 + 0x14);
        iVar1 = *(int *)(lVar9 + 0x10);
        uVar5 = *(undefined4 *)(lVar9 + 0x14);
        iVar2 = *(int *)(lVar9 + 0x18);
        uVar6 = *(undefined4 *)(lVar9 + 0x1c);
        lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c00);
        FUN_07a80df4(lVar9,0);
        *(int *)(lVar9 + 0x10) = iVar3 + iVar1;
        *(undefined4 *)(lVar9 + 0x14) = uVar5;
        *(int *)(lVar9 + 0x18) = iVar2 - iVar3;
        *(undefined4 *)(lVar9 + 0x1c) = uVar6;
      }
      else {
        *(int *)(lVar8 + 0x18) = iVar1;
        *(int *)(lVar8 + 0x1c) = iVar4;
        if (lVar9 == 0) goto LAB_0776262c;
        *(long *)(lVar9 + 0x20) = lVar8;
        thunk_FUN_044bb4b4((long *)(lVar9 + 0x20),lVar8);
        lVar8 = *(long *)(unaff_x20 + 0x18);
        if (lVar8 == 0) goto LAB_0776262c;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w21) goto LAB_07762678;
        lVar9 = *(long *)(unaff_x20 + 0x20);
        if (lVar9 == 0) goto LAB_0776262c;
        lVar8 = *(long *)(lVar8 + unaff_x29 * 8 + 0x20);
        uVar5 = *(undefined4 *)(lVar9 + 0x10);
        iVar1 = *(int *)(lVar9 + 0x14);
        iVar3 = *(int *)(in_stack_00000018 + 0x18);
        uVar6 = *(undefined4 *)(lVar9 + 0x18);
        iVar2 = *(int *)(lVar9 + 0x1c);
        lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c00);
        FUN_07a80df4(lVar9,0);
        *(undefined4 *)(lVar9 + 0x10) = uVar5;
        *(int *)(lVar9 + 0x14) = iVar3 + iVar1;
        *(undefined4 *)(lVar9 + 0x18) = uVar6;
        *(int *)(lVar9 + 0x1c) = iVar2 - iVar3;
      }
      if (lVar8 == 0) {
LAB_0776262c:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      *(long *)(lVar8 + 0x20) = lVar9;
      thunk_FUN_044bb4b4((long *)(lVar8 + 0x20),lVar9);
      unaff_x22 = (undefined8 *)PTR_DAT_09f32bf8;
      lVar8 = *(long *)(unaff_x20 + 0x18);
      if (lVar8 == 0) goto LAB_0776262c;
      if (*(uint *)(lVar8 + 0x18) <= in_stack_00000000._4_4_) goto LAB_07762678;
      lVar8 = lVar8 + in_stack_00000008 * 8;
      while( true ) {
        unaff_x20 = *(long *)(lVar8 + 0x20);
        if (unaff_x20 == 0) goto LAB_0776262c;
        if ((DAT_0a5232ce & 1) == 0) {
          FUN_04447ba8(unaff_x22);
          FUN_04447ba8(PTR_DAT_09f32c00);
          DAT_0a5232ce = 1;
        }
        uVar7 = FUN_07765ad8(unaff_x20);
        if ((uVar7 & 1) != 0) break;
        lVar8 = *(long *)(unaff_x20 + 0x18);
        if (lVar8 == 0) goto LAB_0776262c;
        if (*(uint *)(lVar8 + 0x18) <= in_stack_00000000._4_4_) goto LAB_07762678;
        lVar8 = *(long *)(lVar8 + in_stack_00000008 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_0776262c;
        lVar8 = FUN_077622bc(lVar8,in_stack_00000018,unaff_w21);
        if (lVar8 != 0) {
          return lVar8;
        }
        lVar8 = *(long *)(unaff_x20 + 0x18);
        if (lVar8 == 0) goto LAB_0776262c;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w21) goto LAB_07762678;
        lVar8 = lVar8 + unaff_x29 * 8;
      }
      if (*(long *)(unaff_x20 + 0x28) != 0) {
        return 0;
      }
      lVar8 = *(long *)(unaff_x20 + 0x20);
      if ((lVar8 == 0) || (in_stack_00000018 == 0)) goto LAB_0776262c;
      if (*(int *)(lVar8 + 0x18) < *(int *)(in_stack_00000018 + 0x14)) {
        return 0;
      }
      if (*(int *)(lVar8 + 0x1c) < *(int *)(in_stack_00000018 + 0x18)) {
        return 0;
      }
      if ((*(int *)(lVar8 + 0x18) == *(int *)(in_stack_00000018 + 0x14)) &&
         (*(int *)(lVar8 + 0x1c) == *(int *)(in_stack_00000018 + 0x18))) {
        *(long *)(unaff_x20 + 0x28) = in_stack_00000018;
        thunk_FUN_044bb4b4((long *)(unaff_x20 + 0x28),in_stack_00000018);
        return unaff_x20;
      }
      unaff_x25 = *(long **)(unaff_x20 + 0x18);
      unaff_x24 = thunk_FUN_0448520c(*unaff_x22);
      FUN_07762244(unaff_x24,2);
      if (unaff_x25 == (long *)0x0) goto LAB_0776262c;
      unaff_x27 = in_stack_00000018;
      unaff_x28 = in_stack_00000008;
      unaff_w23 = in_stack_00000000._4_4_;
    } while (unaff_x24 == 0);
    param_1 = thunk_FUN_04485110(unaff_x24,*(undefined8 *)(*unaff_x25 + 0x40));
  }
Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__LaunchRosterPanelAsync:
  uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar11,0);
}


